// Wrapper for the differential check: Wirth's original FPMultiplier and the
// fast variant receive the same operands. Each has its own clock and run:
// the units finish at different times, and an extra cycle after the end would
// change the counter state, and with it the behaviour of the next back-to-back operation.
// See tb/fpmul_diff.cpp.
module fpmul_diff_top(
  input clk_a, clk_b, run_a, run_b,
  input [31:0] x, y,
  output stall_a, stall_b,
  output [31:0] za, zb);
FPMultiplier     orig (.clk(clk_a), .run(run_a), .x(x), .y(y), .stall(stall_a), .z(za));
FPMultiplierFast fast (.clk(clk_b), .run(run_b), .x(x), .y(y), .stall(stall_b), .z(zb));
endmodule
