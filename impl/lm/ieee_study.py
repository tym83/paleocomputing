#!/usr/bin/env python3
"""How far RISC5 arithmetic diverges from IEEE float32 on this model.

The same program (lm/ref.py) in two arithmetics, step by step: logits and the
chosen character. Logits are compared step by step while the texts match:
after the first differing character the contexts differ and there is nothing to compare.

  python3 lm/ieee_study.py [N [SEEDS...]]     (default 64 characters, seeds 1..5)
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
        # steps are comparable while the texts match
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
        print(f"  seed {s}: {'texts match' if k == len(tr) else f'divergence at character {k}'}")
    print(f"\n  steps compared: {steps}; logits {tot_logit}, of which bitwise different: "
          f"{diff_logit} ({100 * diff_logit / max(tot_logit, 1):.1f}%)")
    print(f"  largest logit divergence: {worst_ulp:.0f} ulp, "
          f"relative {worst_rel:.2e} (for logits near zero)")
    absd.sort()
    if absd:
        print(f"  absolute logit divergence: median {absd[len(absd) // 2]:.2e}, largest {worst_abs:.2e} "
              f"(logit magnitudes themselves: median ~3.5, up to ~22)")
    print(f"  seeds where the text diverged: {diff_char} of {len(seeds)}")


if __name__ == "__main__":
    main()
