#!/usr/bin/env python3
"""
Mini assembler for RISC5 (Project Oberon).

Encoding follows the architecture reference, checked against RISC.v:
  F0  00u0 | a | b | op |   (12 bits unused)   | 0000 | c     register-register
  F1  01uv | a | b | op |            n (16)                   register-immediate
  F2  10uv | a | b |              off (20)                    load/store
  F3  110v | cond |     (20 bits)     | 0000 | c              branch via register
  F3  111v | cond |            off (22)                       branch by offset

Purpose: directed ISA tests (see HARNESS.md). Not an optimizing or complete
assembler: exactly as much as the tests and the article listings need.
"""
import re, sys, struct

OPS = {  # opcode in bits 19:16
    'MOV':0, 'LSL':1, 'ASR':2, 'ROR':3,
    'AND':4, 'ANN':5, 'IOR':6, 'XOR':7,
    'ADD':8, 'SUB':9, 'MUL':10,'DIV':11,
    'FAD':12,'FSB':13,'FML':14,'FDV':15,
}
# forms with u=1
OPS_U = {'ADC':8, 'SBC':9, 'UMUL':10}

# Special forms of the floating-point adder. The flags come from FPAdder.v:
# `xe = u ? 8'h96 : x[30:23]`: with u=1 the operand is treated as an integer (FLT),
# `z = v ? … // FLOOR`: with v=1 the result is truncated to an integer (FLOOR).
OPS_FP = {'FLT': (12, 1, 0), 'FLOOR': (12, 0, 1)}

# Generic suffixes for the u and v bits. Most operations do not read these bits
# (verified by execution: tests/t1_dontcare.s), but the encoding allows them, and
# without such a form part of the space cannot be expressed. Where the bit MATTERS
# there is a readable name: ADC/SBC/UMUL/UDIV/FLT/FLOOR.
SUFFIX = {'.U': (1, 0), '.V': (0, 1), '.UV': (1, 1)}
# Readable names for the forms where the bit matters. The divider and multiplier
# receive ~u, so u=1 there means an unsigned operation; in the adder u/v select
# conversions between integer and floating point (FPAdder.v).
ALIAS = {'UDIV': ('DIV', 1, 0), 'FLT': ('FAD', 1, 0), 'FLOOR': ('FAD', 0, 1),
         'ADC': ('ADD', 1, 0), 'SBC': ('SUB', 1, 0), 'UMUL': ('MUL', 1, 0)}

COND = {
    'MI':0x0,'EQ':0x1,'CS':0x2,'VS':0x3,'LS':0x4,'LT':0x5,'LE':0x6,'':0x7,
    'PL':0x8,'NE':0x9,'CC':0xA,'VC':0xB,'HI':0xC,'GE':0xD,'GT':0xE,'NV':0xF,
}

# ⚠ REFUTED BY REVIEW (see design/REVIEW.md, reviewer 2, item 2).
# The original assumption "in F0 bit 28 is always 0, leaving 32 free slots" is WRONG.
# Per RISC5.v:68-71  p=IR[31] q=IR[30] u=IR[29] v=IR[28], format F0 = 00uv, and bit 28
# is already used: ORG.Floor -> Put0(Fad+V), ORG.Float -> Put0(Fad+U) (ORG.Mod:928-934).
# All 16 op values are taken. RISC5 has NO trap on an unknown instruction AT ALL:
# every 32-bit word is valid, so a wrong encoding executes silently.
#
# New encoding (requires an explicit narrowing of the decode in RTL:
#   assign FML = ~p & (op==14) & ~v;  ):
#   FMAC -> F0, op=14 (Fml), v=1   — reuse a don't-care bit, not a "free slot"
#   CHK  -> REQUIRES the F1 form with a 16-bit immediate limit, otherwise the saving is ZERO
#           (the array limit is a constant; today it goes into the immediate field of Cmp)
# The final encoding is not fixed until all five reviews are reconciled.
EXT_UNRESOLVED = True


class AsmError(Exception):
    pass


def reg(tok):
    m = re.fullmatch(r'R(\d{1,2})', tok.upper())
    if not m:
        raise AsmError(f'expected a register, got {tok!r}')
    n = int(m.group(1))
    if not 0 <= n <= 15:
        raise AsmError(f'register out of range: {tok}')
    return n


