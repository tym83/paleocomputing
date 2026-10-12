#!/bin/sh
# Translate and run every os/*.red and kube/*.red program; compare with .out
set -u
cd "$(dirname "$0")/.."
pass=0; failn=0; tmp=$(mktemp -d)
for src in os/*.red kube/*.red; do
  [ -f "$src" ] || continue
  name=$(basename "$src" .red); exp="${src%.red}.out"
  build/redc < "$src" > "$tmp/$name.c" || { echo "FAIL $src: $(tail -1 "$tmp/$name.c")"; failn=$((failn+1)); continue; }
  ${CC:-cc} -std=gnu11 -O1 -w -Irt "$tmp/$name.c" rt/paleo.c -o "$tmp/$name" -lpthread -lm || { echo "FAIL $src: C"; failn=$((failn+1)); continue; }
  perl -e 'alarm shift; exec @ARGV' 60 "$tmp/$name" > "$tmp/$name.txt" 2>&1
  if diff -u "$exp" "$tmp/$name.txt"; then pass=$((pass+1)); else echo "FAIL $src"; failn=$((failn+1)); fi
done
rm -rf "$tmp"; echo "os/kube programs: $pass passed, $failn failed"; [ "$failn" -eq 0 ]
