; Probe for the cross-check of QEMU against the real RTL.
; Each instruction is chosen to exercise different parts of the ALU and the flags.
        MOV R1, 100
        MOV R2, 7
        ADD R3, R1, R2          ; 107
        SUB R4, R1, R2          ; 93
        AND R5, R1, R2          ; 100 & 7 = 4
        IOR R6, R1, R2          ; 103
        XOR R7, R1, R2          ; 99
        LSL R8, R2, 3           ; 56
        ASR R9, R1, 2           ; 25
        MUL R10, R1, R2         ; 700
        MOV R11, -1
        ADD R12, R11, 1         ; 0, carry
        SUB R13, R2, R1         ; -93, sign
loop:   B loop
