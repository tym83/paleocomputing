; T1.16 — logical operations, including ANN and XOR, which nothing covered.
; Semantics taken from aluRes in RISC5.v:
;   AND (op=4) B & C1 | ANN (op=5) B & ~C1 | IOR (op=6) B | C1 | XOR (op=7) B ^ C1
        MOV  R1, 0
        MHI  R1, 0xF0F0
        IOR  R1, R1, 0xF0F0      ; R1 = F0F0F0F0
        MOV  R2, 0
        MHI  R2, 0xFF00
        IOR  R2, R2, 0xFF00      ; R2 = FF00FF00
; ──────── register forms ────────
        AND  R3, R1, R2
; EXPECT R3 = 0xF000F000
        ANN  R3, R1, R2
; EXPECT R3 = 0x00F000F0
        IOR  R3, R1, R2
; EXPECT R3 = 0xFFF0FFF0
        XOR  R3, R1, R2
; EXPECT R3 = 0x0FF00FF0
; ──────── immediate forms (v=0, zero-extended) ────────
        AND  R4, R1, 0xFF00
; EXPECT R4 = 0x0000F000
        ANN  R4, R1, 0xFF00
; EXPECT R4 = 0xF0F000F0
        IOR  R4, R1, 0xFF00
; EXPECT R4 = 0xF0F0FFF0
        XOR  R4, R1, 0xFF00
; EXPECT R4 = 0xF0F00FF0
; ──────── ANN as negation: b AND NOT b = 0, b ANN 0 = b ────────
        ANN  R5, R1, R1
; EXPECT R5 = 0
        ANN  R5, R1, 0
; EXPECT R5 = 0xF0F0F0F0
        HALT
