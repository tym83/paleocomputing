; What UMUL actually does in RISC5.
; Multiplier.v: w1 = (S==32) & u ? {P[63],P[63:32]} - {w0[31],w0}
;                                : {P[63],P[63:32]} + {w0[31],w0}
; The addend {w0[31], w0} is ALWAYS SIGN-extended, regardless of u.
; The u flag (= ~u of the instruction) controls only the last step, i.e. the sign of x.
; Consequence: UMUL treats x as UNSIGNED and y as SIGNED, a mixed multiplication.
;
; In format F0: UMUL a, b, c  ->  x = R[b], y = R[c].
; So it is the SECOND operand that is treated as signed.
        MOV  R0, 0
        MOV  R1, -1              ; 0xFFFFFFFF
        MOV  R2, 2
; --- the case that tells the models apart: x = 2 (small), y = 0xFFFFFFFF
;     truly unsigned: 2 * 4294967295 = 0x1_FFFFFFFE -> H = 1
;     mixed (y signed = -1): 2 * -1 = 0xFFFFFFFF_FFFFFFFE -> H = 0xFFFFFFFF
        UMUL R3, R2, R1
; EXPECT R3 = 4294967294
; EXPECT H = 4294967295
; --- reverse order: x = 0xFFFFFFFF (unsigned), y = 2 (positive)
;     both models agree: 4294967295 * 2 = 0x1_FFFFFFFE -> H = 1
        UMUL R4, R1, R2
; EXPECT R4 = 4294967294
; EXPECT H = 1
; --- signed MUL for contrast: (-1) * 2 = -2
        MUL  R5, R1, R2
; EXPECT R5 = 4294967294
; EXPECT H = 4294967295
        HALT
