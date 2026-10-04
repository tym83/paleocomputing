#!/usr/bin/env python3
"""Workload for the central number: array indexing with a bounds check.

Two builds of THE SAME loop body:

    B (stock)    SUB RH, i, lim ; BCC trap   — what ORG.Index emits today
    E (hardware) CHKS i, lim                 — the same thing in one instruction

Everything else (address computation, element load, accumulation) is byte for byte
identical. The difference in cycles is the cost of the bounds check and nothing else.

⚠ Both files are generated from one template. Two copies of the loop would diverge at
the very first edit, and the number would become a comparison of two different programs; this
has already happened in this repository.

The program is placed in ROM (ORG = 0x00FFE000), like all directed tests: the machine
executes it straight from reset. The loop is deliberately longer than the measurement budget: both programs run EXACTLY the same
number of instructions, and the completed iterations are read from the counter R5. That way there is no need
to catch the moment of completion; otherwise an idle tail gets into the numbers, and the difference
comes out ten times larger than the real one (verified: that is what happened).
"""
import pathlib, sys

ORG      = 0x00FFE000
HANDLER  = ORG + 4          # the handler sits right after the first branch instruction
LIM      = 64               # array size; a power of two, so the index wraps with a mask
ITER     = 1000000          # loop iterations, deliberately more than the measurement budget
DONE     = 0x100            # address of the signal word
MAGIC    = 0xB0DE

HEAD = """; GENERATED FILE: edit tools/gen_bounds_bench.py, not by hand.
;
; Array indexing in a loop, {iter} iterations, limit {lim}.
; Configuration {cfg}: {what}
        B    start
handler:                       ; trap: must never get here
        MOV  R7, 0x0BAD
        ST   R7, R0, {done_bad}
spin:   B    spin
start:
        MOV  R0, 0
        MOV  R1, 0             ; index
        MOV  R2, 0x1000        ; array base
{desc}        MOV  R4, 0             ; accumulator
        MOV  R5, 0             ; iteration counter
        MHI  R5, 0x{iterhi:04X}
        IOR  R5, R5, 0x{iterlo:04X}
        MOV  R12, 0            ; MT: trap handler address
        MHI  R12, 0x{hi:04X}
        IOR  R12, R12, 0x{lo:04X}
loop:
"""

CHECK = {
    'B': "        SUB  R11, R1, {lim}    ; Cmp: index - limit, only for the flags\n"
         "        BCC  handler           ; unsigned i >= lim -> trap\n",
    'E': "        CHKS R1, {lim}         ; the same in one instruction\n",
}

# Configuration D (episode 14): the limit travels in the pointer. R2 holds not an address but
# a descriptor {length[31:20], address[19:0]}, built once, outside the loop, as
# in CHERI. IDX checks the index and immediately yields the element address: LSL + ADD move
# into the instruction. So D is compared not only with B and E but also with A, and
# the difference D − A is called by its own name: it is the fusion of address arithmetic,
# not the cost of the check (the check inside IDX adds no cycles).
D_BODY = """        IDX  R10, R2, R1, 2    ; check + element address in one instruction
        LD   R3, R10, 0
"""

ADDR = """        LSL  R10, R1, 2        ; element address
        ADD  R10, R2, R10
        LD   R3, R10, 0
"""

TAIL = """        ADD  R4, R4, R3        ; useful work
        ADD  R1, R1, 1         ; next index, with wraparound
        AND  R1, R1, {mask}
        SUB  R5, R5, 1
        BNE  loop
        MOV  R6, 0x{magic:04X}
        ST   R6, R0, {done}
done:   B    done
"""

WHAT = {'A': 'no check (the derived line of finding 61, measured here)',
        'B': 'software bounds check (SUB + BCC)',
        'E': 'hardware bounds check (CHKS)',
        'D': 'descriptor: check and address in a single IDX'}


def emit(cfg):
    body = HEAD.format(iter=ITER, lim=LIM, cfg=cfg, what=WHAT[cfg],
                       done_bad=DONE + 4, hi=HANDLER >> 16, lo=HANDLER & 0xFFFF,
                       iterhi=ITER >> 16, iterlo=ITER & 0xFFFF,
                       desc=f"        MHI  R11, 0x{LIM << 4:04X}      ; length in the upper 12 bits\n"
                            f"        IOR  R2, R2, R11       ; R2 is the descriptor\n" if cfg == 'D' else '')
    if cfg == 'D':
        body += D_BODY
    else:
        body += CHECK.get(cfg, '').format(lim=LIM) + ADDR
    body += TAIL.format(mask=LIM - 1, magic=MAGIC, done=DONE)
    return body


def main():
    out = pathlib.Path(__file__).resolve().parent.parent / 'tests'
    for cfg, name in (('B', 'bench_bounds_b'), ('E', 'bench_bounds_e'),
                      ('A', 'bench_bounds_a'), ('D', 'bench_bounds_d')):
        (out / f'{name}.s').write_text(emit(cfg), encoding='utf-8')
        print(f'  {name}.s — configuration {cfg}')
    # The page needs the parameters too: keep them in one place, not two.
    (out / 'bench_bounds.json').write_text(
        '{"org": %d, "iterations": %d, "limit": %d, "done": %d, "magic": %d,'
        ' "counter": 5, "budget": 2000000}\n'
        % (ORG, ITER, LIM, DONE, MAGIC), encoding='utf-8')
    print(f'  bench_bounds.json — {ITER} iterations, limit {LIM}')


if __name__ == '__main__':
    main()
