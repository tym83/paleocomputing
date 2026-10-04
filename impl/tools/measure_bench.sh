#!/bin/bash
# Compute workload: the cost of bounds checks on code with dense array indexing.
# These numbers used to be taken by hand and were not reproducible in the repository (found by the audit).
#
# ⚠ A limitation to keep in mind: bench/ArrBench.Mod is written so that
# ALL its arrays fall under the hardware check. This is an upper bound on the gain,
# not the typical case. See docs/FINDING-19-audit-corrections.md.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
echo "workload: bench/ArrBench.Mod (sorting + matrix multiplication)"
printf "%-4s %-52s %s\n" "cfg" "code" "cycles"
for cfg in A B E; do
  d="$P/build/bench$cfg"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  cp "$P/bench/ArrBench.Mod" .
  NOREBO_PATH="$PWD:$P/build/s2$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile ArrBench.Mod/s > compile.log 2>&1
  W=$(python3 "$P/tools/count_traps.py" ArrBench.rsc | tr -s ' ')
  NOREBO_CYCLES=1 NOREBO_PATH="$PWD:$P/build/s2$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ArrBench.Run > run.log 2>&1 || true
  R=$(grep -oE "CYCLES [0-9]+ INSNS [0-9]+" run.log || echo "no data")
  printf "%-4s %-52s %s\n" "$cfg" "$W" "$R"
done
python3 - "$P/build" <<'PY'
import re, sys, pathlib
b = pathlib.Path(sys.argv[1])
def cyc(c):
    t = (b / f"bench{c}" / "run.log").read_text(errors="replace")
    m = re.search(r"CYCLES (\d+) INSNS (\d+)", t)
    return (int(m.group(1)), int(m.group(2))) if m else (None, None)
A, B_, E = cyc("A"), cyc("B"), cyc("E")
if not all(x[0] for x in (A, B_, E)):
    print("\nno data: see build/bench*/run.log"); sys.exit(1)
print(f"\n  no checks      {A[0]:>12,} cycles")
print(f"  software       {B_[0]:>12,}  +{100*(B_[0]-A[0])/A[0]:.2f}%")
print(f"  hardware       {E[0]:>12,}  +{100*(E[0]-A[0])/A[0]:.2f}%")
print(f"\n  the hardware removes {100*(B_[0]-E[0])/(B_[0]-A[0]):.1f}% of the cost of the checks")
PY
