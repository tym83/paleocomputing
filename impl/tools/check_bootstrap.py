#!/usr/bin/env python3
"""Fixed-point check on the frame buffer, without text recognition.

System.Log holds two blocks of four lines: what the compiler from the disk
printed and what the compiler it built printed. If this is the same
fixed point, the blocks are the same text, in the same font, from the same
left margin. So the corresponding pixel rows must match
bit for bit. We compare them directly and do not rely on recognition.
"""
import sys

GEN1_TOP, GEN2_TOP, LINES, LH = 43, 163, 4, 12      # log lines and line height
X0, X1 = 655, 1010                                  # horizontal bounds of the log

def rows(path):
    t = open(path).read().split()
    w, h = int(t[1]), int(t[2]); px = t[3:]
    return w, h, px

def band(px, w, top):
    return [px[y * w + x] for y in range(top, top + LINES * LH) for x in range(X0, X1)]

def main(path):
    w, h, px = rows(path)
    a, b = band(px, w, GEN1_TOP), band(px, w, GEN2_TOP)
    ink_a = sum(c == '1' for c in a)
    if ink_a == 0:
        print("❌ the first log block is empty: compilation did not happen"); return 1
    diff = sum(x != y for x, y in zip(a, b))
    print(f"  generation 1: {ink_a} black pixels in four log lines")
    print(f"  mismatches with generation 2: {diff} of {len(a)}")
    if diff:
        print("❌ generations differ: the fixed point was not reached"); return 1
    print("✅ generations match bit for bit: the compiler reproduces itself")
    return 0

if __name__ == "__main__":
    sys.exit(main(sys.argv[1]))
