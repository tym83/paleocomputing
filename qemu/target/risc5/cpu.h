/*
 * Niklaus Wirth's RISC5 machine for QEMU.
 *
 * All of the state below is taken from RISC5.v, not from descriptions:
 *   :13  reg [21:0] PC          program counter, 22 bits, IN WORDS
 *   :15  reg N, Z, C, OV        condition flags
 *   :16  reg [31:0] H           auxiliary register
 *   :36  reg irq1, intEnb, intPnd, intMd    interrupt state
 *   :37  reg [25:0] SPC         flags and counter saved on interrupt
 *   :11  localparam StartAdr = 22'h3FF800   reset vector
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#ifndef QEMU_RISC5_CPU_H
#define QEMU_RISC5_CPU_H

#include "cpu-qom.h"
#include "exec/cpu-common.h"
#include "exec/cpu-interrupt.h"
#include "system/memory.h"

#define CPU_RESOLVING_TYPE TYPE_RISC5_CPU

#define RISC5_NUM_REGS 16

/*
 * Register naming conventions. These are CONVENTIONS of the Oberon compiler,
 * not a property of the hardware: to the processor all sixteen are equal.
 */
#define RISC5_REG_MT  12   /* trap entry point */
#define RISC5_REG_SB  13   /* static data base */
#define RISC5_REG_SP  14   /* top of stack */
#define RISC5_REG_LNK 15   /* return address */

/* RISC5.v:11: reset sends the counter into ROM. The value is in WORDS. */
#define RISC5_RESET_PC_W 0x3FF800

#define EXCP_RESET 1
#define EXCP_IRQ   2

typedef struct CPUArchState {
    /*
     * The program counter is kept in words, as in the hardware: there nxpc = PC + 1
     * (RISC5.v:182). The byte address is obtained by multiplying by four, and this
     * is not an implementation detail: all code addressing rests on it.
     */
    uint32_t pc_w;

    uint32_t r[RISC5_NUM_REGS];

    /*
     * Flags are kept one per word: that is cheaper to compute in TCG than
     * unpacking them from a shared register. In hardware these are four separate
     * flip-flops, so there is no divergence from it.
     */
    uint32_t sr_n;
    uint32_t sr_z;
    uint32_t sr_c;
    uint32_t sr_v;

    /* High half of the product or the division remainder (RISC5.v:221). */
    uint32_t h;

    /*
     * Interrupts. intEnb enables, intPnd remembers an arrived one, intMd
     * shows that the handler is already running. SPC holds the flags together with
     * the return address: {N, Z, C, V, PC[21:0]}, 26 bits (RISC5.v:227).
     */
    uint32_t spc;
    bool int_enb;
    bool int_pnd;
    bool int_md;
    /*
     * Hardware array bounds check (CHK). This is not a mode but a HARDWARE
     * VARIANT: the same as building the RTL with -DWITH_CHK. Set by the machine at
     * creation and never changed afterwards: generated code depends on it, and
     * changing it on the fly would mean invalidating blocks that have already
     * been translated.
     */
    bool chk;
    /*
     * Indexing through a descriptor (IDX, episode 14). A hardware variant just
     * like chk: the same as building the RTL with -DWITH_DESC. The RTL core with IDX also
     * includes CHK, so its QEMU twin is chk=on,desc=on.
     */
    bool desc;
} CPURISC5State;

struct ArchCPU {
    CPUState parent_obj;
    CPURISC5State env;
};

/*
 * Reading the flags with MOV a, NZCV gives more than just four bits:
 * RISC5.v:156 returns {N, Z, C, OV, 20'b0, 8'h53}. The low byte, 0x53, is the
 * core version signature. We reproduce it exactly, otherwise the system does not recognize it.
 */
#define RISC5_NZCV_TAG 0x53

static inline uint32_t risc5_read_nzcv(const CPURISC5State *env)
{
    return ((env->sr_n & 1) << 31) | ((env->sr_z & 1) << 30) |
           ((env->sr_c & 1) << 29) | ((env->sr_v & 1) << 28) |
           RISC5_NZCV_TAG;
}


bool risc5_cpu_tlb_fill(CPUState *cs, vaddr address, int size,
                        MMUAccessType access_type, int mmu_idx,
                        bool probe, uintptr_t retaddr);
void risc5_cpu_do_interrupt(CPUState *cs);
bool risc5_cpu_exec_interrupt(CPUState *cs, int interrupt_request);
hwaddr risc5_cpu_get_phys_addr_debug(CPUState *cs, vaddr addr);
void risc5_cpu_tcg_init(void);
void risc5_cpu_translate_code(CPUState *cs, TranslationBlock *tb,
                              int *max_insns, vaddr pc, void *host_pc);

#endif
