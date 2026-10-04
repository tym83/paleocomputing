/*
 * Translation of RISC5 instructions into TCG.
 *
 * The semantics come not from descriptions but from RISC5.v, and are duplicated by an independent
 * ALU model (impl/tools/alu_model.py), checked against the hardware in 4650
 * tests. Where the behaviour is not obvious, the comment cites the hardware
 * source line.
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

static TCGv cpu_pc;
static TCGv cpu_r[RISC5_NUM_REGS];
static TCGv cpu_n, cpu_z, cpu_c, cpu_v, cpu_h;

#define R5_OFFS(x) offsetof(CPURISC5State, x)

typedef struct DisasContext {
    DisasContextBase base;
    uint32_t opcode;
    /* Next instruction counter, IN WORDS, as in the hardware. */
    uint32_t npc_w;
    /* Hardware variant: whether the hardware bounds check is present (see cpu.h). */
    bool chk;
    bool desc;
} DisasContext;

/*
 * The decoder is generated from insn.decode. It declares both the arg_* argument types
 * and the trans_* prototypes, so it is included here: after the DisasContext type it
 * refers to, and before the definitions of the decode functions themselves.
 */
#include "decode-insn.c.inc"

void risc5_cpu_tcg_init(void)
{
    int i;

    cpu_pc = tcg_global_mem_new_i32(tcg_env, R5_OFFS(pc_w), "pc_w");
    cpu_n  = tcg_global_mem_new_i32(tcg_env, R5_OFFS(sr_n), "N");
    cpu_z  = tcg_global_mem_new_i32(tcg_env, R5_OFFS(sr_z), "Z");
    cpu_c  = tcg_global_mem_new_i32(tcg_env, R5_OFFS(sr_c), "C");
    cpu_v  = tcg_global_mem_new_i32(tcg_env, R5_OFFS(sr_v), "V");
    cpu_h  = tcg_global_mem_new_i32(tcg_env, R5_OFFS(h), "H");

    for (i = 0; i < RISC5_NUM_REGS; i++) {
        char name[8];
        snprintf(name, sizeof(name), "R%d", i);
        cpu_r[i] = tcg_global_mem_new_i32(tcg_env, R5_OFFS(r[i]), name);
    }
}

/*
 * Second operand. RISC5.v:143: C1 = q ? {{16{v}}, imm} : C0, so in the
 * immediate form bit v also sets how the upper half is filled.
 * This is not a separate "signedness" flag but exactly the same bit.
 */
static TCGv read_c1(bool q, unsigned v, unsigned c, uint32_t imm)
{
    if (!q) {
        return cpu_r[c];
    }
    return tcg_constant_i32(v ? (0xFFFF0000u | imm) : imm);
}

/* N and Z are updated by any ALU operation, C and V only by addition and subtraction. */
static void gen_logic_flags(TCGv res)
{
    tcg_gen_shri_i32(cpu_n, res, 31);
    tcg_gen_setcondi_i32(TCG_COND_EQ, cpu_z, res, 0);
}

/*
 * Carry and overflow follow the hardware's own formulas (RISC5.v:206-212).
 * They are asymmetric and differ from the usual ones: copied letter for letter,
 * because the Oberon compiler relies on exactly these.
 *   sa = result[31], sb = B[31], sc = C1[31]
 */
