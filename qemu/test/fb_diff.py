#!/usr/bin/env python3
"""Cross-check of the QEMU framebuffer against the reference machine on the real RTL.

Looking at the picture is a weak check: the eye will not notice a one-line
shift or a flipped bit in a rarely used glyph. So the bytes are compared: the
98,304 bytes of the framebuffer after the system boots must match bit for bit.

  fb_diff.py <QEMU snapshot> <RTL snapshot>
"""
import sys, pathlib


def main(qemu_fb, rtl_fb):
    q = pathlib.Path(qemu_fb).read_bytes()
    r = pathlib.Path(rtl_fb).read_bytes()

    if len(q) != len(r):
        print(f'❌ sizes differ: QEMU {len(q)}, RTL {len(r)}')
        return 1
    if q == r:
        ink = sum(bin(b).count('1') for b in q)
        print(f'✅ framebuffers match byte for byte ({len(q)} bytes)')
        print(f'   black pixels on screen: {ink}')
        return 0

    diff = sum(1 for a, b in zip(q, r) if a != b)
    first = next(i for i, (a, b) in enumerate(zip(q, r)) if a != b)
    print(f'❌ {diff} of {len(q)} bytes differ, the first at offset 0x{first:X}')
    return 1


if __name__ == '__main__':
    sys.exit(main(*sys.argv[1:3]))
