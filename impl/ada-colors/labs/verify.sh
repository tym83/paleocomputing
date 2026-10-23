#!/bin/sh
# Checks the checker: every reference solution in labs/solutions/ must pass its
# task, and the unchanged lab program must not (08/change is exempt: any crash
# point passes, including the original one).
set -u
cd "$(dirname "$0")/.."
fail=0
for f in labs/solutions/*.red labs/solutions/*.yel; do
  t=$(basename "$f"); t=${t%.*}; lab=${t%%-*}; task=${t#*-}
  if labs/check.sh "$lab" "$task" "$f" > /dev/null 2>&1; then echo "ok   $lab/$task solution passes"
  else echo "FAIL $lab/$task solution does not pass"; fail=1; fi
  [ "$t" = 08-change ] && continue
  if labs/check.sh "$lab" "$task" > /dev/null 2>&1; then echo "FAIL $lab/$task passes without the change"; fail=1
  else echo "ok   $lab/$task unchanged program does not pass"; fi
done
exit $fail