static void gen_addsub_flags(TCGv res, TCGv b, TCGv c1, bool sub)
{
    TCGv sa = tcg_temp_new_i32(), sb = tcg_temp_new_i32();
    TCGv sc = tcg_temp_new_i32();
    TCGv t0 = tcg_temp_new_i32(), t1 = tcg_temp_new_i32();
    TCGv t2 = tcg_temp_new_i32();

    tcg_gen_shri_i32(sa, res, 31);
    tcg_gen_shri_i32(sb, b, 31);
    tcg_gen_shri_i32(sc, c1, 31);

    /* The part shared by both operations: (~sb & sc & ~sa) | (sb & sc & sa) */
    tcg_gen_xori_i32(t0, sb, 1);
    tcg_gen_and_i32(t0, t0, sc);
    tcg_gen_xori_i32(t1, sa, 1);
    tcg_gen_and_i32(t0, t0, t1);        /* ~sb & sc & ~sa */

    tcg_gen_and_i32(t1, sb, sc);
    tcg_gen_and_i32(t1, t1, sa);        /* sb & sc & sa */
    tcg_gen_or_i32(t0, t0, t1);

    if (!sub) {
        tcg_gen_xori_i32(t1, sa, 1);
        tcg_gen_and_i32(t1, t1, sb);    /* sb & ~sa */
    } else {
        tcg_gen_xori_i32(t1, sb, 1);
        tcg_gen_and_i32(t1, t1, sa);    /* ~sb & sa */
    }
    tcg_gen_or_i32(cpu_c, t0, t1);

    if (!sub) {
        /* V = (sa & ~sb & ~sc) | (~sa & sb & sc) */
        tcg_gen_xori_i32(t0, sb, 1);
        tcg_gen_xori_i32(t1, sc, 1);
        tcg_gen_and_i32(t0, t0, t1);
        tcg_gen_and_i32(t0, t0, sa);
        tcg_gen_xori_i32(t1, sa, 1);
        tcg_gen_and_i32(t2, sb, sc);
        tcg_gen_and_i32(t1, t1, t2);
    } else {
        /* V = (sa & ~sb & sc) | (~sa & sb & ~sc) */
        tcg_gen_xori_i32(t0, sb, 1);
        tcg_gen_and_i32(t0, t0, sc);
        tcg_gen_and_i32(t0, t0, sa);
        tcg_gen_xori_i32(t1, sa, 1);
        tcg_gen_xori_i32(t2, sc, 1);
        tcg_gen_and_i32(t2, sb, t2);
        tcg_gen_and_i32(t1, t1, t2);
    }
    tcg_gen_or_i32(cpu_v, t0, t1);

    gen_logic_flags(res);
}

/*
 * Multiplication. This is where finding 11 lives: the instruction named UMUL actually
 * multiplies UNSIGNED by SIGNED. The second factor is always signed;
 * bit u controls only the first.
 */
static void gen_mul(TCGv dst, TCGv b, TCGv c1, bool unsigned_b)
{
    TCGv_i64 x = tcg_temp_new_i64(), y = tcg_temp_new_i64();
    TCGv_i64 p = tcg_temp_new_i64();
    TCGv hi = tcg_temp_new_i32();

    if (unsigned_b) {
        tcg_gen_extu_i32_i64(x, b);
    } else {
        tcg_gen_ext_i32_i64(x, b);
    }
    tcg_gen_ext_i32_i64(y, c1);
    tcg_gen_mul_i64(p, x, y);
    tcg_gen_extr_i64_i32(dst, hi, p);
    tcg_gen_mov_i32(cpu_h, hi);
}

