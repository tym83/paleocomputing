; T1-LAT — latencies of multi-cycle operations.
; This is the foundation of all measurements: if they disagree with the RTL, every number in the episode is wrong.
        MOV  R0, 0
        MOV  R1, 100
        MOV  R2, 7
; --- single-cycle
        ADD  R3, R1, R2
; EXPECT CYCLES = 1
        SUB  R3, R1, R2
; EXPECT CYCLES = 1
        AND  R3, R1, R2
; EXPECT CYCLES = 1
        LSL  R3, R1, 3
; EXPECT CYCLES = 1
; --- integer multiplication and division
        MUL  R4, R1, R2
; EXPECT CYCLES = 34
; EXPECT R4 = 700
        DIV  R5, R1, R2
; EXPECT CYCLES = 34
; EXPECT R5 = 14
; EXPECT H = 2
; --- memory (von Neumann stall)
        ST   R1, R0, 0
; EXPECT CYCLES = 2
        LD   R6, R0, 0
; EXPECT CYCLES = 2
; EXPECT R6 = 100
; --- floating-point arithmetic
        MOV  R7, 0
        MHI  R7, 0x3F80
        MOV  R8, 0
        MHI  R8, 0x4000
        FAD  R9, R7, R8
; EXPECT CYCLES = 4
        FSB  R9, R7, R8
; EXPECT CYCLES = 4
        FML  R9, R7, R8
; EXPECT CYCLES = 26
        FDV  R9, R7, R8
; EXPECT CYCLES = 27
; --- back-to-back FP: the reviewer claims 32 cycles instead of 26 for the second one
        FML  R10, R7, R8
; EXPECT CYCLES = 26
        FML  R11, R7, R8
        HALT
