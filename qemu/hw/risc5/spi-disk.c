/*
 * Disk over SPI: an SD card as the Oberon boot loader sees it.
 *
 * Ported from our own implementation in impl/tb/disk/disk.c, which already
 * boots the real system on the Verilator test bench. The behaviour is the same
 * letter for letter: same states, same command codes, same parsing.
 *
 * The exchange is in values, not bytes: a write to the SPI port pushes a word,
 * a read returns the response. Commands arrive as six values, data in
 * blocks of one hundred twenty-eight words.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qemu/log.h"
#include "system/block-backend.h"
#include "oberon-io.h"

enum {
    ST_COMMAND,
    ST_READ,
    ST_WRITE,
    ST_WRITING,
};

#define SECTOR_WORDS 128
#define SECTOR_BYTES 512

static void seek_read(OberonDisk *d, uint32_t secnum, uint32_t *buf)
{
    uint8_t bytes[SECTOR_BYTES] = { 0 };
    int i;

    if (d->blk) {
        if (blk_pread(d->blk, (int64_t)secnum * SECTOR_BYTES, SECTOR_BYTES,
                      bytes, 0) < 0) {
            qemu_log_mask(LOG_GUEST_ERROR,
                          "RISC5: sector %u could not be read\n", secnum);
            memset(bytes, 0, sizeof(bytes));
        }
    }
    for (i = 0; i < SECTOR_WORDS; i++) {
        buf[i] = bytes[i * 4] | (bytes[i * 4 + 1] << 8) |
                 (bytes[i * 4 + 2] << 16) | ((uint32_t)bytes[i * 4 + 3] << 24);
    }
}

static void seek_write(OberonDisk *d, uint32_t secnum, const uint32_t *buf)
{
    uint8_t bytes[SECTOR_BYTES];
    int i;

    for (i = 0; i < SECTOR_WORDS; i++) {
        bytes[i * 4]     = buf[i];
        bytes[i * 4 + 1] = buf[i] >> 8;
        bytes[i * 4 + 2] = buf[i] >> 16;
        bytes[i * 4 + 3] = buf[i] >> 24;
    }
    if (d->blk && blk_pwrite(d->blk, (int64_t)secnum * SECTOR_BYTES,
                             SECTOR_BYTES, bytes, 0) < 0) {
        qemu_log_mask(LOG_GUEST_ERROR, "RISC5: sector %u could not be written\n", secnum);
    }
}

static void run_command(OberonDisk *d)
{
    uint32_t cmd = d->rx_buf[0];
    uint32_t arg = (d->rx_buf[1] << 24) | (d->rx_buf[2] << 16) |
                   (d->rx_buf[3] << 8)  |  d->rx_buf[4];

    switch (cmd) {
    case 81:                                  /* read a single block */
        if (!d->first_read_seen) {
            d->first_read_seen = true;
            /* A visible milestone: the boot loader has reached the disk. */
            qemu_log_mask(LOG_GUEST_ERROR,
                          "RISC5: first read of sector %u\n", arg - d->offset);
        }
        d->state = ST_READ;
        d->tx_buf[0] = 0;
        d->tx_buf[1] = 254;                   /* start-of-data token */
        seek_read(d, arg - d->offset, &d->tx_buf[2]);
        d->tx_cnt = 2 + SECTOR_WORDS;
        break;
    case 88:                                  /* write a single block */
        d->state = ST_WRITE;
        d->write_sector = arg - d->offset;
        d->tx_buf[0] = 0;
        d->tx_cnt = 1;
        break;
    default:
        d->tx_buf[0] = 0;
        d->tx_cnt = 1;
        break;
    }
    d->tx_idx = -1;
}

void oberon_disk_write(OberonDisk *d, uint32_t value)
{
    d->tx_idx++;
    switch (d->state) {
    case ST_COMMAND:
        /*
         * While 0xFF is coming and nothing has been collected yet, this is an idle cycle
         * the bus master uses to drive the clock.
         */
        if ((uint8_t)value != 0xFF || d->rx_idx != 0) {
            d->rx_buf[d->rx_idx++] = value;
            if (d->rx_idx == 6) {
                run_command(d);
                d->rx_idx = 0;
            }
        }
        break;
    case ST_READ:
        if (d->tx_idx == d->tx_cnt) {
            d->state = ST_COMMAND;
            d->tx_cnt = 0;
            d->tx_idx = 0;
        }
        break;
    case ST_WRITE:
        if (value == 254) {
            d->state = ST_WRITING;
        }
        break;
    case ST_WRITING:
        if (d->rx_idx < SECTOR_WORDS) {
            d->rx_buf[d->rx_idx] = value;
        }
        d->rx_idx++;
        if (d->rx_idx == SECTOR_WORDS) {
            seek_write(d, d->write_sector, d->rx_buf);
        }
        if (d->rx_idx == SECTOR_WORDS + 2) {   /* two checksum words */
            d->tx_buf[0] = 5;                  /* accepted */
            d->tx_cnt = 1;
            d->tx_idx = -1;
            d->rx_idx = 0;
            d->state = ST_COMMAND;
        }
        break;
    }
}

uint32_t oberon_disk_read(OberonDisk *d)
{
    if (d->tx_idx >= 0 && d->tx_idx < d->tx_cnt) {
        return d->tx_buf[d->tx_idx];
    }
    return 255;
}

void oberon_disk_init(OberonDisk *d, BlockBackend *blk)
{
    uint32_t first[SECTOR_WORDS];

    d->blk = blk;
    d->state = ST_COMMAND;
    d->tx_idx = 0;

    /*
     * An image comes in two kinds: with a partition table and without. If sector
     * zero starts with the Oberon file system signature, there are no
     * partitions and sectors must be offset; our test bench tells them apart the same way.
     */
    seek_read(d, 0, first);
    d->offset = (first[0] == 0x9B1EA38D) ? 0x80002 : 0;
}
