/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef HW_RISC5_OBERON_IO_H
#define HW_RISC5_OBERON_IO_H

#include "system/memory.h"
#include "ui/console.h"
#include "ui/input.h"
#include "system/block-backend-global-state.h"
#include "chardev/char-fe.h"
#include "qemu/timer.h"

/* The ports occupy sixteen words starting at 0xFFFFC0 (RISC5Top.v:86). */
#define OBERON_IO_BASE 0xFFFFC0
#define OBERON_IO_SIZE 0x40

/* Disk over SPI: SD card command parsing state. */
/*
 * Frame buffer. The address is taken from VID.v: Org = 18'b1101_1111_1111_0000_00,
 * a WORD address, hence the byte start 0xE7F00. Size 1024*768/8 bytes.
 */
#define OBERON_FB_BASE 0xE7F00
#define OBERON_FB_SIZE (1024 * 768 / 8)

typedef struct OberonDisplay {
    QemuConsole  *con;
    MemoryRegion *ram;
    bool          hint_done;   /* a chord has been used, the hint is no longer needed */
} OberonDisplay;

void oberon_display_init(OberonDisplay *d, MemoryRegion *ram);

typedef struct OberonDisk {
    BlockBackend *blk;
    int      state;
    uint32_t offset;          /* sector offset for an image without partitions */
    uint32_t write_sector;

    uint32_t rx_buf[130];
    int      rx_idx;
    uint32_t tx_buf[130];
    int      tx_cnt, tx_idx;
    bool     first_read_seen;
} OberonDisk;

void     oberon_disk_init(OberonDisk *d, BlockBackend *blk);
void     oberon_disk_write(OberonDisk *d, uint32_t value);
uint32_t oberon_disk_read(OberonDisk *d);

/*
 * Keyboard queue. PS2.v holds 16 bytes, but there a keyboard cannot send
 * faster than a person types. QMP input-send-event or a VNC client can, and
 * with 16 bytes a fast stream lost keys (a key with Shift takes six bytes).
 * The size is not visible to the system otherwise: Input.Mod drains the
 * queue byte by byte and only asks whether it is empty.
 */
#define OBERON_KBD_FIFO 4096

/*
 * spiCtrl bits (RISC5Top.v): slave select 0 is the SD card, 1 the radio;
 * bit 2 selects 32-bit words; bit 3 drives the radio's CE pin.
 */
#define OBERON_SPI_SD          0x1
#define OBERON_SPI_NET         0x2
#define OBERON_SPI_FAST        0x4
#define OBERON_SPI_NET_ENABLE  0x8

#define OBERON_RADIO_PAYLOAD 32
#define OBERON_RADIO_FIFO    3

typedef struct OberonRadio {
    CharFrontend air;
    QEMUTimer *hello;
    uint8_t  regs[0x20];
    uint8_t  status;
    uint8_t  rx[OBERON_RADIO_FIFO][OBERON_RADIO_PAYLOAD];
    uint8_t  tx[OBERON_RADIO_FIFO][OBERON_RADIO_PAYLOAD];
    int      rx_count, tx_count;
    uint8_t  cmd;
    int      pos;             /* bytes of the current command clocked so far */
    bool     selected, ce;
    uint32_t rx_word;         /* what the last exchange shifted in */
    uint8_t  in[64];
} OberonRadio;

void     oberon_radio_init(OberonRadio *r, Chardev *air);
void     oberon_radio_ctrl(OberonRadio *r, uint32_t ctrl);
void     oberon_radio_write(OberonRadio *r, uint32_t value, bool fast);
uint32_t oberon_radio_read(OberonRadio *r);

typedef struct OberonIOState {
    MemoryRegion mr;
    int64_t  start_ms;      /* milliseconds since power-on */
    uint32_t spi_tx, spi_rx, spi_ctrl;
    uint32_t mouse;
    int      mouse_x, mouse_y, mouse_btn;
    bool     mod_ctrl, mod_shift, mod_alt;   /* for button chords */
    bool    *chord_used;                     /* to dismiss the hint */

    uint8_t  kbd_fifo[OBERON_KBD_FIFO];
    int      kbd_head, kbd_tail;

    QemuInputHandlerState *kbd_handler, *mouse_handler;
    uint32_t gpio_ctrl;
    OberonDisk disk;
    OberonRadio radio;
    /* RS232 receive: the machine's commands, read by Boot.Mod at start */
    const char *serial_in;
    size_t   serial_len, serial_pos;
} OberonIOState;

void oberon_io_init(OberonIOState *s, MemoryRegion *sys, hwaddr base,
                    BlockBackend *blk, Chardev *air);
void oberon_input_init(OberonIOState *s);

#endif
