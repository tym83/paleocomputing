#!/usr/bin/env python3
"""Directed tests for the IDX instruction (indexing through a descriptor, episode 14).

Generated, not written by hand: the trap handler address (R12 = MT) and
the expected R15 = IDX address + 4 are computed from the word count, not written out.
The manual word count in t2_chk.s relied on twelve WORD 0 for alignment.

The descriptor is {length[31:20], address[19:0]}. Each file is one scenario:

  t3_idx        legal indices: address + (i << sh) for sh = 0..3, flags C/OV
                untouched, N/Z from the result, 1 cycle; then i = length -> trap
  t3_idx_neg    index -1 (unsigned, huge) -> trap
  t3_idx_hi     index 0x1001 with length 10: the low 12 bits (1) are below the length,
                only the check of the upper 20 bits of the index catches it
  t3_idx_zero   a plain address (length 0) as a descriptor, index 0 -> trap:
                no descriptor, no access
  t3_idx_max    length 4095 and address 0xFFFFF: extreme field values

In every trapping scenario we check: control reaches the handler (R5),
the IDX destination is not written, the instruction after IDX did not execute, R15 = IDX address + 4.
"""
import pathlib

ORG = 0x00FFE000
OUT = pathlib.Path(__file__).resolve().parent.parent / 'tests'


def desc(length, adr):
    return (length << 20) | adr


def load32(r, val):
    """R := val in three instructions: MOV 0, MHI the upper half, IOR the lower."""
    return [f'MOV  R{r}, 0', f'MHI  R{r}, 0x{val >> 16:04X}', f'IOR  R{r}, R{r}, 0x{val & 0xFFFF:04X}']


def build(name, what, body, trap):
    """body is a list of (instruction, [expectations]); trap is the index of the IDX
    instruction that must fire (or None). The handler is placed right after the body."""
    head = ['MOV  R0, 0'] + load32(12, 0)  # R12 is filled in once the address is known
    words = len(head) + len(body) + 2      # + MOV R4 (must not execute) + HALT
    handler = ORG + 4 * words
    head = ['MOV  R0, 0'] + load32(12, handler)
    lines = [f'; GENERATED FILE: edit tools/gen_idx_tests.py, not by hand.',
             f'; {name}: {what}']
    lines += [f'        {h}' for h in head]
    idx_adr = None
    for k, (insn, exps) in enumerate(body):
        if k == trap:
            idx_adr = ORG + 4 * (len(head) + k)
        lines.append(f'        {insn}')
        lines += [f'; EXPECT {e}' for e in exps]
    lines += ['        MOV  R4, 0x1111            ; must not execute', '        HALT']
    lines += ['handler:', '        MOV  R5, 0x2222']
    if trap is not None:
        lines += ['; EXPECT R5 = 8738', '; EXPECT R4 = 0', f'; EXPECT R15 = {idx_adr + 4}',
                  '; EXPECT R3 = 7']
    lines.append('        HALT')
    (OUT / f'{name}.s').write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print(f'  {name}.s')


def trap_case(name, what, d, i):
    body = [(l, []) for l in load32(2, d)] + [(l, []) for l in load32(1, i & 0xFFFFFFFF)]
    body += [('MOV  R3, 7                  ; destination: must stay 7', [])]
    body += [('IDX  R3, R2, R1, 2', [])]
    build(name, what, body, trap=len(body) - 1)


def main():
    D = desc(10, 0x1000)
    body = [(l, []) for l in load32(2, D)]
    body += [('MOV  R6, -1', []),
             ('ADD  R7, R6, R6             ; C=1 (carry), N=1', []),
             ('MOV  R1, 3', [])]
    # MOV does not touch C: we reach IDX with C=1. IDX must leave it alone.
    for sh in range(4):
        body.append((f'IDX  R3, R2, R1, {sh}',
                     [f'R3 = {0x1000 + (3 << sh)}', 'C = 1', 'N = 0', 'Z = 0', 'CYCLES = 1']))
    body += [('MOV  R1, 9                  ; last legal index', []),
             ('IDX  R2, R2, R1, 1           ; destination = descriptor: written in place',
              [f'R2 = {0x1000 + 18}', 'CYCLES = 1'])]
    body += [(l, []) for l in load32(2, D)]
    body += [('MOV  R3, 7', []),
             ('MOV  R1, 10                 ; index = length', []),
             ('IDX  R3, R2, R1, 2', [])]
    build('t3_idx', 'legal indices, then index = length', body, trap=len(body) - 1)
    trap_case('t3_idx_neg', 'index -1', D, -1)
    trap_case('t3_idx_hi', 'index 0x1001 with length 10 (upper bits of the index)', D, 0x1001)
    trap_case('t3_idx_zero', 'plain address 0x1000 (length 0) as a descriptor', 0x1000, 0)
    M = desc(4095, 0xFFFFF)
    body = [(l, []) for l in load32(2, M)] + [('MOV  R1, 4094', [])]
    body += [('IDX  R3, R2, R1, 3', [f'R3 = {0xFFFFF + (4094 << 3)}', 'CYCLES = 1'])]
    body += [('MOV  R3, 7', []), ('MOV  R1, 4095', []), ('IDX  R3, R2, R1, 3', [])]
    build('t3_idx_max', 'length 4095, address 0xFFFFF', body, trap=len(body) - 1)


if __name__ == '__main__':
    main()
