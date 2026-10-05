/*
 * The Oberon machine board.
 *
 * The memory map is taken from RISC5Top.v:
 *   :84  codebus = (adr[23:14] == 10'h3FF) ? romout : inbus0
 *        — code fetch from ROM starting at 0xFFC000
 *   :86  ioenb   = (adr[23:6] == 18'h3FFFF)
 *        — I/O registers from 0xFFFFC0, sixteen words
 *   RISC5.v:11  reset vector 22'h3FF800, i.e. byte address 0xFFE000
 *
 * No devices yet: this is the narrowest board on which the target builds and
 * individual instructions can be run against our own RTL. SPI disk, mouse,
 * keyboard and frame buffer come as the next step.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qapi/error.h"
#include "hw/core/boards.h"
#include "hw/core/loader.h"
#include "qemu/error-report.h"
#include "hw/core/qdev-properties.h"
#include "chardev/char.h"
#include "system/address-spaces.h"
#include "system/system.h"
#include "cpu.h"
#include "oberon-io.h"
#include "system/blockdev.h"
#include "system/block-backend.h"
#include "hw/core/qdev-properties-system.h"

/*
 * ROM in hardware is 512 words: PROM.v uses only adr[10:2]. Code fetch
 * goes to it starting at 0xFFC000 (RISC5Top.v:84), so the two-kilobyte
 * block repeats four times; reset lands at 0xFFE000, which is its start.
 * We set up exactly 2 KB at the reset address, just as in the circuit.
 */
#define OBERON_RAM_BASE  0x000000
#define OBERON_RAM_SIZE  0xFFE000
#define OBERON_ROM_BASE  0xFFE000
#define OBERON_ROM_SIZE  0x000800

/*
 * Hardware variant. An instruction set extension is not an "emulator mode"
 * but a different build of the processor: in the RTL it is enabled with -DWITH_CHK. Here the same
 * meaning is carried by a machine property:
 *
 *   -machine oberon,chk=on
 *
 * Off by default: the base machine must behave exactly like Wirth's core
 * without extensions, otherwise the comparison with the RTL stops meaning anything.
 *
 * The property is static: there is one machine per process, and the choice is made before start.
 */
static bool oberon_chk;
/*
 * -machine oberon,radio=<chardev id>: the air of the nRF24L01+ radio that
 * SCC.Mod and Net.Mod use, normally a UDP socket to a relay. Without it the
 * radio answers but every transmission fails, as with no other station in range.
 */
static char *oberon_radio;
static bool oberon_desc;   /* IDX, episode 14: like -DWITH_DESC in the RTL */

static char *oberon_get_radio(Object *obj, Error **errp)
{
    return g_strdup(oberon_radio ? oberon_radio : "");
}

static void oberon_set_radio(Object *obj, const char *value, Error **errp)
{
    g_free(oberon_radio);
    oberon_radio = g_strdup(value);
}

static bool oberon_get_desc(Object *obj, Error **errp)
{
    return oberon_desc;
}

static void oberon_set_desc(Object *obj, bool value, Error **errp)
{
    oberon_desc = value;
}

static bool oberon_get_chk(Object *obj, Error **errp)
{
    return oberon_chk;
}

static void oberon_set_chk(Object *obj, bool value, Error **errp)
{
    oberon_chk = value;
}

