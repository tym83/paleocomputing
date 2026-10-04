/*
 * Niklaus Wirth's RISC5 processor for QEMU: the object and its life cycle.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qemu/qemu-print.h"
#include "exec/target_page.h"
#include "exec/translation-block.h"
#include "exec/cputlb.h"
#include "exec/page-protection.h"
#include "tcg/debug-assert.h"
#include "accel/tcg/cpu-ops.h"
#include "hw/core/qdev-properties.h"
#include "hw/core/sysemu-cpu-ops.h"
#include "migration/vmstate.h"
#include "cpu.h"

/*
 * Internally the program counter is kept in WORDS, as in the hardware: RISC5.v:182 does
 * nxpc = PC + 1 per instruction. Outside, QEMU works with byte addresses,
 * so at the boundary we multiply and divide by four. The avr target does exactly
 * the same, with its sixteen-bit word.
 */
static void risc5_cpu_set_pc(CPUState *cs, vaddr value)
{
    cpu_env(cs)->pc_w = value / 4;
}

static vaddr risc5_cpu_get_pc(CPUState *cs)
{
    return cpu_env(cs)->pc_w * 4;
}

static bool risc5_cpu_has_work(CPUState *cs)
{
    return cpu_test_interrupt(cs, CPU_INTERRUPT_HARD) &&
           cpu_env(cs)->int_enb;
}

/*
 * There is no memory management unit, and no separation of code and data either: any word
 * is accessible to any code. So there is a single index for everything.
 */
static int risc5_cpu_mmu_index(CPUState *cs, bool ifetch)
{
    return 0;
}

static TCGTBCPUState risc5_get_tb_cpu_state(CPUState *cs)
{
    return (TCGTBCPUState){ .pc = cpu_env(cs)->pc_w * 4, .flags = 0 };
}

static void risc5_cpu_synchronize_from_tb(CPUState *cs,
                                          const TranslationBlock *tb)
{
    tcg_debug_assert(!tcg_cflags_has(cs, CF_PCREL));
    cpu_env(cs)->pc_w = tb->pc / 4;
}

static void risc5_restore_state_to_opc(CPUState *cs,
                                       const TranslationBlock *tb,
                                       const uint64_t *data)
{
    cpu_env(cs)->pc_w = data[0];
}

static void risc5_cpu_reset_hold(Object *obj, ResetType type)
{
    CPUState *cs = CPU(obj);
    RISC5CPUClass *mcc = RISC5_CPU_GET_CLASS(obj);
    CPURISC5State *env = cpu_env(cs);

    if (mcc->parent_phases.hold) {
        mcc->parent_phases.hold(obj, type);
    }

    memset(env->r, 0, sizeof(env->r));
    env->sr_n = env->sr_z = env->sr_c = env->sr_v = 0;
    env->h = 0;
    env->spc = 0;
    env->int_enb = env->int_pnd = env->int_md = false;

    /*
     * RISC5.v:11,195: reset sends the counter into ROM, not to zero. That is where
     * the boot loader lives, which brings the system up from disk over SPI.
     */
    env->pc_w = RISC5_RESET_PC_W;
}


/*
 * There is no address translation: physical equals virtual. The mapping
 * is set up once for the whole page and always succeeds: there is nothing to
 * miss here, protection does not exist.
 */
bool risc5_cpu_tlb_fill(CPUState *cs, vaddr address, int size,
                        MMUAccessType access_type, int mmu_idx,
                        bool probe, uintptr_t retaddr)
{
    tlb_set_page(cs, address & TARGET_PAGE_MASK, address & TARGET_PAGE_MASK,
                 PAGE_READ | PAGE_WRITE | PAGE_EXEC, mmu_idx, TARGET_PAGE_SIZE);
    return true;
}

hwaddr risc5_cpu_get_phys_addr_debug(CPUState *cs, vaddr addr)
{
    return addr;
}

/*
 * Taking an interrupt (RISC5.v:193-196, 227). The flags and the return address
 * are packed into SPC as one word, {N, Z, C, V, PC[21:0]}, and the counter
 * goes to WORD 1, not to zero: word zero is taken by the boot loader.
 */
void risc5_cpu_do_interrupt(CPUState *cs)
{
    CPURISC5State *env = cpu_env(cs);

    env->spc = ((env->sr_n & 1) << 25) | ((env->sr_z & 1) << 24) |
               ((env->sr_c & 1) << 23) | ((env->sr_v & 1) << 22) |
               (env->pc_w & 0x3FFFFF);
    env->int_md = true;
    env->pc_w = 1;
    cs->exception_index = -1;
}

