; Surcharge for back-to-back FP operations.
; RULE (derived by measurement): the cost of a back-to-back operation equals
; the COUNTER PERIOD, i.e. 2^(its width), not the length of the operation.
; On the retire cycle run is still high, so S is not cleared but runs past the end,
; and the next operation has to spin the counter until it overflows.
;   FPAdder      State 2 bits -> period  4, operation  4 steps -> NO surcharge
;   FPMultiplier S     5 bits -> period 32, operation 26 steps -> 26 => 32  (+23%)
;   FPDivider    S     5 bits -> period 32, operation 27 steps -> 27 => 32  (+19%)
;   Multiplier   S     6 bits -> period 64, operation 34 steps -> 34 => 64  (+88%)
;   Divider      S     6 bits -> period 64, operation 34 steps -> 34 => 64  (+88%)
; Any non-arithmetic instruction in between resets the counter and restores the price.
        MOV  R7, 0
        MHI  R7, 0x3F80        ; 1.0
        MOV  R8, 0
        MHI  R8, 0x4000        ; 2.0
; --- multiplication after a NON-FP instruction: the counter is reset
        ADD  R0, R0, 0
        FML  R9, R7, R8
; EXPECT CYCLES = 26
; --- back to back: we pay the remainder of the counter overflow
        FML  R10, R7, R8
; EXPECT CYCLES = 32
        FML  R11, R7, R8
; EXPECT CYCLES = 32
; --- break the chain with one cheap instruction: 26 again
        ADD  R0, R0, 0
        FML  R12, R7, R8
; EXPECT CYCLES = 26
; --- adder: back to back does NOT cost more
        FAD  R13, R7, R8
; EXPECT CYCLES = 4
        FAD  R14, R7, R8
; EXPECT CYCLES = 4
; --- divider: period 27 with the same 5-bit counter
        ADD  R0, R0, 0
        FDV  R1, R8, R7
; EXPECT CYCLES = 27
        FDV  R2, R8, R7
; EXPECT CYCLES = 32
; --- integer MUL: 6-BIT counter -> period 64, while the operation takes 34 steps
        ADD  R0, R0, 0
        MUL  R3, R7, R8
; EXPECT CYCLES = 34
        MUL  R4, R7, R8
; EXPECT CYCLES = 64
        MUL  R5, R7, R8
; EXPECT CYCLES = 64
        ADD  R0, R0, 0
        DIV  R6, R8, R7
; EXPECT CYCLES = 34
        DIV  R1, R8, R7
; EXPECT CYCLES = 64
        HALT
