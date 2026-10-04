#!/usr/bin/env python3
"""Timing check from nextpnr-ecp5 reports (--report), and a summary.

Check mode:
    check_timing.py --target 25 --variant soc-base build/soc-base/seed*/report.json
  prints the fmax of each seed, the resources and the critical path, writes
  build/<variant>/timing.json and exits with code 1 if even one seed
  does not hold the target frequency. This is the CI check: timing is a pass
  condition, not decoration.

Summary mode:
    check_timing.py --summary --target 25 build
  collects build/*/timing.json into a Markdown table (build/summary.md).
"""
import argparse
import glob
import json
import os
import re
import statistics
import sys

# yosys/nextpnr cells that count as logic levels of a path.
CELL_SUFFIX = re.compile(r"_(LUT4|TRELLIS|CCU2C|PFUMX|L6MUX21|DP16KD|DPR16X4)\b.*$")


def short(name):
    """Net name without the suffix that yosys appends during mapping."""
    return CELL_SUFFIX.sub("", name)


def clock_fmax(report):
    """Worst achieved frequency across all clock domains in the report."""
    vals = [v["achieved"] for v in report["fmax"].values()]
    return min(vals) if vals else 0.0


def worst_clock_path(report):
    """Critical path within a clock domain (not <async> I/O)."""
    paths = [p for p in report["critical_paths"]
             if "<async>" not in (p["from"], p["to"])]
    best = None
    for p in paths:
        total = sum(s["delay"] for s in p["path"])
        if best is None or total > best[0]:
            best = (total, p)
    if best is None:
        return None
    total, p = best
    steps = p["path"]
    logic = sum(s["delay"] for s in steps if s["type"] in ("logic", "clk-to-q", "setup"))
    route = sum(s["delay"] for s in steps if s["type"] == "routing")
    nets = [short(s["net"]) for s in steps if s["type"] == "routing"]
    start = steps[0]["to"]["cell"]
    end = steps[-1]["to"]
    return {
        "edges": f'{p["from"].split()[0]} -> {p["to"].split()[0]}',
        "total_ns": round(total, 2),
        "logic_ns": round(logic, 2),
        "routing_ns": round(route, 2),
        "levels": sum(1 for s in steps if s["type"] == "logic"),
        "start": short(start),
        "end": f'{short(end["cell"])}.{end["port"]}',
        "nets": nets,
    }


def yosys_stat(path):
    cells = {}
    if os.path.exists(path):
        for line in open(path, encoding="utf-8"):
            m = re.match(r"\s+(\S+)\s+(\d+)\s*$", line)
            if m and not m.group(1).startswith("$"):
                cells[m.group(1)] = int(m.group(2))
    return {k: cells.get(k, 0) for k in
            ("LUT4", "CCU2C", "PFUMX", "L6MUX21", "TRELLIS_FF",
             "TRELLIS_DPR16X4", "DP16KD", "MULT18X18D")}


def check(args):
    runs = []
    for path in args.reports:
        rep = json.load(open(path, encoding="utf-8"))
        seed = re.search(r"seed(\d+)", path).group(1)
        runs.append({
            "seed": int(seed),
            "fmax": round(clock_fmax(rep), 2),
            "util": {k: v["used"] for k, v in rep["utilization"].items() if v["used"]},
            "path": worst_clock_path(rep),
        })
    runs.sort(key=lambda r: r["seed"])
    vdir = os.path.dirname(os.path.dirname(args.reports[0]))
    fmaxes = [r["fmax"] for r in runs]
    out = {
        "variant": args.variant,
        "target_mhz": args.target,
        "fmax": fmaxes,
        "fmax_min": min(fmaxes),
        "fmax_median": statistics.median(fmaxes),
        "fmax_max": max(fmaxes),
        "yosys": yosys_stat(os.path.join(vdir, "stat.txt")),
        "runs": runs,
    }
    with open(os.path.join(vdir, "timing.json"), "w", encoding="utf-8") as f:
        json.dump(out, f, indent=1, ensure_ascii=False)

    print(f"== {args.variant}: target {args.target} MHz")
    for r in runs:
        mark = "OK  " if r["fmax"] >= args.target else "FAIL"
        print(f"  {mark} seed {r['seed']}: fmax {r['fmax']:.2f} MHz")
    print(f"  nextpnr resources: {runs[0]['util']}")
    print(f"  yosys cells: {out['yosys']}")
    p = runs[0]["path"]
    if p:
        print(f"  critical path (seed {runs[0]['seed']}, {p['edges']}): "
              f"{p['total_ns']} ns = logic {p['logic_ns']} + routing {p['routing_ns']}, "
              f"{p['levels']} levels")
        print(f"    from {p['start']} to {p['end']}")
        print("    nets: " + " -> ".join(p["nets"]))
    failed = [r for r in runs if r["fmax"] < args.target]
    if failed:
        print(f"FAIL: {len(failed)} of {len(runs)} seeds below {args.target} MHz",
              file=sys.stderr)
        return 1
    return 0


def summary(args):
    rows = []
    for path in sorted(glob.glob(os.path.join(args.build, "*", "timing.json"))):
        rows.append(json.load(open(path, encoding="utf-8")))
    lines = [
        f"| variant | fmax min / median / max, MHz | margin over {args.target} MHz | "
        "LUT4 | CCU2C | FF | LUTRAM (DPR16X4) | BRAM (DP16KD) | DSP | "
        "critical path (seed 1) |",
        "|---|---|---|---|---|---|---|---|---|---|",
    ]
    for r in rows:
        y = r["yosys"]
        p = r["runs"][0]["path"] or {}
        lines.append(
            f"| {r['variant']} | {r['fmax_min']:.2f} / {r['fmax_median']:.2f} / "
            f"{r['fmax_max']:.2f} | {r['fmax_min'] / r['target_mhz']:.2f}x | "
            f"{y['LUT4']} | {y['CCU2C']} | {y['TRELLIS_FF']} | {y['TRELLIS_DPR16X4']} | "
            f"{y['DP16KD']} | {y['MULT18X18D']} | "
            f"{p.get('edges', '')}, {p.get('total_ns', '')} ns "
            f"(routing {p.get('routing_ns', '')}): {p.get('start', '')} -> {p.get('end', '')} |")
    text = "\n".join(lines) + "\n"
    with open(os.path.join(args.build, "summary.md"), "w", encoding="utf-8") as f:
        f.write(text)
    print(text)
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--target", type=float, required=True)
    ap.add_argument("--variant")
    ap.add_argument("--summary", action="store_true")
    ap.add_argument("reports", nargs="*")
    args = ap.parse_args()
    if args.summary:
        args.build = args.reports[0] if args.reports else "build"
        return summary(args)
    if not args.reports:
        ap.error("no reports")
    return check(args)


if __name__ == "__main__":
    sys.exit(main())
