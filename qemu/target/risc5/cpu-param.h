/*
 * RISC5 machine parameters for QEMU.
 *
 * The values come from Niklaus Wirth's RISC5.v and RISC5Top.v, not from descriptions:
 *   RISC5.v:13      reg [21:0] PC        program counter, 22 bits, IN WORDS
 *   RISC5Top.v:39   wire [23:0] adr      address bus, 24 bits, byte-addressed
 *
 * Hence the address space is exactly 16 MB. The word is 32 bits, word-aligned:
 * the program counter counts words, so the byte address is PC * 4.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#ifndef RISC5_CPU_PARAM_H
#define RISC5_CPU_PARAM_H

#define TARGET_LONG_BITS            32
#define TARGET_PAGE_BITS            12
#define TARGET_PHYS_ADDR_SPACE_BITS 24
#define TARGET_VIRT_ADDR_SPACE_BITS 24

/*
 * The machine has no memory management unit: the physical address equals the
 * virtual one, and there are no privileges or translation. This is not a
 * simplification in our model but a property of the hardware; see the lab "There is
 * no memory protection here".
 */
#endif
