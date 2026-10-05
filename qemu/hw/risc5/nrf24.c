/*
 * The nRF24L01+ radio of the Oberon board, as SCC.Mod drives it.
 *
 * Project Oberon 2013 networks its stations by radio: SCC.Mod talks to an
 * nRF24L01+ on the second SPI slave select (spiCtrl bit 1), and Net.Mod sends
 * files and messages on top of it. The model covers what SCC.Mod uses:
 *
 *   W_REGISTER 0x20|r, R_REGISTER r, W_TX_PAYLOAD 0xA0, R_RX_PAYLOAD 0x61,
 *   FLUSH_TX 0xE1, FLUSH_RX 0xE2, NOP 0xFF; STATUS (RX_DR, TX_DS, MAX_RT,
 *   write 1 to clear), FIFO_STATUS, CONFIG (PWR_UP, PRIM_RX), RF_CH, RX_PW_P0;
 *   three-deep RX and TX queues of 32-byte payloads; CE on spiCtrl bit 3.
 *
 * SPI as in SPI.v: a slow exchange moves one byte, a fast one moves a 32-bit
 * word least significant byte first; every first byte of a command answers
 * with STATUS.
 *
 * The air is a character device, normally a UDP socket to a relay that hands
 * every frame to the other machines. A frame is the channel number followed by
 * the 32-byte payload. A machine announces itself with a one-byte frame 0xFF,
 * so the relay learns its address before it has anything to send.
 *
 * Acknowledgements: a real transmitter gets TX_DS only when a receiver acks.
 * Here a frame that left the socket counts as sent; SCC and Net carry their own
 * end-to-end checks, and a lost frame looks to them like a lost radio packet.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qemu/timer.h"
#include "chardev/char-fe.h"
#include "oberon-io.h"

#define CMD_R_REGISTER   0x00
#define CMD_W_REGISTER   0x20
#define CMD_R_RX_PAYLOAD 0x61
#define CMD_W_TX_PAYLOAD 0xA0
#define CMD_FLUSH_TX     0xE1
#define CMD_FLUSH_RX     0xE2
#define CMD_NOP          0xFF

#define REG_CONFIG      0x00
#define REG_RF_CH       0x05
#define REG_STATUS      0x07
#define REG_FIFO_STATUS 0x17

#define CONFIG_PRIM_RX  0x01
#define CONFIG_PWR_UP   0x02

#define ST_RX_DR   0x40
#define ST_TX_DS   0x20
#define ST_MAX_RT  0x10

#define HELLO      0xFF
#define HELLO_MS   5000

static uint8_t radio_status(OberonRadio *r)
{
    /* RX_P_NO is 0 while a payload waits in pipe 0, 7 when the queue is empty. */
    uint8_t pipe = r->rx_count ? 0 : 7;
    return (r->status & (ST_RX_DR | ST_TX_DS | ST_MAX_RT)) | (pipe << 1) |
           (r->tx_count == OBERON_RADIO_FIFO ? 1 : 0);
}

static uint8_t radio_reg(OberonRadio *r, uint8_t reg)
{
    switch (reg) {
    case REG_STATUS:
        return radio_status(r);
    case REG_FIFO_STATUS:
        return (r->rx_count == 0 ? 0x01 : 0) |
               (r->rx_count == OBERON_RADIO_FIFO ? 0x02 : 0) |
               (r->tx_count == 0 ? 0x10 : 0) |
               (r->tx_count == OBERON_RADIO_FIFO ? 0x20 : 0);
    default:
        return reg < sizeof(r->regs) ? r->regs[reg] : 0;
    }
}

static bool radio_listening(OberonRadio *r)
{
    uint8_t cfg = r->regs[REG_CONFIG];
    return r->ce && (cfg & CONFIG_PWR_UP) && (cfg & CONFIG_PRIM_RX);
}

static void radio_send_raw(OberonRadio *r, const uint8_t *buf, int len)
{
    if (qemu_chr_fe_backend_connected(&r->air)) {
        qemu_chr_fe_write_all(&r->air, buf, len);
    }
}

static void radio_hello(void *opaque)
{
    OberonRadio *r = opaque;
    uint8_t hello = HELLO;

    radio_send_raw(r, &hello, 1);
    timer_mod(r->hello, qemu_clock_get_ms(QEMU_CLOCK_REALTIME) + HELLO_MS);
}

/* CE pulse in transmit mode: everything queued goes out. */
static void radio_transmit(OberonRadio *r)
{
    uint8_t frame[1 + OBERON_RADIO_PAYLOAD];

    if (!(r->regs[REG_CONFIG] & CONFIG_PWR_UP) ||
        (r->regs[REG_CONFIG] & CONFIG_PRIM_RX)) {
        return;
    }
    while (r->tx_count) {
        frame[0] = r->regs[REG_RF_CH];
        memcpy(frame + 1, r->tx[0], OBERON_RADIO_PAYLOAD);
        if (!qemu_chr_fe_backend_connected(&r->air)) {
            r->status |= ST_MAX_RT;     /* no air: retransmits exhausted */
            return;
        }
        qemu_chr_fe_write_all(&r->air, frame, sizeof(frame));
        memmove(r->tx[0], r->tx[1], sizeof(r->tx[0]) * (OBERON_RADIO_FIFO - 1));
        r->tx_count--;
        r->status |= ST_TX_DS;
    }
}