bool risc5_cpu_exec_interrupt(CPUState *cs, int interrupt_request)
{
    CPURISC5State *env = cpu_env(cs);

    /* intAck = intPnd & intEnb & ~intMd (RISC5.v:193) */
    if (!(interrupt_request & CPU_INTERRUPT_HARD)) {
        return false;
    }
    if (!env->int_enb || env->int_md) {
        return false;
    }
    cs->exception_index = EXCP_IRQ;
    risc5_cpu_do_interrupt(cs);
    return true;
}

static void risc5_cpu_dump_state(CPUState *cs, FILE *f, int flags)
{
    CPURISC5State *env = cpu_env(cs);
    int i;

    qemu_fprintf(f, "PC   %08x (word %06x)\n", env->pc_w * 4, env->pc_w);
    qemu_fprintf(f, "H    %08x   N%u Z%u C%u V%u\n", env->h,
                 env->sr_n & 1, env->sr_z & 1, env->sr_c & 1, env->sr_v & 1);

    for (i = 0; i < RISC5_NUM_REGS; i++) {
        qemu_fprintf(f, "R%-2d  %08x%s", i, env->r[i],
                     (i % 4) == 3 ? "\n" : "   ");
    }
}

/*
 * ⚠ Without this the processor is created but DOES NOT EXECUTE: the execution thread
 * is started here. The symptom was misleading: the machine started, the state
 * said "running", but query-cpus-fast returned an empty list, and not a single
 * translation block ran.
 */
static void risc5_cpu_realizefn(DeviceState *dev, Error **errp)
{
    CPUState *cs = CPU(dev);
    RISC5CPUClass *mcc = RISC5_CPU_GET_CLASS(dev);
    Error *local_err = NULL;

    cpu_common_realize(cs, &local_err);
    if (local_err != NULL) {
        error_propagate(errp, local_err);
        return;
    }
    qemu_init_vcpu(cs);
    cpu_reset(cs);

    mcc->parent_realize(dev, errp);
}

static void risc5_cpu_initfn(Object *obj)
{
    /*
     * No properties and no core variants: there is one machine, and it is not
     * parameterized. The feature list that bigger targets have
     * would be empty here.
     */
}

static const VMStateDescription vms_risc5_cpu = { .name = "cpu", .unmigratable = 1 };

static const TCGCPUOps risc5_tcg_ops = {
    .guest_default_memory_order = 0,
    .mttcg_supported = false,
    .initialize = risc5_cpu_tcg_init,
    .translate_code = risc5_cpu_translate_code,
    .get_tb_cpu_state = risc5_get_tb_cpu_state,
    .synchronize_from_tb = risc5_cpu_synchronize_from_tb,
    .restore_state_to_opc = risc5_restore_state_to_opc,
    .mmu_index = risc5_cpu_mmu_index,
    .cpu_exec_interrupt = risc5_cpu_exec_interrupt,
    .cpu_exec_halt = risc5_cpu_has_work,
    .cpu_exec_reset = cpu_reset,
    .tlb_fill = risc5_cpu_tlb_fill,
    .do_interrupt = risc5_cpu_do_interrupt,
    .pointer_wrap = cpu_pointer_wrap_uint32,
};

static const struct SysemuCPUOps risc5_sysemu_ops = {
    .has_work = risc5_cpu_has_work,
    .get_phys_addr_debug = risc5_cpu_get_phys_addr_debug,
};

static void risc5_cpu_class_init(ObjectClass *oc, const void *data)
{
    DeviceClass *dc = DEVICE_CLASS(oc);
    CPUClass *cc = CPU_CLASS(oc);
    RISC5CPUClass *mcc = RISC5_CPU_CLASS(oc);
    ResettableClass *rc = RESETTABLE_CLASS(oc);

    device_class_set_parent_realize(dc, risc5_cpu_realizefn, &mcc->parent_realize);
    resettable_class_set_parent_phases(rc, NULL, risc5_cpu_reset_hold, NULL,
                                       &mcc->parent_phases);

    cc->dump_state = risc5_cpu_dump_state;
    cc->set_pc = risc5_cpu_set_pc;
    cc->get_pc = risc5_cpu_get_pc;
    cc->sysemu_ops = &risc5_sysemu_ops;
    cc->tcg_ops = &risc5_tcg_ops;
    dc->vmsd = &vms_risc5_cpu;
}

static const TypeInfo risc5_cpu_type_info[] = {
    {
        .name = TYPE_RISC5_CPU,
        .parent = TYPE_CPU,
        .instance_size = sizeof(RISC5CPU),
        .instance_init = risc5_cpu_initfn,
        .class_size = sizeof(RISC5CPUClass),
        .class_init = risc5_cpu_class_init,
    },
};

DEFINE_TYPES(risc5_cpu_type_info)
