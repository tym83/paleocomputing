; ПОРОЖДЁННЫЙ ФАЙЛ — правится tools/gen_idx_diff.py, не руками.
; 40 случайных IDX (зерно 14) и один случайный выход за границу.
        MOV  R0, 0
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE718
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0FFE
        MOV  R6, 0
        MHI  R6, 0xBBEB
        IOR  R6, R6, 0x508F
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1064951
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x003E
        IOR  R2, R2, 0xEE89
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x4375
        IOR  R6, R6, 0xD034
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 978571
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x003F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x293A
        IOR  R6, R6, 0x9ACC
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1048577
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFF0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0FFE
        MOV  R6, 0
        MHI  R6, 0x154D
        IOR  R6, R6, 0x1EB0
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 4094
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x00EC
        IOR  R2, R2, 0xEAE9
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0007
        MOV  R6, 0
        MHI  R6, 0xDF62
        IOR  R6, R6, 0x692C
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 846576
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFF0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x8387
        IOR  R6, R6, 0x2E75
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 0
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x73EF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x073D
        MOV  R6, 0
        MHI  R6, 0x1A38
        IOR  R6, R6, 0xB927
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1055987
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x001F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xBD87
        IOR  R6, R6, 0x00EB
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1048575
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xAFBF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x07AF
        MOV  R6, 0
        MHI  R6, 0x88EB
        IOR  R6, R6, 0xF5E6
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1052509
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x01EF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x000D
        MOV  R6, 0
        MHI  R6, 0x41A2
        IOR  R6, R6, 0x04E9
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1048588
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x01A0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xB416
        IOR  R6, R6, 0xAAD9
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 0
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x001F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xF06B
        IOR  R6, R6, 0x36B1
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 1048575
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0030
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0xCC36
        IOR  R6, R6, 0x81EE
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 16
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0010
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x9606
        IOR  R6, R6, 0xF7D8
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 0
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0030
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x0074
        IOR  R6, R6, 0xBFA3
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xDF80
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x4A97
        IOR  R6, R6, 0x8A70
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x8FB5
        IOR  R2, R2, 0x1059
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x08FA
        MOV  R6, 0
        MHI  R6, 0x6255
        IOR  R6, R6, 0x0BA7
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 350249
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x636F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xA4A6
        IOR  R6, R6, 0x535B
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1048575
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x003F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x0DF7
        IOR  R6, R6, 0xAC98
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 1048575
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x00E0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x000D
        MOV  R6, 0
        MHI  R6, 0xC8FB
        IOR  R6, R6, 0xF714
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 13
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x003F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x1712
        IOR  R6, R6, 0x462D
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 1048579
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0020
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xFEA2
        IOR  R6, R6, 0xFAD4
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 0
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x025F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x0FD9
        IOR  R6, R6, 0x0438
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1048575
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0010
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x1170
        IOR  R6, R6, 0xA456
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0030
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x013F
        IOR  R6, R6, 0x5C00
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 2
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x01EF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x001D
        MOV  R6, 0
        MHI  R6, 0x4829
        IOR  R6, R6, 0x877B
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 1048633
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x002F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x61ED
        IOR  R6, R6, 0x0A9C
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1048575
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFF0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xF4D7
        IOR  R6, R6, 0x47EB
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 0
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x3760
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x5703
        IOR  R6, R6, 0xFE98
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0338
        IOR  R2, R2, 0x00D6
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0032
        MOV  R6, 0
        MHI  R6, 0xC837
        IOR  R6, R6, 0x500C
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 524602
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFF0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0635
        MOV  R6, 0
        MHI  R6, 0xC29C
        IOR  R6, R6, 0x5C63
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1589
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0020
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xDDE1
        IOR  R6, R6, 0x02AF
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 0
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xA004
        IOR  R6, R6, 0x4AC6
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1048575
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x002F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x9A3A
        IOR  R6, R6, 0xF75E
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1048576
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x07F7
        MOV  R6, 0
        MHI  R6, 0x0CC0
        IOR  R6, R6, 0xAB94
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1056731
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x028F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0027
        MOV  R6, 0
        MHI  R6, 0x2776
        IOR  R6, R6, 0xC009
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1048614
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x05D7
        MOV  R6, 0
        MHI  R6, 0x5E76
        IOR  R6, R6, 0xD0C1
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1054555
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0016
        IOR  R2, R2, 0xB335
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xE782
        IOR  R6, R6, 0x52F5
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 439093
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x672F
        IOR  R2, R2, 0x3B9A
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x3F1F
        IOR  R6, R6, 0xBED3
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 998298
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xD170
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xDEEC
        IOR  R6, R6, 0x3FB9
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 0
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x2C09
        IOR  R2, R2, 0x9DF1
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x02C0
        MOV  R3, 7
        IDX  R3, R2, R1, 2
        MOV  R4, 0x1111            ; не должна исполниться
        HALT
handler:
        MOV  R5, 0x2222
; EXPECT R5 = 8738
; EXPECT R4 = 0
; EXPECT R3 = 7
; EXPECT R15 = 16770832
        HALT
