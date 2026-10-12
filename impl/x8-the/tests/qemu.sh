#!/bin/sh
# THE on the X8 in QEMU (qemu-system-x8, machine x8): the same tape, the same
# operator keys, and the console and line printer must equal the/the.out,
# exactly as from x8emu. realtime=off lets QEMU run the 300 seconds of machine
# time as fast as it can.
#
#   tests/qemu.sh <path to qemu-system-x8>
set -eu
qemu=${1:?path to qemu-system-x8}
here=$(cd "$(dirname "$0")" && pwd)
top=$here/..
b=$top/build/qemu
mkdir -p "$b"
python3 "$top/asm/x8asm.py" "$top/the/the.elan" -o "$b/the.tape"
: > "$b/console.txt"; : > "$b/lp.txt"
"$qemu" -display none -monitor none -kernel "$b/the.tape" \
  -serial "file:$b/console.txt" -serial "file:$b/lp.txt" \
  -machine "x8,keys=$top/the/operator.keys,realtime=off" &
pid=$!
# THE prints its statistics after "end"; then the X8 stops and QEMU idles.
for i in $(seq 1 120); do
  grep -q "segment control buffer" "$b/console.txt" && break
  kill -0 $pid 2>/dev/null || { echo "qemu-system-x8 exited early"; exit 1; }
  sleep 1
done
sleep 2
kill $pid; wait $pid 2>/dev/null || true
tr -d '\r' < "$b/console.txt" > "$b/console.unix"
tr -d '\r' < "$b/lp.txt" > "$b/lp.unix"
{ echo "== console teleprinter"; cat "$b/console.unix"; echo "== line printer"; cat "$b/lp.unix"; } > "$b/the.out"
diff -u "$top/the/the.out" "$b/the.out" && echo "THE in QEMU: console and line printer as from x8emu"

# commands=: the lines the catalog machine types at start. One serial port, so
# the line printer prints on the console too, as in the cluster.
: > "$b/cmd.txt"
"$qemu" -display none -monitor none -kernel "$b/the.tape" -serial "file:$b/cmd.txt" \
  -machine "x8,commands=pm2 7;k scale 4,realtime=off" &
pid=$!
for i in $(seq 1 60); do
  grep -q "web-4" "$b/cmd.txt" && grep -q "squares printed: 7" "$b/cmd.txt" && break
  sleep 1
done
kill $pid; wait $pid 2>/dev/null || true
grep -q "squares printed: 7" "$b/cmd.txt" && grep -q "web-4" "$b/cmd.txt" \
  || { echo "commands= did not reach THE:"; tr -d '\r' < "$b/cmd.txt"; exit 1; }
echo "THE in QEMU: the commands typed at start reached pm2 and Kubernetes on THE"
