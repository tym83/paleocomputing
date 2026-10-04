#!/bin/bash
# Breakdown of the cost of F versus E on the compilation workload with a 2×2 cross build
# (the same setup as finding 21 for A/B). Two things change at once:
#   execution  — the compiler and environment execute code F (IDX, building and clearing
#                descriptors) instead of code E;
#   generation — the compiler does different work generating code F (ORG-cfgF
#                is longer and checks more cases), regardless of which
#                code it itself runs in.
# Four compilers: XY = runs in code X, generates code Y.
#   EE, FF — homogeneous environments (build/tc/{E,F}/s2)
#   EF     — ORG-cfgF.Mod, built by environment E, in environment E
#   FE     — ORG-cfgE.Mod, built by environment F, in environment F
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"; OUT="$P/build/mdx"
LOAD="Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod"
args=""; for m in $LOAD; do args="$args $m/s"; done
rm -rf "$OUT"; mkdir -p "$OUT"
mk() {  # $1 name, $2 environment, $3 whose ORG
  local g="$OUT/org$1"; mkdir -p "$g"; cd "$g"
  cp "$P/patches/ORG-cfg$3.Mod" ORG.Mod
  NOREBO_PATH="$g:$P/build/tc/$2/s2:$NB/Norebo:$NB/Oberon" perl -e 'alarm 60; exec @ARGV' \
    "$NB/norebo.bin" ORP.Compile ORG.Mod/s > build.log 2>&1
  python3 "$P/tools/rsc_setversion.py" 1 ORG.rsc > /dev/null
  rm -f ORG.Mod ORG.smb    # same interface as the environment's ORG
}
mk EF E F; mk FE F E
run() {  # $1 name, $2 environment, $3 extra directory (or empty)
  local d="$OUT/run$1"; mkdir -p "$d"; cd "$d"
  NOREBO_CYCLES=1 NOREBO_PATH="$d:${3:+$3:}$P/build/tc/$2/s2:$NB/Norebo:$NB/Oberon" \
    perl -e 'alarm 120; exec @ARGV' "$NB/norebo.bin" ORP.Compile $args > run.log 2>&1 || true
  code=$(grep -E "^\s+compiling" run.log | awk '{s+=$(NF-2)} END {print s}')
  echo "$1 $(grep -oE 'CYCLES [0-9]+ INSNS [0-9]+' run.log) CODE $code"
}
{ run EE E; run EF E "$OUT/orgEF"; run FE F "$OUT/orgFE"; run FF F; } | tee "$OUT/raw.txt"
python3 - "$OUT/raw.txt" <<'PY'
import sys, re
v = {}
for l in open(sys.argv[1]):
    f = l.split(); v[f[0]] = (int(f[2]), int(f[4]), int(f[6]))
EE, EF, FE, FF = (v[k] for k in ("EE", "EF", "FE", "FF"))
print(f"\ncontrol: EF generates {EF[2]} words, FF {FF[2]}; FE {FE[2]}, EE {EE[2]}")
e1, e2 = FF[0]-EF[0], FE[0]-EE[0]
g1, g2 = EF[0]-EE[0], FF[0]-FE[0]
print(f"total FF−EE = {FF[0]-EE[0]:+,} cycles ({100*(FF[0]-EE[0])/EE[0]:+.3f}%)")
print(f"  executing code F:   FF−EF = {e1:+,}   FE−EE = {e2:+,}   ({100*e1/EE[0]:+.3f}% / {100*e2/EE[0]:+.3f}%)")
print(f"  generating code F:  EF−EE = {g1:+,}   FF−FE = {g2:+,}   ({100*g1/EE[0]:+.3f}% / {100*g2/EE[0]:+.3f}%)")
PY
