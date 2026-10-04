`timescale 1ns / 1ps
// CORE TIMING WRAPPER. NOT A SYSTEM AND NOT A BOOTABLE DESIGN.
//
// Purpose: measure on real ECP5 fabric (with routing and wire delays) the
// frequency of the RISC5 core and of the core with CHK. The full system with
// memory, video and SD card is not built here; for what it would need, see README.md.
//
// Two modes (Makefile, WRAP=soc|core):
//   soc  — core + ROM on ~clk + code multiplexer, as in RISC5Top.v;
//   core — -DCORE_ONLY: core only, code also comes from a register.
//
// What is on the die in soc mode matches RISC5Top.v:
//   - the RISC5 core (impl/rtl/RISC5.v, with -DWITH_CHK -DCHK_SPLIT or without);
//   - the PROM boot ROM on ~clk, as in the original (the half-cycle paths
//     posedge -> negedge -> posedge through the ROM are kept and appear in the report);
//   - the codebus multiplexer: ROM at addresses 0xFFC000..., otherwise the memory bus.
//
// What is replaced and why:
//   - external RAM. In the original this is asynchronous SRAM OFF the die: the address goes
//     out to the pins, and data returns to the core in the same cycle. That path goes
//     through the I/O pads and the chip's access time, and it cannot be measured without
//     a board. Here memory data comes from a register, and the address and write data
//     go into a register. So the fmax below is the fmax of the CORE on
//     the die, not the frequency of a system with external SRAM;
//   - inputs (memory data, rst, irq, stallX) come from a shift register
//     filled from a single pin: the synthesizer would fold constants away;
//   - core outputs are latched and XOR-reduced into an LED:
//     otherwise the synthesizer would remove logic that has no consumer.
// The registers on inputs and outputs sit outside the core paths and cannot shorten them:
// a "register -> core -> register" path starts and ends where it
// would start and end for the core in the system, just without external pins.

module core_timing_top(
  input  clk_25mhz,   // G2, 25 MHz oscillator on ULX3S
  input  ftdi_txd,    // M1, serial input (UART from FTDI)
  output [7:0] led);

wire clk = clk_25mhz;

// Input shift register: 32 bits of memory data + rst + irq + stallX
// (+ 32 bits of code in CORE_ONLY mode).
`ifdef CORE_ONLY
localparam NIN = 67;
`else
localparam NIN = 35;
`endif
reg [NIN-1:0] sin;
always @(posedge clk) sin <= {sin[NIN-2:0], ftdi_txd};

wire [31:0] inbus0 = sin[31:0];
wire rst    = sin[32];
wire irq    = sin[33];
wire stallX = sin[34];

wire [23:0] adr;
wire [31:0] outbus, romout, codebus;
wire rd, wr, ben;

RISC5 riscx(.clk(clk), .rst(rst), .irq(irq),
   .rd(rd), .wr(wr), .ben(ben), .stallX(stallX),
   .adr(adr), .codebus(codebus), .inbus(inbus0),
   .outbus(outbus));

`ifdef CORE_ONLY
// "Core only" mode: no ROM, code comes from a register. This exposes
// the core's own posedge -> posedge path, not hidden behind the half-cycle
// path to the ROM.
assign romout  = 32'b0;
assign codebus = sin[66:35];
`else
// As in RISC5Top.v: the ROM is clocked by the inverted clock.
PROM PM (.adr(adr[10:2]), .data(romout), .clk(~clk));

assign codebus = (adr[23:14] == 10'h3FF) ? romout : inbus0;
`endif

// Core outputs: latch, then reduce. The reduction runs from register to
// register and has nothing to do with the core paths.
reg [23:0] adr_q;
reg [31:0] out_q;
reg [2:0]  ctl_q;
always @(posedge clk) begin
  adr_q <= adr;
  out_q <= outbus;
  ctl_q <= {rd, wr, ben};
end

wire [58:0] all_q = {adr_q, out_q, ctl_q};
reg [7:0] fold;
integer k;
always @* begin
  fold = 8'b0;
  for (k = 0; k < 59; k = k + 1)
    fold[k % 8] = fold[k % 8] ^ all_q[k];
end
reg [7:0] led_q;
always @(posedge clk) led_q <= fold;
assign led = led_q;

endmodule
