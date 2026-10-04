; Cross-check of floating point against the reference.
; The values sit in the same ROM at word 64 (address FFE100), so they do not
; have to be put into memory separately: program and data arrive in one file.
        MOV R14, 0xFFE1
        LSL R14, R14, 8        ; 0xFFE100: input
        MOV R13, 0x1000
        LSL R13, R13, 4        ; 0x10000: output
        MOV R10, 0
outer:  MOV R11, 0
inner:  LSL R0, R10, 2
        ADD R0, R14, R0
        LD  R1, R0, 0
        LSL R0, R11, 2
        ADD R0, R14, R0
        LD  R2, R0, 0
        FAD R3, R1, R2
        ST  R3, R13, 0
        MOV R5, 0x8000
        LSL R5, R5, 16
        XOR R4, R2, R5
        FAD R3, R1, R4
        ST  R3, R13, 4
        FML R3, R1, R2
        ST  R3, R13, 8
        FDV R3, R1, R2
        ST  R3, R13, 12
        ADD R13, R13, 16
        ADD R11, R11, 1
        SUB R0, R11, 16
        BNE inner
        ADD R10, R10, 1
        SUB R0, R10, 16
        BNE outer
        MOV R10, 0
conv:   LSL R0, R10, 2
        ADD R0, R14, R0
        LD  R1, R0, 0
        MOV R6, 0              ; ⚠ the second operand of conversions is ZERO
        FLT R3, R1, R6
        ST  R3, R13, 0
        FLOOR R3, R1, R6
        ST  R3, R13, 4
        ADD R13, R13, 8
        ADD R10, R10, 1
        SUB R0, R10, 16
        BNE conv
        MOV R7, 0x600D         ; "reached the end" mark, right after the results:
        ST  R7, R13, 0         ; the build has no monitor with PC, the end is seen in memory
done:   B done
