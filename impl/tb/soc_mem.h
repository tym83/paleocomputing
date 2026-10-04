// Memory model for the RISC5 core testbench.
// One flat RAM serves both codebus and inbus, exactly like the real SoC:
// adr is either the next PC or a data address (during stallL0), never both at once.
// This is the von Neumann stall that makes LD/ST cost 2 cycles.
#pragma once
#include <cstdint>
#include <cstring>
#include <vector>

struct Mem {
    static constexpr uint32_t WORDS = 1u << 18;      // 1 MB
    std::vector<uint32_t> w;
    Mem() : w(WORDS, 0) {}

    uint32_t read(uint32_t byteaddr) const {
        uint32_t i = (byteaddr >> 2) & (WORDS - 1);
        return w[i];
    }
    // ben=0: word; ben=1: byte selected by adr[1:0].
    // The core has already placed the byte on the right outbus lane (see RISC5.v assign outbus).
    void write(uint32_t byteaddr, uint32_t data, bool ben) {
        uint32_t i = (byteaddr >> 2) & (WORDS - 1);
        if (!ben) { w[i] = data; return; }
        uint32_t lane = byteaddr & 3;
        uint32_t mask = 0xFFu << (lane * 8);
        w[i] = (w[i] & ~mask) | (data & mask);
    }
    void load_words(uint32_t byteaddr, const uint32_t* src, size_t n) {
        for (size_t k = 0; k < n; k++) w[((byteaddr >> 2) + k) & (WORDS - 1)] = src[k];
    }
};
