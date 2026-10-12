/*
 * The X8 in the browser: the same processor and CHARON as x8emu, with the
 * teleprinter and the line printer handed to JavaScript and the keyboard
 * pressed from it. Built with emscripten (make web).
 */
#define _POSIX_C_SOURCE 200809L   /* fmemopen */
#include <stdlib.h>
#include <string.h>
#include <emscripten.h>
#include "x8.h"
#include "charon.h"

static x8 m;
static unsigned char *tape;
static char out[1 << 16];          /* events: device, character, ... */
static int outlen;

static void on_char(int dev, int ch, uint64_t cycles)
{
    (void)cycles;
    if (outlen + 2 > (int)sizeof out) return;
    out[outlen++] = (char)dev;
    out[outlen++] = (char)ch;
}

/* load the program tape and press LS and IP */
EMSCRIPTEN_KEEPALIVE int x8w_boot(const unsigned char *t, int len)
{
    static int setup;
    charon_cfg cfg = {0};
    cfg.on_char = on_char;
    if (!setup) {
        x8_init(&m, 32768);
        charon_setup(&m, &cfg);
        setup = 1;
    }
    free(tape);
    tape = malloc((size_t)len);
    memcpy(tape, t, (size_t)len);
    charon_ip_stream(&m, fmemopen(tape, (size_t)len, "rb"));
    x8_ip(&m);
    return 0;
}

/* run for so many machine cycles (1.25 us each); 1 when the machine stopped */
EMSCRIPTEN_KEEPALIVE int x8w_run(double cycles)
{
    return x8_run(&m, m.ccs + (uint64_t)cycles);
}

EMSCRIPTEN_KEEPALIVE void x8w_key(int ascii)
{
    int code = ascii == '\n' ? 37 : charon_code(ascii);
    if (code >= 0) charon_key_now(&m, code);
}

/* the output since the last call: pairs of (device, character) */
EMSCRIPTEN_KEEPALIVE int x8w_out(char *dst, int max)
{
    int n = outlen < max ? outlen : max;
    memcpy(dst, out, (size_t)n);
    memmove(out, out + n, (size_t)(outlen - n));
    outlen -= n;
    return n;
}

EMSCRIPTEN_KEEPALIVE double x8w_cycles(void) { return (double)m.ccs; }
EMSCRIPTEN_KEEPALIVE double x8w_drum(void) { return (double)charon_drum_transfers(&m); }
EMSCRIPTEN_KEEPALIVE int x8w_halted(void) { return m.halted; }
EMSCRIPTEN_KEEPALIVE int x8w_errnum(void) { return m.errnum; }
EMSCRIPTEN_KEEPALIVE int x8w_iv(void) { return m.iv; }
EMSCRIPTEN_KEEPALIVE int x8w_dynstop(void) { return m.ot > TP18M1 - 2; }
EMSCRIPTEN_KEEPALIVE uint32_t *x8w_core(void) { return m.m; }
