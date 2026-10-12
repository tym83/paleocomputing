#!/bin/sh
# Assemble THE, start the X8 with it (LS, IP), let the operator type what
# the/operator.keys says, and compare the console and the line printer with
# the/the.out.
set -eu
here=$(cd "$(dirname "$0")" && pwd)
top=$here/..
b=$top/build
mkdir -p "$b"
python3 "$top/asm/x8asm.py" "$top/the/the.elan" -o "$b/the.tape" -l "$b/the.lst" -s "$b/the.sym"
"$top/emu/x8emu" -telex "$b/console.txt" -printer "$b/lp.txt" -keys "$top/the/operator.keys" \
  -max 300 "$b/the.tape"
{ echo "== console teleprinter"; cat "$b/console.txt"; echo "== line printer"; cat "$b/lp.txt"; } > "$b/the.out"
if [ "${1:-}" = "--update" ]; then cp "$b/the.out" "$top/the/the.out"; fi
diff -u "$top/the/the.out" "$b/the.out" && echo "THE: console and line printer as expected"
