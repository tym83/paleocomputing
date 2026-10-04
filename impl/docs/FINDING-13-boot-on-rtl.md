[Русская версия](FINDING-13-boot-on-rtl.ru.md)

# Milestone: Wirth's real Verilog boots the real Oberon system

Not an emulator. The `RISC5.v` core dated 31.8.2018, synthesisable, run by Verilator
cycle by cycle, brings up Project Oberon 2013 from a disk image and draws its interface.

Run: `build/obj_soc/soc_tb --prom=rtl/prom_sd.mem`
Screenshot: `docs/oberon-boot-screen.png`

## Result

| | |
|---|---|
| instructions to boot | 12 000 000 |
| cycles | 18 654 115 |
| first write to the framebuffer | around instruction 7 077 888 |
| host time | **4.27 s** |
| **speed** | **4.37 MHz-equivalent** (full core with memory) |
| black pixels on screen | 2.37%, typical of Oberon's white background with text |

For comparison: the reference emulator `pdewacht/oberon-risc-emu` draws the first frame
after ~8 million instructions. Our RTL does so after ~7.1 million. The order of magnitude matches.

## How the testbench is built

The wire-level interfaces are **not emulated**. Following the review's recommendation, the peripherals were replaced
by stubs with the same register interface to the bus (same addresses), and the data is fed
directly from C++:

| Device | In the RTL | In ours |
|---|---|---|
| display | VGA pixel stream from `VID.v` | reading the framebuffer area straight from RAM |
| keyboard, mouse | bit-level PS/2 | registers 6 and 7 |
| disk | bit-level SPI + SD card state machine | word-level logic from the reference emulator (`tb/disk/disk.c`) |
| RS-232 | bit-level receive/transmit | registers 2 and 3 |

The `RISC5.v` core itself is **untouched**, and it is precisely the subject of the study.
This also brought back speed: without `VID.v` honestly clocking a 1024×768@60 pixel stream,
the simulation runs noticeably faster.

## Three mistakes along the way

**1. The wrong boot loader.** In Wirth's set, `prom.mem` is a serial-line boot loader:
it spins in a loop polling the RS-232 status register and does not read the disk at all.
A different one is needed, from the reference emulator (`risc-boot.inc`, 383 words), which boots from SD.
Both start the same way and diverge later, so the substitution is not obvious.

**2. The bus during reset.** The instruction register latches **every cycle**
(`RISC5.v:173`: `IR <= stall ? IR : codebus`). If zeros are fed onto the bus during reset,
the very first instruction executes as `MOV R0, R0` instead of the jump from the boot loader,
and the system quietly goes on executing zeros. It looks like "the boot loader hung", although it
never even started.

**3. The framebuffer is bottom-up.** `VID.v`: `vidadr = Org + {3'b0, ~vcnt, hword}`:
row 0 is at the highest address. A naive dump gives an upside-down screen.
The review predicted this; the warning saved a day.

## What this opens up

- **a differential testbench**: there is now something to run the reference against the RTL on a real system, not on synthetic tests
- **the browser**: the same model builds with Emscripten, and the 4.37 MHz host speed leaves headroom
- **measurements on a real workload directly on the RTL**, not through the latency model