static void gen_alu(DisasContext *ctx, unsigned a, unsigned b, unsigned op,
                    unsigned u, unsigned v, bool q, unsigned c, uint32_t imm)
{
    TCGv c1 = read_c1(q, v, c, imm);
    TCGv res = tcg_temp_new_i32();
    TCGv sh;

    switch (op) {
    case 0: /* MOV in all forms, RISC5.v:156 */
        if (q) {
            if (u) {
                tcg_gen_movi_i32(res, imm << 16);      /* MHI */
            } else {
                tcg_gen_mov_i32(res, c1);
            }
        } else if (!u) {
            tcg_gen_mov_i32(res, cpu_r[c]);
        } else if (!v) {
            tcg_gen_mov_i32(res, cpu_h);
        } else {
            /*
             * Reading the flags gives not four bits but {N,Z,C,V, 20 zeros, 0x53}.
             * The low byte is the core version signature; the system checks it.
             */
            TCGv t = tcg_temp_new_i32();
            tcg_gen_shli_i32(res, cpu_n, 31);
            tcg_gen_shli_i32(t, cpu_z, 30);
            tcg_gen_or_i32(res, res, t);
            tcg_gen_shli_i32(t, cpu_c, 29);
            tcg_gen_or_i32(res, res, t);
            tcg_gen_shli_i32(t, cpu_v, 28);
            tcg_gen_or_i32(res, res, t);
            tcg_gen_ori_i32(res, res, RISC5_NZCV_TAG);
        }
        break;

    /* Shifts take only the low five bits of the count. */
    case 1:
        sh = tcg_temp_new_i32();
        tcg_gen_andi_i32(sh, c1, 31);
        tcg_gen_shl_i32(res, cpu_r[b], sh);
        break;
    case 2:
        sh = tcg_temp_new_i32();
        tcg_gen_andi_i32(sh, c1, 31);
        tcg_gen_sar_i32(res, cpu_r[b], sh);
        break;
    case 3:
        sh = tcg_temp_new_i32();
        tcg_gen_andi_i32(sh, c1, 31);
        tcg_gen_rotr_i32(res, cpu_r[b], sh);
        break;

    case 4: tcg_gen_and_i32(res, cpu_r[b], c1); break;
    case 5: tcg_gen_andc_i32(res, cpu_r[b], c1); break;   /* ANN: B & ~C1 */
    case 6: tcg_gen_or_i32(res, cpu_r[b], c1); break;
    case 7: tcg_gen_xor_i32(res, cpu_r[b], c1); break;

    case 8: /* ADD, with carry when u=1 */
        tcg_gen_add_i32(res, cpu_r[b], c1);
        if (u) {
            tcg_gen_add_i32(res, res, cpu_c);
        }
        gen_addsub_flags(res, cpu_r[b], c1, false);
        tcg_gen_mov_i32(cpu_r[a], res);
        return;
    case 9: /* SUB, with borrow when u=1 */
        tcg_gen_sub_i32(res, cpu_r[b], c1);
        if (u) {
            tcg_gen_sub_i32(res, res, cpu_c);
        }
        gen_addsub_flags(res, cpu_r[b], c1, true);
        tcg_gen_mov_i32(cpu_r[a], res);
        return;

    case 10: gen_mul(res, cpu_r[b], c1, u != 0); break;
    case 11:
        if (u) {
            gen_helper_udiv(res, tcg_env, cpu_r[b], c1);
        } else {
            gen_helper_div(res, tcg_env, cpu_r[b], c1);
        }
        break;

    /*
     * ── Floating point ────────────────────────────────────────────────────
     *
     * Subtraction is the same addition with the sign of the second addend flipped:
     * that is how the hardware does it (RISC5.v:64 feeds `{FSB^C0[31], C0[30:0]}`),
     * there is no separate subtractor.
     *
     * For addition the flags u and v change the meaning of the operation entirely, into
     * integer to float conversion and rounding down. Multiplication and division have none.
     */
    case 12:
        gen_helper_fp_add(res, cpu_r[b], c1,
                          tcg_constant_i32((u ? 1 : 0) | (v ? 2 : 0)));
        break;
    case 13: {
        TCGv_i32 neg = tcg_temp_new_i32();
        tcg_gen_xori_i32(neg, c1, 0x80000000);
        gen_helper_fp_add(res, cpu_r[b], neg,
                          tcg_constant_i32((u ? 1 : 0) | (v ? 2 : 0)));
        break;
    }
    case 14: gen_helper_fp_mul(res, cpu_r[b], c1); break;
    case 15: gen_helper_fp_div(res, cpu_r[b], c1); break;

    default:
        /* Unreachable: there are exactly sixteen operations. */
        g_assert_not_reached();
    }

    gen_logic_flags(res);
    tcg_gen_mov_i32(cpu_r[a], res);
}

static bool trans_F0_rrr(DisasContext *ctx, arg_F0_rrr *r)
{
    gen_alu(ctx, r->a, r->b, r->op, r->u, r->v, false, r->c, 0);
    return true;
}

