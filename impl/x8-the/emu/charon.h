#ifndef CHARON_H
#define CHARON_H

#include <stdint.h>
#include <stdio.h>
#include "x8.h"

/* device numbers of the X8 of the Mathematisch Centrum (Grune 1972, 10.4) */
enum {
    DEV_READER = 0, DEV_TELEX = 1, DEV_KEYBOARD = 2, DEV_IPREADER = 5,
    DEV_LINEPRINTER = 11, DEV_PUNCH = 18, DEV_DRUM = 27,
    DEV_ERROR = 37, DEV_TOOTH = 38, DEV_CLOCK = 39
};

enum { T_NONE, T_READER, T_TELEX, T_KEYBOARD, T_LINEPRINTER, T_PUNCH, T_DRUM,
       T_TOOTH, T_CLOCK };

#define CYCLES_PER_MS 800ULL      /* one cycle is 1.25 us (X8S ccs) */

typedef struct charon_cfg {
    const char *reader, *reader2, *ip, *punch, *printer, *telex, *keys;
    int echo_keys;
    /* if set, the teleprinter and the line printer call this instead of
     * writing files (the browser build) */
    void (*on_char)(int dev, int ch, uint64_t cycles);
} charon_cfg;

void charon_setup(x8 *m, const charon_cfg *cfg);
void charon_finish(x8 *m);
void charon_ip(x8 *m);
void charon_af(x8 *m, int dev);
void charon_advance(x8 *m);
uint64_t charon_next_event(x8 *m);
int charon_present(x8 *m, int dev);
int charon_char(int code);        /* our 6-bit code -> ASCII, -1 for none */
int charon_code(int ch);          /* ASCII -> our 6-bit code, -1 if none */
uint64_t charon_drum_transfers(x8 *m);
void charon_key_now(x8 *m, int code);           /* the operator presses a key now */
void charon_ip_stream(x8 *m, FILE *f);          /* the tape in the IP reader */

#endif
