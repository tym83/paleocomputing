#!/bin/bash
# The DYNAMIC cost of run-time checks.
#
# The trap I fell into first: if you run the cfgA and cfgB compilers,
# the cycle difference only reflects that cfgA does NOT GENERATE checks,
# i.e. does less work. That is not the cost of checks at run time.
#
# The right way: a SECOND stage is needed. Use cfgA to rebuild the compiler ->
# that gives binary code WITHOUT checks inside. The same way via cfgB -> WITH checks.
# Then compile THE SAME workload with both resulting compilers
# and compare the cycles. Then the difference is exactly the execution of the checks.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
COMP="ORS.Mod ORB.Mod ORG.Mod ORP.Mod"
LOAD="${*:-Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod}"

# --- stage 2: rebuild the compiler with the compiler from cfgX
for cfg in A B; do
  d="$P/build/stage2$cfg"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  # take the same ORG.Mod that was used in cfgX (patched for A)
  [ "$cfg" = A ] && cp "$P/build/cfgA/ORG.Mod" . || true
  args=""; for m in $COMP; do args="$args $m/s"; done
  NOREBO_PATH="$d:$P/build/cfg$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > "$d/build.log" 2>&1
done

# --- run one workload with both stage 2 compilers
echo "workload: $LOAD"
for cfg in A B; do
  d="$P/build/run2$cfg"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  args=""; for m in $LOAD; do args="$args $m/s"; done
  NOREBO_CYCLES=1 NOREBO_PATH="$P/build/stage2$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > "$d/run.log" 2>&1
done

python3 - "$P/build" <<'PY'
import re, sys, pathlib
b = pathlib.Path(sys.argv[1])
def cyc(p):
    t = (b/p/"run.log").read_text(errors="replace")
    m = re.search(r"CYCLES (\d+) INSNS (\d+)", t)
    return (int(m.group(1)), int(m.group(2))) if m else (None, None)
ca, ia = cyc("run2A"); cb, ib = cyc("run2B")
if not cb: print("no data, see build/run2B/run.log"); sys.exit(1)
print(f"\n  compiler WITH checks       {cb:>13,} cycles  {ib:>12,} instr.")
print(f"  compiler WITHOUT checks    {ca:>13,} cycles  {ia:>12,} instr.")
print(f"  Δ                          {cb-ca:>13,} cycles  {ib-ia:>12,} instr.")
print(f"\n  DYNAMIC cost of checks: {100*(cb-ca)/cb:.2f}% of cycles, {100*(ib-ia)/ib:.2f}% of instructions")
PY
