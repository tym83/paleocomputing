/*
 * The one translation block of the X8: a call to the X8 core.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "cpu.h"
#include "tcg/tcg-op.h"
#include "exec/helper-proto.h"
#include "exec/helper-gen.h"
#include "exec/translator.h"
#include "exec/translation-block.h"
#include "exec/target_page.h"

#define HELPER_H "helper.h"
#include "exec/helper-info.c.inc"
#undef  HELPER_H

typedef struct DisasContext {
    DisasContextBase base;
} DisasContext;

void x8_cpu_tcg_init(void)
{
}

static void x8_tr_init_disas_context(DisasContextBase *dcbase, CPUState *cs)
{
    dcbase->max_insns = 1;
}

static void x8_tr_tb_start(DisasContextBase *db, CPUState *cs)
{
}

static void x8_tr_insn_start(DisasContextBase *dcbase, CPUState *cs)
{
    tcg_gen_insn_start(0, 0, 0);
}

static void x8_tr_translate_insn(DisasContextBase *dcbase, CPUState *cs)
{
    gen_helper_x8_slice(tcg_env);
    dcbase->pc_next += 4;
}

static void x8_tr_tb_stop(DisasContextBase *dcbase, CPUState *cs)
{
    tcg_gen_exit_tb(NULL, 0);
}

static const TranslatorOps x8_tr_ops = {
    .init_disas_context = x8_tr_init_disas_context,
    .tb_start           = x8_tr_tb_start,
    .insn_start         = x8_tr_insn_start,
    .translate_insn     = x8_tr_translate_insn,
    .tb_stop            = x8_tr_tb_stop,
};

void x8_cpu_translate_code(CPUState *cs, TranslationBlock *tb,
                           int *max_insns, vaddr pc, void *host_pc)
{
    DisasContext ctx = { };
    translator_loop(cs, tb, max_insns, pc, host_pc, &x8_tr_ops, &ctx.base,
                    TCG_TYPE_VA);
}
