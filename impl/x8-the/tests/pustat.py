#!/usr/bin/env python3
"""Decode the punch tape of the X8 test program (X8Stest.elan): after every
test 'pustat' punches A, S and T as four octades each (6 + 7 + 7 + 7 bits,
odd parity in the eighth hole). Prints one line per test."""
import sys

data = open(sys.argv[1], 'rb').read()
bad = 0
tests = []
i = 0
while i + 12 <= len(data):
    regs = []
    for r in range(3):
        b = data[i:i + 4]
        i += 4
        for x in b:
            if bin(x).count('1') % 2 == 0:
                bad += 1
        regs.append(((b[0] & 63) << 21) | ((b[1] & 127) << 14) | ((b[2] & 127) << 7) | (b[3] & 127))
    tests.append(regs)
for n, (a, s, t) in enumerate(tests, 1):
    flags = ''.join(c for c, bit in zip('C I L O P N V B'.split(), range(18, 26)) if t >> bit & 1)
    print('%3d  A=%09o  S=%09o  T=%09o  ot=%06o %s' % (n, a, s, t, t & 0o777777, flags))
rest = data[i:]
print('tests: %d, parity errors: %d, after the last test: %s' % (len(tests), bad, ' '.join('%03o' % x for x in rest)))

if len(sys.argv) > 2:
    failed = checked = 0
    bits = {'C': 18, 'L': 20, 'O': 21, 'P': 22, 'N': 23}
    for line in open(sys.argv[2]):
        line = line.split('#')[0].split()
        if not line:
            continue
        n = int(line[0])
        a, s, t = tests[n - 1]
        for item in line[1:]:
            k, v = item.split('=')
            got = {'A': a, 'S': s}.get(k)
            want = int(v, 8)
            if got is None:
                got = t >> bits[k] & 1
            checked += 1
            if got != want:
                failed += 1
                print('test %d: %s is %o, the comment says %o' % (n, k, got, want))
    print('checks from the comments of the test program: %d, failed: %d' % (checked, failed))
    sys.exit(1 if failed or len(tests) != 375 or bad else 0)
