#!/usr/bin/env python3
"""Parser for an Oberon object file (.rsc).

The layout is taken from `ORTool.DecObj` in ext/po2013-src/ORTool.Mod, i.e. from
Project Oberon's own object file reader, not guessed.
Field order: name, key, version, size, imports, type descriptors, data
size, string area, CODE, commands, entries, pointer references, fixups.
"""
import struct, sys


class Reader:
    def __init__(self, data): self.d, self.i = data, 0
    def int(self):
        v = struct.unpack_from("<i", self.d, self.i)[0]; self.i += 4; return v
    def byte(self):
        v = self.d[self.i]; self.i += 1; return v
    def string(self):
        j = self.d.index(0, self.i)
        s = self.d[self.i:j].decode("latin-1"); self.i = j + 1; return s


def parse(path):
    r = Reader(open(path, "rb").read())
    m = {"name": r.string(), "key": r.int(), "version": r.byte(), "size": r.int()}
    imports = []
    nm = r.string()
    while nm:
        imports.append((nm, r.int())); nm = r.string()
    m["imports"] = imports
    n = r.int() // 4
    m["typedesc"] = [r.int() for _ in range(n)]
    m["datasize"] = r.int()
    n = r.int()
    m["strings"] = bytes(r.d[r.i:r.i + n]); r.i += n
    n = r.int()
    m["code"] = [r.int() & 0xFFFFFFFF for _ in range(n)]
    cmds = []
    nm = r.string()
    while nm:
        cmds.append((nm, r.int())); nm = r.string()
    m["commands"] = cmds
    return m


if __name__ == "__main__":
    for p in sys.argv[1:]:
        m = parse(p)
        print(f"{p}: module {m['name']}, key {m['key'] & 0xFFFFFFFF:08X}, "
              f"version {m['version']}, code words {len(m['code'])}, "
              f"imports {len(m['imports'])}, commands {len(m['commands'])}")
