#!/usr/bin/env python3
"""Generates a check of ALL 16 branch conditions on four flag states.

The expected outcome comes from the specification's truth table, not from observation,
so the test catches a divergence of the hardware from the specification instead of being fitted to it.
The flag states were MEASURED beforehand (tests/t1_probe_flags.s).
"""
COND = [("MI",0),("EQ",1),("CS",2),("VS",3),("LS",4),("LT",5),("LE",6),("",7),
        ("PL",8),("NE",9),("CC",10),("VC",11),("HI",12),("GE",13),("GT",14),("NV",15)]

def taken(cc, N, Z, C, V):
    S = N ^ V
    base = [N, Z, C, V, C or Z, S, S or Z, 1][cc & 7]
    return bool(base) ^ bool(cc & 8)

# Flag states. 🔴 Found by the audit: in the first version ALL four had V=0,
# which made five of the eight conditions indistinguishable on this set:
#   V ≡ 0     -> VS never fires, VC always does
#   S = N^V ≡ N -> LT/GE indistinguishable from MI/PL
#   S|Z ≡ C|Z -> LE/GT indistinguishable from LS/HI
# The mutations "VS/VC dead", "S = N", "LS ≡ LE", "MI ≡ LT" passed as green.
# States with V=1 and with N=1,Z=0,C=0 were added so all eight functions differ.
#
# (comment, setup code, N, Z, C, V)
STATES = [
    ("S1: 5-5=0",        "        SUB  R3, R1, R1\n", 0,1,0,0),
    ("S2: 0-5 borrow",     "        SUB  R3, R0, R1\n", 1,0,1,0),
    ("S3: 7-5=2",        "        SUB  R3, R2, R1\n", 0,0,0,0),
    ("S4: -1+1 carry", "        ADD  R3, R4, 1\n",  0,1,1,0),
    # signed overflow: 0x7FFFFFFF + 1 -> N=1, V=1, C=0
    ("S5: max+1 overflow", "        ADD  R3, R6, 1\n", 1,0,0,1),
    # reverse overflow: 0x80000000 - 1 -> N=0, V=1, C=0
    ("S6: min-1 overflow", "        SUB  R3, R7, 1\n", 0,0,0,1),
    # N=1 without carry and without overflow. IMPORTANT: IOR does not work here: logical
    # operations in RISC5 do not touch C and V (RISC5.v: cx/vv change only on ADD/SUB),
    # and the flags would leak from the previous state. ADD is needed.
    ("S7: N=1,C=0,V=0",  "        ADD  R3, R7, 0\n",   1,0,0,0),
]

out = ["""; T1.6 — ALL 16 branch conditions on four flag states.
; The expected outcome is computed from the specification's truth table:
;   MI=N  EQ=Z  CS=C  VS=V  LS=C|Z  LT=N^V  LE=(N^V)|Z  T=1
;   the top bit of the condition inverts the result (PL, NE, CC, VC, HI, GE, GT, F)
; The flag states were measured beforehand (t1_probe_flags.s).
; Check scheme: R5 := 0 ; <set flags> ; B<cond> skip ; R5 := 1 ; skip:
;   Clearing R5 comes FIRST: a register write itself sets N and Z.
;   R5 = 0 -> branch TAKEN, R5 = 1 -> NOT taken.
        MOV  R0, 0
        MOV  R1, 5
        MOV  R2, 7
        MOV  R4, -1
        MOV  R6, 0
        MHI  R6, 0x7FFF
        IOR  R6, R6, 0xFFFF      ; R6 = 0x7FFFFFFF, signed maximum
        MOV  R7, 0
        MHI  R7, 0x8000          ; R7 = 0x80000000, signed minimum
"""]
n = 0
for name, setup, N, Z, C, V in STATES:
    out.append(f"; ──────── {name}  (N={N} Z={Z} C={C} V={V}) ────────\n")
    for cc_name, cc in COND:
        # IMPORTANT: MOV R5,0 clears the register and thereby SETS N=0, Z=1
        # (flags are set on ANY register write; see FINDING in t1_flags).
        # So the clearing comes BEFORE setting the flags, not after.
        out.append("        MOV  R5, 0\n")
        out.append(setup)                       # set the flags under test
        out.append(f"        B{cc_name} sk{n}\n")
        out.append("        MOV  R5, 1\n")
        out.append(f"sk{n}:\n")
        exp = 0 if taken(cc, N, Z, C, V) else 1
        lbl = cc_name if cc_name else "T"
        out.append(f"; EXPECT R5 = {exp}   ; {lbl} with N={N} Z={Z} C={C} V={V}\n")
        n += 1
out.append("        HALT\n")
open("tests/t1_branch.s","w").write("".join(out))
print(f"tests/t1_branch.s: {n} condition checks")
