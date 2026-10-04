#!/bin/bash
# Compiles all PO2013 sources with a configuration's compiler (F by default) and
# prints the places where an open array receives an array for which no
# descriptor can be built. No code is executed; only parsing is needed.
set -u
cfg="${1:-F}"; P="$(cd "$(dirname "$0")/.." && pwd)"; D="$P/build/tc/scan$cfg"
rm -rf "$D"; mkdir -p "$D"; cd "$D"
ORD=$(cd "$P" && python3 tools/modorder.py 2>/dev/null)
ok=0; bad=0
for m in $ORD; do
  case "$m" in *.Orig|BootLoad) continue;; esac   # the boot loader lives before the system
  cp "$P/ext/po2013-src/$m.Mod" .
  # When an import is not found, Norebo goes into an endless loop, so the timeout is mandatory
  NOREBO_PATH="$D:$P/build/tc/$cfg/s1" perl -e 'alarm 15; exec @ARGV' \
    "$P/ext/norebo/norebo.bin" ORP.Compile $m.Mod/s >> scan.log 2>&1
  # .rsc files are moved off the path: otherwise the Kernel/Modules/Files built here would shadow
  # the Norebo environment's own modules, and the next compiler run would not load
  # (LED(2) and an endless loop in Modules). Imports need only the .smb files.
  if [ -f "$m.rsc" ]; then mv "$m.rsc" "$m.rsx"; ok=$((ok+1)); else bad=$((bad+1)); echo "    not built: $m"; fi
done
echo "  $cfg: modules built $ok, not built $bad"
grep -B2 "descriptor" scan.log || true
