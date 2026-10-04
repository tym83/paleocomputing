#!/usr/bin/env python3
"""Reads the Oberon file system straight from a disk image.

The layout is taken from the system sources, not guessed:

  Kernel.Mod:  GetSector(src) -> src DIV 29, then *2 + FSoffset (80000H) in
               512-byte SD blocks. The disk emulator subtracts 80002H
               (tb/disk/disk.c), so sector adr lies in the image at
               offset (adr DIV 29 - 1) * 1024.

  FileDir.Mod: DirPage = mark, m, p0, fill[52], e[24]: a 64-byte header and
               24 entries of 40 bytes (name 32, adr 4, p 4). This is a B-tree:
               p0 is the left child, p of each entry is the right one.
               FileHeader = mark, name[32], aleng, bleng, date, ext[12],
               sec[64]: exactly 352 bytes (HeaderSize), then the data.

  Files.Mod:   Length(f) = aleng * 1024 + bleng - 352.

Needed to prove the rebuild fixed point: compare object files
before and after byte for byte, not by numbers on the screen.
"""
import struct, sys

SS, HS, DIRROOT = 1024, 352, 29


class Image:
    def __init__(self, path):
        self.d = open(path, "rb").read()

    def sector(self, adr):
        k = adr // DIRROOT
        off = (k - 1) * SS
        return self.d[off:off + SS]

    def entries(self, adr=DIRROOT):
        """Walks the directory B-tree: name -> file header address."""
        if adr == 0:
            return
        s = self.sector(adr)
        m, p0 = struct.unpack_from("<ii", s, 4)
        yield from self.entries(p0)
        for i in range(m):
            base = 64 + i * 40
            name = s[base:base + 32].split(b"\0")[0].decode("latin-1")
            hdr, p = struct.unpack_from("<ii", s, base + 32)
            yield name, hdr
            yield from self.entries(p)

    def date(self, hdr):
        """Timestamp from the file header (FileDir.Mod: field date).

        Distinguishes "rebuilt and matched byte for byte" from "file never touched":
        a byte-for-byte comparison cannot tell these two cases apart, and that is exactly the
        difference that could let the check pass silently on an unbuilt system.
        """
        return struct.unpack_from("<i", self.sector(hdr), 44)[0]

    def read(self, hdr):
        h = self.sector(hdr)
        aleng, bleng = struct.unpack_from("<ii", h, 36)
        sec = struct.unpack_from("<64i", h, 96)
        length = aleng * SS + bleng - HS
        out = bytearray(h[HS:])                       # tail of the first sector
        for i in range(1, aleng + 1):
            if i < 64:
                a = sec[i]
            else:                                     # long files: index pages
                ext = struct.unpack_from("<12i", h, 48)
                page = self.sector(ext[(i - 64) // 256])
                a = struct.unpack_from("<i", page, ((i - 64) % 256) * 4)[0]
            out += self.sector(a)
        return bytes(out[:length])

    def files(self):
        return dict(self.entries())


if __name__ == "__main__":
    img = Image(sys.argv[1])
    fs = img.files()
    if len(sys.argv) > 2:
        for name in sys.argv[2:]:
            sys.stdout.buffer.write(img.read(fs[name]))
    else:
        print(f"files: {len(fs)}")
        for n in sorted(fs)[:8]:
            print(f"  {n:24s} {len(img.read(fs[n])):8d} bytes")