def imm(tok, bits, signed=True):
    tok = tok.strip()
    v = int(tok, 0)
    if signed:
        lo, hi = -(1 << (bits - 1)), (1 << (bits - 1)) - 1
    else:
        lo, hi = 0, (1 << bits) - 1
    if not lo <= v <= hi:
        raise AsmError(f'immediate {v} does not fit in {bits} bits '
                       f'({"signed" if signed else "unsigned"})')
    return v & ((1 << bits) - 1)


def f1_imm(tok):
    """F1-format immediate -> (v, field).

    The hardware builds the operand as C1 = {{16{v}}, imm} (RISC5.v). So the upper
    half is filled entirely with zeros or entirely with ones:
        v=0 -> 0 … 65535
        v=1 -> -65536 … -1
    This is NOT a 16-bit signed field: values from -65536 to -32769 are
    available to the hardware but were rejected by a signed reading. The real
    compiler emits them, e.g. SUB R0,R0,-65536 (word 50090000 in ORG.rsc).
    """
    n = int(tok.strip(), 0)
    if 0 <= n <= 0xFFFF:
        return 0, n
    if -0x10000 <= n <= -1:
        return 1, n & 0xFFFF
    raise AsmError(f'immediate {n} is not reachable with format F1 '
                   f'(available: -65536…65535)')


def is_reg(tok):
    return re.fullmatch(r'[Rr]\d{1,2}', tok.strip()) is not None


def enc_f0(u, a, b, op, c, v=0):
    return (((u << 1) | v) << 28) | (a << 24) | (b << 20) | (op << 16) | c


def enc_f1(u, v, a, b, op, n):
    return ((0b0100 | (u << 1) | v) << 28) | (a << 24) | (b << 20) | (op << 16) | (n & 0xFFFF)


def enc_f2(u, v, a, b, off):
    return ((0b1000 | (u << 1) | v) << 28) | (a << 24) | (b << 20) | (off & 0xFFFFF)


def enc_f3_reg(v, cond, c, pay=0):
    # The hardware does not read bits 23:4 in a branch via register, but ORG.Mod
    # puts the trap payload there: Put3(BLR, cond, Pos()*100H + num*10H + MT).
    # The trap handler extracts it back from the instruction itself and prints
    # "pos <position> TRAP <number>". Without this form the assembler could not
    # reproduce 7.6% of the real compiler's code.
    # An encoding collision found by exhaustive search: RTI = BR & ~u & ~v & IR[4].
    # A branch via register WITHOUT link (v=0) with an odd payload is executed by
    # the hardware as a return from interrupt, not as a branch. Oberon traps are
    # not affected: ORG.Mod emits them through BLR, i.e. with v=1.
    if v == 0 and (pay & 1):
        raise AsmError('a branch via register without link with an odd payload '
                       'is decoded by the hardware as RTI (IR[4]=1); use '
                       'the linked form or an even payload')
    return ((0b1100 | v) << 28) | (cond << 24) | ((pay & 0xFFFFF) << 4) | c


def enc_f3_off(v, cond, off):
    # ⚠ Three parts of Project Oberon disagree on the width of this field:
    #   ORG.Mod  (code generator): off MOD 1000000H  -> 24 bits
    #   RISC5.v  (hardware):       disp = IR[21:0]   -> 22 bits
    #   ORTool.Mod (disassembler): w MOD 100000H     -> 20 bits
    # The discrepancy is invisible: the 1 MB address space is 18 bits in words,
    # so nothing ever reaches the disputed bits.
    # We encode like ORG.Mod so the word matches what the real compiler emits;
    # the range is checked against the hardware (see _encode). That the hardware
    # ignores bits 23:22 is verified by execution: tests/t1_branch_width.s.
    return ((0b1110 | v) << 28) | (cond << 24) | (off & 0xFFFFFF)


