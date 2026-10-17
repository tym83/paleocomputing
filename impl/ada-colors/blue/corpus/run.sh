#!/bin/sh
# Run the programs of the 1978 BLUE document (orig/, transcribed as printed). Each
# fix/NAME.sed lists the changes a translator forced; main/NAME.blu is a driver whose
# %%ORIGINAL%% line stands for the corrected original; NAME.out is the expected output.
set -u
cd "$(dirname "$0")/.."
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
pass=0; failn=0
for o in corpus/orig/*.blu; do
  n=$(basename "$o" .blu)
  [ -f "corpus/main/$n.blu" ] || continue
  if [ -f "corpus/fix/$n.sed" ]; then sed -f "corpus/fix/$n.sed" "$o" > "$tmp/$n.orig"; else cp "$o" "$tmp/$n.orig"; fi
  awk -v f="$tmp/$n.orig" '/^%%ORIGINAL%%$/ { while ((getline l < f) > 0) print l; next } { print }' \
    "corpus/main/$n.blu" > "$tmp/$n.blu"
  if ! build/bluec < "$tmp/$n.blu" > "$tmp/$n.c"; then
    echo "FAIL $n: $(tail -1 "$tmp/$n.c")"; failn=$((failn+1)); continue
  fi
  if ! ${CC:-cc} -std=gnu11 -O1 -w -I../rt "$tmp/$n.c" ../rt/paleo.c -o "$tmp/$n" -lpthread -lm 2> "$tmp/cc.txt"; then
    echo "FAIL $n: C compiler"; head -5 "$tmp/cc.txt"; failn=$((failn+1)); continue
  fi
  inp=/dev/null
  [ -f "corpus/$n.in" ] && inp="corpus/$n.in"
  perl -e 'alarm shift; exec @ARGV' 30 "$tmp/$n" < "$inp" > "$tmp/$n.txt" 2>&1
  if diff -u "corpus/$n.out" "$tmp/$n.txt" > "$tmp/diff.txt"; then pass=$((pass+1)); else
    echo "FAIL $n"; cat "$tmp/diff.txt"; failn=$((failn+1)); fi
done
echo "blue corpus: $pass passed, $failn failed"
[ "$failn" -eq 0 ]
