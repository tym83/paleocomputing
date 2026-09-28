; ПОРОЖДЁННЫЙ ФАЙЛ — правится tools/gen_idx_diff.py, не руками.
; 150 случайных IDX (зерно 14) и один случайный выход за границу.
        MOV  R0, 0
        MOV  R12, 0
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xFA00
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
        MHI  R2, 0x0020
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x9829
        IOR  R6, R6, 0x4D4B
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 4
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x001E
        IOR  R2, R2, 0x07D2
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x0F2A
        IOR  R6, R6, 0x2124
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 919506
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x89E0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x5D17
        IOR  R6, R6, 0x9B78
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0012
        IOR  R2, R2, 0xE4E4
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x2230
        IOR  R6, R6, 0xD16D
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 189668
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x003C
        IOR  R2, R2, 0x5959
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x1F3C
        IOR  R6, R6, 0xCB95
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 809305
; EXPECT C = 0
; EXPECT V = 0
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
        MHI  R6, 0x0A25
        IOR  R6, R6, 0xECEB
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 1048575
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
        MHI  R6, 0x5A78
        IOR  R6, R6, 0x58F6
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x03B0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xA082
        IOR  R6, R6, 0x8193
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 0
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0020
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0xCE46
        IOR  R6, R6, 0x9927
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 2
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x03E2
        MOV  R6, 0
        MHI  R6, 0x3460
        IOR  R6, R6, 0xA920
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1049569
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0030
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xBD70
        IOR  R6, R6, 0xF147
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
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
        MHI  R6, 0x0D4B
        IOR  R6, R6, 0xE7E2
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x001D
        IOR  R2, R2, 0x762E
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xC45C
        IOR  R6, R6, 0xB58F
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 882222
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x030F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x000D
        MOV  R6, 0
        MHI  R6, 0xFADD
        IOR  R6, R6, 0xC71E
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1048627
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
        IOR  R1, R1, 0x07E6
        MOV  R6, 0
        MHI  R6, 0x074D
        IOR  R6, R6, 0x27D7
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 16176
; EXPECT C = 0
; EXPECT V = 0
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
        MHI  R6, 0xD625
        IOR  R6, R6, 0x746A
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1048579
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
        MHI  R6, 0x705D
        IOR  R6, R6, 0x5F62
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0FFE
        MOV  R6, 0
        MHI  R6, 0xDA0F
        IOR  R6, R6, 0xB456
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 1056763
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x1806
        IOR  R2, R2, 0xA140
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x017A
        MOV  R6, 0
        MHI  R6, 0xF376
        IOR  R6, R6, 0x8538
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 437520
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x02EF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0018
        MOV  R6, 0
        MHI  R6, 0xB4B3
        IOR  R6, R6, 0x2FE5
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1048767
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0030
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x1F33
        IOR  R6, R6, 0x1BC5
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0x9352
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xEDC9
        IOR  R6, R6, 0x839B
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 1020754
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0045
        IOR  R2, R2, 0x96C4
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x6288
        IOR  R6, R6, 0xDDEE
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 366278
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
        MHI  R6, 0xEC40
        IOR  R6, R6, 0x94F9
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 1048575
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
        MHI  R6, 0x55EC
        IOR  R6, R6, 0xE512
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x025D
        IOR  R2, R2, 0x459D
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x055A
        IOR  R6, R6, 0x1391
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 869797
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
        MHI  R6, 0x1A51
        IOR  R6, R6, 0xDD34
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 0
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
        MHI  R6, 0x4890
        IOR  R6, R6, 0x1D1A
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1048575
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0350
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x001F
        MOV  R6, 0
        MHI  R6, 0x831D
        IOR  R6, R6, 0x3669
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 62
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x033F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x14D3
        IOR  R6, R6, 0xEB5F
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1048575
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0025
        IOR  R2, R2, 0xCEBB
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x6CCF
        IOR  R6, R6, 0xA026
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 380607
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0031
        IOR  R2, R2, 0x3FF5
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x8C2D
        IOR  R6, R6, 0x444B
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 81909
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0032
        IOR  R2, R2, 0x68E2
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x619B
        IOR  R6, R6, 0x676C
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 157938
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0030
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x6656
        IOR  R6, R6, 0xA614
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFB
        IOR  R2, R2, 0x6091
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0111
        MOV  R6, 0
        MHI  R6, 0xA203
        IOR  R6, R6, 0x3FE1
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 746709
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0030
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x1C2E
        IOR  R6, R6, 0xD562
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x039F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0038
        MOV  R6, 0
        MHI  R6, 0x4B44
        IOR  R6, R6, 0x7554
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1048631
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
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0xEBE3
        IOR  R6, R6, 0xD6DA
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 1048583
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0039
        IOR  R2, R2, 0x66EC
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x418C
        IOR  R6, R6, 0x972C
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 616180
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x006F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0005
        MOV  R6, 0
        MHI  R6, 0x4791
        IOR  R6, R6, 0x30C3
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1048615
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0020
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0xEE5E
        IOR  R6, R6, 0xB1A7
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 2
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x7DC6
        IOR  R2, R2, 0x6B96
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x057A
        MOV  R6, 0
        MHI  R6, 0x472A
        IOR  R6, R6, 0xBDAE
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 431974
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0013
        IOR  R2, R2, 0x4763
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x3BB8
        IOR  R6, R6, 0xFE66
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 214883
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x03F0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x003B
        MOV  R6, 0
        MHI  R6, 0xDB3D
        IOR  R6, R6, 0x1DCC
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 236
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
        MHI  R6, 0xF59A
        IOR  R6, R6, 0x6035
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 1048583
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x01EF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x6899
        IOR  R6, R6, 0x51D0
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1048575
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x8E8F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x498B
        IOR  R6, R6, 0x55BF
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 1048575
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x1BD0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x93F4
        IOR  R6, R6, 0xF5AF
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 0
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0023
        IOR  R2, R2, 0xD831
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x9339
        IOR  R6, R6, 0x1873
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 251955
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
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x917C
        IOR  R6, R6, 0x5D55
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1048575
; EXPECT C = 1
; EXPECT V = 1
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
        MHI  R6, 0xBC8A
        IOR  R6, R6, 0x1EAD
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 0
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
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x4392
        IOR  R6, R6, 0x59C5
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 16
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
        MHI  R6, 0x09AC
        IOR  R6, R6, 0x1B43
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1048576
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x6590
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xA9C5
        IOR  R6, R6, 0x33E0
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 0
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFF
        IOR  R2, R2, 0x77B1
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x5F48
        IOR  R6, R6, 0x9381
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1013681
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
        IOR  R1, R1, 0x0527
        MOV  R6, 0
        MHI  R6, 0x4AC3
        IOR  R6, R6, 0x43C8
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 10552
; EXPECT C = 0
; EXPECT V = 1
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
        MHI  R6, 0x7142
        IOR  R6, R6, 0x869F
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0021
        IOR  R2, R2, 0xDA34
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x42D9
        IOR  R6, R6, 0xE42B
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 121398
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
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x28BA
        IOR  R6, R6, 0x5F12
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1048577
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0370
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0012
        MOV  R6, 0
        MHI  R6, 0xA8BE
        IOR  R6, R6, 0x1D24
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 144
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xF890
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xC9FD
        IOR  R6, R6, 0x7C76
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 0
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xB84F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x01BD
        MOV  R6, 0
        MHI  R6, 0xD09C
        IOR  R6, R6, 0xE11E
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 1052135
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x274F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0041
        MOV  R6, 0
        MHI  R6, 0x0BC9
        IOR  R6, R6, 0x10A4
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1048640
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
        MHI  R6, 0xB4B5
        IOR  R6, R6, 0xEA68
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 0
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0039
        IOR  R2, R2, 0x1A85
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x0C3E
        IOR  R6, R6, 0xB348
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 596613
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x03FF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x003E
        MOV  R6, 0
        MHI  R6, 0x1E92
        IOR  R6, R6, 0x7D75
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1049071
; EXPECT C = 0
; EXPECT V = 0
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
        MHI  R6, 0xBB40
        IOR  R6, R6, 0xFCD5
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 1048575
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
        MHI  R6, 0x0637
        IOR  R6, R6, 0x2779
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1048575
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
        MHI  R6, 0x33B5
        IOR  R6, R6, 0xFDFF
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFF0
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0526
        MOV  R6, 0
        MHI  R6, 0xB1E3
        IOR  R6, R6, 0xF2B7
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 2636
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0060
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0005
        MOV  R6, 0
        MHI  R6, 0x0004
        IOR  R6, R6, 0x39D2
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 5
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
        MHI  R6, 0x7BE0
        IOR  R6, R6, 0x3247
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 1
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
        MHI  R6, 0xA9C9
        IOR  R6, R6, 0x3E1D
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1048575
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x01DB
        IOR  R2, R2, 0x7502
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0008
        MOV  R6, 0
        MHI  R6, 0xCFA6
        IOR  R6, R6, 0xC0C1
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 750858
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x001A
        IOR  R2, R2, 0x49AE
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x6FC8
        IOR  R6, R6, 0x41E2
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 674222
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0216
        IOR  R2, R2, 0xF206
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0020
        MOV  R6, 0
        MHI  R6, 0x4A24
        IOR  R6, R6, 0x9C77
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 455206
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xDFD3
        IOR  R2, R2, 0x72FD
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0DFC
        MOV  R6, 0
        MHI  R6, 0x1667
        IOR  R6, R6, 0x0281
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 229625
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
        IOR  R1, R1, 0x080F
        MOV  R6, 0
        MHI  R6, 0xD2BD
        IOR  R6, R6, 0xD17D
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 16504
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
        IOR  R1, R1, 0x0FFE
        MOV  R6, 0
        MHI  R6, 0xCAB4
        IOR  R6, R6, 0x51EB
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 32752
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x01E4
        IOR  R2, R2, 0xC237
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x4B42
        IOR  R6, R6, 0x155F
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 311863
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0317
        IOR  R2, R2, 0xDFF0
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xECB6
        IOR  R6, R6, 0xBBDC
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 516080
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x002F
        IOR  R2, R2, 0xC441
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x398B
        IOR  R6, R6, 0x6A17
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1033289
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFF7
        IOR  R2, R2, 0x639F
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xBAD7
        IOR  R6, R6, 0x4C2E
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 484255
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0310
        IOR  R2, R2, 0x0000
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x4E37
        IOR  R6, R6, 0x24DF
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x003F
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x28FB
        IOR  R6, R6, 0x7A1C
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1048575
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
        MHI  R6, 0x5EB0
        IOR  R6, R6, 0xA348
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 0
; EXPECT C = 0
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
        MHI  R6, 0x4267
        IOR  R6, R6, 0x1D33
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0015
        IOR  R2, R2, 0x15FF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xA993
        IOR  R6, R6, 0xDE95
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 333311
; EXPECT C = 1
; EXPECT V = 1
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
        MHI  R6, 0x316E
        IOR  R6, R6, 0x7CE6
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1048575
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
        MHI  R6, 0x018B
        IOR  R6, R6, 0xB8E2
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 1048575
; EXPECT C = 0
; EXPECT V = 0
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
        MHI  R6, 0x1153
        IOR  R6, R6, 0xC433
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1048575
; EXPECT C = 0
; EXPECT V = 0
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
        MHI  R6, 0x209B
        IOR  R6, R6, 0x55F0
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 1048575
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xF458
        IOR  R2, R2, 0x414F
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0444
        MOV  R6, 0
        MHI  R6, 0xABD5
        IOR  R6, R6, 0xAD2A
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 543191
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
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x3B60
        IOR  R6, R6, 0x4110
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 1048591
; EXPECT C = 0
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
        MHI  R6, 0xE625
        IOR  R6, R6, 0x3022
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 1048577
; EXPECT C = 1
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x92E8
        IOR  R2, R2, 0x93D9
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x092D
        MOV  R6, 0
        MHI  R6, 0x9B44
        IOR  R6, R6, 0x36BC
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 566835
; EXPECT C = 1
; EXPECT V = 1
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
        MHI  R6, 0x1DA3
        IOR  R6, R6, 0x51B2
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 1048575
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x0015
        IOR  R2, R2, 0x527D
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0x7602
        IOR  R6, R6, 0x788A
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 2
; EXPECT R2 = 348797
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x9A63
        IOR  R2, R2, 0x47ED
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x09A5
        MOV  R6, 0
        MHI  R6, 0x026B
        IOR  R6, R6, 0x7AB5
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 1
; EXPECT R3 = 219959
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFA
        IOR  R2, R2, 0xD62D
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0FFE
        MOV  R6, 0
        MHI  R6, 0x8D81
        IOR  R6, R6, 0xADF7
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 3
; EXPECT R2 = 742941
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
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0x764A
        IOR  R6, R6, 0x4493
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1048579
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x00D1
        IOR  R2, R2, 0xB65C
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x000A
        MOV  R6, 0
        MHI  R6, 0x52F4
        IOR  R6, R6, 0xE8A2
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 0
; EXPECT R2 = 112230
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xFFFE
        IOR  R2, R2, 0x3977
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0FFE
        MOV  R6, 0
        MHI  R6, 0x9E73
        IOR  R6, R6, 0xA8FD
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 936309
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
        IOR  R1, R1, 0x0002
        MOV  R6, 0
        MHI  R6, 0xB6CC
        IOR  R6, R6, 0x51F3
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 1048583
; EXPECT C = 1
; EXPECT V = 1
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x02DF
        IOR  R2, R2, 0xFFFF
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x001E
        MOV  R6, 0
        MHI  R6, 0x8526
        IOR  R6, R6, 0xE4B9
        ADD  R7, R6, R6
        IDX  R2, R2, R1, 1