class Assembler:
    """raw=True disables the branch range check.

    In a .rsc file, before the loader patches it, the branch field holds not an
    offset but a fixup record (module and procedure number). Such words are not
    executable branches, and the hardware's 22-bit limit does not apply to them.
    """
    def __init__(self):
        self.raw = False
        self.labels = {}
        self.expects = []   # (word_index, text): checks for the harness

    def assemble(self, text):
        lines = self._parse(text)
        self._pass1(lines)
        return self._pass2(lines), self.labels, self.expects

    # --- parsing -----------------------------------------------------
    def _parse(self, text):
        out = []
        for lineno, raw in enumerate(text.splitlines(), 1):
            # ; EXPECT ... is a harness directive, not code
            m = re.match(r'\s*;\s*EXPECT\s+(.*)', raw, re.I)
            if m:
                out.append(('expect', m.group(1).strip(), lineno))
                continue
            line = raw.split(';')[0].strip()
            if not line:
                continue
            m = re.match(r'([A-Za-z_]\w*):\s*(.*)', line)
            if m:
                out.append(('label', m.group(1), lineno))
                line = m.group(2).strip()
                if not line:
                    continue
            out.append(('insn', line, lineno))
        return out

    def _pass1(self, lines):
        pc = 0
        for kind, val, lineno in lines:
            if kind == 'label':
                if val in self.labels:
                    raise AsmError(f'line {lineno}: label {val} already defined')
                self.labels[val] = pc
            elif kind == 'insn':
                pc += 4

    def _pass2(self, lines):
        words = []
        for kind, val, lineno in lines:
            if kind == 'expect':
                self.expects.append((len(words), val))
            elif kind == 'insn':
                try:
                    words.append(self._encode(val, len(words) * 4))
                except AsmError as e:
                    raise AsmError(f'line {lineno}: {e}\n  {val}')
        return words

    # --- encoding ----------------------------------------------------
    def _encode(self, line, pc):
        parts = re.split(r'[\s,]+', line.strip())
        mn = parts[0].upper()
        args = [p for p in parts[1:] if p]

        if mn == 'HALT':                 # pseudo: B .  (infinite loop)
            return enc_f3_off(0, COND[''], -1)
        if mn == 'NOP':                  # pseudo: MOV R0, R0
            return enc_f0(0, 0, 0, OPS['MOV'], 0)
        if mn == 'WORD':                 # raw word
            return int(args[0], 0) & 0xFFFFFFFF

        # --- special encodings of format F3 (RISC5.v:96, 181)
        # RTI = BR & ~u & ~v & IR[4]           -> 1100 | cond=7 | IR[4]=1
        # STI/CLI: (BR & ~u & ~v & IR[5]) ? IR[0] -> 1100 | cond=7 | IR[5]=1 | IR[0]=e
        if mn == 'RTI':
            return (0b1100 << 28) | (COND[''] << 24) | (1 << 4)
        if mn in ('STI', 'CLI'):
            # Condition NV ("never"), NOT "always": otherwise the instruction would
            # branch via register c. The side effect (setting intEnb) in RISC5.v:181
            # does not depend on cond, so no branch is needed.
            return (0b1100 << 28) | (COND['NV'] << 24) | (1 << 5) | (1 if mn == 'STI' else 0)

        # --- CHK: hardware array bounds check
        # F0 | v=1 | op=1 (alias of LSL) | index in field b | limit in IR[15:4] | c=12 (MT)
        if mn in ('CHK', 'CHKN', 'CHKS'):
            # CHK  — 12-bit limit in IR[15:4], diagnostics break
            # CHKN — 8-bit limit in IR[15:8], trap number 1 stays in IR[7:4]
            if len(args) != 2:
                raise AsmError(f'{mn} requires: index register, limit')
            b = reg(args[0]); lim = int(args[1], 0)
            base = (0b0001 << 28) | (0 << 24) | (b << 20) | (1 << 16) | 12
            if mn == 'CHK':
                if not 0 <= lim <= 0xFFF:
                    raise AsmError(f'CHK limit {lim} does not fit in 12 bits (maximum 4095)')
                return base | (lim << 4)
            if mn == 'CHKN':
                if not 0 <= lim <= 0xFF:
                    raise AsmError(f'CHKN limit {lim} does not fit in 8 bits (maximum 255)')
                return base | (lim << 8) | (1 << 4)
            # CHKS — the ADOPTED variant: a 12-bit limit assembled from two pieces
            #   {IR[27:24], IR[15:8]}; trap number 1 stays in IR[7:4]
            if not 0 <= lim <= 0xFFF:
                raise AsmError(f'CHKS limit {lim} does not fit in 12 bits (maximum 4095)')
            return base | ((lim >> 8) << 24) | ((lim & 0xFF) << 8) | (1 << 4)

        # --- IDX: indexing through a descriptor (episode 14, 14-episode-descriptors.md)
        # F0 | v=1 | op=8 (alias of ADD) | a=destination | b=descriptor | c=index |
        # IR[9:8] = scale (shift 0..3) | IR[7:4] = 1 (trap number)
        #   IDX Rd, Rdesc, Ri, sh   ->  Rd := desc[19:0] + (Ri << sh),
        #   trap if Ri >= desc[31:20] (unsigned)
        if mn == 'IDX':
            if len(args) != 4:
                raise AsmError('IDX requires: destination, descriptor, index, shift 0..3')
            sh = int(args[3], 0)
            if not 0 <= sh <= 3:
                raise AsmError(f'IDX shift {sh} outside 0..3 (scale 1, 2, 4, 8 bytes)')
            return ((0b0001 << 28) | (reg(args[0]) << 24) | (reg(args[1]) << 20)
                    | (8 << 16) | (sh << 8) | (1 << 4) | reg(args[2]))

        if mn == 'FMAC':
            raise AsmError('FMAC moved to episode 2 (the speedup was refuted by measurement)')

        # --- memory
        if mn in ('LD', 'LDB', 'ST', 'STB'):
            u = 1 if mn.startswith('ST') else 0
            v = 1 if mn.endswith('B') else 0
            if len(args) != 3:
                raise AsmError(f'{mn} requires a, b, off')
            return enc_f2(u, v, reg(args[0]), reg(args[1]), imm(args[2], 20))

        # --- branches
        m = re.fullmatch(r'(B|BL)(MI|EQ|CS|VS|LS|LT|LE|PL|NE|CC|VC|HI|GE|GT|NV)?', mn)
        if m:
            v = 1 if m.group(1) == 'BL' else 0
            cond = COND[m.group(2) or '']
            if len(args) not in (1, 2):
                raise AsmError(f'{mn} requires one argument '
                               f'(or two: a register and a trap payload)')
            tgt = args[0]
            if is_reg(tgt):
                pay = imm(args[1], 20, signed=False) if len(args) == 2 else 0
                return enc_f3_reg(v, cond, reg(tgt), pay)
            if tgt in self.labels:
                # PC = PC + 4 + off*4  ->  off = (target - pc - 4) / 4
                off = (self.labels[tgt] - pc - 4) // 4
            else:
                off = int(tgt, 0)
            if not self.raw and not -(1 << 21) <= off <= (1 << 21) - 1:
                raise AsmError(
                    f'branch offset {off} outside the 22-bit range '
                    f'(RISC5.v reads only IR[21:0])')
            return enc_f3_off(v, cond, off)

        # --- MHI (F1, u=1, op=MOV)
        if mn == 'MHI':
            if len(args) != 2:
                raise AsmError('MHI requires a, n')
            return enc_f1(1, 0, reg(args[0]), 0, OPS['MOV'], imm(args[1], 16, signed=False))

        # --- MOV a, H  (F0, u=1, op=MOV, b=0)
        if mn == 'MOVH':
            if len(args) != 1:
                raise AsmError('MOVH requires a')
            return enc_f0(1, reg(args[0]), 0, OPS['MOV'], 0)

        # --- aliases and u/v suffixes
        uv = None
        if mn in ALIAS:
            base, uu, vv = ALIAS[mn]; mn, uv = base, (uu, vv)
        else:
            for suf, bits in SUFFIX.items():
                if mn.endswith(suf) and mn[:-len(suf)] in OPS:
                    mn, uv = mn[:-len(suf)], bits
                    break
        if uv is not None:
            uu, vv = uv
            if len(args) != 3:
                raise AsmError(f'{mn} requires a, b and a register or an immediate')
            if is_reg(args[2]):
                return enc_f0(uu, reg(args[0]), reg(args[1]), OPS[mn],
                              reg(args[2]), v=vv)
            # In format F1 the v bit also sets the fill of the operand's upper
            # half, and here it is already taken by the form. So the immediate
            # must agree with it: with v=0 the range is 0…65535,
            # with v=1 only -65536…-1.
            v_need, n = f1_imm(args[2])
            if v_need != vv:
                raise AsmError(
                    f'{mn} sets v={vv}, but immediate {args[2]} requires '
                    f'v={v_need} (with v=0 the range is 0…65535, with v=1 -65536…-1)')
            return enc_f1(uu, vv, reg(args[0]), reg(args[1]), OPS[mn], n)

        # --- register/immediate
        op = OPS.get(mn)
        u = 0
        if op is None:
            op = OPS_U.get(mn)
            if op is None:
                raise AsmError(f'unknown mnemonic {mn}')
            u = 1

        if mn == 'MOV':
            if len(args) != 2:
                raise AsmError('MOV requires a, n')
            a, src = reg(args[0]), args[1]
            if is_reg(src):
                return enc_f0(0, a, 0, OPS['MOV'], reg(src))
            # Special forms of MOV. There is no ambiguity; reading RISC5.v resolves it:
            #   aluRes = … (~u ? C0 : (~v ? H : {N,Z,C,OV,20'b0,8'h53}))
            # i.e.    u=1,v=0 -> H (high word of the product / remainder),
            #         u=1,v=1 -> the flags register.
            if src.upper() == 'H':
                return enc_f0(1, a, 0, OPS['MOV'], 0, v=0)
            if src.upper() == 'NZCV':
                return enc_f0(1, a, 0, OPS['MOV'], 0, v=1)
            v, n = f1_imm(src)
            return enc_f1(0, v, a, 0, OPS['MOV'], n)

        if len(args) != 3:
            raise AsmError(f'{mn} requires a, b, n')
        a, b, src = reg(args[0]), reg(args[1]), args[2]
        if is_reg(src):
            return enc_f0(u, a, b, op, reg(src))
        v, n = f1_imm(src)
        return enc_f1(u, v, a, b, op, n)


