#!/bin/sh
# Translate every red/tests/*.red with build/redc, run it, compare with .out;
# a test named *.err.red must be rejected with the message in its .out file.
set -u
cd "$(dirname "$0")/../.."
pass=0; failn=0
tmp=$(mktemp -d)
for src in red/tests/*.red; do
  name=$(basename "$src" .red)
  exp="red/tests/$name.out"
  case "$name" in
    *.err)
      if build/redc < "$src" > "$tmp/out.c"; then
        echo "FAIL $name: accepted"; failn=$((failn+1)); continue
      fi
      if grep -qF "$(cat "$exp")" "$tmp/out.c"; then pass=$((pass+1)); else
        echo "FAIL $name: $(tail -1 "$tmp/out.c")"; failn=$((failn+1)); fi
      continue;;
  esac
  if ! build/redc < "$src" > "$tmp/$name.c"; then
    echo "FAIL $name: $(tail -1 "$tmp/$name.c")"; failn=$((failn+1)); continue
  fi
  if ! ${CC:-cc} -std=gnu11 -O1 -w -Irt "$tmp/$name.c" rt/paleo.c -o "$tmp/$name" -lpthread -lm 2> "$tmp/cc.txt"; then
    echo "FAIL $name: C compiler"; head -5 "$tmp/cc.txt"; failn=$((failn+1)); continue
  fi
  "$tmp/$name" < /dev/null > "$tmp/$name.txt" 2>&1
  if diff -u "$exp" "$tmp/$name.txt" > "$tmp/diff.txt"; then pass=$((pass+1)); else
    echo "FAIL $name"; cat "$tmp/diff.txt"; failn=$((failn+1)); fi
done
rm -rf "$tmp"
echo "red tests: $pass passed, $failn failed"
[ "$failn" -eq 0 ]
