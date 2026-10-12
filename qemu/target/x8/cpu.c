/*
 * The Electrologica X8 for QEMU: the object and its life cycle.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qemu/qemu-print.h"
#include "qemu/timer.h"
#include "exec/target_page.h"
#include "exec/translation-block.h"
#include "exec/cputlb.h"
#include "exec/page-protection.h"
#include "accel/tcg/cpu-ops.h"
#include "hw/core/sysemu-cpu-ops.h"
#include "migration/vmstate.h"
#include "cpu.h"
#include "x8.h"

/*
 * The X8 does not run in QEMU's address space: its program counter OT lives
 * in the X8 core. QEMU sees one translation block at address 0.
 */
static void x8_cpu_set_pc(CPUState *cs, vaddr value)
{
}

static vaddr x8_cpu_get_pc(CPUState *cs)
{
    return 0;
}

static bool x8_cpu_has_work(CPUState *cs)
{
    return X8_CPU(cs)->wake;
}

static int x8_cpu_mmu_index(CPUState *cs, bool ifetch)
{
    return 0;
}

static TCGTBCPUState x8_get_tb_cpu_state(CPUState *cs)
{
    return (TCGTBCPUState){ .pc = 0, .flags = 0 };
}

static void x8_cpu_synchronize_from_tb(CPUState *cs, const TranslationBlock *tb)
{
}

static void x8_restore_state_to_opc(CPUState *cs, const TranslationBlock *tb,
                                    const uint64_t *data)
{
}

bool x8_cpu_tlb_fill(CPUState *cs, vaddr address, int size,
                     MMUAccessType access_type, int mmu_idx,
                     bool probe, uintptr_t retaddr)
{
    tlb_set_page(cs, address & TARGET_PAGE_MASK, address & TARGET_PAGE_MASK,
                 PAGE_READ | PAGE_EXEC, mmu_idx, TARGET_PAGE_SIZE);
    return true;
}

static hwaddr x8_cpu_get_phys_addr_debug(CPUState *cs, vaddr addr)
{
    return addr;
}

static bool x8_cpu_exec_interrupt(CPUState *cs, int interrupt_request)
{
    return false;           /* CHARON's interrupts are handled inside the X8 core */
}

static void x8_cpu_do_interrupt(CPUState *cs)
{
    cs->exception_index = -1;
}

static void x8_cpu_dump_state(CPUState *cs, FILE *f, int flags)
{
    x8 *m = cpu_env(cs)->m;

    if (!m) {
        return;
    }
    qemu_fprintf(f, "OT %06o  A %09o  S %09o  B %09o  C%d IV%d\n",
                 m->ot, m->a, m->s, m->b, m->c, m->iv);
    qemu_fprintf(f, "cycles %" PRIu64 "%s\n", m->ccs,
                 m->halted ? "  static stop" : "");
}

static void x8_cpu_wake(void *opaque)
{
    X8CPU *cpu = opaque;

    cpu->wake = true;
    qemu_cpu_kick(CPU(cpu));
}

static void x8_cpu_realizefn(DeviceState *dev, Error **errp)
{
    CPUState *cs = CPU(dev);
    X8CPU *cpu = X8_CPU(dev);
    X8CPUClass *mcc = X8_CPU_GET_CLASS(dev);
    Error *local_err = NULL;

    cpu->timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, x8_cpu_wake, cpu);
    cpu_common_realize(cs, &local_err);
    if (local_err != NULL) {
        error_propagate(errp, local_err);
        return;
    }
    qemu_init_vcpu(cs);
    cpu_reset(cs);

    mcc->parent_realize(dev, errp);
}

static const VMStateDescription vms_x8_cpu = { .name = "cpu", .unmigratable = 1 };

static const TCGCPUOps x8_tcg_ops = {
    .guest_default_memory_order = 0,
    .mttcg_supported = false,
    .initialize = x8_cpu_tcg_init,
    .translate_code = x8_cpu_translate_code,
    .get_tb_cpu_state = x8_get_tb_cpu_state,
    .synchronize_from_tb = x8_cpu_synchronize_from_tb,
    .restore_state_to_opc = x8_restore_state_to_opc,
    .mmu_index = x8_cpu_mmu_index,
    .cpu_exec_interrupt = x8_cpu_exec_interrupt,
    .cpu_exec_halt = x8_cpu_has_work,
    .cpu_exec_reset = cpu_reset,
    .tlb_fill = x8_cpu_tlb_fill,
    .do_interrupt = x8_cpu_do_interrupt,
    .pointer_wrap = cpu_pointer_wrap_uint32,
};

static const struct SysemuCPUOps x8_sysemu_ops = {
    .has_work = x8_cpu_has_work,
    .get_phys_addr_debug = x8_cpu_get_phys_addr_debug,
};

static void x8_cpu_class_init(ObjectClass *oc, const void *data)
{
    DeviceClass *dc = DEVICE_CLASS(oc);
    CPUClass *cc = CPU_CLASS(oc);
    X8CPUClass *mcc = X8_CPU_CLASS(oc);

    device_class_set_parent_realize(dc, x8_cpu_realizefn, &mcc->parent_realize);

    cc->dump_state = x8_cpu_dump_state;
    cc->set_pc = x8_cpu_set_pc;
    cc->get_pc = x8_cpu_get_pc;
    cc->sysemu_ops = &x8_sysemu_ops;
    cc->tcg_ops = &x8_tcg_ops;
    dc->vmsd = &vms_x8_cpu;
}

static const TypeInfo x8_cpu_type_info[] = {
    {
        .name = TYPE_X8_CPU,
        .parent = TYPE_CPU,
        .instance_size = sizeof(X8CPU),
        .class_size = sizeof(X8CPUClass),
        .class_init = x8_cpu_class_init,
    },
};

DEFINE_TYPES(x8_cpu_type_info)
