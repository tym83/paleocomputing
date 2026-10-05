#!/usr/bin/env python3
"""Put Wirth's Net module on an Oberon disk image.

The 2016 system image carries SCC (the radio driver) compiled, but Net only as
source. Net compiles cleanly against the image's own symbol files, so Norebo
compiles it with those files next to it, and the object and symbol files go
onto the image. The system then runs Net.StartServer, Net.SendMsg,
Net.SendFiles and Net.ReceiveFiles over the radio.

Two directories, because Norebo's own modules must not see the image's symbol
files: the compile needs them, the installer (VDiskUtil) must not have them.

    python3 tools/install_net.py <disk image> [--norebo DIR] [--norebo-bin FILE]
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

IMPORTS = ("Viewers", "TextFrames", "MenuViewers", "Display", "Fonts", "Texts",
           "Oberon", "Input", "Files", "Kernel", "FileDir", "Modules", "SCC")


def _norebo(binary: pathlib.Path, norebo: pathlib.Path, cwd: pathlib.Path, *args: str) -> str:
    env = dict(os.environ, NOREBO_PATH=f"{cwd}:{norebo}/Norebo:{norebo}/Oberon:{norebo}/build2")
    return subprocess.run([str(binary), *args], cwd=cwd, env=env,
                          capture_output=True, text=True).stdout


def install_net(disk: pathlib.Path, net_mod: pathlib.Path, norebo: pathlib.Path,
                binary: pathlib.Path) -> None:
    with tempfile.TemporaryDirectory() as t:
        comp, inst = pathlib.Path(t, "compile"), pathlib.Path(t, "install")
        comp.mkdir()
        inst.mkdir()
        img = Image(disk)
        files = img.files()
        for m in IMPORTS:
            (comp / f"{m}.smb").write_bytes(img.read(files[f"{m}.smb"]))
        shutil.copy(net_mod, comp / "Net.Mod")
        out = _norebo(binary, norebo, comp, "ORP.Compile", "Net.Mod/s")
        if "new symbol file" not in out:
            raise SystemExit("Net.Mod did not compile:\n" + out)
        for f in ("Net.rsc", "Net.smb"):
            shutil.copy(comp / f, inst / f)
        for m in ("VDisk", "VFileDir", "VFiles", "VDiskUtil"):
            shutil.copy(norebo / "Norebo" / f"{m}.Mod", inst)
        _norebo(binary, norebo, inst, "ORP.Compile", "VDisk.Mod/s", "VFileDir.Mod/s",
                "VFiles.Mod/s", "VDiskUtil.Mod/s")
        shutil.copy(disk, inst / "disk.dsk")
        _norebo(binary, norebo, inst, "VDiskUtil.InstallFiles", "disk.dsk",
                "Net.rsc", "=>", "Net.rsc", "Net.smb", "=>", "Net.smb")
        if "Net.rsc" not in Image(inst / "disk.dsk").files():
            raise SystemExit("Net.rsc did not reach the disk image")
        shutil.copy(inst / "disk.dsk", disk)


def main() -> None:
    impl = HERE.parent
    ap = argparse.ArgumentParser()
    ap.add_argument("disk", type=pathlib.Path)
    ap.add_argument("--norebo", type=pathlib.Path, default=impl / "ext" / "norebo")
    ap.add_argument("--norebo-bin", type=pathlib.Path)
    ap.add_argument("--net-mod", type=pathlib.Path, default=impl / "ext" / "po2013-src" / "Net.Mod")
    a = ap.parse_args()
    binary = a.norebo_bin or a.norebo / "norebo.bin"
    install_net(a.disk.resolve(), a.net_mod.resolve(), a.norebo.resolve(), binary.resolve())
    print(f"  Net installed on {a.disk}")


if __name__ == "__main__":
    main()
