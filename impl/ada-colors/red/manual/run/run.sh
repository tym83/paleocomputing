#!/bin/sh
# Make the examples of chapter 14 of the RED Reference Manual (March 1979) in
# red/manual/original/ runnable and run them. Each sed file lists the changes
# a translator forced, or fills what the manual left as "...", with the reason
# next to each line; *-head.red and *-main.red put the example in a program and
# drive it; *-units.red stand for what an example assumes; *.in is what is typed on the teletype.
set -eu
cd "$(dirname "$0")/../../.."
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
o=red/manual/original; r=red/manual/run
body() { sed -n '/^% -----/,$p' "$1" | tail -n +2; }
fixed() { if [ -f "$r/$1.sed" ]; then body "$o/$1.red" | sed -f "$r/$1.sed"; else body "$o/$1.red"; fi; }
fixed 14.1.1-pulsed-events > "$tmp/14.1.1.red"; cat $r/14.1.1-main.red >> "$tmp/14.1.1.red"
{ cat $r/14.1.3-head.red; fixed 14.1.3-replies; cat $r/14.1.3-main.red; } > "$tmp/14.1.3.red"
{ cat $r/14.1.4-head.red; fixed 14.1.4-keyboard; cat $r/14.1.4-main.red; } > "$tmp/14.1.4.red"
{ fixed 14.4.1-monitor-defs; cat $r/14.4.1-head.red; fixed 14.4.1-monitor-use | sed 's/^/   /'
  cat $r/14.4.1-main.red; } > "$tmp/14.4.1.red"
{ fixed 14.5.3-round-robin; cat $r/14.5.3-main.red; } > "$tmp/14.5.3.red"
{ cat $r/14.3.1-units.red; fixed 14.3.1-mailboxes; cat $r/14.3.1-main.red; } > "$tmp/14.3.1.red"
fail=0
for p in 14.1.1 14.1.3 14.1.4 14.3.1 14.4.1 14.5.3; do
  in=/dev/null; [ -f "$r/$p.in" ] && in="$r/$p.in"
  if build/redc < "$tmp/$p.red" > "$tmp/$p.c" &&
     cc -std=gnu11 -O1 -w -Irt "$tmp/$p.c" rt/paleo.c -o "$tmp/$p" -lpthread -lm; then
    perl -e 'alarm shift; exec @ARGV' 30 "$tmp/$p" < "$in" > "$tmp/$p.txt" 2>&1 || true
  else
    tail -1 "$tmp/$p.c" > "$tmp/$p.txt"
  fi
  # UPDATE=1 takes the outputs as the expected ones
  if [ "${UPDATE:-}" = 1 ]; then cp "$tmp/$p.txt" "$r/$p.out"; fi
  if diff -u "$r/$p.out" "$tmp/$p.txt"; then echo "ok $p"; else echo "FAIL $p"; fail=1; fi
done
exit $fail
