; GENERATED FILE: edit tools/gen_bounds_bench.py, not by hand.
;
; Array indexing in a loop, 1000000 iterations, limit 64.
; Configuration D: descriptor: check and address in a single IDX
        B    start
handler:                       ; trap: must never get here
        MOV  R7, 0x0BAD
        ST   R7, R0, 260
spin:   B    spin
start:
        MOV  R0, 0
        MOV  R1, 0             ; index
        MOV  R2, 0x1000        ; array base
        MHI  R11, 0x0400      ; length in the upper 12 bits
        IOR  R2, R2, R11       ; R2 is the descriptor
        MOV  R4, 0             ; accumulator
        MOV  R5, 0             ; iteration counter
        MHI  R5, 0x000F
        IOR  R5, R5, 0x4240
        MOV  R12, 0            ; MT: trap handler address
        MHI  R12, 0x00FF
        IOR  R12, R12, 0xE004
loop:
        IDX  R10, R2, R1, 2    ; check + element address in one instruction
        LD   R3, R10, 0
        ADD  R4, R4, R3        ; useful work
        ADD  R1, R1, 1         ; next index, with wraparound
        AND  R1, R1, 63
        SUB  R5, R5, 1
        BNE  loop
        MOV  R6, 0xB0DE
        ST   R6, R0, 256
done:   B    done
