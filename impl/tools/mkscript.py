#!/usr/bin/env python3
"""Builds an input script for soc_tb from simple commands.

Description language (one line per step):
  at <N>            set the current moment (instruction number)
  wait <N>          advance the current moment by N instructions
  click <x> <y> <b> click: move there, press, release (b: L, M, R)
  move <x> <y>      just move the pointer
  type <text>       type text on the keyboard
  enter             press Return
  shot <file>       take a screenshot
The y coordinate is given as in the picture (top to bottom) and converted to Oberon's
system (bottom to top) right here, so scripts can say what the eye sees.
"""
import sys
from keymap import keys

BTN = {"L": 4, "M": 2, "R": 1}          # elements of the keys set from Input.Mod
HOLD, SETTLE = 200_000, 400_000         # button hold and the pause after it

def build(lines):
    t, out = 0, []
    for ln in lines:
        ln = ln.split("#")[0].strip()
        if not ln: continue
        op, _, rest = ln.partition(" ")
        if op == "at":     t = int(rest)
        elif op == "wait": t += int(rest)
        elif op == "move":
            x, y = map(int, rest.split()); out.append(f"{t} M {x} {767-y} 0")
        elif op == "click":
            x, y, b = rest.split()
            x, y = int(x), 767 - int(y)
            out += [f"{t} M {x} {y} 0",
                    f"{t+HOLD} M {x} {y} {BTN[b]}",
                    f"{t+2*HOLD} M {x} {y} 0"]
            t += 2*HOLD + SETTLE
        elif op == "type":
            for c in keys(rest): out.append(f"{t} K {c}")
            t += SETTLE
        elif op == "enter":
            for c in keys("\r"): out.append(f"{t} K {c}")
            t += SETTLE
        elif op == "shot": out.append(f"{t} S {rest}")
        else: sys.exit(f"unknown command: {op}")
    return out

if __name__ == "__main__":
    src = open(sys.argv[1]).read().splitlines()
    print("\n".join(build(src)))
