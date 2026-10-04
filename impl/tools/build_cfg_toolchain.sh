#!/bin/bash
# A full Norebo environment in one code generator configuration (episode 14).
#
# Why: configuration F has a different open-array ABI (the first word is a
# descriptor). The measurement method of finding 21 keeps the Norebo environment (Kernel, Files,
# Texts, Oberon…) stock and changes only the compiler; with F that is impossible:
# a stock Texts would get a descriptor instead of an address. So here EACH
# configuration builds EVERYTHING with its own code generator, and fully
# homogeneous systems are compared.
#
#   stage 1: the configuration's sources, built by the stock Norebo binaries:
#              the code inside is still stock, but the compiler already generates code X
#   stage 2: built by the stage 1 compiler: the whole environment in code X
#   stage 3: built by stage 2: a compiler that itself executes code X
# Stages 2 and 3 must match byte for byte: the compiler in code X does the same
# as the compiler in stock code. For F this checks that descriptors do not
# break a single program of the environment, the compiler included. Measurement is on stage 2.
#
# Usage: build_cfg_toolchain.sh A|B|E|F   -> build/tc/<cfg>/{s1,s2,s3}
set -e
cfg="$1"; P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"; T="$P/build/tc/$cfg"
MODS="Norebo Kernel FileDir Files Modules Fonts Texts RS232 Oberon CoreLinker ORS ORB ORG ORP ORTool"
# The Norebo linker passes a 63 KB buffer to an open parameter (16,128 words,
# CoreLinker.Mod: Buffer = ARRAY 63*1024 DIV 4 OF INTEGER), longer than a
# descriptor can express (4095). This is the only such place in the whole environment and in
# all 40 buildable PO2013 modules (tools/scan_open_args.sh). So in F
# the linker is not built, and InnerCore in all configurations is linked the same way
# by the stock CoreLinker from build2: it only reads .rsx and writes the image;
# its own code is not part of the measurement.
[ "$cfg" = F ] && MODS="${MODS/CoreLinker /}"
NMODS=$(echo $MODS | wc -w | tr -d ' ')
rm -rf "$T"; mkdir -p "$T/s1" "$T/s2" "$T/s3"
stage() {  # $1 directory, $2 where the binaries come from
  cd "$1"
  if [ "$cfg" != B ]; then cp "$P/patches/ORG-cfg$cfg.Mod" ORG.Mod; fi
  # One module per run, and the .rsc is moved to .rsx right away. Two reasons.
  # (1) Heap: Norebo has 8 MB and does not collect garbage inside a command; fourteen
  #     modules in one run push the heap above 1 MB, while a descriptor expresses
  #     only a 20-bit address: strings from the heap get a truncated address, and
  #     the compiler in code F hangs (verified: with 1 MB of Norebo memory the same
  #     run exhausts the heap on ORP). A separate run means a fresh heap.
  # (2) A Kernel/Modules built here must not shadow the environment's own modules
  #     on the next run; imports need only the .smb files.
  : > compile.log
  for m in $MODS; do
    NOREBO_PATH="$1:$NB/Norebo:$NB/Oberon:$2" perl -e 'alarm 60; exec @ARGV' \
      "$NB/norebo.bin" ORP.Compile $m.Mod/s >> compile.log 2>&1 || true
    [ -f $m.rsc ] && mv $m.rsc $m.rsx
  done
  # E and F stamp version 2 and 3; the stock linker (like the system loader)
  # rejects them, which is the point of the stamp. Here, on copies in build/ and only
  # for the measurement bench, the version is set back to 1 (finding 21 does the same
  # for E, tools/rsc_setversion.py).
  [ "$cfg" = E ] || [ "$cfg" = F ] && python3 "$P/tools/rsc_setversion.py" 1 *.rsx > /dev/null
  NOREBO_PATH="$1:$NB/Norebo:$NB/Oberon:$NB/build2" "$NB/norebo.bin" CoreLinker.LinkSerial Modules InnerCore >> compile.log 2>&1 || true
  for i in *.rsx; do mv "$i" "${i%.rsx}.rsc"; done
  n=$(ls *.rsc 2>/dev/null | wc -l | tr -d ' ')
  echo "  $cfg $(basename "$1"): modules $n, $(grep -c "compiling" compile.log) compiled, InnerCore $( [ -f InnerCore ] && echo present || echo MISSING)"
  [ "$n" = "$NMODS" ] && [ -f InnerCore ] || { tail -20 compile.log; exit 1; }
}
stage "$T/s1" "$NB/build2"
stage "$T/s2" "$T/s1"
stage "$T/s3" "$T/s2"
same=0; diff=0
for f in "$T"/s2/*.rsc "$T/s2/InnerCore"; do
  if cmp -s "$f" "$T/s3/$(basename "$f")"; then same=$((same+1)); else diff=$((diff+1)); echo "    differs: $(basename "$f")"; fi
done
echo "  $cfg: stages 2 and 3: $same matched, $diff differ $( [ $diff = 0 ] && echo ✅ || echo ❌)"
[ $diff = 0 ]
