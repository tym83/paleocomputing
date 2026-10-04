#!/usr/bin/env python3
"""A closed loop on the real output of Wirth's compiler.

We take the object files produced by ORG.Mod and, for every code word:
  word -> disassembler (derived from RISC5.v) -> our assembler -> word
We require a bit-for-bit match.

What this proves: our assembler covers exactly the encoding space
the real compiler uses, and reproduces each of its instructions
bit for bit, don't-care bits included.

What this does NOT prove: that the field layout is correct. The disassembler and the assembler
use the same layout, and a shared bug in it is invisible here.
The layout is checked by 260 directed tests on the hardware, where the result is compared
with the architectural semantics rather than with our own idea of it.
"""
import sys, collections
sys.path.insert(0, "tools")
import asm, rsc
from disasm import disasm


def run(paths):
    total = bad = unnamed = 0
    forms = collections.Counter()
    fails = []
    for p in paths:
        m = rsc.parse(p)
        for i, w in enumerate(m["code"]):
            total += 1
            txt = disasm(w)
            if txt is None:
                unnamed += 1
                forms["(no mnemonic)"] += 1
                fails.append((p, i, w, "no mnemonic"))
                continue
            forms[txt.split()[0]] += 1
            try:
                back = asm.assemble("        " + txt + "\n", raw=True)[0][0]
            except Exception as e:
                bad += 1
                fails.append((p, i, w, f"did not assemble: {e}"))
                continue
            if back != w:
                bad += 1
                fails.append((p, i, w, f"{txt} -> {back:08X}"))
    print(f"  code words: {total}, distinct mnemonics: {len(forms)}")
    print("  " + "  ".join(f"{k}:{v}" for k, v in forms.most_common(12)))
    if fails:
        print(f"\n❌ not reproduced: {len(fails)}")
        for p, i, w, why in fails[:12]:
            print(f"    {p.split('/')[-1]}[{i}] {w:08X}  {why}")
        if len(fails) > 12:
            print(f"    ... and {len(fails) - 12} more")
        return 1
    print(f"\n✅ all {total} words of the real compiler reproduced bit for bit")
    return 0


if __name__ == "__main__":
    sys.exit(run(sys.argv[1:]))
