#!/bin/bash
# Breaking down the cost of checks with a 2×2 cross build.
#
# The problem: configuration A differs from B in TWO things at once: it has no
# checks inside AND it does not emit checks for the workload. The A↔B difference adds up the cost
# of executing checks and the compiler's work to generate them.
#
# Solution: build all four combinations.
#   A  = patched ORG.Mod, built by compiler A    (none inside, does not emit)
#   A' = STOCK   ORG.Mod, built by compiler A    (none inside, EMITS)
#   B' = patched ORG.Mod, built by compiler B    (HAS inside, does not emit)
#   B  = stock   ORG.Mod, built by compiler B    (has inside, emits)
# Then:
#   cost of EXECUTING checks  = B − A'  (and independently B' − A)
#   cost of GENERATING checks = A' − A  (and independently B − B')
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
COMP="ORS.Mod ORB.Mod ORG.Mod ORP.Mod"
LOAD="${*:-Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod}"

# $1 = which compiler (A|B), $2 = which ORG.Mod (stock|patched), $3 = name
stage2() {
  local by="$1" src="$2" name="$3"
  local bin="$P/build/x_bin$by"; rm -rf "$bin"; mkdir -p "$bin"
  cp "$P/build/cfg$by"/*.rsc "$bin"/ 2>/dev/null || true
  local d="$P/build/x2$name"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  # the source is put here explicitly so that it is found FIRST
  if [ "$src" = "patched" ]; then cp "$P/patches/ORG-cfgA.Mod" ORG.Mod; fi
  local args=""; for m in $COMP; do args="$args $m/s"; done
  NOREBO_PATH="$d:$bin:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > build.log 2>&1
}
stage2 A patched A
stage2 A stock   Ap
stage2 B patched Bp
stage2 B stock   B

for n in A Ap Bp B; do
  d="$P/build/xrun$n"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  args=""; for m in $LOAD; do args="$args $m/s"; done
  NOREBO_CYCLES=1 NOREBO_PATH="$P/build/x2$n:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > run.log 2>&1
done

python3 - "$P/build" <<'PY'
import re, sys, pathlib
b = pathlib.Path(sys.argv[1])
def get(n):
    t = (b / f"xrun{n}" / "run.log").read_text(errors="replace")
    m = re.search(r"CYCLES (\d+) INSNS (\d+)", t)
    code = sum(int(x) for x in re.findall(r"^\s+compiling \w+\s+(\d+)", t, re.M))
    return (int(m.group(1)), int(m.group(2)), code)
A, Ap, Bp, B = get("A"), get("Ap"), get("Bp"), get("B")
print(f"{'':30}{'cycles':>13}{'instr.':>13}{'code':>8}")
print("-"*66)
for n, v in (("A  none inside, no emit", A), ("A' none inside, EMITS", Ap),
             ("B' has inside, no emit", Bp), ("B  has inside, emits", B)):
    print(f"{n:<30}{v[0]:>13,}{v[1]:>13,}{v[2]:>8,}")
print("-"*66)
print("\nSETUP CONTROL (generated code):")
print(f"  A' gives {Ap[2]} words, B gives {B[2]}: {'✅ match' if Ap[2]==B[2] else '❌ differ'}")
print(f"  B' gives {Bp[2]} words, A gives {A[2]}: {'✅ match' if Bp[2]==A[2] else '❌ differ'}")
e1, e2 = B[0]-Ap[0], Bp[0]-A[0]
g1, g2 = Ap[0]-A[0], B[0]-Bp[0]
print(f"\nBREAKDOWN (total B−A = {B[0]-A[0]:,} cycles = {100*(B[0]-A[0])/A[0]:.2f}%):")
print(f"  executing checks:     B−A' = {e1:>8,}  ({100*e1/A[0]:.2f}%)")
print(f"                        B'−A = {e2:>8,}  ({100*e2/A[0]:.2f}%)   discrepancy {abs(e1-e2)*100/max(e1,e2):.1f}%")
print(f"  generating checks:    A'−A = {g1:>8,}  ({100*g1/A[0]:.2f}%)")
print(f"                        B−B' = {g2:>8,}  ({100*g2/A[0]:.2f}%)   discrepancy {abs(g1-g2)*100/max(g1,g2):.1f}%")
print(f"\n  sum {e1+g1:,} versus B−A {B[0]-A[0]:,}: {'✅ the breakdown is exact' if e1+g1==B[0]-A[0] else '❌'}")
PY
