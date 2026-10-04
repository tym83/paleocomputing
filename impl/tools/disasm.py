#!/usr/bin/env python3
"""RISC5 disassembler, derived from RISC5.v.

Format fields and flags are taken from the hardware decoder itself:
  p=IR[31] q=IR[30] u=IR[29] v=IR[28]
  a=IR[27:24] b=IR[23:20] op=IR[19:16] c=IR[3:0]
  imm=IR[15:0] (F1)  off=IR[19:0] (F2)  disp=IR[21:0] (F3, see below)
  C1 = q ? {{16{v}}, imm} : C0        — v sets the fill of the upper half
  LDR = p&~q&~u   STR = p&~q&u   BR = p&q

Emits text in the syntax that tools/asm.py accepts, so that
disassembly and reassembly form a closed loop.

The branch offset is printed as 24 signed bits: that is what
ORG.Mod emits (`off MOD 1000000H`). The hardware reads only 22; see finding 24.
"""
import sys

MNEMO = ['MOV', 'LSL', 'ASR', 'ROR', 'AND', 'ANN', 'IOR', 'XOR',
         'ADD', 'SUB', 'MUL', 'DIV', 'FAD', 'FSB', 'FML', 'FDV']
U_FORM = {8: 'ADC', 9: 'SBC', 10: 'UMUL', 11: 'UDIV'}
# Suffixes for forms whose u/v have no separate name. For most
# operations the hardware does not read these bits (tests/t1_dontcare.s); we keep the
# encoding for exact reproduction.
SUF = {(1, 0): '.u', (0, 1): '.v', (1, 1): '.uv'}
COND = ['MI', 'EQ', 'CS', 'VS', 'LS', 'LT', 'LE', '',
        'PL', 'NE', 'CC', 'VC', 'HI', 'GE', 'GT', 'NV']


def sx(v, bits):
    return v - (1 << bits) if v & (1 << (bits - 1)) else v


def disasm(w):
    w &= 0xFFFFFFFF
    p, q, u, v = (w >> 31) & 1, (w >> 30) & 1, (w >> 29) & 1, (w >> 28) & 1
    a, b, op, c = (w >> 24) & 0xF, (w >> 20) & 0xF, (w >> 16) & 0xF, w & 0xF
    imm = w & 0xFFFF

    if p == 0:                                   # F0 / F1: register class
        if op == 0:                              # MOV in all its forms
            if q == 0:
                if u == 0:   return f'MOV R{a}, R{c}'
                return f'MOV R{a}, H' if v == 0 else f'MOV R{a}, NZCV'
            if u == 1:       return f'MHI R{a}, 0x{imm:04X}'
            return f'MOV R{a}, {imm if v == 0 else imm - 0x10000}'

        # A short name is given only where the bit really matters and the form
        # is named: ADC/SBC/UMUL/UDIV with u=1,v=0 and FLT/FLOOR in the adder.
        # Everything else gets a suffix, otherwise the v bit would be lost when parsing.
        if u == 1 and v == 0 and op in U_FORM:   name = U_FORM[op]
        elif op == 12 and (u, v) == (1, 0):      name = 'FLT'
        elif op == 12 and (u, v) == (0, 1):      name = 'FLOOR'
        elif (u, v) != (0, 0):                   name = MNEMO[op] + SUF[(u, v)]
        else:                                    name = MNEMO[op]

        if q == 0:
            return f'{name} R{a}, R{b}, R{c}'
        n = imm if v == 0 else imm - 0x10000
        return f'{name} R{a}, R{b}, {n}'

    if q == 0:                                   # F2: memory access
        mn = ('ST' if u else 'LD') + ('B' if v else '')
        return f'{mn} R{a}, R{b}, {sx(w & 0xFFFFF, 20)}'

    # F3: branches
    if u == 0 and v == 0 and (w >> 4) & 1:       # BR & ~u & ~v & IR[4]
        return 'RTI'
    mn = 'B' + ('L' if v else '') + COND[a]
    if u == 1:
        return f'{mn} {sx(w & 0xFFFFFF, 24)}'
    pay = (w >> 4) & 0xFFFFF          # trap payload: position and number
    return f'{mn} R{c}' if pay == 0 else f'{mn} R{c}, 0x{pay:05X}'


if __name__ == '__main__':
    for arg in sys.argv[1:]:
        w = int(arg, 16)
        print(f'{w:08X}  {disasm(w) or "(no mnemonic)"}')
