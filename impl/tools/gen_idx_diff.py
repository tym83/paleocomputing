#!/usr/bin/env python3
"""Differential for the IDX instruction: model vs RTL vs the Norebo emulator.

Generates tests/t3_idx_rand.s: N random cases of "descriptor, index,
scale, flag state"; the expectations for each are computed by the model below,
written from the text of 14-episode-descriptors.md, not from the RTL. The same file
runs on the RTL core (build/obj_desc/run_tests_desc) and on the Norebo
processor (build/emu_tests, tb/emu_tests.c), the emulator all the compilation
measurements were taken on. Three independent descriptions of one instruction must agree.

The last case is a random out-of-bounds access: a trap, R15 = IDX address + 4.
"""
import pathlib, random, sys

ORG = 0x00FFE000
OUT = pathlib.Path(__file__).resolve().parent.parent / 'tests' / 't3_idx_rand.s'


def model_idx(desc, i, sh):
    """(result, trap?) per the episode's design, independent of the RTL."""
    length, adr = desc >> 20, desc & 0xFFFFF
    if i >= length:
        return None, True
    return (adr + (i << sh)) & 0xFFFFFF, False


def load32(r, v):
    return [f'MOV  R{r}, 0', f'MHI  R{r}, 0x{v >> 16:04X}', f'IOR  R{r}, R{r}, 0x{v & 0xFFFF:04X}']


def main(n=150, seed=14, out=OUT):   # 150 cases = 1666 words; 2048 fit from ORG
    rnd = random.Random(seed)
    body, exps = [], {}
    def emit(line, *e):
        body.append(line)
        if e: exps[len(body)] = list(e)   # the check fires when the machine reaches the next word
    for _ in range(n):
        length = rnd.choice([1, 2, 3, rnd.randint(1, 63), rnd.randint(1, 4095), 4095])
        adr = rnd.choice([0, 0xFFFFF, rnd.randint(0, 0xFFFFF)])
        d = (length << 20) | adr
        i = rnd.choice([0, length - 1, rnd.randint(0, length - 1)])
        sh = rnd.randint(0, 3)
        f = rnd.getrandbits(32)                      # R6: C and OV from ADD R7, R6, R6
        c, ov = f >> 31, ((f >> 31) ^ (f >> 30)) & 1
        dst = rnd.choice([3, 2])                     # sometimes destination = descriptor
        res, trap = model_idx(d, i, sh)
        assert not trap
        for l in load32(2, d) + load32(1, i) + load32(6, f):
            emit(l)
        emit('ADD  R7, R6, R6')
        emit(f'IDX  R{dst}, R2, R1, {sh}', f'R{dst} = {res}', f'C = {c}', f'V = {ov}',
             f'Z = {int(res == 0)}', 'N = 0', 'CYCLES = 1')
    # a random out-of-bounds access
    length = rnd.randint(1, 4095); d = (length << 20) | rnd.randint(0, 0xFFFFF)
    i = rnd.choice([length, rnd.randint(length, 0xFFFFFFFF)])
    assert model_idx(d, i, 2)[1]
    for l in load32(2, d) + load32(1, i):
        emit(l)
    emit('MOV  R3, 7')
    emit('IDX  R3, R2, R1, 2')
    idx_pos = len(body) - 1
    head = 4                                         # MOV R0 + three R12 instructions
    handler = ORG + 4 * (head + len(body) + 2)
    lines = ['; GENERATED FILE: edit tools/gen_idx_diff.py, not by hand.',
             f'; {n} random IDX (seed {seed}) and one random out-of-bounds access.',
             '        MOV  R0, 0'] + [f'        {l}' for l in load32(12, handler)]
    for k, l in enumerate(body):
        lines.append(f'        {l}')
        lines += [f'; EXPECT {e}' for e in exps.get(k + 1, [])]
    lines += ['        MOV  R4, 0x1111            ; must not execute', '        HALT',
              'handler:', '        MOV  R5, 0x2222',
              '; EXPECT R5 = 8738', '; EXPECT R4 = 0', '; EXPECT R3 = 7',
              f'; EXPECT R15 = {ORG + 4 * (head + idx_pos) + 4}', '        HALT']
    out = pathlib.Path(out)
    out.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print(f'  {out.name}: {n} cases')


if __name__ == '__main__':
    # arguments: [number of cases [seed [file]]]; QEMU takes a 512-word ROM,
    # so its comparison (qemu/test/compare_idx.py) generates its own short variant
    a = sys.argv[1:]
    main(*(int(x) for x in a[:2]), *(a[2:3]))