/*
 * CHK: hardware array bounds check.
 *
 * The semantics are copied verbatim from RISC5.v:
 *   chkFail = CHK & (B >= chkLim)        unsigned comparison
 *   when it fires, regmux = {8'b0, nxpc, 2'b0}, ira0 = 15, pcmux0 = C0[23:2]
 *   that is, EXACTLY what BLR does: R15 := PC+4 ; PC := R[c]
 *   when it does not fire, neither the register nor the flags are written
 *
 * When it fires, the flags are set by the general rule "write a register,
 * set N and Z" (RISC5.v:204): the return address is non-negative, so N = 0,
 * and Z only if the address is zero.
 *
 * The base core does NOT have this instruction: there the same encoding decodes as
 * the register-register form (an alias of LSL with v=1). So with the extension
 * off we must not get here; we hand decoding back to F0.
 */
static bool trans_CHK(DisasContext *ctx, arg_chk *r)
{
    TCGLabel *ok;
    uint32_t lnk;

    if (!ctx->chk) {
        /* Same bits for the fields: op = 1 (LSL), u = 0, v = 1, a = IR[27:24]. */
        gen_alu(ctx, extract32(ctx->opcode, 24, 4), r->b, 1, 0, 1, false,
                r->c, 0);
        return true;
    }

    ok = gen_new_label();
    tcg_gen_brcondi_i32(TCG_COND_LTU, cpu_r[r->b], r->lim, ok);

    lnk = (ctx->npc_w * 4) & 0x00FFFFFF;
    tcg_gen_movi_i32(cpu_r[RISC5_REG_LNK], lnk);
    tcg_gen_movi_i32(cpu_n, 0);
    tcg_gen_movi_i32(cpu_z, lnk == 0);

    tcg_gen_shri_i32(cpu_pc, cpu_r[r->c], 2);
    tcg_gen_exit_tb(NULL, 0);

    gen_set_label(ok);
    return true;
}

/*
 * IDX: indexing through a descriptor (episode 14, 14-episode-descriptors.md).
 *
 * The semantics are taken from RISC5.v (-DWITH_DESC):
 *   idxFault = IDX & (C0 >= B[31:20])      unsigned, all 32 bits of the index
 *   when it does not fire: Ra := {8'b0, B[19:0] + (C0[11:0] << sh)}, N and Z from
 *     the result, C and OV untouched (the ADD signal is cleared for IDX)
 *   when it fires, the RTL stalls a cycle and executes BLR MT: R15 := PC+4,
 *     PC := R[12]; flags from the R15 write, as with CHK
 *
 * QEMU does not model the extra stall cycle: it has no cycles at all.
 * On a core without the extension the same encoding is ADD with v=1, i.e. plain ADD.
 */
static bool trans_IDX(DisasContext *ctx, arg_idx *r)
{
    TCGLabel *ok;
    TCGv len, res;
    uint32_t lnk;

    if (!ctx->desc) {
        gen_alu(ctx, r->a, r->b, 8, 0, 1, false, r->c, 0);
        return true;
    }

    ok = gen_new_label();
    len = tcg_temp_new_i32();
    tcg_gen_shri_i32(len, cpu_r[r->b], 20);
    tcg_gen_brcond_i32(TCG_COND_LTU, cpu_r[r->c], len, ok);

    lnk = (ctx->npc_w * 4) & 0x00FFFFFF;
    tcg_gen_movi_i32(cpu_r[RISC5_REG_LNK], lnk);
    tcg_gen_movi_i32(cpu_n, 0);
    tcg_gen_movi_i32(cpu_z, lnk == 0);
    tcg_gen_shri_i32(cpu_pc, cpu_r[12], 2);
    tcg_gen_exit_tb(NULL, 0);

    gen_set_label(ok);
    res = tcg_temp_new_i32();
    tcg_gen_andi_i32(res, cpu_r[r->c], 0xFFF);
    tcg_gen_shli_i32(res, res, r->sh);
    tcg_gen_andi_i32(len, cpu_r[r->b], 0xFFFFF);
    tcg_gen_add_i32(res, res, len);
    tcg_gen_andi_i32(res, res, 0xFFFFFF);
    tcg_gen_mov_i32(cpu_r[r->a], res);
    tcg_gen_movi_i32(cpu_n, 0);
    tcg_gen_setcondi_i32(TCG_COND_EQ, cpu_z, res, 0);
    return true;
}

static bool trans_F1_rri(DisasContext *ctx, arg_F1_rri *r)
{
    gen_alu(ctx, r->a, r->b, r->op, r->u, r->v, true, 0, r->imm);
    return true;
}

