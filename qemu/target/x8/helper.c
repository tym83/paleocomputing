/*
 * The X8 slice: run the machine until it has caught up with QEMU's virtual
 * clock, then sleep until its next cycle is due.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qemu/timer.h"
#include "qemu/main-loop.h"
#include "cpu.h"
#include "exec/helper-proto.h"
#include "accel/tcg/cpu-loop.h"
#include "x8.h"

#define NS_PER_CYCLE 1250          /* 1.25 us, the cycle of X8S */
#define MAX_SLICE    200000        /* cycles per call, so QEMU stays responsive */

void HELPER(x8_slice)(CPUX8State *env)
{
    X8CPU *cpu = env_archcpu(env);
    CPUState *cs = CPU(cpu);
    x8 *m = env->m;
    int64_t now = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
    uint64_t until = m->ccs + MAX_SLICE;

    if (env->realtime) {
        uint64_t due = now > env->start_ns
                       ? (uint64_t)(now - env->start_ns) / NS_PER_CYCLE : 0;
        if (due < until) {
            until = due;
        }
    }
    if (!m->halted && m->ccs < until) {
        /* CHARON writes to the console and reads keys: hold the big lock */
        bql_lock();
        x8_run(m, until);
        bql_unlock();
        return;
    }
    /*
     * Ahead of time, or at a static stop: sleep until the next cycle is due,
     * or a key. A stopped X8 keeps its console, so QEMU stays up, as the
     * machine did when it stopped.
     */
    cpu->wake = false;
    timer_mod(cpu->timer, m->halted
              ? now + NANOSECONDS_PER_SECOND
              : env->start_ns + (int64_t)m->ccs * NS_PER_CYCLE + SCALE_MS);
    cs->halted = 1;
    cs->exception_index = EXCP_HLT;
    cpu_loop_exit(cs);
}
