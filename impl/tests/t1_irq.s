; T1.7 — interrupts. The reference emulator does not model them at all (no SPC, no RTI,
; no irq), so there is no golden model and the only comparison is against the RTL.
;
; Checked: entry through vector 0x00000004, saving and restoring the flags via
; SPC, return by RTI exactly to the interrupted point, setting and clearing handler mode,
; and, separately, that register H is NOT saved (documented behaviour,
; which makes MUL/DIV unsafe in a handler).
;
; Encoding STI/CLI requires condition NV ("never"): the side effect in RISC5.v:181
; does not depend on the condition, and with "always" the instruction would branch to a register.
        MOV  R0, 0
; ── vector at address 4: branch to handler (F3 offset, cond=7)
        MOV  R1, 0
        MHI  R1, 0xE700
        MOV  R2, 0
        MHI  R2, 0x00FF
        IOR  R2, R2, 0xE060      ; handler address
        SUB  R3, R2, 4
        ASR  R3, R3, 2
        SUB  R3, R3, 1
        ADD  R1, R1, R3
        ST   R1, R0, 4
; ── prepare the interrupt request address and value
        MOV  R7, 0
        MHI  R7, 0x00FF
        IOR  R7, R7, 0xFFC0
        MOV  R8, 1
; ── H before the interrupt
        MOV  R4, 5
        MUL  R5, R4, R4          ; H := 0
; ── enable interrupts
        STI
; EXPECT IE = 1
; ── set a DISTINCTIVE flag state BEFORE the request:
;    ST does not touch the flags, so this is exactly the state at interrupt time
        SUB  R6, R0, R4          ; N=1, Z=0
        ST   R8, R7, 0           ; interrupt request; does not change the flags
; ── control returns here after RTI.
;    The checks come BEFORE the first instruction after return: any register write
;    sets N and Z itself and would overwrite the restored state.
; EXPECT N = 1               ; flag restored from SPC
; EXPECT Z = 0
; EXPECT IMD = 0             ; handler mode cleared
; EXPECT R11 = 13107         ; the handler ran
; EXPECT H = 1                ; H NOT restored: left as the handler set it
        MOV  R9, 0x1111
        MOV  R10, 0x2222
        HALT
        WORD 0
; ── handler, word 24 = address 0x00FFE060
handler:
        MOV  R11, 0x3333
; H was 0 before the interrupt (5*5 does not overflow). Clobber it so that
; the high bits become nonzero: 0x10000 * 0x10000 = 0x1_0000_0000 -> H = 1.
        MOV  R14, 0
        MHI  R14, 0x0001
        MUL  R13, R14, R14       ; H := 1
        RTI
