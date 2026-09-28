#!/usr/bin/env python3
"""Насколько арифметика RISC5 расходится с IEEE float32 на этой модели.

Одна и та же программа (lm/ref.py) в двух арифметиках, по шагам: логиты,
выбранный символ. Логиты сравниваются шаг за шагом, пока тексты совпадают:
после первого же другого символа контексты разные и сравнивать нечего.

  python3 lm/ieee_study.py [N [ЗЁРНА...]]     (по умолчанию 64 символа, зёрна 1..5)
"""
import math, pathlib, struct, sys
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import ref

f32 = lambda b: struct.unpack("<f", struct.pack("<I", b))[0]


def main():
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 64
    seeds = [int(x) for x in sys.argv[2:]] or [1, 2, 3, 4, 5]
    R, I = ref.Risc5(), ref.Ieee()
    worst_ulp = worst_rel = worst_abs = 0.0; absd = []; diff_logit = tot_logit = 0; diff_char = 0; steps = 0
    for s in seeds:
        sr, si = [], []
        tr = ref.generate(R, n, s, "alice was ", sr)
        ti = ref.generate(I, n, s, "alice was ", si)
        # шаги сравнимы, пока тексты совпадают
        k = next((i for i, (a, b) in enumerate(zip(tr, ti)) if a != b), len(tr))
        diff_char += k < len(tr)
        for (lr, *_), (li, *_) in zip(sr[:k], si[:k]):
            for a, b in zip(lr, li):
                x, y = f32(a), float(b)
                tot_logit += 1
                if struct.pack("<f", y) != struct.pack("<I", a):
                    diff_logit += 1
                    ulp = abs(struct.unpack("<i", struct.pack("<f", y))[0] - (a if a < 2**31 else a - 2**32))
                    worst_ulp = max(worst_ulp, ulp)
                    worst_rel = max(worst_rel, abs(x - y) / max(abs(x), 1e-30))
                    worst_abs = max(worst_abs, abs(x - y)); absd.append(abs(x - y))
        steps += k
        print(f"  зерно {s}: {'тексты совпали' if k == len(tr) else f'расхождение на символе {k}'}")
    print(f"\n  шагов сравнено: {steps}; логитов {tot_logit}, из них побитово отличаются "
          f"{diff_logit} ({100 * diff_logit / max(tot_logit, 1):.1f}%)")
    print(f"  наибольшее расхождение логита: {worst_ulp:.0f} ед. младшего разряда, "
          f"относительное {worst_rel:.2e} (у логитов около нуля)")
    absd.sort()
    if absd:
        print(f"  абсолютное расхождение логита: медиана {absd[len(absd) // 2]:.2e}, наибольшее {worst_abs:.2e} "
              f"(сами логиты — единицы и десятки)")
    print(f"  зёрен, где текст разошёлся: {diff_char} из {len(seeds)}")


if __name__ == "__main__":
    main()