static void oberon_init(MachineState *machine)
{
    MemoryRegion *sys = get_system_memory();
    MemoryRegion *ram = g_new(MemoryRegion, 1);
    MemoryRegion *rom = g_new(MemoryRegion, 1);
    RISC5CPU *cpu;

    cpu = RISC5_CPU(cpu_create(machine->cpu_type));
    cpu->env.chk = oberon_chk;
    cpu->env.desc = oberon_desc;

    memory_region_init_ram(ram, NULL, "oberon.ram", OBERON_RAM_SIZE,
                           &error_fatal);
    memory_region_add_subregion(sys, OBERON_RAM_BASE, ram);

    /*
     * ROM is read-only: in hardware it is a separate PROM block,
     * and there is nothing to write to it with.
     */
    memory_region_init_rom(rom, NULL, "oberon.rom", OBERON_ROM_SIZE,
                           &error_fatal);
    memory_region_add_subregion(sys, OBERON_ROM_BASE, rom);

    /*
     * The ROM contents are supplied via -bios. This is also the way to run
     * individual programs for comparison with the real RTL: our assembler
     * builds a piece of code, it is placed at the reset address, and then the
     * register state can be compared instruction by instruction.
     */
    /*
     * Screen. The frame buffer lives in ordinary memory; the machine has no separate
     * video memory, the device simply reads it and draws.
     */
    OberonDisplay *disp = g_new0(OberonDisplay, 1);
    oberon_display_init(disp, ram);

    /*
     * Ports. Without the millisecond counter the system does not even reach the screen:
     * everything time-related depends on it.
     */
    {
        /*
         * The system image is supplied as a drive without a bus:
         *   -drive if=none,id=sd0,file=oberon.dsk,format=raw
         *
         * Without a bus on purpose: QEMU treats any drive with a bus that no device
         * has claimed as orphaned and refuses to start.
         * Our SD card is not a qdev device but part of the ports, so we take
         * it by name.
         */
        BlockBackend *blk = blk_by_name("sd0");

        if (!blk) {
            DriveInfo *dinfo = drive_get(IF_NONE, 0, 0);
            blk = dinfo ? blk_by_legacy_dinfo(dinfo) : NULL;
        }

        if (!blk) {
            warn_report("no disk image given: add -drive if=none,id=sd0,file=<image>,format=raw");
        } else {
            /*
             * Write permissions have to be requested explicitly. A qdev device
             * gets them when the drive is attached, but we take the drive by
             * name, and without this line the VERY FIRST write to disk crashes
             * QEMU on the BLK_PERM_WRITE check in block/io.c. Before episode 2
             * nobody wrote to disk in QEMU: booting only reads.
             * Compiling inside the system writes .rsc, and it crashed.
             */
            blk_set_perm(blk, BLK_PERM_CONSISTENT_READ |
                         (blk_supports_write_perm(blk) ? BLK_PERM_WRITE : 0),
                         BLK_PERM_ALL, &error_fatal);
        }
        Chardev *air = NULL;

        if (oberon_radio && *oberon_radio) {
            air = qemu_chr_find(oberon_radio);
            if (!air) {
                error_report("radio: no chardev '%s'", oberon_radio);
                exit(1);
            }
        }
        OberonIOState *io = g_new0(OberonIOState, 1);
        oberon_io_init(io, sys, OBERON_IO_BASE, blk, air);
        io->chord_used = &disp->hint_done;
        oberon_input_init(io);
    }

    if (machine->firmware) {
        ssize_t n = load_image_mr(machine->firmware, rom);
        if (n < 0) {
            error_report("could not read ROM image '%s'", machine->firmware);
            exit(1);
        }
    }

    (void)cpu;
}

static void oberon_machine_init(MachineClass *mc)
{
    mc->desc = "Oberon RISC5 (Wirth)";
    mc->init = oberon_init;
    mc->default_cpu_type = TYPE_RISC5_CPU;
    mc->default_ram_size = OBERON_RAM_SIZE;
    mc->no_parallel = 1;
    mc->no_floppy = 1;
    mc->no_cdrom = 1;

    object_class_property_add_bool(OBJECT_CLASS(mc), "chk",
                                   oberon_get_chk, oberon_set_chk);
    object_class_property_set_description(OBJECT_CLASS(mc), "chk",
        "hardware array bounds check (like -DWITH_CHK in the RTL)");
    object_class_property_add_str(OBJECT_CLASS(mc), "radio",
                                  oberon_get_radio, oberon_set_radio);
    object_class_property_set_description(OBJECT_CLASS(mc), "radio",
        "chardev carrying the air of the nRF24L01+ radio (SCC.Mod, Net.Mod)");
    object_class_property_add_bool(OBJECT_CLASS(mc), "desc",
                                   oberon_get_desc, oberon_set_desc);
    object_class_property_set_description(OBJECT_CLASS(mc), "desc",
        "descriptor indexing IDX (like -DWITH_DESC in the RTL)");
}

DEFINE_MACHINE("oberon", oberon_machine_init)
