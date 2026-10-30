#!/bin/sh
# Separate translation (4.2): bluec -c translates COUNTERS, then LEDGER against the
# interface of COUNTERS; the program BANK links both. COUNTERS translated again
# with another interface must make the old units refuse to link.
set -u
cd "$(dirname "$0")/../.."
cc=${CC:-cc}
lib=$(mktemp -d); trap 'rm -rf "$lib"' EXIT
fail() { echo "FAIL separate: $1"; exit 1; }
for s in COUNTERS LEDGER; do
  build/bluec -c -L "$lib" < tests/separate/$s.blu > "$lib/$s.c" || fail "bluec -c $s: $(tail -1 "$lib/$s.c")"
done
build/bluec -L "$lib" < tests/separate/MAIN.blu > "$lib/MAIN.c" || fail "bluec MAIN: $(tail -1 "$lib/MAIN.c")"
for u in COUNTERS LEDGER MAIN; do
  $cc -std=gnu11 -O1 -w -I../rt -c "$lib/$u.c" -o "$lib/$u.o" || fail "C compiler on $u"
done
$cc -std=gnu11 -O1 -w -I../rt -c ../rt/paleo.c -o "$lib/paleo.o" || fail "C compiler on paleo.c"
$cc "$lib/MAIN.o" "$lib/LEDGER.o" "$lib/COUNTERS.o" "$lib/paleo.o" -o "$lib/bank" -lpthread -lm \
  || fail "link"
"$lib/bank" > "$lib/out.txt" 2>&1
diff -u tests/separate/MAIN.out "$lib/out.txt" || fail "output"
sed 's/TOTAL: INTEGER := 100/TOTAL: INTEGER := 200/' tests/separate/COUNTERS.blu \
  | build/bluec -c -L "$lib" > "$lib/COUNTERS2.c" || fail "bluec -c COUNTERS again"
$cc -std=gnu11 -O1 -w -I../rt -c "$lib/COUNTERS2.c" -o "$lib/COUNTERS2.o" || fail "C compiler on COUNTERS again"
if $cc "$lib/MAIN.o" "$lib/LEDGER.o" "$lib/COUNTERS2.o" "$lib/paleo.o" -o "$lib/bank2" -lpthread -lm \
     > "$lib/ld.txt" 2>&1; then
  fail "units translated against the old interface linked"
fi
grep -q bs_COUNTERS_iface "$lib/ld.txt" || fail "the link failed for another reason: $(head -3 "$lib/ld.txt")"
echo "ok separate"
