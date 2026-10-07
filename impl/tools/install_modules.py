#!/usr/bin/env python3
"""Put modules compiled against an Oberon disk image onto that image.

The 2016 system image carries SCC (the radio driver) compiled, but Net only as
source, and Kube is ours. They compile cleanly against the image's own symbol
files, so Norebo compiles them with those files next to it, in order, and the
object and symbol files go onto the image. The system then runs Net
(StartServer, SendMsg, SendFiles) and Kube with KubeNet over the radio without
compiling anything itself.

Two directories, because Norebo's own modules must not see the image's symbol
files: the compile needs them, the installer (VDiskUtil) must not have them.

    python3 tools/install_modules.py <disk image> [Module.Mod ...]
        (default: Net from the Project Oberon 2013 sources, then kube/Kube.Mod
        and kube/KubeNet.Mod)
"""
from __future__ import annotations

import argparse
import os
import pathlib
import shutil
import subprocess
import sys
import tempfile

HERE = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from oberonfs import Image                       # noqa: E402

DEFAULT = [HERE.parent / "ext" / "po2013-src" / "Net.Mod",
           HERE.parent / "kube" / "Kube.Mod", HERE.parent / "kube" / "Pods.Mod",
           HERE.parent / "kube" / "KubeNet.Mod",
           HERE.parent / "kube" / "Ticker.Mod", HERE.parent / "kube" / "Ticker2.Mod"]
IMPORTS = ("Viewers", "TextFrames", "MenuViewers", "Display", "Fonts", "Texts",
           "Oberon", "Input", "Files", "Kernel", "FileDir", "Modules", "SCC")


def _norebo(binary: pathlib.Path, norebo: pathlib.Path, cwd: pathlib.Path, *args: str) -> str:
    env = dict(os.environ, NOREBO_PATH=f"{cwd}:{norebo}/Norebo:{norebo}/Oberon:{norebo}/build2")
    return subprocess.run([str(binary), *args], cwd=cwd, env=env,
                          capture_output=True, text=True).stdout


def install_modules(disk: pathlib.Path, sources: list[pathlib.Path], norebo: pathlib.Path,
                    binary: pathlib.Path) -> None:
    with tempfile.TemporaryDirectory() as t:
        comp, inst = pathlib.Path(t, "compile"), pathlib.Path(t, "install")
        comp.mkdir()
        inst.mkdir()
        img = Image(disk)
        files = img.files()
        for m in IMPORTS:
            (comp / f"{m}.smb").write_bytes(img.read(files[f"{m}.smb"]))
        names = []
        for src in sources:
            shutil.copy(src, comp / src.name)
            out = _norebo(binary, norebo, comp, "ORP.Compile", f"{src.name}/s")
            if "compiling" not in out or "FAILED" in out:
                raise SystemExit(f"{src.name} did not compile:\n" + out)
            names.append(src.name[:-len(".Mod")])
        args = []
        for n in names:
            for ext in ("rsc", "smb"):
                shutil.copy(comp / f"{n}.{ext}", inst / f"{n}.{ext}")
                args += [f"{n}.{ext}", "=>", f"{n}.{ext}"]
        for m in ("VDisk", "VFileDir", "VFiles", "VDiskUtil"):
            shutil.copy(norebo / "Norebo" / f"{m}.Mod", inst)
        _norebo(binary, norebo, inst, "ORP.Compile", "VDisk.Mod/s", "VFileDir.Mod/s",
                "VFiles.Mod/s", "VDiskUtil.Mod/s")
        shutil.copy(disk, inst / "disk.dsk")
        _norebo(binary, norebo, inst, "VDiskUtil.InstallFiles", "disk.dsk", *args)
        have = Image(inst / "disk.dsk").files()
        missing = [f"{n}.rsc" for n in names if f"{n}.rsc" not in have]
        if missing:
            raise SystemExit(f"not on the disk image: {', '.join(missing)}")
        shutil.copy(inst / "disk.dsk", disk)


def main() -> None:
    impl = HERE.parent
    ap = argparse.ArgumentParser()
    ap.add_argument("disk", type=pathlib.Path)
    ap.add_argument("modules", nargs="*", type=pathlib.Path)
    ap.add_argument("--norebo", type=pathlib.Path, default=impl / "ext" / "norebo")
    ap.add_argument("--norebo-bin", type=pathlib.Path)
    a = ap.parse_args()
    sources = a.modules or DEFAULT
    binary = a.norebo_bin or a.norebo / "norebo.bin"
    install_modules(a.disk.resolve(), [m.resolve() for m in sources], a.norebo.resolve(),
                    binary.resolve())
    print(f"  {', '.join(m.stem for m in sources)} installed on {a.disk}")


if __name__ == "__main__":
    main()