; EXPECT R2 = 1048635
; EXPECT C = 1
; EXPECT V = 1
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
        MHI  R6, 0x6AD9
        IOR  R6, R6, 0x59DE
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 2
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 1
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x002B
        IOR  R2, R2, 0xC49C
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0001
        MOV  R6, 0
        MHI  R6, 0x2AA6
        IOR  R6, R6, 0x643D
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 771236
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0x001A
        IOR  R2, R2, 0x8A1E
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0000
        MOV  R6, 0
        MHI  R6, 0xE508
        IOR  R6, R6, 0x1BAA
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 690718
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
        MHI  R6, 0x2AA0
        IOR  R6, R6, 0xA81B
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 3
; EXPECT R3 = 16
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
        MHI  R6, 0x3AA1
        IOR  R6, R6, 0xE7D1
        ADD  R7, R6, R6
        IDX  R3, R2, R1, 0
; EXPECT R3 = 0
; EXPECT C = 0
; EXPECT V = 0
; EXPECT Z = 1
; EXPECT N = 0
; EXPECT CYCLES = 1
        MOV  R2, 0
        MHI  R2, 0xC850
        IOR  R2, R2, 0xF490
        MOV  R1, 0
        MHI  R1, 0x0000
        IOR  R1, R1, 0x0C85
        MOV  R3, 7
        IDX  R3, R2, R1, 2
        MOV  R4, 0x1111            ; не должна исполниться
        HALT
handler:
        MOV  R5, 0x2222
; EXPECT R5 = 8738
; EXPECT R4 = 0
; EXPECT R3 = 7
; EXPECT R15 = 16775672
        HALT
