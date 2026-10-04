#!/usr/bin/env python3
"""The main numbers of episode 2 in one command: cycles per character on three cores,
a profile by instruction class, the speedup and the FMAC ceiling.

  python3 lm/profile.py [N [SEED]]      (default 32 characters, seed 1)

Cycles are counted only inside the measurement window (LED(1)…LED(0) around a model step), on
Wirth's RTL in Verilator (tb/norebo_tb.cpp). The text on all cores must match
the reference lm/ref.py, otherwise there are no numbers.
"""
import pathlib, re, subprocess, sys
HERE = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import ref

PROMPT = "alice was "
ENGINES = (("rtl", "original FPMultiplier (26 cycles)"),
           ("rtl-fast2", "fast, 2 cycles (FPMUL_FAST_REG)"),
           ("rtl-fast", "fast, 1 cycle (FPMUL_FAST)"))


def run(eng, n, seed):
    out = subprocess.run(["bash", str(HERE / "run.sh"), eng, str(n), str(seed), PROMPT],
                         capture_output=True, text=True, check=True).stdout
    text = "".join(l for l in out.splitlines()
                   if l and not l.startswith(("CYCLES", "  ", "    ")))
    w = re.search(r"measurement window: (\d+) windows, (\d+) instructions, (\d+) cycles", out)
    prof = {m.group(1).strip(): (int(m.group(2)), int(m.group(3)))
            for m in re.finditer(r"^    (\S[^\d]*?)\s+(\d+)\s+(\d+)\s+[\d.]+%", out, re.M)}
    fmac = re.search(r"FMAC candidates\): (\d+), (\d+) cycles", out)
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
            print(f"  ❌ {eng}: text differs from the reference\n    {r['text']!r}\n    {want!r}")
            return 1
        res[eng] = r
    print(f"  text ({n} characters, seed {seed}) on all three cores = reference ✅")
    print(f"    {want!r}\n")
    base = res["rtl"]
    print(f"  {'core':38s} {'cycles/char':>14s} {'instr/char':>14s} {'speedup':>10s} {'chars/s at 25 MHz':>22s}")
    for eng, name in ENGINES:
        r = res[eng]
        cpc = r["cycles"] / r["windows"]
        print(f"  {name:38s} {cpc:14,.0f} {r['insns'] / r['windows']:14,.0f} "
              f"{base['cycles'] / r['cycles']:9.3f}× {25e6 / cpc:22.2f}")
    print("\n  profile of the original core (share of window cycles):")
    for k, (cnt, cyc) in sorted(base["prof"].items(), key=lambda kv: -kv[1][1]):
        print(f"    {k:12s} {cnt / base['windows']:12,.0f} instr/char  {100 * cyc / base['cycles']:6.2f}%")
    fml = base["prof"]["FML"]
    pred = base["cycles"] - fml[0] * 25
    print(f"\n  Amdahl prediction for a single-cycle multiplier: {base['cycles'] / pred:.3f}× "
          f"(measured {base['cycles'] / res['rtl-fast']['cycles']:.3f}×)")
    # FMAC: a fused instruction replaces an FML…FAD pair. The saving per pair ranges from
    # one cycle (running the same units back to back: 1+25+3 vs 26+4,
    # design/REVIEW.md) to the whole FAD (4 cycles: the addition is free).
    print("\n  FMAC ceiling (estimate from the measured number of FML→FAD pairs, not a measurement):")
    for eng, name in ENGINES:
        r = res[eng]; p = r["fmac"]
        lo, hi = r["cycles"] / (r["cycles"] - p * 1), r["cycles"] / (r["cycles"] - p * 4)
        print(f"    {name:38s} pairs/char {p / r['windows']:8,.0f}   speedup from FMAC {lo:.3f}×…{hi:.3f}×")
    return 0


if __name__ == "__main__":
    sys.exit(main())
