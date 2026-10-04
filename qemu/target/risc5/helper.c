/*
 * RISC5 helpers: division and an explicit refusal on what is not written yet.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qemu/log.h"
#include "cpu.h"
#include "exec/helper-proto.h"
#include "accel/tcg/cpu-loop.h"

/*
 * Wirth's signed division rounds DOWN, not toward zero as is usual in C:
 * the remainder is always non-negative. The Oberon compiler relies on this, so
 * rounding toward zero here would diverge on negative numbers.
 *
 * The hardware expects a positive divisor (Divider.v); for zero or a
 * negative one its behaviour is undefined. We choose a defined one:
 * return zeros and write to the log, so that the divergence is visible instead of
 * showing up later as a mysterious result.
 */
uint32_t HELPER(div)(CPURISC5State *env, uint32_t b, uint32_t c)
{
    int32_t x = (int32_t)b, y = (int32_t)c, q, r;

    if (y <= 0) {
        qemu_log_mask(LOG_GUEST_ERROR,
                      "RISC5: DIV by divisor %d is undefined in hardware\n", y);
        env->h = 0;
        return 0;
    }

    q = x / y;
    r = x % y;
    if (r < 0) {          /* convert to rounding down */
        q -= 1;
        r += y;
    }
    env->h = (uint32_t)r;
    return (uint32_t)q;
}

uint32_t HELPER(udiv)(CPURISC5State *env, uint32_t b, uint32_t c)
{
    if (c == 0) {
        qemu_log_mask(LOG_GUEST_ERROR, "RISC5: UDIV by zero\n");
        env->h = 0;
        return 0;
    }
    env->h = b % c;
    return b / c;
}

void HELPER(unimplemented)(CPURISC5State *env, uint32_t what)
{
    CPUState *cs = env_cpu(env);

    qemu_log_mask(LOG_UNIMP, "RISC5: not implemented, code %08x\n", what);
    cs->exception_index = EXCP_RESET;
    cpu_loop_exit(cs);
}
