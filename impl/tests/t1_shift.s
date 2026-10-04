; T1.3 — shifts. ASR must sign-extend, ROR is a rotation,
; the count is taken from the low 5 bits (C1[4:0]).
        MOV  R0, 0
        MOV  R1, 0x1234
        MOV  R2, -1              ; 0xFFFFFFFF
        MOV  R3, 0
        MHI  R3, 0x8000          ; 0x80000000 — only the top bit
; --- LSL
        LSL  R4, R1, 4
; EXPECT R4 = 74560              ; 0x12340
        LSL  R4, R1, 0
; EXPECT R4 = 4660               ; shift by 0 is the identity
        LSL  R4, R3, 1           ; the top bit is shifted out
; EXPECT R4 = 0
; --- ASR: signed
        ASR  R5, R2, 4           ; 0xFFFFFFFF >> 4 signed = 0xFFFFFFFF
; EXPECT R5 = 4294967295
        ASR  R5, R3, 4           ; 0x80000000 >> 4 signed = 0xF8000000
; EXPECT R5 = 4160749568
        ASR  R5, R1, 31          ; positive, shift by 31 -> 0
; EXPECT R5 = 0
        ASR  R5, R3, 31          ; negative -> all ones
; EXPECT R5 = 4294967295
; --- ROR: rotation
        ROR  R6, R1, 4           ; 0x00001234 ror 4 = 0x40000123
; EXPECT R6 = 1073742115
        ROR  R6, R1, 0
; EXPECT R6 = 4660
        ROR  R6, R3, 1           ; 0x80000000 ror 1 = 0x40000000
; EXPECT R6 = 1073741824
; --- the count is taken from the low 5 bits: 32 is equivalent to 0
        MOV  R7, 32
        LSL  R8, R1, R7
; EXPECT R8 = 4660
        HALT
