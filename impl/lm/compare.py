#!/usr/bin/env python3
"""Сверка: вывод LM.Mod на движке против эталона lm/ref.py.

  python3 lm/compare.py ДВИЖОК N ЗЕРНО... [--ieee]
ДВИЖОК: emu | rtl | rtl-fast (см. lm/run.sh). С --ieee дополнительно
считается, где тот же алгоритм в IEEE float32 уходит от арифметики RISC5.
Код возврата 0 — только если все зёрна совпали побайтово.
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
            if l and not l.startswith(("CYCLES", "  ядро", "  выполнено", "  окно", "  профиль", "    "))]
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
        line = f"  зерно {s:3d}: {eng} против эталона RISC5 — {'совпало ✅' if ok else 'РАСХОЖДЕНИЕ ❌'}"
        if not ok:
            line += f"\n    эталон: {want!r}\n    движок: {got!r}"
        if I is not None:
            ie = PROMPT + ref.generate(I, n, s, PROMPT)
            d = first_diff(want, ie)
            line += ("; IEEE-float32 даёт тот же текст" if d is None
                     else f"; IEEE-float32 расходится с символа {d - len(PROMPT)} из {n}")
        print(line, flush=True)
    print(f"  {len(seeds) - bad} из {len(seeds)} зёрен совпали побайтово")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
