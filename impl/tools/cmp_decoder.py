#!/usr/bin/env python3
"""Compares the decoder tables of two cores and shows which encodings differ."""
import sys, collections
def load(p):
    d = {}
    for line in open(p):
        if line.startswith("#"): continue
        f = line.split()
        d[(f[0], f[1], f[2])] = tuple(f[3:])
    return d
# The third argument is the expected encodings, comma-separated, as "nibble:op" in
# hex. By default just CHK (0001, op=1); the descriptor core adds IDX
# (0001, op=8, episode 14).
a, b = load(sys.argv[1]), load(sys.argv[2])
expect = {tuple(x.split(":")) for x in (sys.argv[3] if len(sys.argv) > 3 else "1:1").split(",")}
diff = collections.defaultdict(list)
for k in sorted(a):
    if a[k] != b[k]: diff[(k[0], k[1])].append(k[2])   # k[2] = "<field a>.<set>"
print(f"combinations checked: {len(a)}  ({len(set((k[0],k[1]) for k in a))} encodings × 16 values of field a × 5 operand sets)")
if not diff:
    print("NO mismatches ❌: the new instruction is not decoded, which is also an error")
    sys.exit(1)
print(f"\nencodings that differ: {len(diff)}")
for (nib, op), sets in sorted(diff.items()):
    print(f"  IR[31:28]={int(nib,16):04b}  op={int(op,16):<2}  differences: {len(sets)} of 80 (16 values of a × 5 sets)")
got = set(diff.keys())
print()
names = {("1", "1"): "CHK", ("1", "8"): "IDX"}
if got == expect:
    what = ", ".join(f"(0001, op={int(o,16)}) — {names.get((n,o), '?')}" for n, o in sorted(expect))
    print(f"✅ EXACTLY the expected encodings differ: {what}")
    sys.exit(0)
print(f"❌ expected {sorted(expect)}, got {sorted(got)}")
sys.exit(1)
