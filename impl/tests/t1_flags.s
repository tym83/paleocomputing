; T1-FLAGS — N and Z are set by ANY register write.
; RISC5.v:127  regwr = ~p & ~stall | (LDR & ...) | (BR & cond & v & ...)
; Third case: a taken BL/BLR writes R15, so it sets the flags too. This is a review finding.
        MOV  R0, 0
        MOV  R1, 100
; --- ordinary arithmetic
        SUB  R2, R1, R1
; EXPECT Z = 1
; EXPECT N = 0
        SUB  R2, R0, R1
; EXPECT Z = 0
; EXPECT N = 1
; --- a LOAD sets the flags too
        ST   R1, R0, 0
        MOV  R3, 0
        ST   R3, R0, 4
        SUB  R4, R0, R1        ; clobber the flags: N=1, Z=0
        LD   R5, R0, 0         ; load 100
; EXPECT Z = 0
; EXPECT N = 0
; EXPECT R5 = 100
        SUB  R4, R0, R1        ; N=1 again
        LD   R6, R0, 4         ; load 0
; EXPECT Z = 1
; EXPECT N = 0
; --- a STORE does NOT touch the flags (regwr = 0)
        SUB  R4, R0, R1        ; N=1, Z=0
        ST   R1, R0, 8
; EXPECT N = 1
; EXPECT Z = 0
; --- a TAKEN BL overwrites N and Z (it writes R15)
        SUB  R4, R0, R1        ; N=1, Z=0
        BL   tgt
tgt:
; EXPECT N = 0
; EXPECT Z = 0
        HALT
