-- Measures the cost of a bounds check on CHERIoT-Ibex (CHERI rung, finding 63).
--
-- Build inside the CHERIoT container (see run.sh):
--   xmake config --sdk=/cheriot-tools/ --board=ibex-safe-simulator
--   xmake && xmake run
--
-- SDK: a cheriot-rtos clone in ../cheriot-rtos (made by run.sh, not tracked in git)
-- or a path in the CHERIOT_RTOS variable.
set_project("CHERIoT bounds-check cost")
sdkdir = path.join(os.getenv("CHERIOT_RTOS") or "../cheriot-rtos", "sdk")
includes(sdkdir)
set_toolchains("cheriot-clang")

option("board")
    set_default("ibex-safe-simulator")

-- The loop body is ../loop.c, the same file that goes to Compiler Explorer.
-- The SDK builds with -Oz by default; on top of that we set -O2 without unrolling,
-- as for the other targets (the later flag on the command line wins; this is
-- verified with the disassembler, not taken on faith).
local kernel_flags = {"-O2", "-fno-unroll-loops", "-fno-vectorize", "-fno-slp-vectorize"}

-- Measurement: configurations A and B.
compartment("bench")
    add_deps("freestanding", "debug")
    add_files("bench.cc", "../loop.c")
    add_cflags(kernel_flags, {force = true})
    add_cxflags(kernel_flags, {force = true})

-- Negative control: the same machine code, deliberately narrow bounds.
compartment("probe")
    add_deps("freestanding", "debug")
    add_files("probe.cc", "../loop.c")
    add_cflags(kernel_flags, {force = true})
    add_cxflags(kernel_flags, {force = true})

firmware("bounds_bench")
    add_deps("bench", "probe")
    on_load(function(target)
        target:values_set("threads", {
            {
                compartment = "bench",
                priority = 1,
                entry_point = "run",
                stack_size = 0x800,
                trusted_stack_frames = 3
            }
        }, {expand = false})
    end)
