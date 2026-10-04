#!/usr/bin/env python3
"""Stitches the System.Log regions from several snapshots into one picture.

The log viewer holds about 18 lines and does not scroll by itself, so the script
clears it after every command and takes a frame. Here those regions are glued
vertically so the whole output can be read at once.
"""
import sys
from PIL import Image as PILImage

X0, X1 = 655, 1020
Y0, Y1 = 16, 152          # log title bar and the first ten or so lines


def load(path):
    t = open(path).read().split()
    w, h = int(t[1]), int(t[2]); px = t[3:]
    im = PILImage.new("1", (X1 - X0, Y1 - Y0))
    im.putdata([0 if px[y * w + x] == '1' else 1
                for y in range(Y0, Y1) for x in range(X0, X1)])
    return im


if __name__ == "__main__":
    out, srcs = sys.argv[1], sys.argv[2:]
    tiles = [load(p) for p in srcs]
    W, H = X1 - X0, Y1 - Y0
    big = PILImage.new("1", (W, H * len(tiles)), 1)
    for i, t in enumerate(tiles):
        big.paste(t, (0, i * H))
    big.save(out)
    print(f"{out}: {len(tiles)} regions, {W}x{H*len(tiles)}")
