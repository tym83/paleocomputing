; T1.18 — the first instruction of a program must execute.
; RISC5 is a prefetching machine: PC+1 is on the address bus, while what executes is
; whatever sits in the instruction register. If IR is not filled after reset, the first cycle
; executes garbage and the machine never reads the first word of the program at all.
; The bug hid in all 264 checks: each began with an instruction whose
; loss did not matter. It was found by a divider probe: `MOV R1, 100` was lost,
; and the division returned zero.
        MOV  R5, 42
        MOV  R6, 7
; EXPECT R5 = 42
; EXPECT R6 = 7
        HALT
