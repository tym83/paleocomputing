-- Замер цены проверки границ на CHERIoT-Ibex (ступень CHERI, находка 63).
--
-- Сборка внутри контейнера CHERIoT (см. run.sh):
--   xmake config --sdk=/cheriot-tools/ --board=ibex-safe-simulator
--   xmake && xmake run
--
-- SDK: клон cheriot-rtos в ../cheriot-rtos (его делает run.sh, в git не идёт)
-- или путь в переменной CHERIOT_RTOS.
set_project("CHERIoT bounds-check cost")
sdkdir = path.join(os.getenv("CHERIOT_RTOS") or "../cheriot-rtos", "sdk")
includes(sdkdir)
set_toolchains("cheriot-clang")

option("board")
    set_default("ibex-safe-simulator")

-- Тело цикла — ../loop.c, тот же файл, что уходит в Compiler Explorer.
-- SDK по умолчанию собирает -Oz; поверх ставим -O2 без развёртки,
-- как для остальных целей (флаг позже в строке — он и действует,
-- проверяется дизассемблером, а не верой).
local kernel_flags = {"-O2", "-fno-unroll-loops", "-fno-vectorize", "-fno-slp-vectorize"}

-- Замер: конфигурации A и B.
compartment("bench")
    add_deps("freestanding", "debug")
    add_files("bench.cc", "../loop.c")
    add_cflags(kernel_flags, {force = true})
    add_cxflags(kernel_flags, {force = true})

-- Отрицательный контроль: тот же машинный код, заведомо узкие границы.
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
