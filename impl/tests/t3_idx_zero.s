; ПОРОЖДЁННЫЙ ФАЙЛ — правится tools/gen_idx_tests.py, не руками.
; t3_idx_zero: обычный адрес 0x1000 (длина 0) как дескриптор
        MOV  R0, 0
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE038
        MOV  R2, 0
        MHI  R2, 0x0000
        IOR  R2, R2, 0x1000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R3, 7                  ; приёмник: должен остаться 7
        IDX  R3, R2, R1, 2
        MOV  R4, 0x1111            ; не должна исполниться
        HALT
handler:
        MOV  R5, 0x2222
; EXPECT R5 = 8738
; EXPECT R4 = 0
; EXPECT R15 = 16769072
; EXPECT R3 = 7
        HALT
