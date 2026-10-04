#!/bin/bash
# CLOSING THE LOOP: the Oberon compiler builds itself on the real RTL,
# and the result is compared byte for byte with the emulator.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
MODS="${*:-ORS.Mod ORB.Mod ORG.Mod ORP.Mod}"

for w in rtl emu; do
  d="$P/build/self_$w"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  args=""; for m in $MODS; do args="$args $m/s"; done
  if [ "$w" = rtl ]; then bin="$P/build/obj_nb/norebo_tb"; else bin="$NB/norebo.bin"; fi
  NOREBO_PATH="$PWD:$NB/Norebo:$NB/Oberon:$NB/build2" "$bin" ORP.Compile $args > log.txt 2>&1
done

echo "modules: $MODS"
echo
grep -E "executed on RTL" "$P/build/self_rtl/log.txt" || true
echo
printf "%-10s %-34s %s\n" "module" "checksum" "match"
echo "------------------------------------------------------------"
fail=0
for m in $MODS; do
  n="${m%.Mod}"
  a=$(md5 -q "$P/build/self_rtl/$n.rsc" 2>/dev/null || echo "none")
  b=$(md5 -q "$P/build/self_emu/$n.rsc" 2>/dev/null || echo "none")
  if [ "$a" = "$b" ] && [ "$a" != "none" ]; then s="✅"; else s="❌"; fail=1; fi
  printf "%-10s %-34s %s\n" "$n" "$a" "$s"
done
echo
if [ $fail -eq 0 ]; then
  echo "✅ LOOP CLOSED: the Oberon compiler on Wirth's RISC5.v core produces"
  echo "   byte for byte the same code as the C emulator."
else
  echo "❌ there are mismatches"; exit 1
fi
