#!/usr/bin/env python3
"""Model of the RISC5 integer core, written from RISC5.v.

Needed for a semantic differential: the round trip "assembler -> disassembler ->
assembler" uses one field layout in both directions and cannot see a shared bug
in it. The model does NOT share the layout: it is written separately, from the
Verilog text, and is checked against the hardware by result and flags.

Sources in RISC5.v:
  aluRes — the operation table;
  nn = regwr ? aluRes[31] : N          — sign
  zz = regwr ? (aluRes == 0) : Z       — zero
  cx = ADD ? (~sb&sc&~sa)|(sb&sc&sa)|(sb&~sa)
     : SUB ? (~sb&sc&~sa)|(sb&sc&sa)|(~sb&sa) : C
  vv = ADD ? (sa&~sb&~sc)|(~sa&sb&sc)
     : SUB ? (sa&~sb&sc)|(~sa&sb&~sc) : OV
  where sa = aluRes[31], sb = B[31], sc = C1[31]
  H <= MUL ? product[63:32] : DIV ? remainder : H
The multiplier and divider receive an INVERTED u (RISC5.v:54,57), so
u=0 means signed operations, u=1 unsigned (divider) and mixed (multiplier).
"""
M32 = 0xFFFFFFFF


def s32(x): return x - (1 << 32) if x & 0x80000000 else x


class State:
    def __init__(self):
        self.R = [0] * 16
        self.N = self.Z = self.C = self.V = 0
        self.H = 0


OPNAME = ['MOV','LSL','ASR','ROR','AND','ANN','IOR','XOR',
          'ADD','SUB','MUL','DIV','FAD','FSB','FML','FDV']


def decode(w):
    """Operation name and flags, from fields read independently of the assembler."""
    w &= M32
    if (w >> 31) & 1:
        return None
    return (OPNAME[(w >> 16) & 0xF], (w >> 29) & 1, (w >> 28) & 1,
            (w >> 30) & 1, (w >> 24) & 0xF)          # op, u, v, q(immediate), a


def step(st, w):
    """Execute one word of format F0/F1. Returns False if unsupported."""
    w &= M32
    p, q, u, v = (w >> 31) & 1, (w >> 30) & 1, (w >> 29) & 1, (w >> 28) & 1
    if p:
        return False                                   # memory and branches are outside the model
    a, b, op, c = (w >> 24) & 0xF, (w >> 20) & 0xF, (w >> 16) & 0xF, w & 0xF
    imm = w & 0xFFFF

    B = st.R[b]
    C0 = st.R[c]
    C1 = ((0xFFFF0000 if v else 0) | imm) if q else C0   # C1 = q ? {{16{v}},imm} : C0

    if op == 0:                                         # MOV
        if q:
            res = (imm << 16) & M32 if u else C1
        elif not u:
            res = C0
        else:
            res = st.H if not v else (
                (st.N << 31) | (st.Z << 30) | (st.C << 29) | (st.V << 28) | 0x53)
    elif op == 1: res = (B << (C1 & 31)) & M32                       # LSL
    elif op == 2:                                                    # ASR
        sc_ = C1 & 31
        res = ((s32(B) >> sc_) if sc_ else B) & M32
    elif op == 3:                                                    # ROR
        sc_ = C1 & 31
        res = ((B >> sc_) | (B << (32 - sc_))) & M32 if sc_ else B
    elif op == 4: res = B & C1
    elif op == 5: res = B & (~C1 & M32)
    elif op == 6: res = B | C1
    elif op == 7: res = B ^ C1
    elif op == 8: res = (B + C1 + (st.C if u else 0)) & M32          # ADD / ADC
    elif op == 9: res = (B - C1 - (st.C if u else 0)) & M32          # SUB / SBC
    elif op == 10:                                                   # MUL / UMUL
        # the multiplier adds x shifted y bit by bit WITH SIGN, and with u=1
        # (instruction u=0) subtracts a correction for the sign of x -> signed multiplication
        prod = (s32(B) if not u else B) * s32(C1)
        res = prod & M32
        st.H = (prod >> 32) & M32
    elif op == 11:                                                   # DIV / UDIV
        if C1 == 0:
            return False                                # division by zero is outside the model
        if u:
            res, st.H = (B // C1) & M32, (B % C1) & M32
        else:
            x, y = s32(B), s32(C1)
            if y <= 0:
                return False                            # the divider assumes y > 0
            res, st.H = (x // y) & M32, (x % y) & M32   # division rounding down
    else:
        return False                                    # floating point is outside the model

    sa, sb, sc_ = (res >> 31) & 1, (B >> 31) & 1, (C1 >> 31) & 1
    if op == 8:
        st.C = (~sb & sc_ & ~sa) | (sb & sc_ & sa) | (sb & ~sa)
        st.V = (sa & ~sb & ~sc_) | (~sa & sb & sc_)
    elif op == 9:
        st.C = (~sb & sc_ & ~sa) | (sb & sc_ & sa) | (~sb & sa)
        st.V = (sa & ~sb & sc_) | (~sa & sb & ~sc_)
    st.C &= 1; st.V &= 1
    st.N, st.Z = sa, int(res == 0)
    st.R[a] = res
    return True
