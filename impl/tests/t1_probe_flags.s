; Full N/Z/C/V snapshot for the states on which all 16 conditions will be checked.
        MOV  R0, 0
        MOV  R1, 5
        MOV  R2, 7
        MOV  R4, -1
; S1: 5 - 5 = 0
        SUB  R3, R1, R1
; EXPECT N = 0
; EXPECT Z = 1
; EXPECT C = 0
; EXPECT V = 0
; S2: 0 - 5 = -5 (BORROW -> C=1)
        SUB  R3, R0, R1
; EXPECT N = 1
; EXPECT Z = 0
; EXPECT C = 1
; EXPECT V = 0
; S3: 7 - 5 = 2
        SUB  R3, R2, R1
; EXPECT N = 0
; EXPECT Z = 0
; EXPECT C = 0
; EXPECT V = 0
; S4: -1 + 1 = 0 (CARRY -> C=1)
        ADD  R3, R4, 1
; EXPECT N = 0
; EXPECT Z = 1
; EXPECT C = 1
; EXPECT V = 0
        HALT
