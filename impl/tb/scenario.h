#pragma once
// Portable harness skeleton: scripted input and screen dumps.
//
// Why a separate file. The platform plan lists "move the RISC5 harness into a
// portable skeleton" as the first step: without it the second machine costs as
// much as the first. This file holds exactly what does NOT depend on the
// architecture: the script language, its parsing and playback, the frame dump
// format. Everything that does depend on it the machine supplies through the
// small adapter below.
//
// Script language (one line per event, "#" starts a comment):
//   <instruction> M <x> <y> <buttons>   set the pointer
//   <instruction> K <scan-code>         send a key code
//   <instruction> S <file>              dump the screen
//
// The y coordinate in a script is in the machine's system (as the driver sees it);
// the "as in the picture" conversion is done by the generator tools/mkscript.py.

#include <cstdio>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace harness {

struct Event { uint64_t at; char kind; int a, b, c; std::string str; };

inline std::vector<Event> load_script(const char* path) {
    std::vector<Event> ev;
    FILE* f = fopen(path, "r");
    if (!f) return ev;
    char line[256];
    while (fgets(line, sizeof line, f)) {
        if (line[0] == '#' || line[0] == '\n') continue;
        unsigned long long at; char k; char rest[200] = {0};
        if (sscanf(line, "%llu %c %199[^\n]", &at, &k, rest) < 2) continue;
        Event e{at, k, 0, 0, 0, ""};
        if (k == 'M') sscanf(rest, "%d %d %d", &e.a, &e.b, &e.c);
        else if (k == 'K') sscanf(rest, "%d", &e.a);
        else e.str = rest;
        ev.push_back(e);
    }
    fclose(f);
    return ev;
}

// Screen description of a particular machine. The only architecture-dependent
// part here: where the framebuffer is, how large it is and in what order the
// lines go. On RISC5 lines are stored BOTTOM UP (VID.v: vidadr = Org +
// {3'b0, ~vcnt, hword}), so a naive dump gives an upside-down screen.
struct Screen {
    const uint32_t* words;      // start of the framebuffer
    int width, height;          // in pixels
    bool bottom_up;             // lines go bottom up
};

// Dump to PBM (P1). IMPORTANT: in this format 1 is BLACK, 0 is white. In the Oberon
// framebuffer ones are text and zeros are the white background; the inverse mapping
// gives a negative. We already tripped over this once (an audit finding).
inline bool dump_pbm(const Screen& s, const char* path) {
    FILE* f = fopen(path, "wb");
    if (!f) return false;
    const int wpl = s.width / 32;
    fprintf(f, "P1\n%d %d\n", s.width, s.height);
    for (int y = 0; y < s.height; y++) {
        int src = s.bottom_up ? (s.height - 1 - y) : y;
        for (int x = 0; x < s.width; x++) {
            uint32_t w = s.words[src * wpl + (x >> 5)];
            fputc(((w >> (x & 31)) & 1) ? '1' : '0', f);
            fputc(' ', f);
        }
        fputc('\n', f);
    }
    fclose(f);
    return true;
}

// Machine adapter. Three actions; the script needs nothing more.
struct Host {
    virtual void set_mouse(int x, int y, int keys) = 0;
    virtual void push_key(uint8_t code) = 0;
    virtual Screen screen() = 0;
    virtual ~Host() {}
};

// Player: delivers the events whose time has come.
struct Player {
    std::vector<Event> ev;
    size_t i = 0;
    bool verbose = true;

    void load(const std::string& path) {
        if (path.empty()) return;
        ev = load_script(path.c_str());
        if (verbose) printf("  script: %s, %zu events\n", path.c_str(), ev.size());
    }

    void advance(uint64_t now, Host& h) {
        while (i < ev.size() && ev[i].at <= now) {
            const Event& e = ev[i++];
            if (e.kind == 'M') {
                h.set_mouse(e.a, e.b, e.c);
                if (verbose) printf("  [%llu] mouse %d,%d buttons %d\n",
                                    (unsigned long long)now, e.a, e.b, e.c);
            } else if (e.kind == 'K') {
                h.push_key((uint8_t)e.a);
                if (verbose) printf("  [%llu] key %02X\n",
                                    (unsigned long long)now, e.a);
            } else if (e.kind == 'S') {
                if (dump_pbm(h.screen(), e.str.c_str()) && verbose)
                    printf("  screen dumped: %s\n", e.str.c_str());
            }
        }
    }
};

}  // namespace harness
