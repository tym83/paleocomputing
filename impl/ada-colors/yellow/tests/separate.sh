#!/bin/sh
# Separate compilation (XIII): synopses into a library, segments against
# it, a main program linking them; then an outdated synopsis is found.
set -u
cd "$(dirname "$0")/.."
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
lib=$tmp/lib; mkdir -p $lib
S=tests/separate
yc() { cat lib/prelude.yel "$2" | build/yellowc $1 $lib > "$3" 2>/dev/null || { echo "FAIL separate: $(tail -1 "$3")"; exit 1; }; }
yc -i $S/counter.syn.yel $tmp/i1.txt
yc -i $S/user.syn.yel $tmp/i2.txt
yc -c $S/counter.yel $tmp/Counter.c
yc -c $S/user.yel $tmp/User.c
build/yellowc -l $lib Counter User > $tmp/main.c || { echo "FAIL separate: $(tail -1 $tmp/main.c)"; exit 1; }
${CC:-cc} -std=gnu11 -O1 -w -I../rt $tmp/main.c $tmp/Counter.c $tmp/User.c ../rt/paleo.c -o $tmp/prog -lpthread -lm || { echo "FAIL separate: C compiler"; exit 1; }
$tmp/prog > $tmp/out.txt 2>&1
diff -u $S/separate.out $tmp/out.txt || { echo "FAIL separate"; exit 1; }
# what Counter is, read from its facts: a FUNCTION calls no procedure of it
# that assigns, a VAR actual is no variable its routine refers to freely, a
# process outlives no VAR actual (X.A.4, X.A.6, X.E.2)
bad() {
  if cat lib/prelude.yel $S/$1 | build/yellowc -c $lib > $tmp/bad.c 2>/dev/null; then echo "FAIL separate: $1 accepted"; exit 1; fi
  grep -q "$2" $tmp/bad.c || { echo "FAIL separate $1: $(tail -1 $tmp/bad.c)"; exit 1; }
}
bad bad1.yel "Bad is a FUNCTION: it calls Bump"
bad bad2.yel "total is the actual of a VAR parameter of AddTo, which refers to it freely too"
bad bad3.yel "loc is the VAR actual of a process that may outlive it"
yc -c $S/user.yel $tmp/User.c
# Counter's Peek starts assigning: User relied on it being pure
sed 's/RETURN count ENDPROCEDURE Peek;/total := 1; RETURN count ENDPROCEDURE Peek;/' $S/counter.yel > $tmp/c4.yel
yc -c $tmp/c4.yel $tmp/Counter2.c
if build/yellowc -l $lib Counter User > $tmp/main4.c 2>/dev/null; then echo "FAIL separate: changed facts were not found"; exit 1; fi
grep -q "User was translated with what the segment Counter was then" $tmp/main4.c || { echo "FAIL separate: $(tail -1 $tmp/main4.c)"; exit 1; }
yc -c $S/counter.yel $tmp/Counter.c
# a changed synopsis: User was translated with the old one
sed 's/CONST Limit: INTEGER64 = 100;/CONST Limit: INTEGER64 = 200;/' $S/counter.syn.yel > $tmp/c2.yel
yc -i $tmp/c2.yel $tmp/i3.txt
if build/yellowc -l $lib Counter User > $tmp/main2.c 2>/dev/null; then echo "FAIL separate: an outdated synopsis was not found"; exit 1; fi
grep -q "was translated with an outdated synopsis of Counter" $tmp/main2.c || { echo "FAIL separate: $(tail -1 $tmp/main2.c)"; exit 1; }
# a segment that does not match its synopsis
sed 's/    count := count + by;/    count := count + by + 0;/; s/  CONST Limit: INTEGER64 = 100;/  CONST Limit: INTEGER64 = 300;/' $S/counter.yel > $tmp/c3.yel
if cat lib/prelude.yel $tmp/c3.yel | build/yellowc -c $lib > $tmp/c3.c 2>/dev/null; then echo "FAIL separate: a segment unlike its synopsis was accepted"; exit 1; fi
grep -q "is not in the segment as it is there" $tmp/c3.c || { echo "FAIL separate: $(tail -1 $tmp/c3.c)"; exit 1; }
echo "separate compilation: ok"
