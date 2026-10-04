#!/usr/bin/env python3
"""Distribution of array lengths in the compiled Oberon system.

Needed to settle the fork in the CHK encoding: a 12-bit limit (up to 4095)
breaks diagnostics, an 8-bit limit (up to 255) keeps them. The choice is made by data.

Method: for a fixed-length array ORG.Index emits the pair
    Put1a(Cmp, RH, y.r, lim)   ->  F1: SUB RH, idx, #lim
    Trap(10, 1)                ->  F3: BLR CC, pos*100H + 1*10H + MT
We look for such pairs and extract the immediate limit.

Encoding (ORG.Put1): (((a+40H)*10H + b)*10H + op)*10000H + im
  -> bits 31:28 = 0100 (q=1,u=0,v=0), 27:24 = a, 23:20 = b, 19:16 = op, 15:0 = im
Trap (ORG.Put3, BLR=1, cond=10): high byte = (1+12)*16 + 10 = 0xDA
  -> bits 7:4 = trap number, 3:0 = MT = 12
"""
import struct, sys, pathlib, collections

def code_section(path):
    d = pathlib.Path(path).read_bytes(); i = 0
    def s():
        nonlocal i
        j = d.index(b"\0", i); r = d[i:j]; i = j + 1; return r
    def n():
        nonlocal i
        v = struct.unpack_from("<i", d, i)[0]; i += 4; return v
    s(); n(); i += 1; n()
    while s(): n()
    v = n(); i += v
    n()
    v = n(); i += v
    ncode = n()
    return [struct.unpack_from("<I", d, i + k*4)[0] for k in range(ncode)]

TRAP_HI = 0xDA            # BLR, cond = 10 (CC)

def analyse(path):
    w = code_section(path)
    fixed, dynamic, other = [], 0, 0
    for k in range(1, len(w)):
        t = w[k]
        if (t >> 24) != TRAP_HI:            continue
        if (t & 0xF) != 12:                 continue     # not via MT
        if ((t >> 4) & 0xF) != 1:           continue     # not an index trap
        p = w[k-1]
        top = p >> 28
        op  = (p >> 16) & 0xF
        if top == 0b0100 and op == 9:                    # F1 SUB with an immediate
            fixed.append(p & 0xFFFF)
        elif top in (0b0000, 0b0010) and op == 9:        # F0 SUB: open array
            dynamic += 1
        else:
            other += 1
    return fixed, dynamic, other

def main():
    allfixed, alldyn, allother = [], 0, 0
    per = {}
    for p in sys.argv[1:]:
        try:
            f, d, o = analyse(p)
        except Exception as e:
            print(f"  ⚠ {pathlib.Path(p).name}: {e}"); continue
        per[pathlib.Path(p).stem] = (len(f), d, o)
        allfixed += f; alldyn += d; allother += o

    print(f"{'module':<16}{'fixed':>7}{'open':>10}{'other':>7}")
    print("-"*40)
    for m, (a, b, c) in sorted(per.items(), key=lambda x: -x[1][0]):
        if a or b or c: print(f"{m:<16}{a:>7}{b:>10}{c:>7}")
    print("-"*40)
    print(f"{'TOTAL':<16}{len(allfixed):>7}{alldyn:>10}{allother:>7}")

    if not allfixed: return
    allfixed.sort()
    n = len(allfixed)
    print(f"\n=== DISTRIBUTION OF {n} CHECKS WITH A FIXED LIMIT ===")
    buckets = [(0,15),(16,63),(64,127),(128,255),(256,1023),(1024,4095),(4096,0xFFFF)]
    cum = 0
    for lo, hi in buckets:
        c = sum(1 for x in allfixed if lo <= x <= hi); cum += c
        bar = "█" * round(40*c/n)
        print(f"  {lo:>5}…{hi:<6} {c:>5} ({100*c/n:>5.1f}%)  cumul. {100*cum/n:>5.1f}%  {bar}")
    print(f"\n  minimum {allfixed[0]}, median {allfixed[n//2]}, maximum {allfixed[-1]}")
    le255  = sum(1 for x in allfixed if x <= 255)
    le4095 = sum(1 for x in allfixed if x <= 4095)
    print(f"\n=== ANSWER TO THE FORK ===")
    print(f"  limit  8 bits (≤255):  covers {le255:>4} of {n}  = {100*le255/n:.1f}%  (diagnostics INTACT)")
    print(f"  limit 12 bits (≤4095): covers {le4095:>4} of {n}  = {100*le4095/n:.1f}%  (diagnostics BROKEN)")
    print(f"  coverage difference: {100*(le4095-le255)/n:.1f} pp")
    tot = n + alldyn
    print(f"\n  share of ALL index checks ({tot}, including open arrays):")
    print(f"    8 bits  {100*le255/tot:.1f}%   12 bits {100*le4095/tot:.1f}%")

if __name__ == "__main__":
    main()
