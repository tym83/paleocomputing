#!/usr/bin/env python3
"""Area sweep of the RISC5 core over the target period.

Defensible flow (as recommended by the methodology review):
  synth -flatten -> dfflibmap -liberty -> abc -liberty -D <period> -> stat -liberty
Without dfflibmap the flip-flops drop out of the area SILENTLY (verified: 76% loss).
IMPORTANT: without -constr (driver + load) the -D parameter is ignored ENTIRELY. Verified:
the area matches to the last digit at -D 200 and -D 50000. See docs/FINDING-03.
The result is an area-vs-period curve, not a single number.

Cell library: Sky130 (SkyWater 130 nm), Apache-2.0.

Why not Nangate45, which was used for measurements before: its header explicitly forbids
publication: "provided pursuant to a License Agreement containing restrictions
on its use", "does not indicate actual or intended publication of this file".
Because of that, synthesis did not work from a clean clone, and the library may not
be committed to the repository.

Sky130 is a real process node, chips are physically made on it, and it is free.
Absolute numbers differ because of the process change (130 nm versus 45 nm), but our
claims are relative deltas, and they survive the switch: the area cost of the bounds
check instruction is +1.04% versus +0.32…0.85% on Nangate45. Same order of magnitude
and same sign.

The file is fetched by the `make lib` target and is not committed: 12 MB.
"""
import re, subprocess, sys, csv, os, pathlib

ROOT = pathlib.Path(__file__).resolve().parent.parent
LIB  = ROOT / "syn/lib/sky130_fd_sc_hd__tt_025C_1v80.lib"
SRC  = ["rtl/RISC5.v", "rtl/Registers.v", "rtl/Multiplier.v", "rtl/Divider.v",
        "rtl/FPAdder.v", "rtl/FPMultiplier.v", "rtl/FPDivider.v",
        "rtl/LeftShifter.v", "rtl/RightShifter.v"]

def nand2_area():
    t = LIB.read_text(errors="replace")
    m = re.search(r"cell\s*\(\s*NAND2_X1\s*\)\s*\{(.*?)\n\s{0,4}\}", t, re.S)
    return float(re.search(r"area\s*:\s*([0-9.]+)\s*;", m.group(1)).group(1))

def synth(period_ps, top="RISC5", extra_src=None, defines=""):
    src = " ".join(str(ROOT / s) for s in (extra_src or SRC))
    d = defines or ""
    script = f"""
read_verilog {d} {src}
hierarchy -check -top {top}
synth -top {top} -flatten
dfflibmap -liberty {LIB}
abc -liberty {LIB} -constr {ROOT}/syn/core.constr -D {period_ps}
opt_clean
stat -liberty {LIB}
"""
    r = subprocess.run(["yosys", "-s", "/dev/stdin"], input=script,
                       capture_output=True, text=True)
    out = r.stdout + r.stderr
    def g(pat, cast=float, default=None):
        m = re.search(pat, out, re.M)
        return cast(m.group(1)) if m else default
    return {
        "area":  g(r"Chip area for module[^:]*:\s*([0-9.]+)"),
        "seq":   g(r"sequential elements:\s*([0-9.]+)"),
        "seqpct":g(r"sequential elements:[^(]*\(([0-9.]+)%"),
        "cells": g(r"^\s+(\d+) cells", int),
        "dff":   g(r"^\s+(\d+)\s+[0-9.E+]+\s+DFF_X1", int),
        "unknown": len(re.findall(r"Area for cell type (\S+) is unknown", out)),
        "raw": out,
    }

def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    # --chk: measure the configuration with the hardware bounds check.
    # synth() had a defines parameter, but main() never passed it,
    # so `make syn` physically could not measure the delta (found by audit).
    defs = "-DWITH_CHK -DCHK_SPLIT" if "--chk" in sys.argv else ""
    periods = [int(x) for x in (args or
               ["20000","10000","6000","4000","3000","2500","2000"])]
    if defs: print("configuration: with hardware bounds check (CHK_SPLIT)\n")
    n2 = nand2_area()
    print(f"NAND2_X1 = {n2} um²  (divisor for kGE)\n")
    hdr = f"{'period,ps':>10} {'area,um²':>14} {'kGE':>8} {'seq,um²':>12} {'%seq':>6} {'cells':>7} {'DFF':>5}"
    print(hdr); print("-" * len(hdr))
    rows = []
    for ps in periods:
        r = synth(ps, defines=defs)
        if r["area"] is None:
            print(f"{ps:>10}   SYNTHESIS REPORTED NO AREA"); continue
        kge = r["area"] / n2 / 1000
        print(f"{ps:>10} {r['area']:>14.2f} {kge:>8.2f} {r['seq']:>12.2f} "
              f"{r['seqpct']:>6.1f} {r['cells']:>7} {r['dff']:>5}")
        rows.append([ps, r["area"], round(kge,3), r["seq"], r["seqpct"], r["cells"], r["dff"]])
    outp = ROOT / ("syn/results/chk_sweep.csv" if defs else "syn/results/base_sweep.csv")
    outp.parent.mkdir(parents=True, exist_ok=True)
    with outp.open("w", newline="") as f:
        w = csv.writer(f); w.writerow(["period_ps","area_um2","kGE","seq_um2","seq_pct","cells","dff"])
        w.writerows(rows)
    print(f"\n→ {outp}")

if __name__ == "__main__":
    main()
