#!/usr/bin/env python3
"""Cross-check of floating point against the reference.

Wirth's unit is not IEEE 754: rounding by adding one, flush to zero instead of
subnormals, infinity only from division by zero. It cannot be checked by
"common sense", only by comparison with what the circuit does.

The reference is ext/refemu/risc-fp.c, already checked against the real
circuit description.

  fp_diff.py <machine output> <reference values>

The set covers zeros of both signs, one, powers of two, the largest finite,
the smallest normal, a subnormal, infinity and garbage.
"""
import struct, sys, pathlib

VALS = [0x00000000, 0x80000000, 0x3F800000, 0xBF800000, 0x40000000, 0x40490FDB,
        0x7F7FFFFF, 0x00800000, 0x00000001, 0x41200000, 0xC1200000, 0x3DCCCCCD,
        0x4B000000, 0x33D6BF95, 0x7F800000, 0x00000002]


def main(out_path, exp_path):
    raw = pathlib.Path(out_path).read_bytes()
    got = list(struct.unpack('<%dI' % (len(raw) // 4), raw))

    exp = {}
    for line in pathlib.Path(exp_path).read_text().splitlines():
        x, y, op, r = line.split()
        exp[(x, y, op)] = r

    ok = bad = 0
    shown = []
    k = 0

    def check(key, label):
        nonlocal ok, bad, k
        want = exp[key]
        have = f'{got[k]:08X}'
        k += 1
        if want == have:
            ok += 1
        else:
            bad += 1
            if len(shown) < 5:
                shown.append(f'  {label}: expected {want}, got {have}')

    for i in VALS:
        for j in VALS:
            for op in ('ADD', 'SUB', 'MUL', 'DIV'):
                check((f'{i:08X}', f'{j:08X}', op), f'{i:08X} {op} {j:08X}')
    # ⚠ For conversions the second operand is ZERO, not the same number. The
    # first check passed the same value twice and produced 24 false mismatches.
    for i in VALS:
        for op in ('FLT', 'FLR'):
            check((f'{i:08X}', '00000000', op), f'{i:08X} {op}')

    print(f'cases checked: {ok + bad}')
    if bad:
        print(f'❌ mismatches: {bad}')
        print('\n'.join(shown))
        return 1
    print('✅ all match the reference')
    return 0


if __name__ == '__main__':
    sys.exit(main(*sys.argv[1:3]))
