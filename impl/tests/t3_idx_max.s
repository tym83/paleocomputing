; ПОРОЖДЁННЫЙ ФАЙЛ — правится tools/gen_idx_tests.py, не руками.
; t3_idx_max: длина 4095, адрес 0xFFFFF
        MOV  R0, 0
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE038
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 4094
        IDX  R3, R2, R1, 3
; EXPECT R3 = 1081327
; EXPECT CYCLES = 1
        MOV  R3, 7
        MOV  R1, 4095
        IDX  R3, R2, R1, 3
        MOV  R4, 0x1111            ; не должна исполниться
        HALT
handler:
        MOV  R5, 0x2222
; EXPECT R5 = 8738
; EXPECT R4 = 0
; EXPECT R15 = 16769072
; EXPECT R3 = 7
        HALT
