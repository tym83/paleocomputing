#!/usr/bin/env python3
"""Delay sweep: area versus achievable critical path.

What it measures: abc's estimate for the COMBINED logic after technology
mapping, with WireLoad = "none", i.e. with NO wire delays at all.
It is an optimistic estimate, suitable for a RELATIVE comparison of configurations,
not as an absolute silicon frequency. Proper static timing analysis requires
OpenSTA on the netlist; the flow does not have it.

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
import re, subprocess, sys, csv, pathlib

ROOT = pathlib.Path(__file__).resolve().parent.parent
LIB  = ROOT / "syn/lib/sky130_fd_sc_hd__tt_025C_1v80.lib"
SRC  = ["rtl/RISC5.v", "rtl/Registers.v", "rtl/Multiplier.v", "rtl/Divider.v",
        "rtl/FPAdder.v", "rtl/FPMultiplier.v", "rtl/FPDivider.v",
        "rtl/LeftShifter.v", "rtl/RightShifter.v"]

def run(period_ps, defines=""):
    src = " ".join(str(ROOT / s) for s in SRC)
    scr = (f"+strash;&get,-n;&dch,-f;&nf,-D,{period_ps};&put;"
           f"buffer;upsize,-D,{period_ps};dnsize,-D,{period_ps};stime,-p")
    script = f"""
read_verilog {defines} {src}
hierarchy -check -top RISC5
synth -top RISC5 -flatten
dfflibmap -liberty {LIB}
abc -liberty {LIB} -constr {ROOT}/syn/core.constr -D {period_ps} -script {scr}
opt_clean
stat -liberty {LIB}
"""
    r = subprocess.run(["yosys", "-s", "/dev/stdin"], input=script,
                       capture_output=True, text=True)
    out = r.stdout + r.stderr
    d = re.findall(r"Delay\s*=\s*([0-9.]+)\s*ps", out)
    a = re.search(r"Chip area for module[^:]*:\s*([0-9.]+)", out)
    return (float(d[-1]) if d else None, float(a.group(1)) if a else None)

def main():
    cfgs = [("base", ""), ("with CHK", "-DWITH_CHK -DCHK_SPLIT")]
    periods = [int(x) for x in (sys.argv[1:] or
               ["5000","3000","2000","1500","1200","1000","800"])]
    rows = []
    for name, d in cfgs:
        print(f"\n=== {name} ===")
        print(f"{'target,ps':>9}{'achieved,ps':>15}{'Fmax,MHz':>11}{'area,um²':>15}")
        print("-" * 50)
        for p in periods:
            delay, area = run(p, d)
            if delay is None: print(f"{p:>9}   no data"); continue
            f = 1e6 / delay
            print(f"{p:>9}{delay:>15.1f}{f:>11.1f}{area:>15.2f}")
            rows.append([name, p, delay, round(f,1), area])
    out = ROOT / "syn/results/fmax_sweep.csv"
    out.parent.mkdir(parents=True, exist_ok=True)
    with out.open("w", newline="") as f:
        w = csv.writer(f); w.writerow(["config","target_ps","delay_ps","fmax_mhz","area_um2"])
        w.writerows(rows)
    print(f"\n→ {out}")

if __name__ == "__main__":
    main()