def assemble(text, raw=False):
    a = Assembler(); a.raw = raw
    return a.assemble(text)


# ---------------------------------------------------------------- self-test
SELFTEST = r'''
start:  MOV  R0, 0
        MOV  R1, 100
        ST   R1, R0, 0
        MOV  R2, -1
        LD   R3, R0, 0
; EXPECT R3 = 100
; EXPECT Z = 0
        ADD  R4, R3, R1
        SUB  R5, R4, 1
        MUL  R6, R1, R1
        MOVH R7
        FAD  R8, R1, R2
        LSL  R10, R1, 4
        ASR  R11, R1, 2
loop:   SUB  R1, R1, 1
        BNE  loop
        BL   subr
        HALT
subr:   MOV  R12, 7
        B    R15
'''

def _selftest():
    words, labels, expects = assemble(SELFTEST)
    print(f'words assembled: {len(words)}')
    print(f'labels: {labels}')
    print(f'EXPECT checks: {len(expects)} -> {expects}')
    print()
    for i, w in enumerate(words):
        print(f'  {i*4:04X}: {w:08X}   {w>>28:04b} {(w>>24)&0xF:04b} '
              f'{(w>>20)&0xF:04b} {(w>>16)&0xF:04b}')

    fails = []
    def chk(name, got, want):
        if got != want:
            fails.append(f'{name}: got {got:08X}, expected {want:08X}')

    def must_fail(name, text):
        """The assembler must reject what the hardware would not execute as written."""
        try:
            assemble(text)
        except AsmError:
            return
        fails.append(f'{name}: accepted, but should have been rejected')

    # The branch offset is 22 bits wide (RISC5.v: disp = IR[21:0]).
    # The assembler used to mask 24 bits and silently encode an unreachable target.
    must_fail('B outside 22 bits (+)', '        B 2097152\n')     # 1<<21
    must_fail('B outside 22 bits (-)', '        B -2097153\n')    # -(1<<21)-1
    # A collision found by exhaustive search: without link and with an odd payload
    # the hardware executes RTI, not a branch. Confirmed by execution: tests/t1_irq.s.
    must_fail('B R0 with an odd payload', '        B R0, 1\n')
    chk('BL R12 with payload', assemble('        BL R12, 0x0AED4\n')[0][0], 0xD70AED4C)
    chk('MOV R0, H',    assemble('        MOV R0, H\n')[0][0],    0x20000000)
    chk('MOV R0, NZCV', assemble('        MOV R0, NZCV\n')[0][0], 0x30000000)
    chk('FLT R1,R1,R2', assemble('        FLT R1, R1, R2\n')[0][0], 0x211C0002)
    chk('B +2097151',  assemble('        B 2097151\n')[0][0],  0xE71FFFFF)
    chk('B -2097152',  assemble('        B -2097152\n')[0][0], 0xE7E00000)
    chk('IDX R3,R2,R1,2', assemble('        IDX R3, R2, R1, 2\n')[0][0], 0x13280211)
    must_fail('IDX shift 4', '        IDX R3, R2, R1, 4\n')

    # Encoding breakdown: [31:28] format | [27:24] a | [23:20] b | [19:16] op | rest
    # MOV R0,0    F1 u=0 v=0 -> 0100 | a=0 | b=0 | op=0 | n=0
    chk('MOV R0,0',      words[0],  0x40000000)
    # MOV R1,100  0100 | a=1 | b=0 | op=0 | n=0x64
    chk('MOV R1,100',    words[1],  0x41000064)
    # ST R1,R0,0  F2 u=1 v=0 -> 1010 | a=1 | b=0 | off=0
    chk('ST R1,R0,0',    words[2],  0xA1000000)
    # MOV R2,-1   F1 u=0 v=1 -> 0101 | a=2 | b=0 | op=0 | n=0xFFFF
    chk('MOV R2,-1',     words[3],  0x5200FFFF)
    # LD R3,R0,0  F2 u=0 v=0 -> 1000 | a=3 | b=0 | off=0
    chk('LD R3,R0,0',    words[4],  0x83000000)
    # ADD R4,R3,R1 F0 u=0 -> 0000 | a=4 | b=3 | op=8 | c=1
    chk('ADD R4,R3,R1',  words[5],  0x04380001)
    # MUL R6,R1,R1 F0 -> 0000 | a=6 | b=1 | op=10 | c=1
    chk('MUL R6,R1,R1',  words[7],  0x061A0001)
    # MOVH R7     F0 u=1 -> 0010 | a=7 | b=0 | op=0 | c=0
    chk('MOVH R7',       words[8],  0x27000000)
    # BNE loop  pc=0x34, loop=0x30 -> off=-2; 1110 | cond=NE(9) | 0xFFFFFE
    chk('BNE loop',      words[13], 0xE9FFFFFE)
    # BL subr -> off=1; 1111 | cond=always(7) | 1
    chk('BL subr',       words[14], 0xF7000001)
    # HALT = B .  -> 1110 | 7 | off=-1
    chk('HALT',          words[15], 0xE7FFFFFF)
    # B R15  F3 reg v=0 -> 1100 | cond=7 | c=15
    chk('B R15',         words[17], 0xC700000F)

    print()
    if fails:
        print('❌ SELF-TEST FAILED:')
        for f in fails: print('   ', f)
        return 1
    print('✅ self-test passed')
    return 0


