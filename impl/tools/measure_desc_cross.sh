#!/bin/bash
# Разложение цены F против E на нагрузке компиляции перекрёстной сборкой 2×2
# (та же постановка, что находка 21 для A/B). Две вещи меняются сразу:
#   исполнение — компилятор и среда исполняют код F (IDX, сборка и очистка
#                дескрипторов) вместо кода E;
#   порождение — компилятор выполняет другую работу, порождая код F (ORG-cfgF
#                длиннее и проверяет больше случаев), независимо от того, в каком
#                коде он сам исполняется.
# Четыре компилятора: XY = исполняется в коде X, порождает код Y.
#   EE, FF — однородные среды (build/tc/{E,F}/s2)
#   EF     — ORG-cfgF.Mod, собранный средой E, в среде E
#   FE     — ORG-cfgE.Mod, собранный средой F, в среде F
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"; OUT="$P/build/mdx"
LOAD="Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod"
args=""; for m in $LOAD; do args="$args $m/s"; done
rm -rf "$OUT"; mkdir -p "$OUT"
mk() {  # $1 имя, $2 среда, $3 чей ORG
  local g="$OUT/org$1"; mkdir -p "$g"; cd "$g"
  cp "$P/patches/ORG-cfg$3.Mod" ORG.Mod
  NOREBO_PATH="$g:$P/build/tc/$2/s2:$NB/Norebo:$NB/Oberon" perl -e 'alarm 60; exec @ARGV' \
    "$NB/norebo.bin" ORP.Compile ORG.Mod/s > build.log 2>&1
  python3 "$P/tools/rsc_setversion.py" 1 ORG.rsc > /dev/null
  rm -f ORG.Mod ORG.smb    # интерфейс тот же, что у ORG среды
}
mk EF E F; mk FE F E
run() {  # $1 имя, $2 среда, $3 доп. каталог (или пусто)
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
print(f"\nконтроль: EF порождает {EF[2]} слов, FF — {FF[2]}; FE — {FE[2]}, EE — {EE[2]}")
e1, e2 = FF[0]-EF[0], FE[0]-EE[0]
g1, g2 = EF[0]-EE[0], FF[0]-FE[0]
print(f"всего FF−EE = {FF[0]-EE[0]:+,} тактов ({100*(FF[0]-EE[0])/EE[0]:+.3f}%)")
print(f"  исполнение кода F:  FF−EF = {e1:+,}   FE−EE = {e2:+,}   ({100*e1/EE[0]:+.3f}% / {100*e2/EE[0]:+.3f}%)")
print(f"  порождение кода F:  EF−EE = {g1:+,}   FF−FE = {g2:+,}   ({100*g1/EE[0]:+.3f}% / {100*g2/EE[0]:+.3f}%)")
PY
