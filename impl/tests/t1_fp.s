; T1.4 — FLOATING-POINT ARITHMETIC, numeric results.
;
; 🔴 Found by mutation audit: FP was checked by NOTHING. All tests checked only
; cycle counts, and the differential bench ran 14.6 million instructions without a single
; floating-point operation. Five FPU mutations (rounding removed, guard bit lost,
; FSB acting as FAD, FLT broken, multiplier zeroed) all passed green.
;
; ⚠ The reference is Wirth's behaviour, NOT IEEE-754:
;   denormals and zeros collapse to 0, division by 0 saturates,
;   there is no NaN class, rounding is round-half-up, one guard bit.
; Expected values come from risc-fp.c of the reference emulator, which reproduces
; FPAdder/FPMultiplier/FPDivider bit for bit.
        MOV  R0, 0
; --- constants
        MOV  R1, 0
        MHI  R1, 0x3F80          ; 1.0
        MOV  R2, 0
        MHI  R2, 0x4000          ; 2.0
        MOV  R3, 0
        MHI  R3, 0x4040          ; 3.0
        MOV  R4, 0
        MHI  R4, 0xBF80          ; -1.0
; --- addition
        FAD  R5, R1, R2          ; 1.0 + 2.0 = 3.0
; EXPECT R5 = 1077936128         ; 0x40400000
        FAD  R5, R1, R4          ; 1.0 + (-1.0) = 0
; EXPECT R5 = 0
        FAD  R5, R1, R0          ; 1.0 + 0 = 1.0
; EXPECT R5 = 1065353216         ; 0x3F800000
; --- subtraction: the sign of the second operand must be inverted
        FSB  R6, R3, R2          ; 3.0 - 2.0 = 1.0
; EXPECT R6 = 1065353216
        FSB  R6, R2, R3          ; 2.0 - 3.0 = -1.0
; EXPECT R6 = 3212836864         ; 0xBF800000
; --- control: FSB must not match FAD
        FAD  R7, R3, R2          ; 3.0 + 2.0 = 5.0
; EXPECT R7 = 1084227584         ; 0x40A00000
; --- multiplication
        FML  R8, R2, R3          ; 2.0 * 3.0 = 6.0
; EXPECT R8 = 1086324736         ; 0x40C00000 = 6.0
        FML  R8, R1, R4          ; 1.0 * (-1.0) = -1.0
; EXPECT R8 = 3212836864
        FML  R8, R2, R0          ; 2.0 * 0 = 0
; EXPECT R8 = 0
        FML  R8, R0, R2          ; 0 * 2.0 = 0
; EXPECT R8 = 0
; --- division
        FDV  R9, R3, R2          ; 3.0 / 2.0 = 1.5
; EXPECT R9 = 1069547520         ; 0x3FC00000
        FDV  R9, R1, R2          ; 1.0 / 2.0 = 0.5
; EXPECT R9 = 1056964608         ; 0x3F000000
; --- rounding: 1/3 checks both the guard bit and the rounding mode
        FDV  R10, R1, R3         ; 1.0 / 3.0
; EXPECT R10 = 1051372203        ; 0x3EAAAAAB — round-half-up, NOT 0x3EAAAAAA
; --- values where rounding matters
        MOV  R11, 0
        MHI  R11, 0x4049
        IOR  R11, R11, 0x0FDB    ; 3.14159274 (pi in single precision)
        FML  R12, R11, R2        ; pi * 2
; EXPECT R12 = 1086918619        ; 0x40C90FDB
        FAD  R12, R11, R11       ; pi + pi — the same result by another path
; EXPECT R12 = 1086918619
; --- MULTIPLICATION WHERE ROUNDING MATTERS
; Found by sweep: without rounding (+1 at bit 24) the result differs by one unit
; in the last place. The mutation "rounding removed in FPMultiplier" passed every other
; check, because 2.0*3.0 and the like are exact and need no rounding.
        MOV  R13, 0
        MHI  R13, 0x3F8C
        IOR  R13, R13, 0xCCCD    ; 1.1
        MOV  R14, 0
        MHI  R14, 0x3FD9
        IOR  R14, R14, 0x999A    ; 1.7
        FML  R15, R13, R14       ; 1.1 * 1.7
; EXPECT R15 = 1072651306        ; 0x3FEF5C2A — with rounding; without it 0x3FEF5C29
        FML  R15, R13, R11       ; 1.1 * pi
; EXPECT R15 = 1079847691        ; 0x405D2B0B — also sensitive to rounding
        HALT
