; GENERATED FILE: edit tools/gen_idx_tests.py, not by hand.
; t3_idx: legal indices, then index = length
        MOV  R0, 0
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE060
        MOV  R2, 0
        MHI  R2, 0x00A0
        IOR  R2, R2, 0x1000
        MOV  R6, -1
        ADD  R7, R6, R6             ; C=1 (carry), N=1
        MOV  R1, 3
        IDX  R3, R2, R1, 0
; EXPECT R3 = 4099
; EXPECT C = 1
; EXPECT N = 0
; EXPECT Z = 0
; EXPECT CYCLES = 1
        IDX  R3, R2, R1, 1
; EXPECT R3 = 4102
; EXPECT C = 1
; EXPECT N = 0
; EXPECT Z = 0
; EXPECT CYCLES = 1
        IDX  R3, R2, R1, 2
; EXPECT R3 = 4108
; EXPECT C = 1
; EXPECT N = 0
; EXPECT Z = 0
; EXPECT CYCLES = 1
        IDX  R3, R2, R1, 3
; EXPECT R3 = 4120
; EXPECT C = 1
; EXPECT N = 0
; EXPECT Z = 0
; EXPECT CYCLES = 1
        MOV  R1, 9                  ; last legal index
        IDX  R2, R2, R1, 1           ; destination = descriptor: written in place
; EXPECT R2 = 4114
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x00A0
        IOR  R2, R2, 0x1000
        MOV  R3, 7
        MOV  R1, 10                 ; index = length
        IDX  R3, R2, R1, 2
        MOV  R4, 0x1111            ; must not execute
        HALT
handler:
        MOV  R5, 0x2222
; EXPECT R5 = 8738
; EXPECT R4 = 0
; EXPECT R15 = 16769112
; EXPECT R3 = 7
        HALT
