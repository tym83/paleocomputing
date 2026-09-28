; ПОРОЖДЁННЫЙ ФАЙЛ — правится tools/gen_idx_tests.py, не руками.
; t3_idx: законные индексы, затем индекс = длина
        MOV  R0, 0
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE060
        MOV  R2, 0
        MHI  R2, 0x00A0
        IOR  R2, R2, 0x1000
        MOV  R6, -1
        ADD  R7, R6, R6             ; C=1 (перенос), N=1
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
        MOV  R1, 9                  ; последний законный индекс
        IDX  R2, R2, R1, 1           ; приёмник = дескриптор: запись на место
; EXPECT R2 = 4114
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x00A0
        IOR  R2, R2, 0x1000
        MOV  R3, 7
        MOV  R1, 10                 ; индекс = длина
        IDX  R3, R2, R1, 2
        MOV  R4, 0x1111            ; не должна исполниться
        HALT
handler:
        MOV  R5, 0x2222
; EXPECT R5 = 8738
; EXPECT R4 = 0
; EXPECT R15 = 16769112
; EXPECT R3 = 7
        HALT