/* One byte clocked in while the radio is selected; returns the byte clocked out. */
static uint8_t radio_byte(OberonRadio *r, uint8_t in)
{
    uint8_t out;
    int i = r->pos++;

    if (i == 0) {
        r->cmd = in;
        if (in == CMD_FLUSH_TX) {
            r->tx_count = 0;
        } else if (in == CMD_FLUSH_RX) {
            r->rx_count = 0;
        } else if (in == CMD_W_TX_PAYLOAD && r->tx_count < OBERON_RADIO_FIFO) {
            memset(r->tx[r->tx_count], 0, OBERON_RADIO_PAYLOAD);
        }
        return radio_status(r);
    }
    i--;                                /* index of the data byte */
    out = 0;
    if ((r->cmd & 0xE0) == CMD_R_REGISTER && r->cmd != CMD_R_RX_PAYLOAD) {
        out = radio_reg(r, r->cmd & 0x1F);
    } else if ((r->cmd & 0xE0) == CMD_W_REGISTER) {
        uint8_t reg = r->cmd & 0x1F;
        if (i == 0 && reg == REG_STATUS) {
            r->status &= ~(in & (ST_RX_DR | ST_TX_DS | ST_MAX_RT));
        } else if (i == 0 && reg < sizeof(r->regs)) {
            r->regs[reg] = in;
        }
    } else if (r->cmd == CMD_R_RX_PAYLOAD) {
        if (r->rx_count && i < OBERON_RADIO_PAYLOAD) {
            out = r->rx[0][i];
        }
    } else if (r->cmd == CMD_W_TX_PAYLOAD) {
        if (r->tx_count < OBERON_RADIO_FIFO && i < OBERON_RADIO_PAYLOAD) {
            r->tx[r->tx_count][i] = in;
        }
    }
    return out;
}

/* Slave select released: a command ends, and some act only now. */
static void radio_end(OberonRadio *r)
{
    if (r->pos > 1) {
        if (r->cmd == CMD_W_TX_PAYLOAD && r->tx_count < OBERON_RADIO_FIFO) {
            r->tx_count++;
        } else if (r->cmd == CMD_R_RX_PAYLOAD && r->rx_count) {
            memmove(r->rx[0], r->rx[1], sizeof(r->rx[0]) * (OBERON_RADIO_FIFO - 1));
            r->rx_count--;
        }
    }
    r->pos = 0;
}

void oberon_radio_ctrl(OberonRadio *r, uint32_t ctrl)
{
    bool sel = ctrl & OBERON_SPI_NET;
    bool ce = ctrl & OBERON_SPI_NET_ENABLE;

    if (r->selected && !sel) {
        radio_end(r);
    }
    r->selected = sel;
    if (ce && !r->ce) {
        radio_transmit(r);
    }
    r->ce = ce;
}

void oberon_radio_write(OberonRadio *r, uint32_t value, bool fast)
{
    uint32_t out = 0;

    if (!r->selected) {
        return;
    }
    if (fast) {
        for (int b = 0; b < 4; b++) {
            out |= (uint32_t)radio_byte(r, value >> (8 * b)) << (8 * b);
        }
    } else {
        out = radio_byte(r, value & 0xFF);
    }
    r->rx_word = out;
}

uint32_t oberon_radio_read(OberonRadio *r)
{
    return r->rx_word;
}

static int radio_can_read(void *opaque)
{
    return sizeof(((OberonRadio *)opaque)->in);
}

/*
 * The air delivers whole datagrams. A frame for another channel, or one that
 * arrives while the radio is not listening, is lost, as it would be on air.
 */
static void radio_read(void *opaque, const uint8_t *buf, int size)
{
    OberonRadio *r = opaque;

    if (size != 1 + OBERON_RADIO_PAYLOAD || buf[0] != r->regs[REG_RF_CH] ||
        !radio_listening(r) || r->rx_count == OBERON_RADIO_FIFO) {
        return;
    }
    memcpy(r->rx[r->rx_count++], buf + 1, OBERON_RADIO_PAYLOAD);
    r->status |= ST_RX_DR;
}

void oberon_radio_init(OberonRadio *r, Chardev *air)
{
    memset(r->regs, 0, sizeof(r->regs));
    r->regs[REG_CONFIG] = 0x08;         /* reset values from the datasheet */
    r->regs[REG_RF_CH] = 0x02;
    r->regs[0x11] = 0;                  /* RX_PW_P0 */
    if (!air) {
        return;
    }
    qemu_chr_fe_init(&r->air, air, &error_fatal);
    qemu_chr_fe_set_handlers(&r->air, radio_can_read, radio_read, NULL, NULL,
                             r, NULL, true);
    r->hello = timer_new_ms(QEMU_CLOCK_REALTIME, radio_hello, r);
    radio_hello(r);
}
