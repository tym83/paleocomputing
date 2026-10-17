#!/bin/sh
# Translate every yellow/tests/*.yel (and tests/corpus/*.yel) with build/yellowc,
# after the standard prelude (lib/prelude.yel), run it and compare with .out;
# a test named *.err.yel must be rejected with the message in its .out file.
set -u
cd "$(dirname "$0")/.."
pass=0; failn=0
tmp=$(mktemp -d)
for src in tests/*.yel tests/corpus/*.yel; do
  [ -f "$src" ] || continue
  dir=$(dirname "$src"); name=$(basename "$src" .yel)
  exp="$dir/$name.out"
  case "$name" in
    *.err)
      if cat lib/prelude.yel "$src" | build/yellowc > "$tmp/out.c" 2>/dev/null; then
        echo "FAIL $name: accepted"; failn=$((failn+1)); continue
      fi
      if grep -qF "$(cat "$exp")" "$tmp/out.c"; then pass=$((pass+1)); else
        echo "FAIL $name: $(head -1 "$tmp/out.c")"; failn=$((failn+1)); fi
      continue;;
  esac
  if ! cat lib/prelude.yel "$src" | build/yellowc > "$tmp/$name.c" 2>/dev/null; then
    echo "FAIL $name: $(head -1 "$tmp/$name.c")"; failn=$((failn+1)); continue
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
rm -rf "$tmp"
echo "yellow tests: $pass passed, $failn failed"
[ "$failn" -eq 0 ]
