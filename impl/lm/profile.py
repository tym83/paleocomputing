#!/usr/bin/env python3
"""Главные числа выпуска №2 одной командой: такты на символ на трёх ядрах,
профиль по классам команд, ускорение и потолок FMAC.

  python3 lm/profile.py [N [ЗЕРНО]]      (по умолчанию 32 символа, зерно 1)

Такты — только внутри окна замера (LED(1)…LED(0) вокруг шага модели), по
RTL Вирта в Verilator (tb/norebo_tb.cpp). Текст на всех ядрах обязан совпасть
с эталоном lm/ref.py — иначе чисел нет.
"""
import pathlib, re, subprocess, sys
HERE = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import ref

PROMPT = "alice was "
ENGINES = (("rtl", "исходный FPMultiplier (26 тактов)"),
           ("rtl-fast2", "быстрый, 2 такта (FPMUL_FAST_REG)"),
           ("rtl-fast", "быстрый, 1 такт (FPMUL_FAST)"))


def run(eng, n, seed):
    out = subprocess.run(["bash", str(HERE / "run.sh"), eng, str(n), str(seed), PROMPT],
                         capture_output=True, text=True, check=True).stdout
    text = "".join(l for l in out.splitlines()
                   if l and not l.startswith(("CYCLES", "  ", "    ")))
    w = re.search(r"окно замера: (\d+) окон, (\d+) инструкций, (\d+) тактов", out)
    prof = {m.group(1).strip(): (int(m.group(2)), int(m.group(3)))
            for m in re.finditer(r"^    (\S[^\d]*?)\s+(\d+)\s+(\d+)\s+[\d.]+%", out, re.M)}
    fmac = re.search(r"кандидаты FMAC\): (\d+), (\d+) тактов", out)
    return dict(text=text, windows=int(w.group(1)), insns=int(w.group(2)), cycles=int(w.group(3)),
                prof=prof, fmac=int(fmac.group(1)), raw=out)


def main():
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 32
    seed = int(sys.argv[2]) if len(sys.argv) > 2 else 1
    want = PROMPT + ref.generate(ref.Risc5(), n, seed, PROMPT)
    res = {}
    for eng, _ in ENGINES:
        r = run(eng, n, seed)
        if r["text"] != want and r["text"] != want.rstrip(" "):
            print(f"  ❌ {eng}: текст расходится с эталоном\n    {r['text']!r}\n    {want!r}")
            return 1
        res[eng] = r
    print(f"  текст ({n} символов, зерно {seed}) на всех трёх ядрах = эталон ✅")
    print(f"    {want!r}\n")
    base = res["rtl"]
    print(f"  {'ядро':38s} {'тактов/символ':>14s} {'команд/символ':>14s} {'ускорение':>10s} {'символов/с при 25 МГц':>22s}")
    for eng, name in ENGINES:
        r = res[eng]
        cpc = r["cycles"] / r["windows"]
        print(f"  {name:38s} {cpc:14,.0f} {r['insns'] / r['windows']:14,.0f} "
              f"{base['cycles'] / r['cycles']:9.3f}× {25e6 / cpc:22.2f}")
    print("\n  профиль исходного ядра (доля тактов окна):")
    for k, (cnt, cyc) in sorted(base["prof"].items(), key=lambda kv: -kv[1][1]):
        print(f"    {k:12s} {cnt / base['windows']:12,.0f} команд/символ  {100 * cyc / base['cycles']:6.2f}%")
    fml = base["prof"]["FML"]
    pred = base["cycles"] - fml[0] * 25
    print(f"\n  предсказание по Амдалу для однотактного умножителя: {base['cycles'] / pred:.3f}× "
          f"(измерено {base['cycles'] / res['rtl-fast']['cycles']:.3f}×)")
    # FMAC: слитная инструкция заменяет пару FML…FAD. Экономия на пару — от
    # одного такта (последовательный прогон тех же блоков: 1+25+3 против 26+4,
    # design/REVIEW.md) до всего FAD (4 такта: сложение бесплатно).
    print("\n  потолок FMAC (оценка по измеренному числу пар FML→FAD, не замер):")
    for eng, name in ENGINES:
        r = res[eng]; p = r["fmac"]
        lo, hi = r["cycles"] / (r["cycles"] - p * 1), r["cycles"] / (r["cycles"] - p * 4)
        print(f"    {name:38s} пар/символ {p / r['windows']:8,.0f}   ускорение от FMAC {lo:.3f}×…{hi:.3f}×")
    return 0


if __name__ == "__main__":
    sys.exit(main())
