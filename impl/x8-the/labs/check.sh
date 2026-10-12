#!/bin/sh
# labs/check.sh NN [look|change|break|measure] : assemble the/the.elan as it is
# now (with your change), run it on the X8 and say whether the lab is done.
set -u
here=$(cd "$(dirname "$0")" && pwd)
top=$here/..
b=$top/build/lab
mkdir -p "$b"
lab=${1:-}; mode=${2:-look}
run() {   # run THE; console in $b/console.txt
  python3 "$top/asm/x8asm.py" "$top/the/the.elan" -o "$b/the.tape" || exit 1
  "$top/emu/x8emu" -telex "$b/console.txt" -printer "$b/lp.txt" -keys "${KEYS:-$top/the/operator.keys}" \
    -max "${MAX:-150}" "$b/the.tape" 2>"$b/stop.txt"
  cat "$b/console.txt"
}
has() { grep -q "$1" "$b/console.txt"; }
ok() { echo "lab $lab: done"; exit 0; }
no() { echo "lab $lab: not yet: $1"; exit 1; }
num() { grep "$1" "$b/console.txt" | sed 's/.*: //; s/ .*//' | tail -1; }
case "$lab" in
01) run; has "segment control buffer" && ok || no "the run did not reach the report" ;;
02) run; has "primes below 2048: 309" || no "pm1 lost its primes"
    has "errors: 0" || no "pm3 found errors"
    t=$(num "drum transfers"); echo "drum transfers: $t (with 6 core pages: 54)"
    [ "${t:-0}" -gt 54 ] && ok || no "fewer core pages should mean more drum traffic: set ncp = 4" ;;
03) run; cat "$b/stop.txt"
    has "drum transfers" && no "the report came: set layerbreak = 1"
    echo "the machine waits for ever: the segment controller waits for the message interpreter, which"
    echo "waits for its vocabulary segment, which only the segment controller can bring"; ok ;;
04) run; for p in pm1 pm2 pm3; do grep "$p: finished" "$b/console.txt" || no "$p did not finish"; done
    echo "(the time slice is 'slice' in clock ticks of 10 ms)"; ok ;;
05) run; has "squares printed: 20" && ok || no "make the operator answer pm2 with 20 (the/operator.keys)" ;;
06) sh "$top/tests/x8stest.sh" | tail -3 ;;
*) echo "usage: labs/check.sh 01..06 [mode]"; exit 2 ;;
esac
