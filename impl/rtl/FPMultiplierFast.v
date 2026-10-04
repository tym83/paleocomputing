`timescale 1ns / 1ps
// Fast variant of Wirth's FPMultiplier (episode 2, findings 72–79).
//
// The original block computes the mantissa product by shift-and-add: 24 steps,
// an operation costs 26 cycles and a back-to-back one 32 (the counter spins up to
// overflow, finding 01). Here the same 24×24 product is taken with a single
// multiplication, while rounding, normalization and saturation are REPEATED LINE FOR LINE
// from FPMultiplier.v: the result must match bit for bit, which is checked by
// tb/fpmul_diff.cpp with the original module as the reference.
//
// Two variants:
//   default          — combinational: FML executes in 1 cycle, no stall;
//   FPMUL_FAST_REG   — the product is latched in a register: FML in 2 cycles,
//                      the multiplier path is cut off from the register file write.
// Wired into RISC5.v by the FPMUL_FAST define (following the WITH_CHK pattern).
module FPMultiplierFast(
  input clk, run,
  input [31:0] x, y,
  output stall,
  output [31:0] z);

wire sign;
wire [7:0] xe, ye;
wire [8:0] e0, e1;
wire [24:0] z0;
wire [47:0] prod, P;

assign sign = x[31] ^ y[31];
assign xe = x[30:23];
assign ye = y[30:23];
assign e0 = xe + ye;
// the same product that accumulates in P in the original block after 24 steps
assign prod = {24'b0, 1'b1, x[22:0]} * {24'b0, 1'b1, y[22:0]};

`ifdef FPMUL_FAST_REG
reg S;          // 0 — multiply cycle (stall), 1 — result ready
reg [47:0] Pr;
assign P = Pr;
assign stall = run & ~S;
always @ (posedge(clk)) begin
    Pr <= prod;
    S <= run ? ~S : 1'b0;
end
`else
assign P = prod;
assign stall = 1'b0;
`endif

assign e1 = e0 - 127 + P[47];
assign z0 = P[47] ? P[47:23]+1 : P[46:22]+1;  // rounding and normalization — as in Wirth's
assign z = (xe == 0) | (ye == 0) ? 0 :
   (~e1[8]) ? {sign, e1[7:0], z0[23:1]} :
   (~e1[7]) ? {sign, 8'b11111111, z0[23:1]} : 0;
endmodule
