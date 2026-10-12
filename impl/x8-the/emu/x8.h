/*
 * Electrologica X8 emulator.
 *
 * The central processor follows X8S, the X8 simulator written in Algol 60 at
 * the Mathematisch Centrum (D. Grune, 1971-72): every instruction and every
 * address form below is a transliteration of the matching label in X8S.a60
 * (comments name it). CHARON, the I/O processor, follows Dijkstra's EWD 149
 * (January 1966); where neither source says enough (the drum, the character
 * code of the teleprinter, the line printer) the choice is ours and is marked
 * RECONSTRUCTED.
 *
 * Words are 27 bits, ones' complement, held in the low bits of a uint32_t.
 */
#ifndef X8_H
#define X8_H

#include <stdint.h>
#include <stdio.h>

#define W_MASK 0x7FFFFFFu          /* 27 bits */
#define W_SIGN 0x4000000u          /* d26 */
#define W_MAG  0x3FFFFFFu          /* d25..d0 */
#define TP18   0x40000u
#define TP18M1 0x3FFFFu

#define X8_CORE_MAX 65536          /* X8S: aantal kasten (4) * 2^14 */
#define X8_NDEV 48                 /* EWD 149: devices 0..47 */

typedef uint32_t word;

/* the one-bit registers and their places in the T register (X8S tlink) */
typedef struct x8 {
    word a, s, b;                  /* A, S, B */
    word fh, ft;                   /* F (head, tail); FT is also G */
    uint32_t ot;                   /* instruction counter, 18 bits */
    int c, iv, lt, of, nint, ov, bt, itv;
    word lastpar;                  /* last word read, for its parity bit */
    word or_;                      /* instruction register */

    word *m;                       /* core */
    uint8_t *filled;               /* parity correct ("filled" in X8S) */
    int8_t *dgp;                   /* protection per 512 words: 2*GP+DP-1 */
    uint32_t core_words;

    uint64_t ccs;                  /* 1.25 us cycles since LS */
    int ingreep;                   /* 0 none, 1 charon/key, 2 error, 3 both */
    int prot;                      /* memory protection active */
    uint32_t ie0, ie1;             /* IV and LVIF at the end of the previous instruction */
    int dyst;                      /* dynamic stop counter */

    /* CHARON flip-flops, in the layout of the IFA/LVIFA words (EWD 149) */
    uint32_t af0, af1, if0, if1, lvif0, lvif1;
    uint32_t ifv0, ifv1, lvifv0, lvifv1;   /* which IF/LVIF can be changed */
    uint8_t lvaf[X8_NDEV], lvca[X8_NDEV];

    /* run control */
    int halted;                    /* static stop */
    int errnum;                    /* X8S error number of the static stop */
    uint32_t erraddr;              /* address of the instruction in OR */
    int trace;
    uint64_t max_cycles;
    int dcs;                       /* consecutive DO instructions */
    void *charon;                  /* devices, see charon.c */
    FILE *simout;                  /* X8S pseudo-instruction output (operate) */
    FILE *simin;
} x8;

/* word helpers */
static inline int w_neg(word w) { return (w & W_SIGN) != 0; }
static inline word w_not(word w) { return ~w & W_MASK; }
static inline long long w_val(word w) { return w_neg(w) ? -(long long)(w_not(w)) : (long long)w; }
static inline int w_zero(word w) { return w == 0 || w == W_MASK; }
word w_from(long long v, int negzero);   /* v in -(2^26-1)..2^26-1 */
word w_add(word x, word y, int *ovf);    /* the X8 adder: end-around carry */

void x8_init(x8 *m, uint32_t core_words);
void x8_ls(x8 *m);                       /* LS, the "last switch": power-on state */
void x8_ip(x8 *m);                       /* the IP key: CHARON reads the initial program */
int  x8_run(x8 *m, uint64_t until_cycles); /* returns 0 running, 1 static stop */
word x8_setq_read(x8 *m, int kind, int dev);
void x8_setq(x8 *m, int kind, int dev, int v);   /* kind 0 AF, 1 IF, 2 LVIF */
int  x8_readq(x8 *m, int kind, int dev);

/* memory access for CHARON: no protection, parity kept */
word x8_mem_read(x8 *m, uint32_t addr);
void x8_mem_write(x8 *m, uint32_t addr, word w);

#endif
