#!/bin/bash
# Finding 78: 1.0 < 2.0 yields FALSE if an integer addition overflowed before
# the comparison. Run on the Norebo emulator and on Wirth's RTL.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
d="$P/build/lm/ov"; mkdir -p "$d"; cd "$d"; cp -f "$P/lm/OvProbe.Mod" .
export NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2"
"$NB/norebo.bin" ORP.Compile OvProbe.Mod/s > compile.log 2>&1 || { cat compile.log; exit 1; }
echo "  Norebo emulator:"; "$NB/norebo.bin" OvProbe.Run < /dev/null | sed 's/^/    /'
# ⚠ stdin is closed: the bench reads the bus on writes too, and reading port -56 in Norebo
# is getchar(); with an open terminal the run silently waits for input.
echo "  Wirth's RTL:"; "$P/build/obj_nb/norebo_tb" OvProbe.Run < /dev/null | grep "overflow" | sed 's/^/    /'