/*
 * Memory access. The offset is signed, twenty bits. The byte form
 * (v=1) reads and writes the low byte.
 */
static bool trans_F2_mem(DisasContext *ctx, arg_F2_mem *r)
{
    TCGv addr = tcg_temp_new_i32();
    int32_t off = sextract32(r->off, 0, 20);

    tcg_gen_addi_i32(addr, cpu_r[r->b], off);
    /*
     * ⚠ The address bus is 24 bits: RISC5.v:7 declares adr as [23:0], and
     * line 144 uses B[23:0] plus the offset for the access. The hardware drops the
     * top eight bits, and programs rely on that: ports
     * are addressed as 0xFFFFFFC0, which is simply -64. Without truncation such an
     * address falls outside the whole memory map and the read silently returns zero.
     */
    tcg_gen_andi_i32(addr, addr, 0x00FFFFFF);

    if (!r->u) {
        tcg_gen_qemu_ld_i32(cpu_r[r->a], addr, 0, r->v ? MO_UB : MO_TEUL);
        /*
         * ⚠ A load SETS THE FLAGS. In hardware (RISC5.v:170,204,205) the N
         * and Z flags come from ANY register write: regwr covers not only the
         * ALU but also loads, and the value used is the one written.
         *
         * The boot loader relies on this: an LD is immediately followed by a BNE, and without
         * the flags the branch goes the wrong way. Found by step-by-step comparison with
         * the reference: they diverged at the 224th instruction.
         *
         * A store to memory does not touch the register and does not change the flags.
         */
        gen_logic_flags(cpu_r[r->a]);
    } else {
        tcg_gen_qemu_st_i32(cpu_r[r->a], addr, 0, r->v ? MO_UB : MO_TEUL);
    }
    return true;
}

/*
 * Branch conditions. The order is exactly as in the hardware; the top bit of the field
 * negates the condition.
 */
static void gen_cond(TCGv dst, unsigned cond)
{
    TCGv t = tcg_temp_new_i32();

    switch (cond & 7) {
    case 0: tcg_gen_mov_i32(dst, cpu_n); break;                    /* MI */
    case 1: tcg_gen_mov_i32(dst, cpu_z); break;                    /* EQ */
    case 2: tcg_gen_mov_i32(dst, cpu_c); break;                    /* CS */
    case 3: tcg_gen_mov_i32(dst, cpu_v); break;                    /* VS */
    case 4: tcg_gen_or_i32(dst, cpu_c, cpu_z); break;              /* LS */
    case 5: tcg_gen_xor_i32(dst, cpu_n, cpu_v); break;             /* LT */
    case 6:                                                        /* LE */
        tcg_gen_xor_i32(t, cpu_n, cpu_v);
        tcg_gen_or_i32(dst, t, cpu_z);
        break;
    default: tcg_gen_movi_i32(dst, 1); break;                      /* always */
    }
    if (cond & 8) {
        tcg_gen_xori_i32(dst, dst, 1);
    }
}

static bool trans_F3_reg(DisasContext *ctx, arg_F3_reg *r)
{
    /* RTI hides here too: BR & ~u & ~v & IR[4] (RISC5.v:98). */
    TCGLabel *skip = gen_new_label();
    TCGv cond = tcg_temp_new_i32();

    gen_cond(cond, r->cond);
    tcg_gen_brcondi_i32(TCG_COND_EQ, cond, 0, skip);

    if (r->v) {                                   /* with return link */
        uint32_t lnk = (ctx->npc_w * 4) & 0x00FFFFFF;

        /*
         * Writing the return address is also a register write, and it sets the
         * flags by the same rule. The value is non-negative (the top eight bits
         * are zero), so N is zero, and Z is set only for a zero address.
         */
        tcg_gen_movi_i32(cpu_r[RISC5_REG_LNK], lnk);
        tcg_gen_movi_i32(cpu_n, 0);
        tcg_gen_movi_i32(cpu_z, lnk == 0);
    }
    /* The branch address in the register is a BYTE address; the counter counts words. */
    tcg_gen_shri_i32(cpu_pc, cpu_r[r->c], 2);
    tcg_gen_exit_tb(NULL, 0);

    gen_set_label(skip);
    return true;
}

