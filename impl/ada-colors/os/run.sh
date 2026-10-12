#!/bin/sh
# Translate and run every RED and GREEN program in os/ and kube/; compare with .out
set -u
cd "$(dirname "$0")/.."
pass=0; failn=0; tmp=$(mktemp -d)
[ -x green/build/greenc ] || make -s -C green fixpoint > /dev/null
for src in os/*.red os/*.grn kube/*.red kube/*.grn; do
  [ -f "$src" ] || continue
  case "$src" in *.grn) cc=green/build/greenc; name=$(basename "$src" .grn)g;; *) cc=build/redc; name=$(basename "$src" .red);; esac
  exp="${src%.*}.out"
  $cc < "$src" > "$tmp/$name.c" || { echo "FAIL $src: $(tail -1 "$tmp/$name.c")"; failn=$((failn+1)); continue; }
  ${CC:-cc} -std=gnu11 -O1 -w -Irt "$tmp/$name.c" rt/paleo.c -o "$tmp/$name" -lpthread -lm || { echo "FAIL $src: C"; failn=$((failn+1)); continue; }
  perl -e 'alarm shift; exec @ARGV' 60 "$tmp/$name" > "$tmp/$name.txt" 2>&1
  if diff -u "$exp" "$tmp/$name.txt"; then pass=$((pass+1)); else echo "FAIL $src"; failn=$((failn+1)); fi
done
rm -rf "$tmp"; echo "os/kube programs: $pass passed, $failn failed"; [ "$failn" -eq 0 ]
