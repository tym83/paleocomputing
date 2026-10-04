#!/usr/bin/env python3
"""Counts the traps in a compiled Oberon module (.rsc).

A check that the A/B measurement really measures run-time checks:
the difference in code size must consist of Trap instructions, i.e. conditional
BLR to register MT (R12), which ORG.Trap emits:
    Put3(BLR, cond, ORS.Pos()*100H + num*10H + MT)
Format F3 with link: bits 31:28 = 111v (v=1 -> with link), c in bits 3:0.
For traps c = MT = 12, and the trap number is in bits 7:4.
"""
import struct, sys, pathlib

TRAPNAME = {1: "array index", 2: "type", 3: "range", 4: "NIL",
            5: "NIL (proc.)", 6: "division", 7: "assertion"}

def code_section(path):
    """Extracts the code section from a .rsc. Format per ORG.Close / Modules.Load."""
    d = pathlib.Path(path).read_bytes()
    i = 0
    def s():                       # zero-terminated string
        nonlocal i
        j = d.index(b"\0", i); r = d[i:j]; i = j + 1; return r
    def n():                       # 32-bit word
        nonlocal i
        v = struct.unpack_from("<i", d, i)[0]; i += 4; return v
    # Format per ORG.Close (ORG.Mod:1063-1079):
    #   name\0 | key(4) | version(1) | size(4)
    #   [ name\0 | key(4) ]* | 0     -- imports, terminated by an empty name
    #   tdx*4(4) | descriptors(tdx*4 bytes)
    #   varsize-tdx*4(4) | strx(4) | strings(strx bytes)
    #   pc(4) | code(pc words)
    s(); n()                       # name, key
    i += 1                         # version (byte)
    n()                            # size
    while s(): n()                 # imports, up to an empty name
    # WARNING: you cannot write `i += n()`: Python takes the old i BEFORE calling n(),
    # and n() shifts i internally, so that shift is lost. Only in two steps.
    v = n(); i += v                # type descriptors: length in bytes
    n()                            # varsize - tdx*4
    v = n(); i += v                # strings: length in bytes
    ncode = n()
    return [struct.unpack_from("<I", d, i + k*4)[0] for k in range(ncode)]

def chks(words):
    """Hardware CHK checks: F0 (bits 31:28 = 0001), op=1, low nibble = MT=12."""
    return [k for k, w in enumerate(words)
            if (w >> 28) == 0b0001 and ((w >> 16) & 0xF) == 1 and (w & 0xF) == 12]

def idxs(words):
    """Indexing through an IDX descriptor (episode 14): F0, bits 31:28 = 0001, op=8."""
    return [k for k, w in enumerate(words) if (w >> 28) == 0b0001 and ((w >> 16) & 0xF) == 8]

def traps(words):
    out = []
    for k, w in enumerate(words):
        # Put3: code := ((op+12)*10H + cond)*1000000H + off
        # BLR = 1 -> high byte = (1+12)*16 + cond = 0xD0|cond, i.e. nibble 1101.
        # Trap: off = pos*100H + num*10H + MT, so the low nibble = 12 (MT),
        # trap number in bits 7:4, source position in bits 23:8.
        if (w >> 28) == 0b1101 and (w & 0xF) == 12:
            out.append((k, (w >> 4) & 0xF, (w >> 8) & 0xFFFF))
    return out

for p in sys.argv[1:]:
    ws = code_section(p)
    t = traps(ws)
    by = {}
    for _, num, _ in t: by[num] = by.get(num, 0) + 1
    name = pathlib.Path(p).name
    det = ", ".join(f"{TRAPNAME.get(k, k)}: {v}" for k, v in sorted(by.items()))
    ch = chks(ws)
    chs = f"   CHK {len(ch):>4}" if ch else ""
    ix = idxs(ws)
    chs += f"   IDX {len(ix):>4}" if ix else ""
    print(f"{name:<14} code words {len(ws):>6}   traps {len(t):>5}{chs}   {det}")
