#!/usr/bin/env python3
"""A systematic sweep of the encoding space.

The closed loop on the real compiler output (tools/roundtrip.py) checks
only the forms the compiler actually emits, and is weak where
real code is monotonous: for example it barely catches a swap of fields a and b,
because in accumulator style a and b often coincide.

Here the sweep goes by structure, not by what was encountered:
The sweep starts FROM THE ASSEMBLER SIDE: text is generated systematically (all
mnemonics x all registers x boundary immediates and offsets), it is
assembled into a word, the word is disassembled and assembled again. A
bit-for-bit match with the first word is required.

Why this way. If we swept words, don't-care bits would get in:
for example with op=0 (MOV) the hardware does not read field b at all: `aluRes` in that branch
never refers to B. A word with a nonzero b executes like one with zero, but
is not reproduced literally, and the sweep drowns in false positives. From the
assembler side the encoding is canonical, and any disagreement between the disassembler
and the assembler is real.

It also prints what share of the structurally meaningful word space
gets a mnemonic at all: this is the honest size of the unnamed part.
"""
import sys
sys.path.insert(0, "tools")
import asm
from disasm import disasm

IMM_EDGE  = [0, 1, -1, 0x7FFF, 0x8000, 0xFFFF, -0x8000, -0x8001, -0xFFFF, -0x10000]
OFF_EDGE  = [0, 1, -1, 0x7FFFF, -0x80000, 0x55555]
DISP_EDGE = [0, 1, -1, (1 << 21) - 1, -(1 << 21), 0x155555]
EDGE16 = [0, 1, 2, 0x7FFF, 0x8000, 0xFFFE, 0xFFFF, 0x5555, 0xAAAA]
EDGE20 = [0, 1, 0x7FFFF, 0x80000, 0xFFFFF, 0x55555, 0xAAAAA]
EDGE24 = [0, 1, 0x7FFFFF, 0x800000, 0xFFFFFF, 0x555555, 0xAAAAAA]
REGS = range(16)


def sources():
    """Systematic text: all forms, all registers, boundary values."""
    for op in sorted(asm.OPS):
        if op == 'MOV':        # MOV has its own form, swept below
            continue
        for a in REGS:
            for b in REGS:
                for c in REGS:
                    yield f'{op} R{a}, R{b}, R{c}'
                for n in IMM_EDGE:
                    yield f'{op} R{a}, R{b}, {n}'
    for op in sorted(asm.ALIAS):
        for a in REGS:
            for b in REGS:
                for c in REGS:
                    yield f'{op} R{a}, R{b}, R{c}'
    # forms with u/v bits that have no separate name
    for op in sorted(asm.OPS):
        if op == 'MOV':
            continue
        for suf in ('.u', '.v', '.uv'):
            for a in REGS:
                for b in REGS:
                    for c in REGS:
                        yield f'{op}{suf} R{a}, R{b}, R{c}'
                    # the v bit is set by the suffix, so the sign of the immediate
                    # must match it
                    for n in (IMM_EDGE if suf == '.u' else
                              [x for x in IMM_EDGE if x < 0]):
                        if suf == '.u' and n < 0:
                            continue
                        yield f'{op}{suf} R{a}, R{b}, {n}'
    for a in REGS:
        for c in REGS:
            yield f'MOV R{a}, R{c}'
        for n in IMM_EDGE:
            yield f'MOV R{a}, {n}'
        for n in (0, 1, 0x7FFF, 0x8000, 0xFFFF, 0x5555):
            yield f'MHI R{a}, 0x{n:04X}'
        yield f'MOV R{a}, H'
        yield f'MOV R{a}, NZCV'
        for mn in ('LD', 'LDB', 'ST', 'STB'):
            for b in REGS:
                for off in OFF_EDGE:
                    yield f'{mn} R{a}, R{b}, {off}'
    for cond in sorted(asm.COND):
        for link in ('', 'L'):
            mn = 'B' + link + cond
            for c in REGS:
                yield f'{mn} R{c}'
                # an odd payload without link decodes as RTI; the assembler
                # rejects such forms, so there is nothing to sweep here
                pays = (1, 0x7FFFF, 0xFFFFF, 0x55555) if link else \
                       (2, 0x7FFFE, 0xFFFFE, 0x55554)
                for pay in pays:
                    yield f'{mn} R{c}, 0x{pay:05X}'
            for off in DISP_EDGE:
                yield f'{mn} {off}'


def words():
    for u in (0, 1):
        for v in (0, 1):
            for op in range(16):
                for a in REGS:
                    for b in REGS:
                        for c in REGS:               # F0
                            yield ((u << 1 | v) << 28) | (a << 24) | (b << 20) | (op << 16) | c
                    for n in EDGE16:                 # F1
                        yield (0b0100 | u << 1 | v) << 28 | (a << 24) | (a << 20) | (op << 16) | n
    for u in (0, 1):                                 # F2
        for v in (0, 1):
            for a in REGS:
                for off in EDGE20:
                    yield (0b1000 | u << 1 | v) << 28 | (a << 24) | (a << 20) | off
    for u in (0, 1):                                 # F3
        for v in (0, 1):
            for cond in range(16):
                if u == 0:
                    for c in REGS:
                        for pay in EDGE20:
                            yield 0b1100 << 28 | (u << 29) | (v << 28) | (cond << 24) | (pay << 4) | c
                else:
                    for off in EDGE24:
                        yield 0b1100 << 28 | (u << 29) | (v << 28) | (cond << 24) | off


def main():
    n_src = 0
    fails = []
    for src in sources():
        n_src += 1
        w = asm.assemble("        " + src + "\n", raw=True)[0][0]
        txt = disasm(w)
        if txt is None:
            fails.append((w, src, "the disassembler gives no mnemonic")); continue
        try:
            back = asm.assemble("        " + txt + "\n", raw=True)[0][0]
        except Exception as e:
            fails.append((w, f"{src} -> {txt}", f"did not assemble: {e}")); continue
        if back != w:
            fails.append((w, f"{src} -> {txt}", f"-> {back:08X}"))

    total = named = 0
    for w in words():
        total += 1
        named += disasm(w & 0xFFFFFFFF) is not None
    print(f"  forms from the assembler: {n_src}, the loop closed on "
          f"{n_src - len(fails)}")
    print(f"  word coverage:      {named} of {total} structural words "
          f"get a mnemonic ({100.0*named/total:.1f}%)")
    if fails:
        print(f"\n❌ the loop did not close on {len(fails)} forms")
        for w, txt, why in fails[:10]:
            print(f"    {w:08X}  {txt}  {why}")
        if len(fails) > 10:
            print(f"    ... and {len(fails)-10} more")
        return 1
    print(f"\n✅ all {n_src} forms pass the assembler→disassembler→assembler loop")
    return 0


if __name__ == "__main__":
    sys.exit(main())
