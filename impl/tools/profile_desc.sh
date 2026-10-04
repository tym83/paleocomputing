#!/bin/bash
# Dynamic profile of open arrays on the compilation workload (episode 14):
# how many times IDX, software checks with a register limit,
# descriptor clears and descriptor builds execute, for configurations B, E, F.
# Requires build/tc/<cfg> (tools/build_cfg_toolchain.sh); measure_desc.sh builds it.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
LOAD="${*:-Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod}"
args=""; for m in $LOAD; do args="$args $m/s"; done
for c in B E F; do
  d="$P/build/md/prof-$c"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  NOREBO_PROFILE=1 NOREBO_CYCLES=1 NOREBO_PATH="$d:$P/build/tc/$c/s2:$NB/Norebo:$NB/Oberon" \
    perl -e 'alarm 120; exec @ARGV' "$NB/norebo.bin" ORP.Compile $args > run.log 2>&1 || true
  printf "%s  %s  %s  static-lim checks %s\n" $c "$(grep -oE 'CYCLES [0-9]+' run.log)" \
    "$(grep DESCPROF run.log)" "$(grep 'CHKPROF total' run.log | awk '{print $3}')"
done
