/* SPDX-License-Identifier: GPL-2.0-or-later */

/*
 * Division is moved into a helper: the hardware computes it sequentially and,
 * more importantly, puts the remainder in H. Wirth's signed division rounds DOWN,
 * not toward zero as in C; this shows in our ALU model and is confirmed by comparison.
 */
DEF_HELPER_FLAGS_3(div, TCG_CALL_NO_RWG, i32, env, i32, i32)
DEF_HELPER_FLAGS_3(udiv, TCG_CALL_NO_RWG, i32, env, i32, i32)

/* A refusal instead of a silently wrong result while floating point is not written. */
DEF_HELPER_FLAGS_2(unimplemented, TCG_CALL_NO_WG, void, env, i32)

/*
 * Floating point. As helpers rather than inline code: Wirth's logic is branchy,
 * and repeating it in generated code would bloat every block for the sake of
 * operations that are rare in the system.
 *
 * The addition flags are passed as a number: 1 is integer to float conversion,
 * 2 is rounding down. The other operations have none.
 */
DEF_HELPER_FLAGS_3(fp_add, TCG_CALL_NO_RWG_SE, i32, i32, i32, i32)
DEF_HELPER_FLAGS_2(fp_mul, TCG_CALL_NO_RWG_SE, i32, i32, i32)
DEF_HELPER_FLAGS_2(fp_div, TCG_CALL_NO_RWG_SE, i32, i32, i32)
