; T2-CHK-HI — the upper part of the limit (IR[27:24]).
; Found by audit: in t2_chk.s the limit is always < 256, i.e. the top nibble is zero,
; so the adopted encoding (limit in two parts) was not covered by tests at all.
        MOV  R0, 0
; R12 = MT = trap handler
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE068
; --- limit 1000: top nibble = 3, low byte = 0xE8
        MOV  R1, 999
        SUB  R2, R0, R1            ; clobber the flags: N=1, Z=0
        CHKS R1, 1000              ; 999 < 1000 — does not fire
; EXPECT N = 1
; EXPECT Z = 0
; EXPECT CYCLES = 1
; --- unsigned comparison: -1 is a huge number
        MOV  R3, -1
        CHKS R3, 4000              ; must fire
        MOV  R4, 0x1111            ; not executed
        HALT
; --- no further checks after return: control goes to the handler
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
        WORD 0
        WORD 0
        WORD 0
handler:
        MOV  R5, 0x2222
; EXPECT R5 = 8738
; EXPECT R4 = 0
        HALT
