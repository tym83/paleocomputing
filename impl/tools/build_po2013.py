#!/usr/bin/env python3
"""Compiles the full set of Project Oberon 2013 sources in dependency order.

The order is computed by a topological sort over the IMPORT sections, not set by hand.
The goal is to get .rsc files for all modules for static analysis (they need not run,
so the window modules are fine too)."""
import re, sys, pathlib, subprocess, collections

ROOT = pathlib.Path(__file__).resolve().parent.parent
SRC  = ROOT / "ext/po2013-src"
NB   = ROOT / "ext/norebo"
OUT  = ROOT / "build/po2013"

# Modules that are not needed for static analysis or do not compile
# (the boot loader lives before the system; .Orig are alternative versions of the same module).
SKIP = {"BootLoad", "Display.Orig", "Input.Orig"}

def imports(text):
    m = re.search(r"\bIMPORT\b(.*?);", text, re.S)
    if not m: return set()
    out = set()
    for part in m.group(1).split(","):
        part = part.strip()
        if ":=" in part: part = part.split(":=")[1].strip()   # alias
        name = part.split(".")[0].strip()
        if name and name not in ("SYSTEM",): out.add(name)
    return out

def main():
    mods = {}
    for p in sorted(SRC.glob("*.Mod")):
        stem = p.name[:-4]
        if stem in SKIP: continue
        txt = p.read_bytes().decode("latin-1").replace("\r", "\n")
        mods[stem] = (p, imports(txt))

    # topological sort; external dependencies are ignored
    order, seen, stack = [], set(), set()
    def visit(m):
        if m in seen or m not in mods: return
        if m in stack: return                      # a cycle: leave it as is
        stack.add(m)
        for d in sorted(mods[m][1]): visit(d)
        stack.discard(m); seen.add(m); order.append(m)
    for m in sorted(mods): visit(m)

    OUT.mkdir(parents=True, exist_ok=True)
    fresh = "--fresh" in sys.argv
    if fresh:
        for f in OUT.glob("*"): f.unlink()
    for m in order:
        (OUT / f"{m}.Mod").write_bytes(mods[m][0].read_bytes())

    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    cfg = args[0] if args else "B"
    env = {"NOREBO_PATH": f"{OUT}:{ROOT}/build/s2{cfg}:{NB}/Norebo:{NB}/Oberon:{NB}/build2"}
    import os
    e = dict(os.environ); e.update(env)

    budget = 8
    for a in sys.argv[1:]:
        if a.startswith("--budget="): budget = int(a.split("=")[1])
    print(f"build order ({len(order)} modules), configuration {cfg}, budget {budget}:")
    built_now = 0
    ok = failed = []
    ok, failed = [], []
    for m in order:
        if not fresh and (OUT / f"{m}.rsc").exists():
            ok.append(m); continue
        if built_now >= budget:
            print(f"  … budget exhausted, stopped after {m}"); break
        built_now += 1
        # When a file is not found, Norebo goes into an ENDLESS LOOP instead of an error,
        # so the timeout is mandatory and must be non-fatal.
        try:
            r = subprocess.run([str(NB / "norebo.bin"), "ORP.Compile", f"{m}.Mod/s"],
                               cwd=OUT, env=e, capture_output=True, text=True, timeout=12)
            out = r.stdout + r.stderr
        except subprocess.TimeoutExpired:
            out = "HUNG (an imported module was probably not found)"
        if (OUT / f"{m}.rsc").exists() and "error" not in out.lower() and "not found" not in out:
            ok.append(m); mark = "✅"
        else:
            failed.append((m, out.strip().splitlines()[-1] if out.strip() else "?")); mark = "❌"
        print(f"  {mark} {m}")
    print(f"\nbuilt {len(ok)}, failed {len(failed)}")
    for m, why in failed: print(f"   ❌ {m}: {why[:100]}")

if __name__ == "__main__":
    main()
