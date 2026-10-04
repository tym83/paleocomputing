/*
 * Ports of the Oberon machine.
 *
 * The map is taken from RISC5Top.v:85-97 (read) and :124-131 (write). Sixteen
 * words starting at 0xFFFFC0; the word number is adr[5:2].
 *
 *   0  millisecond counter          read
 *   1  buttons and switches         read
 *   2  RS232 receive / write: transmit
 *   3  RS232 status                 read
 *   4  SPI receive / write: start exchange
 *   5  SPI status / write: device select control
 *   6  mouse and keyboard flag      read
 *   7  key code                     read
 *   8  GPIO input                   read
 *   9  GPIO control
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qemu/timer.h"
#include "system/address-spaces.h"
#include "oberon-io.h"

static uint64_t io_read(void *opaque, hwaddr addr, unsigned size)
{
    OberonIOState *s = opaque;

    switch (addr >> 2) {
    case 0:
        /*
         * Milliseconds since power-on. The system drives everything
         * time-related from it; without it it does not even reach the screen.
         */
        return qemu_clock_get_ms(QEMU_CLOCK_VIRTUAL) - s->start_ms;
    case 1:
        return 0;                       /* no buttons or switches */
    case 2:
        return 0;                       /* RS232 receive is not connected yet */
    case 3:
        return 2;                       /* transmitter ready, receiver empty */
    case 4:
        return oberon_disk_read(&s->disk);
    case 5:
        return 1;                       /* the SPI exchange is always complete */
    case 6:
        /* Mouse buttons in 26:24, bit 28: whether a key code is queued. */
        return s->mouse | (s->kbd_head != s->kbd_tail ? (1u << 28) : 0);
    case 7: {
        /*
         * A read REMOVES the byte from the queue: in hardware this is doneKbd = rd & ioenb &
         * (iowadr == 7). Reading an empty queue is allowed and yields garbage, just as
         * in the circuit, where outptr simply points at an untouched cell.
         */
        uint8_t v;
        if (s->kbd_head == s->kbd_tail) {
            return 0;
        }
        v = s->kbd_fifo[s->kbd_tail];
        s->kbd_tail = (s->kbd_tail + 1) % OBERON_KBD_FIFO;
        return v;
    }
    case 8:
        return 0;
    case 9:
        return s->gpio_ctrl;
    default:
        return 0;
    }
}

static void io_write(void *opaque, hwaddr addr, uint64_t val, unsigned size)
{
    OberonIOState *s = opaque;

    switch (addr >> 2) {
    case 2:
        /* RS232 transmit: goes nowhere for now. */
        break;
    case 4:
        /*
         * A write starts an SPI exchange. There is one device on the bus: the SD card
         * the system boots from.
         */
        oberon_disk_write(&s->disk, val);
        break;
    case 5:
        s->spi_ctrl = val & 0xF;        /* device select, speed */
        break;
    case 9:
        s->gpio_ctrl = val;
        break;
    default:
        break;
    }
}

static const MemoryRegionOps io_ops = {
    .read = io_read,
    .write = io_write,
    /*
     * The ports are decoded by adr[5:2] only, so the hardware answers byte
     * accesses too. The system relies on it: Input.Peek reads the key code
     * into a BYTE variable, which compiles to a byte load. Rejecting byte
     * accesses left the code in the queue forever and hung the system on the
     * first key press. Accept any size and let the memory core widen it to
     * the word the handlers expect.
     */
    .valid = { .min_access_size = 1, .max_access_size = 4 },
    .impl = { .min_access_size = 4, .max_access_size = 4 },
    .endianness = DEVICE_LITTLE_ENDIAN,
};

void oberon_io_init(OberonIOState *s, MemoryRegion *sys, hwaddr base,
                    BlockBackend *blk)
{
    s->start_ms = qemu_clock_get_ms(QEMU_CLOCK_VIRTUAL);
    oberon_disk_init(&s->disk, blk);

    memory_region_init_io(&s->mr, NULL, &io_ops, s, "oberon.io", 0x40);
    memory_region_add_subregion(sys, base, &s->mr);
}
