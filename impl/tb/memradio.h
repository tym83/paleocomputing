// The nRF24L01+ radio of the Oberon board, for the machine in the browser.
//
// The same model as the QEMU target's (qemu/hw/risc5/nrf24.c), which follows
// what SCC.Mod uses: W_REGISTER 0x20|r, R_REGISTER r, W_TX_PAYLOAD 0xA0,
// R_RX_PAYLOAD 0x61, FLUSH_TX 0xE1, FLUSH_RX 0xE2, NOP 0xFF; STATUS (RX_DR,
// TX_DS, MAX_RT, write 1 to clear), FIFO_STATUS, CONFIG (PWR_UP, PRIM_RX),
// RF_CH; three-deep queues of 32-byte payloads; CE on spiCtrl bit 3. SPI as in
// SPI.v: a slow exchange moves one byte, a fast one a 32-bit word least
// significant byte first.
//
// There is no socket here. A frame the radio sends (the channel and the
// 32-byte payload) waits in `out` until the page takes it, and the page hands
// in the frames of the other machines: the air is JavaScript, one relay for
// every machine on the page, each machine in a worker thread of its own.
#pragma once
#include <cstdint>
#include <cstring>
#include <deque>
#include <array>

struct MemRadio {
    enum { PAYLOAD = 32, FIFO = 3, OUT_MAX = 64 };
    uint8_t regs[0x20] = {0};
    uint8_t status = 0;
    uint8_t rx[FIFO][PAYLOAD] = {{0}};
    uint8_t tx[FIFO][PAYLOAD] = {{0}};
    int rx_count = 0, tx_count = 0;
    uint8_t cmd = 0;
    int pos = 0;
    bool selected = false, ce = false;
    uint32_t rx_word = 0;
    std::deque<std::array<uint8_t, 1 + PAYLOAD>> out;   // frames sent, for the page

    void init() {
        memset(regs, 0, sizeof regs);
        regs[0x00] = 0x08; regs[0x05] = 0x02;          // CONFIG, RF_CH: datasheet reset values
        status = 0; rx_count = tx_count = 0; cmd = 0; pos = 0;
        selected = ce = false; rx_word = 0; out.clear();
    }

    uint8_t st() const {
        uint8_t pipe = rx_count ? 0 : 7;
        return (status & 0x70) | (pipe << 1) | (tx_count == FIFO ? 1 : 0);
    }
    uint8_t reg(uint8_t r) const {
        if (r == 0x07) return st();
        if (r == 0x17) return (rx_count == 0 ? 0x01 : 0) | (rx_count == FIFO ? 0x02 : 0) |
                              (tx_count == 0 ? 0x10 : 0) | (tx_count == FIFO ? 0x20 : 0);
        return r < sizeof regs ? regs[r] : 0;
    }
    bool listening() const { return ce && (regs[0] & 0x02) && (regs[0] & 0x01); }

    // CE pulse in transmit mode: everything queued goes to the air.
    void transmit() {
        if (!(regs[0] & 0x02) || (regs[0] & 0x01)) return;
        while (tx_count) {
            std::array<uint8_t, 1 + PAYLOAD> f;
            f[0] = regs[0x05];
            memcpy(f.data() + 1, tx[0], PAYLOAD);
            if (out.size() < OUT_MAX) out.push_back(f);     // a page that stops taking loses frames
            memmove(tx[0], tx[1], sizeof tx[0] * (FIFO - 1));
            tx_count--;
            status |= 0x20;                                  // TX_DS
        }
    }

    uint8_t byte(uint8_t in) {
        int i = pos++;
        if (i == 0) {
            cmd = in;
            if (in == 0xE1) tx_count = 0;
            else if (in == 0xE2) rx_count = 0;
            else if (in == 0xA0 && tx_count < FIFO) memset(tx[tx_count], 0, PAYLOAD);
            return st();
        }
        i--;
        uint8_t o = 0;
        if ((cmd & 0xE0) == 0x00 && cmd != 0x61) o = reg(cmd & 0x1F);
        else if ((cmd & 0xE0) == 0x20) {
            uint8_t r = cmd & 0x1F;
            if (i == 0 && r == 0x07) status &= ~(in & 0x70);
            else if (i == 0 && r < sizeof regs) regs[r] = in;
        } else if (cmd == 0x61) { if (rx_count && i < PAYLOAD) o = rx[0][i]; }
        else if (cmd == 0xA0) { if (tx_count < FIFO && i < PAYLOAD) tx[tx_count][i] = in; }
        return o;
    }
    void end() {
        if (pos > 1) {
            if (cmd == 0xA0 && tx_count < FIFO) tx_count++;
            else if (cmd == 0x61 && rx_count) {
                memmove(rx[0], rx[1], sizeof rx[0] * (FIFO - 1));
                rx_count--;
            }
        }
        pos = 0;
    }
    void ctrl(uint32_t c) {
        bool sel = c & 0x2, e = c & 0x8;
        if (selected && !sel) end();
        selected = sel;
        if (e && !ce) transmit();
        ce = e;
    }
    void write(uint32_t v, bool fast) {
        if (!selected) return;
        uint32_t o = 0;
        if (fast) for (int b = 0; b < 4; b++) o |= (uint32_t)byte(v >> (8 * b)) << (8 * b);
        else o = byte(v & 0xFF);
        rx_word = o;
    }
    uint32_t read() const { return rx_word; }

    // A frame from the air: lost if for another channel, if the radio is not
    // listening, or if its queue is full, as on a real air.
    void give(const uint8_t* f) {
        if (f[0] != regs[0x05] || !listening() || rx_count == FIFO) return;
        memcpy(rx[rx_count++], f + 1, PAYLOAD);
        status |= 0x40;                                      // RX_DR
    }
    bool take(uint8_t* f) {
        if (out.empty()) return false;
        memcpy(f, out.front().data(), 1 + PAYLOAD);
        out.pop_front();
        return true;
    }
};
