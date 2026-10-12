/*
 * The Electrologica X8 for QEMU.
 *
 * The processor and CHARON are the core of impl/x8-the/emu: a transliteration
 * of X8S, the X8 simulator of the Mathematisch Centrum (1971), and of Dijkstra's
 * EWD 149. Rather than translate every X8 instruction into TCG, one
 * translation block calls that core for a slice of machine time, so QEMU runs
 * exactly the machine the episode's tests check. The X8's own clock (1.25 us a
 * cycle) is kept in step with QEMU's virtual clock: at real speed the
 * teleprinter prints ten characters a second, as it did.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#ifndef QEMU_X8_CPU_H
#define QEMU_X8_CPU_H

#include "cpu-qom.h"
#include "exec/cpu-common.h"
#include "exec/cpu-interrupt.h"
#include "system/memory.h"

#define CPU_RESOLVING_TYPE TYPE_X8_CPU

struct x8;

typedef struct CPUArchState {
    struct x8 *m;         /* the machine: processor, core store, CHARON (x8.h) */
    bool realtime;        /* keep the X8 cycle at 1.25 us of virtual time */
    int64_t start_ns;     /* QEMU virtual time of LS and IP */
    uint32_t pc;          /* always 0: the one translation block */
} CPUX8State;

struct ArchCPU {
    CPUState parent_obj;
    CPUX8State env;
    QEMUTimer *timer;     /* wakes the CPU when the X8 has run ahead of time */
    bool wake;            /* the timer fired or a key was pressed */
};

bool x8_cpu_tlb_fill(CPUState *cs, vaddr address, int size,
                     MMUAccessType access_type, int mmu_idx,
                     bool probe, uintptr_t retaddr);
void x8_cpu_tcg_init(void);
void x8_cpu_translate_code(CPUState *cs, TranslationBlock *tb,
                           int *max_insns, vaddr pc, void *host_pc);

#endif
