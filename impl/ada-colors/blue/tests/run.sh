#!/bin/sh
# Translate every blue/tests/*.blu (and tests/corpus/*.blu) with build/bluec,
# run it, compare with .out; a test named *.err.blu must be rejected with the
# message in its .out file. A .in file, if present, is the standard input; a
# .flags file holds options for bluec.
set -u
cd "$(dirname "$0")/.."
pass=0; failn=0
tmp=$(mktemp -d)
for src in tests/*.blu tests/corpus/*.blu; do
  [ -f "$src" ] || continue
  dir=$(dirname "$src"); name=$(basename "$src" .blu)
  exp="$dir/$name.out"
  case "$name" in
    *.err)
      if build/bluec < "$src" > "$tmp/out.c" 2>/dev/null; then
        echo "FAIL $name: accepted"; failn=$((failn+1)); continue
      fi
      if grep -qF "$(cat "$exp")" "$tmp/out.c"; then pass=$((pass+1)); else
        echo "FAIL $name: $(tail -1 "$tmp/out.c")"; failn=$((failn+1)); fi
      continue;;
  esac
  flags=""
  [ -f "$dir/$name.flags" ] && flags=$(cat "$dir/$name.flags")
  if ! build/bluec $flags < "$src" > "$tmp/$name.c" 2>/dev/null; then
    echo "FAIL $name: $(tail -1 "$tmp/$name.c")"; failn=$((failn+1)); continue
  fi
  if ! ${CC:-cc} -std=gnu11 -O1 -w -I../rt "$tmp/$name.c" ../rt/paleo.c -o "$tmp/$name" -lpthread -lm 2> "$tmp/cc.txt"; then
    echo "FAIL $name: C compiler"; head -5 "$tmp/cc.txt"; failn=$((failn+1)); continue
  fi
  inp=/dev/null
  [ -f "$dir/$name.in" ] && inp="$dir/$name.in"
  "$tmp/$name" < "$inp" > "$tmp/$name.txt" 2>&1
  if diff -u "$exp" "$tmp/$name.txt" > "$tmp/diff.txt"; then pass=$((pass+1)); else
    echo "FAIL $name"; cat "$tmp/diff.txt"; failn=$((failn+1)); fi
done
for t in tests/*/run.sh; do                 # tests of several translations
  if out=$(sh "$t" 2>&1); then pass=$((pass+1)); else echo "$out"; failn=$((failn+1)); fi
done
rm -rf "$tmp"
echo "blue tests: $pass passed, $failn failed"
[ "$failn" -eq 0 ]
