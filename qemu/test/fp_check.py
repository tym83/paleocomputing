#!/usr/bin/env python3
"""Cross-check of QEMU floating point against the reference, end to end, from sources to verdict.

This check used to be done once by hand (finding 50), and there was nothing to
repeat it with: neither the reference table generator nor the ROM image was in
the repository. Any edit to fp.c could silently break the arithmetic.

Steps:
  1. fp_ref.c + ext/refemu/risc-fp.c  ->  reference table;
  2. fp.s through our assembler, operands in the same ROM at word 64;
  3. qemu-system-risc5 headless, memory snapshot from address 0x10000 via QMP;
     that the program reached the end is visible from the mark after the results;
  4. fp_diff.py;
  5. negative control: the same check on corrupted data must fail.

  fp_check.py [<QEMU tree with a build>]

Operands come only from VALS in fp_diff.py: both the table and the ROM are built from it.
"""
import os, pathlib, struct, subprocess, sys

HERE = pathlib.Path(__file__).resolve().parent
ROOT = HERE.parents[1]
IMPL = ROOT / "impl"
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(IMPL / "tools"))
from fp_diff import VALS, main as fp_diff    # noqa: E402
import asm                                   # noqa: E402

QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work").resolve()
WORK = IMPL / "build/qfp"
DATA_WORD = 64                 # fp.s reads operands from FFE100
ROM_WORDS = 512                # the hardware ROM is 512 words (PROM.v)
OUT_ADDR = 0x10000
N = len(VALS)
OUT_WORDS = N * N * 4 + N * 2  # four operations per pair plus two conversions
DONE_MARK = 0x600D             # fp.s stores it right after the results


def reference():
    """Reference table: fp_ref.c on top of risc-fp.c, operands from VALS."""
    exe = WORK / "fp_ref"
    cc = os.environ.get("CC", "cc")
    subprocess.run([cc, "-O2", "-std=c99", "-I", str(IMPL / "ext/refemu"),
                    "-o", str(exe), str(HERE / "fp_ref.c"),
                    str(IMPL / "ext/refemu/risc-fp.c")], check=True)
    out = subprocess.run([str(exe)] + [f"0x{v:08X}" for v in VALS],
                         check=True, capture_output=True, text=True).stdout
    path = WORK / "fp_expected.txt"
    path.write_text(out)
    return path, len(out.splitlines())


def rom():
    """ROM image: the program, padding up to word 64, then the operands."""
    words, _, _ = asm.assemble((HERE / "fp.s").read_text())
    if len(words) > DATA_WORD:
        raise SystemExit(f"  ❌ the program ({len(words)} words) overlaps the data "
                         f"at word {DATA_WORD}")
    image = words + [0] * (DATA_WORD - len(words)) + list(VALS)
    assert len(image) <= ROM_WORDS
    path = WORK / "fp.rom"
    path.write_bytes(struct.pack(f"<{len(image)}I", *image))
    return path


def run_qemu(rom_path):
    """Headless run, memory snapshot via QMP. Returns the path to the snapshot."""
    out = WORK / "fp.out"
    out.unlink(missing_ok=True)
    # ⚠ QMP is the only monitor: the build uses --without-default-features and
    # has no human monitor (HMP, `info registers`). So the end of the program is
    # detected not by PC but by the mark fp.s stores after the results.
    #
    # The program finishes in microseconds; two seconds is a huge margin, and
    # whether it really reached the end is checked by the mark, not the time.
    size = (OUT_WORDS + 1) * 4
    cmds = ['{"execute":"qmp_capabilities"}',
            '{"execute":"pmemsave","arguments":{"val":%d,"size":%d,'
            '"filename":"/w/fp.out"}}' % (OUT_ADDR, size),
            '{"execute":"quit"}']
    qmp = "sleep 1; echo '%s'; sleep 2; echo '%s'; sleep 1; echo '%s'" % tuple(cmds)
    # ⚠ The QEMU tree is mounted read-only: the check leaves nothing in it and
    # can run against someone else's already built copy.
    cmd = (f"({qmp}) | timeout 60 /src/build/qemu-system-risc5 -M oberon "
           f"-bios /w/{rom_path.name} -display none -serial none "
           f"-qmp stdio 2>&1")
    res = subprocess.run(["docker", "run", "--rm", "-v", f"{QEMU}:/src:ro",
                          "-v", f"{WORK}:/w", "qemu-build:risc5", cmd],
                         capture_output=True, text=True)
    if not out.exists() or out.stat().st_size != size:
        print(res.stdout[-2000:], res.stderr[-2000:], sep="\n")
        raise SystemExit("  ❌ QEMU did not return the memory snapshot")
    words = list(struct.unpack(f"<{OUT_WORDS + 1}I", out.read_bytes()))
    if words[-1] != DONE_MARK:
        raise SystemExit(f"  ❌ the program did not reach the end: after the results "
                         f"{words[-1]:08X}, expected the mark {DONE_MARK:08X}")
    # The snapshot is written by the container, as root in CI, so the results
    # go to a separate file instead of overwriting someone else's.
    res_path = WORK / "fp.res"
    res_path.write_bytes(struct.pack(f"<{OUT_WORDS}I", *words[:-1]))
    return res_path


def negative(out_path, exp_path):
    """The check must be able to fail: corrupt one value on each side."""
    raw = bytearray(out_path.read_bytes())
    raw[0] ^= 1                                  # low bit of the first result
    bad_out = WORK / "fp.res.bad"
    bad_out.write_bytes(raw)

    lines = exp_path.read_text().splitlines()
    x, y, op, r = lines[-1].split()              # the last conversion
    lines[-1] = f"{x} {y} {op} {int(r, 16) ^ 0x00400000:08X}"
    bad_exp = WORK / "fp_expected.bad.txt"
    bad_exp.write_text("\n".join(lines) + "\n")

    ok = True
    for label, o, e in (("machine output corrupted", bad_out, exp_path),
                        ("reference corrupted", out_path, bad_exp)):
        print(f"  — negative control: {label}")
        if fp_diff(o, e) != 1:
            print(f"  ❌ {label}, and the check did not notice")
            ok = False
    return ok


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    if not (QEMU / "build/qemu-system-risc5").exists():
        raise SystemExit(f"  ❌ no {QEMU}/build/qemu-system-risc5; run make build first")

    exp_path, n_exp = reference()
    if n_exp != OUT_WORDS:
        raise SystemExit(f"  ❌ the reference produced {n_exp} lines, expected {OUT_WORDS}")
    print(f"  reference: {n_exp} cases from risc-fp.c")

    out_path = run_qemu(rom())

    if fp_diff(out_path, exp_path) != 0:
        return 1
    if not negative(out_path, exp_path):
        return 1
    print("  ✅ negative control: corruption on both sides caught")
    return 0


if __name__ == "__main__":
    sys.exit(main())
