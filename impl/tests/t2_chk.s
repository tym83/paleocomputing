; T2-CHK — hardware array bounds check, ADOPTED encoding.
;
; F0 (p=0,q=0) | v=1 | op=1 (LSL alias) | index in field b |
; limit in IR[15:8] (8 bits) | trap number 1 in IR[7:4] | c=12 (MT)
;
; An 8-bit limit rather than 12 was chosen from data: the median array in the system has 32 elements,
; and the 12-bit variant overlaps the trap number bits and makes the system report
; the WRONG error (measured: an out-of-bounds array access was reported as a NIL dereference).
; See docs/FINDING-08-encoding-decision.md
;
; Semantics when it fires: exactly like BLR: R15 := PC+4 ; PC := R[12].
; When it does not fire, it writes no register and no flags.
        MOV  R0, 0
; R12 = MT = trap handler address (label handler below, 0x00FFE05C)
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE05C
; --- clobber the flags to check that a CHK that does not fire leaves them alone
        MOV  R1, 5
        SUB  R2, R0, R1            ; N=1, Z=0
; --- index 5 < limit 10: does not fire
        CHKS R1, 10
; EXPECT N = 1
; EXPECT Z = 0
; EXPECT CYCLES = 1
; --- index at the boundary: 10 >= 10 — must fire
        MOV  R3, 10
        CHKS R3, 10
; control never returns here
        MOV  R4, 0x1111            ; must NOT execute
        HALT
; alignment: handler must land on word 23 = byte 0x5C
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
        WORD 0
handler:
        MOV  R5, 0x2222            ; marker that the handler got control
; EXPECT R5 = 8738
; EXPECT R4 = 0
        HALT
