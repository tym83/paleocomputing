#!/usr/bin/env python3
"""Reverse table "character -> PS/2 scan code" taken straight from Input.Mod.

Oberon keeps the forward table kbdTab in the driver source: the index is the scan code
(plus 80H if Shift is held), the value is ASCII. We parse it and build the
reverse mapping so we do not have to invent a keyboard layout ourselves.
"""
import re, sys

def load(path="ext/po2013-src/Input.Mod"):
    src = open(path, encoding="latin-1").read()
    m = re.search(r"KTabAdr := SYSTEM\.ADR\(\$(.*?)\$\)", src, re.S)
    if not m:
        sys.exit("table kbdTab not found in " + path)
    by = bytes.fromhex("".join(m.group(1).split()))
    assert len(by) == 256, f"expected 256 bytes, got {len(by)}"
    rev = {}
    for code, ch in enumerate(by):
        if ch == 0:
            continue
        # the first occurrence wins: the low codes are the base layout
        rev.setdefault(chr(ch), (code & 0x7F, code >= 0x80))
    return rev

REV = load()

def keys(text):
    """String -> list of scan codes, including Shift presses and releases."""
    out, shifted = [], False
    for ch in text:
        if ch not in REV:
            sys.exit(f"character {ch!r} cannot be typed on this layout")
        code, need = REV[ch]
        if need and not shifted: out += [0x12]; shifted = True
        elif not need and shifted: out += [0xF0, 0x12]; shifted = False
        out += [code, 0xF0, code]          # press and release
    if shifted: out += [0xF0, 0x12]
    return out

if __name__ == "__main__":
    t = sys.argv[1] if len(sys.argv) > 1 else "ORP.Compile ORS.Mod/s ~"
    print(f"characters in the table: {len(REV)}")
    print("check:", " ".join(f"{c:02X}" for c in keys(t)[:24]), "...")
    for ch in "ORPCompile./~ ":
        print(f"  {ch!r} -> {REV[ch][0]:02X}{' +Shift' if REV[ch][1] else ''}")
