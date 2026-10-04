#!/usr/bin/env python3
"""Distribution of DECLARED array lengths in the Project Oberon 2013 sources.

Complements the analysis of compiled code (tools/array_limits.py): that one works
only on modules this compiler can compile, and so does not cover the
window part of the system. Here we parse the declarations in all sources, graphics included.

Parses:
    ARRAY <expression> OF ...       -- the length, if it is a constant or a known CONST
    ARRAY a, b OF ...               -- multidimensional: each dimension separately
Skips open arrays (ARRAY OF) -- their length is dynamic.
"""
import re, sys, pathlib, collections

def consts(text):
    """Values of CONST identifiers (plain integers and simple arithmetic)."""
    env = {}
    for m in re.finditer(r"\b([A-Za-z]\w*)\s*\*?\s*=\s*([^;]+?)[;\n]", text):
        name, expr = m.group(1), m.group(2).strip()
        expr = re.sub(r"\b([0-9A-F]+)H\b", lambda x: str(int(x.group(1), 16)), expr)
        if re.fullmatch(r"[\d\s+\-*/()]+", expr):
            try: env[name] = int(eval(expr, {}, {}))
            except Exception: pass
        elif re.fullmatch(r"[\w\s+\-*/()]+", expr):
            try: env[name] = int(eval(expr, {}, dict(env)))
            except Exception: pass
    return env

def arrays(text, env):
    out = []
    for m in re.finditer(r"\bARRAY\b([^;]*?)\bOF\b", text, re.S):
        dims = m.group(1).strip()
        if not dims:                       # open array
            continue
        for d in dims.split(","):
            d = d.strip()
            d = re.sub(r"\b([0-9A-F]+)H\b", lambda x: str(int(x.group(1), 16)), d)
            try:
                v = int(eval(d, {}, dict(env)))
                if 0 < v <= 1 << 24: out.append(v)
            except Exception:
                pass
    return out

def main():
    all_lens, per = [], {}
    for p in sorted(pathlib.Path(sys.argv[1]).glob("*.Mod")):
        if p.name.endswith(".Orig.Mod"): continue
        t = p.read_bytes().decode("latin-1").replace("\r", "\n")
        t = re.sub(r"\(\*.*?\*\)", " ", t, flags=re.S)          # strip comments
        ls = arrays(t, consts(t))
        if ls: per[p.name[:-4]] = ls
        all_lens += ls
    print(f"{'module':<18}{'arrays':>9}  lengths")
    print("-"*70)
    for m, ls in sorted(per.items(), key=lambda x: -len(x[1])):
        s = ", ".join(str(x) for x in sorted(set(ls)))
        print(f"{m:<18}{len(ls):>9}  {s[:48]}")
    print("-"*70)
    n = len(all_lens); all_lens.sort()
    print(f"{'TOTAL':<18}{n:>9}   modules {len(per)}")
    print(f"\n=== DISTRIBUTION OF {n} DECLARED DIMENSIONS ===")
    cum = 0
    for lo, hi in [(1,15),(16,63),(64,127),(128,255),(256,1023),(1024,4095),(4096,1<<24)]:
        c = sum(1 for x in all_lens if lo <= x <= hi); cum += c
        print(f"  {lo:>5}…{hi:<8} {c:>5} ({100*c/n:>5.1f}%)  cumul. {100*cum/n:>5.1f}%  {'█'*round(40*c/n)}")
    print(f"\n  minimum {all_lens[0]}, median {all_lens[n//2]}, maximum {all_lens[-1]}")
    le255 = sum(1 for x in all_lens if x <= 255); le4095 = sum(1 for x in all_lens if x <= 4095)
    print(f"\n  ≤255  (8 bits):  {le255:>4}/{n} = {100*le255/n:.1f}%")
    print(f"  ≤4095 (12 bits): {le4095:>4}/{n} = {100*le4095/n:.1f}%")
    print(f"  difference: {100*(le4095-le255)/n:.1f} pp")

if __name__ == "__main__":
    main()
