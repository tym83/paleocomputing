#!/usr/bin/env python3
"""Integer arithmetic of the running system in QEMU, against Python's own.

Arith.Mod is compiled onto a system disk, the system runs Arith.Run, and the
file Arith.Out is read back from the disk. Every line is checked here with
Python integers: the 32-bit product, then DIV and MOD rounding down, as Wirth's
divider does. The cases put a multiplication right before a division: the
remainder must replace the high part of the product in H.

QEMU used to declare the division helpers as not touching TCG globals while
they write H, and MOD returned the stale high part (finding 87). The register
level comparison (compare.py) did not show it: in its short block the code
generator happened to reload H from memory.

  python3 qemu/test/arith_check.py [QEMU tree]   (default ../.qemu-work)
"""
import pathlib, shutil, sys, tempfile, time

HERE = pathlib.Path(__file__).resolve().parent
ROOT = HERE.parents[1]
IMPL = ROOT / "impl"
sys.path.insert(0, str(IMPL / "tools"))
sys.path.insert(0, str(HERE))
from install_modules import install_modules     # noqa: E402
from oberonfs import Image                       # noqa: E402
from qmp_machine import QMP, docker              # noqa: E402

QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work").resolve()
NOREBO = IMPL / "ext" / "norebo"


def s32(x):
    x &= 0xFFFFFFFF
    return x - (1 << 32) if x >> 31 else x


def main():
    work = pathlib.Path(tempfile.mkdtemp(prefix="arith-", dir=str(IMPL / "build")))
    disk = work / "a.dsk"
    shutil.copy(IMPL / "ext" / "disk" / "Oberon-2016-08-02.dsk", disk)
    install_modules(disk, [HERE / "Arith.Mod"], NOREBO, NOREBO / "norebo.bin")
    with open(disk, "r+b") as f:
        f.truncate(8 * 1024 * 1024)
    words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
    (work / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
    name = f"oberon-arith-{work.name}"
    docker("run", "-d", "--name", name, "-p", "127.0.0.1::4444", "-v", f"{QEMU}:/src:ro",
           "-v", f"{work}:/w", "-w", "/w", "qemu-build:risc5",
           "/src/build/qemu-system-risc5 -machine oberon -bios prom.bin "
           "-drive if=none,id=sd0,file=a.dsk,format=raw -display none -qmp tcp:0.0.0.0:4444,server,wait=off")
    try:
        time.sleep(2)
        q = QMP(int(docker("port", name, "4444").strip().rsplit(":", 1)[1]))
        time.sleep(25)
        q.click(900, 557)
        q.type("\nArith.Run")
        q.click(680, 569, "middle")
        time.sleep(3)
        q.cmd("quit")
        time.sleep(2)
    finally:
        docker("rm", "-f", name, check=False)
    files = Image(disk).files()
    if "Arith.Out" not in files:
        print("  ❌ Arith.Out is not on the disk: Arith.Run did not run")
        return 1
    lines = Image(disk).read(files["Arith.Out"]).decode().split("\n")
    bad = 0
    for line in lines[:-2]:
        a, b, c, p, q_, m = map(int, line.split())
        exp = s32(a * b)
        want = (exp, exp // c, exp % c)
        if (p, q_, m) != want:
            print(f"  ❌ {a}*{b} = {p}, DIV {c} = {q_}, MOD {c} = {m}; expected {want}")
            bad += 1
    h = 1
    for i in range(100):
        h = (s32(h * 31) + i) % 1000000007
    chain = int(lines[-2])
    if chain != h:
        print(f"  ❌ hash chain {chain}, expected {h}")
        bad += 1
    if bad:
        print(f"  files kept in {work}")
        return 1
    shutil.rmtree(work, ignore_errors=True)
    print(f"  ✅ {len(lines) - 2} multiply-divide cases and a 100-step hash chain match Python")
    return 0


if __name__ == "__main__":
    sys.exit(main())
