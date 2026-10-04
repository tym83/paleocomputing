; T1.15 — branch displacement width.
; The RTL declares disp = IR[21:0], i.e. 22 bits, while Wirth's disassembler ORTool
; prints 20. Our assembler masked 24. We check by execution, not by reading the Verilog:
; two identical branches that differ ONLY in bits 23:22 must land at the same
; point if the hardware ignores those bits.
        MOV  R5, 0
        WORD 0xE7000001         ; B +1 — unconditional, displacement 1 word
        MOV  R5, 1              ; must be skipped
        MOV  R5, 2
; EXPECT R5 = 2
        MOV  R5, 0
        WORD 0xE7C00001         ; the same, but with ones in bits 23:22
        MOV  R5, 1              ; must be skipped as well
        MOV  R5, 3
; EXPECT R5 = 3
; ──────── don't-care field b of MOV ────────
; In aluRes the op=0 branch never touches B, so field b (23:20) of MOV
; is not read. Found by a systematic sweep of encodings (tools/sweep_encoding.py):
; a word with nonzero b did not round-trip literally. We check by execution.
        MOV  R1, 0x1234
        WORD 0x05000001         ; MOV R5, R1 — field b = 0
; EXPECT R5 = 0x1234
        MOV  R5, 0
        WORD 0x05700001         ; the same, but field b = 7
; EXPECT R5 = 0x1234
        HALT
