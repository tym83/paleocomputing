`timescale 1ns / 1ps
// register file, triple-port -- BEHAVIOURAL REPLACEMENT for the Xilinx RAM16X1D primitives.
//
// The original (Registers.xilinx.v.orig, 1.2.2018) is built from 64 RAM16X1D primitives
// of Xilinx distributed memory: synchronous write on WCLK when WE, asynchronous read
// (SPO at address A, DPO at address DPRA). Here is the same semantics in behavioural Verilog,
// portable to Verilator / yosys / any ASIC flow.
//
// The interface is identical to the original -- drop-in.
//
// ⚠ DEBT on the path to silicon: RAM16X1D had .INIT(16'h0000), i.e. the register file
// was zeroed by the bitstream. Silicon will not do that. The interface has no reset port;
// adding one requires editing RISC5.v. For now -- initial, for simulation.

module Registers(
  input clk, wr,
  input [3:0] rno0, rno1, rno2,
  input [31:0] din,
  output [31:0] dout0, dout1, dout2);

reg [31:0] R [0:15] /*verilator public*/;

integer k;
initial for (k = 0; k < 16; k = k + 1) R[k] = 32'b0;

always @(posedge clk) if (wr) R[rno0] <= din;

assign dout0 = R[rno0];
assign dout1 = R[rno1];
assign dout2 = R[rno2];

endmodule