static bool trans_F3_disp(DisasContext *ctx, arg_F3_disp *r)
{
    TCGLabel *skip = gen_new_label();
    TCGv cond = tcg_temp_new_i32();
    uint32_t target_w;

    gen_cond(cond, r->cond);
    tcg_gen_brcondi_i32(TCG_COND_EQ, cond, 0, skip);

    if (r->v) {
        uint32_t lnk = (ctx->npc_w * 4) & 0x00FFFFFF;

        /*
         * Writing the return address is also a register write, and it sets the
         * flags by the same rule. The value is non-negative (the top eight bits
         * are zero), so N is zero, and Z is set only for a zero address.
         */
        tcg_gen_movi_i32(cpu_r[RISC5_REG_LNK], lnk);
        tcg_gen_movi_i32(cpu_n, 0);
        tcg_gen_movi_i32(cpu_z, lnk == 0);
    }
    /*
     * The offset is counted in WORDS from the next instruction. ORG.Mod emits
     * twenty-four bits, the hardware reads twenty-two; the discrepancy is
     * recorded as finding 24. We take what the hardware does.
     */
    target_w = (ctx->npc_w + sextract32(r->disp, 0, 22)) & 0x3FFFFF;
    tcg_gen_movi_i32(cpu_pc, target_w);
    tcg_gen_exit_tb(NULL, 0);

    gen_set_label(skip);
    return true;
}

static void risc5_tr_init_disas_context(DisasContextBase *dcbase, CPUState *cs)
{
    DisasContext *ctx = container_of(dcbase, DisasContext, base);
    ctx->npc_w = ctx->base.pc_first / 4;
    ctx->chk = cpu_env(cs)->chk;
    ctx->desc = cpu_env(cs)->desc;
}

static void risc5_tr_tb_start(DisasContextBase *db, CPUState *cs)
{
}

static void risc5_tr_insn_start(DisasContextBase *dcbase, CPUState *cs)
{
    DisasContext *ctx = container_of(dcbase, DisasContext, base);
    tcg_gen_insn_start(ctx->npc_w, 0, 0);
}

static void risc5_tr_translate_insn(DisasContextBase *dcbase, CPUState *cs)
{
    DisasContext *ctx = container_of(dcbase, DisasContext, base);

    ctx->opcode = translator_ldl(cpu_env(cs), &ctx->base, ctx->base.pc_next);
    ctx->base.pc_next += 4;
    ctx->npc_w = ctx->base.pc_next / 4;

    /*
     * The counter is updated BEFORE decoding: a branch with a return link puts
     * the address of the next instruction into R15, and it must already be computed.
     */
    if (!decode_insn(ctx, ctx->opcode)) {
        gen_helper_unimplemented(tcg_env, tcg_constant_i32(ctx->opcode));
        ctx->base.is_jmp = DISAS_NORETURN;
    }
}

static void risc5_tr_tb_stop(DisasContextBase *dcbase, CPUState *cs)
{
    DisasContext *ctx = container_of(dcbase, DisasContext, base);

    if (ctx->base.is_jmp == DISAS_NORETURN) {
        return;
    }
    tcg_gen_movi_i32(cpu_pc, ctx->npc_w);
    tcg_gen_exit_tb(NULL, 0);
}

static const TranslatorOps risc5_tr_ops = {
    .init_disas_context = risc5_tr_init_disas_context,
    .tb_start           = risc5_tr_tb_start,
    .insn_start         = risc5_tr_insn_start,
    .translate_insn     = risc5_tr_translate_insn,
    .tb_stop            = risc5_tr_tb_stop,
};

void risc5_cpu_translate_code(CPUState *cs, TranslationBlock *tb,
                              int *max_insns, vaddr pc, void *host_pc)
{
    DisasContext ctx = { };
    translator_loop(cs, tb, max_insns, pc, host_pc, &risc5_tr_ops, &ctx.base,
                    TCG_TYPE_VA);
}
