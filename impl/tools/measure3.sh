#!/bin/bash
# A full measurement over THREE array bounds check configurations:
#   A — no checks at all (check := FALSE)
#   B — software checks (stock: CMP + BLR, 2 words / 2 cycles)
#   C — hardware checks (CHK, 1 word / 1 cycle)
#
# Two stages are mandatory. A direct comparison of compilers A/B/C measures not the cost of
# the checks but how much work the compiler spends GENERATING them.
# So: stage 2 rebuilds the compiler with each compiler (then the checks
# either end up or do not end up inside the binary code), and only then the
# resulting compilers run one and the same workload.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
COMP="ORS.Mod ORB.Mod ORG.Mod ORP.Mod"
LOAD="${*:-Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod}"

for cfg in A B E; do
  d="$P/build/s2$cfg"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  [ -f "$P/build/cfg$cfg/ORG.Mod" ] && cp "$P/build/cfg$cfg/ORG.Mod" .
  args=""; for m in $COMP; do args="$args $m/s"; done
  NOREBO_PATH="$d:$P/build/cfg$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > "$d/build.log" 2>&1
done

echo "workload: $LOAD"
for cfg in A B E; do
  d="$P/build/r2$cfg"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  args=""; for m in $LOAD; do args="$args $m/s"; done
  NOREBO_CYCLES=1 NOREBO_PATH="$P/build/s2$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > "$d/run.log" 2>&1
done

python3 - "$P/build" <<'PY'
import re, sys, pathlib
b = pathlib.Path(sys.argv[1])
def get(c):
    t = (b/f"r2{c}"/"run.log").read_text(errors="replace")
    m = re.search(r"CYCLES (\d+) INSNS (\d+)", t)
    code = sum(int(x) for x in re.findall(r"^\s+compiling \w+\s+(\d+)", t, re.M))
    return (int(m.group(1)), int(m.group(2)), code) if m else (None,)*3
A, B_, C = get("A"), get("B"), get("E")
names = {"A": "no checks", "B": "software", "E": "hardware (CHK)"}
print(f"\n{'configuration':<20}{'cycles':>14}{'instructions':>14}{'code, words':>12}")
print("-"*60)
for k, v in (("A",A), ("B",B_), ("E",C)):
    print(f"{names[k]:<20}{v[0]:>14,}{v[1]:>14,}{v[2]:>12,}")
print("-"*60)
print(f"\nCOST OF CHECKS relative to the configuration without them:")
for k, v in (("B",B_), ("E",C)):
    print(f"  {names[k]:<18} cycles +{100*(v[0]-A[0])/A[0]:>5.2f}%   "
          f"instr. +{100*(v[1]-A[1])/A[1]:>5.2f}%   code +{100*(v[2]-A[2])/A[2]:>5.2f}%")
print(f"\nWHAT HARDWARE SUPPORT GIVES (C versus B):")
print(f"  cycles       {B_[0]-C[0]:>10,}  = {100*(B_[0]-C[0])/B_[0]:.2f}% of the whole workload")
print(f"  instructions {B_[1]-C[1]:>10,}  = {100*(B_[1]-C[1])/B_[1]:.2f}%")
print(f"  code, words  {B_[2]-C[2]:>10,}  = {100*(B_[2]-C[2])/B_[2]:.2f}%")
PY
