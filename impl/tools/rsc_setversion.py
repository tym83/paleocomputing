#!/usr/bin/env python3
"""Rewrites the version byte in an Oberon object file.

Why. Configuration E stamps version 2 into its output; this is a deliberate lock:
the Oberon loader checks `IF ch = versionkey` with `versionkey = 1X`, so
code with hardware CHK simply will not load into the old system.

The lock works, and it must not be broken. But for a MEASUREMENT we need to run such a
compiler on an emulator that does understand CHK. So here the version
is set back to 1, deliberately, only for the measurement bench, and only on
copies in build/.

Byte layout: the name string with a terminating zero, then 4 key bytes, then the version.
"""
import sys


def setver(path, ver):
    d = bytearray(open(path, "rb").read())
    off = d.index(0) + 1 + 4
    old = d[off]
    d[off] = ver
    open(path, "wb").write(d)
    return old


if __name__ == "__main__":
    ver = int(sys.argv[1])
    for p in sys.argv[2:]:
        print(f"  {p}: version {setver(p, ver)} -> {ver}")
