[Русская версия](FINDING-17-cycle-model-validated.ru.md)

# Finding 17: the cycle model confirmed on a real workload: 12 million instructions, 0 mismatches

This closes the project's only unverified dependency.

## Why this was needed

**ALL of the release's cycle numbers are built on the cycle model `tb/cycle_model.h`**: the 2.74%,
the 10.16%, and the contribution of the hardware bounds check. That is because the reference emulator Norebo,
on which the workloads are run, is not cycle-accurate: it counts instructions.

Until now the model had been checked only on **61 instructions of synthetic tests**. That
covered all latencies and the back-to-back penalty, but gave no
confidence that real code contains no case the model treats differently.

## The check

The comparison is built into the SoC testbench: on **every** instruction of the Oberon system boot,
the model's prediction is compared with the actual RTL cycle count.

| | |
|---|---|
| instructions | **12 000 000** |
| RTL cycles | 18 654 115 |
| model cycles | **18 654 115** |
| mismatches | **0 (0.0000%)** |

The agreement is both per instruction and in total, to the cycle.

The workload is not synthetic: it is code Wirth wrote, the boot loader, kernel, file
system, windowing subsystem, and all the floating-point arithmetic during rendering.

## The trap I fell into during the check itself

The first run gave **a 15.8% mismatch** and 77% of instructions mispredicted.
It looked like a major finding and was **a bug in the comparison code**.

The instruction for the model was read from the address bus `top->adr` at the start of the step, but the bus
is only set after `clk = 0` and `eval()`. Before that it holds the address of the **previous**
cycle, often the data address of a completed load rather than the next instruction.

The correct way is to take `PC` directly, as `tb/run_tests.cpp` does, where the model
agreed with zero mismatches.

**Lesson:** a negative result is checked just as carefully as a positive one.
Had I published "the model is off by 15.8%", that would have been a false finding, and it
would have discredited all the release's cycle numbers.

## What can now be claimed

> All cycle numbers were obtained with a latency model checked against the real RTL
> in two ways: per instruction on 61 directed tests covering all latencies
> and the back-to-back penalty, and on 12 million instructions of the Oberon system boot
> with zero mismatches both per instruction and in total.

The remaining limitation is honest: the model does not account for video DMA, which in the real SoC
steals cycles via `stallX`. In our testbench the video controller is not connected, so the model
and the RTL agree with each other, but both describe the machine **without** video DMA.
