#!/bin/bash
# Measures the cost of run-time checks in Oberon.
# Configuration B is stock (checks are always on and cannot be turned off normally).
# Configuration A is the same compiler with the patch check := FALSE.
# The size of the generated CODE is compared on the same workload.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
WORK="$P/build/measure"; rm -rf "$WORK"; mkdir -p "$WORK/A" "$WORK/B"

MODS="$*"
[ -z "$MODS" ] && MODS="ORS.Mod ORB.Mod ORG.Mod ORP.Mod Kernel.Mod Files.Mod Modules.Mod Texts.Mod Oberon.Mod Fonts.Mod"

run() {  # $1 = A|B
  local cfg=$1 dir="$WORK/$1"
  cd "$dir"
  local args=""
  for m in $MODS; do args="$args $m/s"; done
  NOREBO_CYCLES=1 NOREBO_PATH="$P/build/cfg$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args 2>&1
}
# ⚠ A Norebo trap: if a source is not found via NOREBO_PATH, it GOES INTO AN ENDLESS LOOP
# instead of reporting an error. The path order below is verified and works; do not touch it.
run B > "$WORK/B.log" 2>&1
run A > "$WORK/A.log" 2>&1

python3 - "$WORK" <<'PY'
import re, sys, pathlib
w = pathlib.Path(sys.argv[1])
def parse(p):
    d = {}
    for line in (w/p).read_text(errors="replace").splitlines():
        m = re.match(r"\s+compiling (\w+)\s+(\d+)\s+(\d+)", line)
        if m: d[m.group(1)] = (int(m.group(2)), int(m.group(3)))
    return d
B, A = parse("B.log"), parse("A.log")
print(f"{'module':<12}{'B code':>8}{'A code':>8}{'Δ words':>8}{'Δ %':>8}")
print("-"*44)
tb = ta = 0
for m in B:
    if m not in A: continue
    b, a = B[m][0], A[m][0]; tb += b; ta += a
    print(f"{m:<12}{b:>8}{a:>8}{a-b:>8}{100*(b-a)/b:>7.1f}%")
print("-"*44)
print(f"{'TOTAL':<12}{tb:>8}{ta:>8}{ta-tb:>8}{100*(tb-ta)/tb:>7.1f}%")
print(f"\nCODE SIZE: checks take {100*(tb-ta)/tb:.1f}% ({tb-ta} words of {tb})")

# Compilation cycles (the latency model is verified against RTL cycle by cycle)
def cyc(p):
    for line in (w/p).read_text(errors="replace").splitlines():
        m = re.match(r"CYCLES (\d+) INSNS (\d+)", line)
        if m: return int(m.group(1)), int(m.group(2))
    return None, None
cb, ib = cyc("B.log"); ca, ia = cyc("A.log")
if cb and ca:
    print(f"\nCYCLES on the workload itself (the compiler compiles {len(B)} modules):")
    print(f"  B (stock)       {cb:>12,} cycles, {ib:>11,} instructions")
    print(f"  A (no checks)   {ca:>12,} cycles, {ia:>11,} instructions")
    print(f"  Δ               {cb-ca:>12,} cycles  =  {100*(cb-ca)/cb:.2f}%")
    print(f"  Δ instructions  {ib-ia:>12,}         =  {100*(ib-ia)/ib:.2f}%")
    print(f"  cycles per instruction: B {cb/ib:.3f}, A {ca/ia:.3f}")
PY
