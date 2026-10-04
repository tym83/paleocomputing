#!/usr/bin/env python3
"""Comparison: output of LM.Mod on an engine against the reference lm/ref.py.

  python3 lm/compare.py ENGINE N SEED... [--ieee]
ENGINE: emu | rtl | rtl-fast (see lm/run.sh). With --ieee, it also computes
where the same algorithm in IEEE float32 departs from RISC5 arithmetic.
Exit code 0 only if all seeds matched byte for byte.
"""
import pathlib, subprocess, sys
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import ref

HERE = pathlib.Path(__file__).resolve().parent
PROMPT = "alice was "


def engine_text(eng, n, seed):
    out = subprocess.run(["bash", str(HERE / "run.sh"), eng, str(n), str(seed), PROMPT],
                         capture_output=True, text=True, check=True).stdout
    keep = [l for l in out.splitlines()
            if l and not l.startswith(("CYCLES", "  core", "  executed", "  measurement", "  profile", "    "))]
    return "".join(keep), out


def first_diff(a, b):
    for i, (x, y) in enumerate(zip(a, b)):
        if x != y:
            return i
    return None if len(a) == len(b) else min(len(a), len(b))


def main():
    a = [x for x in sys.argv[1:] if not x.startswith("--")]
    eng, n, seeds = a[0], int(a[1]), [int(s) for s in a[2:]] or [1]
    R, I = ref.Risc5(), (ref.Ieee() if "--ieee" in sys.argv else None)
    bad = 0
    for s in seeds:
        want = PROMPT + ref.generate(R, n, s, PROMPT)
        got, _ = engine_text(eng, n, s)
        ok = got == want.rstrip(" ") or got == want
        bad += not ok
        line = f"  seed {s:3d}: {eng} vs RISC5 reference — {'match ✅' if ok else 'MISMATCH ❌'}"
        if not ok:
            line += f"\n    reference: {want!r}\n    engine: {got!r}"
        if I is not None:
            ie = PROMPT + ref.generate(I, n, s, PROMPT)
            d = first_diff(want, ie)
            line += ("; IEEE float32 gives the same text" if d is None
                     else f"; IEEE float32 diverges from character {d - len(PROMPT)} of {n}")
        print(line, flush=True)
    print(f"  {len(seeds) - bad} of {len(seeds)} seeds matched byte for byte")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