def main():
    import json, os
    if len(sys.argv) > 1 and sys.argv[1] == '--selftest':
        sys.exit(_selftest())
    if len(sys.argv) < 2:
        print('usage: asm.py FILE.s [-o OUT]  ->  OUT.bin + OUT.chk', file=sys.stderr)
        sys.exit(1)
    src_path = sys.argv[1]
    out = sys.argv[3] if len(sys.argv) > 3 and sys.argv[2] == '-o' else os.path.splitext(src_path)[0]
    words, labels, expects = assemble(open(src_path).read())
    with open(out + '.bin', 'wb') as f:
        for w in words:
            f.write(struct.pack('<I', w))
    # Line-based format so the C++ testbench can read it without a JSON library:
    #   <after how many instructions>  <name>  <value>
    with open(out + '.chk', 'w') as f:
        f.write(f'# words {len(words)}\n')
        for i, e in expects:
            m = re.match(r'([A-Za-z_]\w*)\s*=\s*(\S+)', e)
            if not m:
                raise AsmError(f'cannot parse EXPECT: {e!r}')
            name, val = m.group(1).upper(), m.group(2)
            f.write(f'{i} {name} {int(val, 0)}\n')
    print(f'{out}.bin: {len(words)} words, {len(expects)} checks')


if __name__ == '__main__':
    main()
