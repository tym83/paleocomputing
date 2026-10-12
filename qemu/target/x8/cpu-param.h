/*
 * Electrologica X8 parameters for QEMU.
 *
 * The X8 has 27-bit words and an 18-bit word address (X8S: max addr; the
 * instruction counter OT has 18 bits). QEMU's own address space is not used for
 * X8 memory: the X8 core (impl/x8-the/emu, from the X8S simulator of 1971)
 * keeps its core store in its own words. QEMU needs one page to find the
 * translation block that hands control to that core.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#ifndef X8_CPU_PARAM_H
#define X8_CPU_PARAM_H

#define TARGET_LONG_BITS            32
#define TARGET_PAGE_BITS            12
#define TARGET_PHYS_ADDR_SPACE_BITS 24
#define TARGET_VIRT_ADDR_SPACE_BITS 24

#endif
