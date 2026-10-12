/*
 * CHARON, the communication processor of the X8, after Dijkstra, EWD 149
 * "Documentatie over de communicatie apparatuur aan de EL X8" (7 January
 * 1966). Section numbers below are the sections of EWD 149.
 *
 * For every device n the four words AR0..AR3 live at 64 + 4n (section 3). A
 * start order ("schakel") is a few words in core: label[-1] the lock word
 * where CHARON reports, label[0] the label of the next start order, label[1]
 * the code word (section 4.1). The count part of a word is d26..d18, the
 * address part d17..d0.
 *
 * RECONSTRUCTED here: the drum start order (EWD 149 lists the drum as a normal
 * device without its code words), the 6-bit character code of the teleprinter
 * and the line printer (EWD 149: the low six bits decide the action), and the
 * speeds of the line printer and the drum (the drum after EWD 196: 1024 words
 * per track, 40 ms per revolution, 512K words).
 */
#include <stdlib.h>
#include <string.h>
#include "charon.h"

#define CNT(w) (((w) >> 18) & 511u)
#define ADR(w) ((w) & TP18M1)
#define MKW(c, a) ((((word)(c) & 511u) << 18) | ((word)(a) & TP18M1))

enum { OK = 0, NBK = 511, EB = 510, ASL = 509 };

#define DRUM_WORDS (512u * 1024u)
#define DRUM_REV (40ULL * CYCLES_PER_MS)          /* 32000 cycles */

typedef struct kev { uint64_t t; int code; } kev;

typedef struct dev {
    int type;
    int busy;
    uint64_t t_next;              /* next event, UINT64_MAX for none */
    int phase;                    /* 0 start, 1 transfer word, 2 finish */
    word label;
    int status;                   /* for the lock word */
    FILE *in, *out;
    int col;                      /* teleprinter column, for time stamps */
    uint64_t line_t;
    /* keyboard */
    kev *keys; int nkeys, kpos;
    /* drum */
    int drum_write;
    uint32_t drum_addr, core_addr, count;
} dev;

typedef struct charon {
    dev d[X8_NDEV];
    word *drum;
    uint64_t drum_transfers;
    FILE *telex;
    int echo_keys;
    void (*on_char)(int dev, int ch, uint64_t cycles);
    uint64_t clock_next;
} charon;

static const char CODE[64] =
    "0123456789abcdefghijklmnopqrstuvwxyz \n.,:-+=()?/*;'\"<>!_%#[]|&@";

int charon_char(int code)
{
    code &= 63;
    if (code == 63) return -1;
    return (unsigned char)CODE[code];
}

int charon_code(int ch)
{
    if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
    for (int i = 0; i < 63; i++)
        if (CODE[i] == ch) return i;
    return -1;
}

static charon *C(x8 *m) { return (charon *)m->charon; }
static uint32_t ar(int n, int k) { return 64u + 4u * (uint32_t)n + (uint32_t)k; }
static word rd(x8 *m, uint32_t a) { return x8_mem_read(m, a); }
static void wr(x8 *m, uint32_t a, word w) { x8_mem_write(m, a, w); }

int charon_present(x8 *m, int dev)
{
    return dev >= 0 && dev < X8_NDEV && C(m)->d[dev].type != T_NONE;
}

uint64_t charon_drum_transfers(x8 *m) { return C(m)->drum_transfers; }

static void load_keys(dev *d, const char *path)
{
    FILE *f = fopen(path, "r");
    if (!f) { perror(path); exit(2); }
    char line[1024];
    while (fgets(line, sizeof line, f)) {
        if (line[0] == '#' || line[0] == '\n') continue;
        char *p;
        double ms = strtod(line, &p);
        while (*p == ' ' || *p == '\t') p++;
        uint64_t t = (uint64_t)(ms * CYCLES_PER_MS);
        for (; *p && *p != '\n'; p++) {
            int code = (*p == '\\' && p[1] == 'n') ? (p++, 37) : charon_code(*p);
            if (code < 0) continue;
            d->keys = realloc(d->keys, sizeof(kev) * (size_t)(d->nkeys + 1));
            d->keys[d->nkeys].t = t;
            d->keys[d->nkeys].code = code;
            d->nkeys++;
            t += 200 * CYCLES_PER_MS / 2;              /* an operator types 10 keys a second */
        }
    }
    fclose(f);
}

void charon_setup(x8 *m, const charon_cfg *cfg)
{
    charon *c = calloc(1, sizeof *c);
    m->charon = c;
    for (int i = 0; i < X8_NDEV; i++) c->d[i].t_next = UINT64_MAX;
    c->drum = calloc(DRUM_WORDS, sizeof(word));
    c->telex = stdout;
    c->echo_keys = cfg->echo_keys;
    c->on_char = cfg->on_char;
    c->d[DEV_READER].type = T_READER;
    c->d[DEV_TELEX].type = T_TELEX;
    c->d[DEV_KEYBOARD].type = T_KEYBOARD;
    c->d[DEV_IPREADER].type = T_READER;
    c->d[DEV_LINEPRINTER].type = T_LINEPRINTER;
    c->d[DEV_PUNCH].type = T_PUNCH;
    c->d[DEV_DRUM].type = T_DRUM;
    c->d[DEV_TOOTH].type = T_TOOTH;
    c->d[DEV_CLOCK].type = T_CLOCK;
    if (cfg->reader && !(c->d[DEV_READER].in = fopen(cfg->reader, "rb"))) { perror(cfg->reader); exit(2); }
    if (cfg->reader2 && !(c->d[DEV_IPREADER].in = fopen(cfg->reader2, "rb"))) { perror(cfg->reader2); exit(2); }
    if (cfg->punch && !(c->d[DEV_PUNCH].out = fopen(cfg->punch, "wb"))) { perror(cfg->punch); exit(2); }
    if (cfg->printer && !(c->d[DEV_LINEPRINTER].out = fopen(cfg->printer, "w"))) { perror(cfg->printer); exit(2); }
    if (cfg->telex && strcmp(cfg->telex, "-") && !(c->telex = fopen(cfg->telex, "w"))) { perror(cfg->telex); exit(2); }
    c->d[DEV_TELEX].out = c->telex;
    if (cfg->keys) load_keys(&c->d[DEV_KEYBOARD], cfg->keys);
    if (c->d[DEV_KEYBOARD].nkeys) c->d[DEV_KEYBOARD].t_next = c->d[DEV_KEYBOARD].keys[0].t;
    c->clock_next = 10 * CYCLES_PER_MS;
    c->d[DEV_CLOCK].t_next = c->clock_next;
    m->simout = stdout;
}

void charon_finish(x8 *m)
{
    charon *c = C(m);
    for (int i = 0; i < X8_NDEV; i++) {
        if (c->d[i].type == T_TELEX && c->d[i].col) fputc('\n', c->d[i].out);
        if (c->d[i].out && c->d[i].out != stdout) fflush(c->d[i].out);
    }
    fflush(stdout);
}

/* --- the prille begin: IP reading (section 10.1, X8S procedure ip) ----- */

static int heptade(FILE *f) { int ch = f ? fgetc(f) : EOF; return ch == EOF ? -1 : ch & 127; }

static long long ip_word(FILE *f)
{
    int h;
    do { h = heptade(f); if (h < 0) return -1; } while (h < 64);
    long long n = h - 64;
    for (int k = 0; k < 3; k++) {
        int x = heptade(f);
        if (x < 0) return -1;
        n = n * 128 + x;
    }
    return n;
}

void charon_ip(x8 *m)
{
    charon *c = C(m);
    FILE *f = c->d[DEV_IPREADER].in;
    uint64_t words = 0;
    for (;;) {
        long long n = ip_word(f);
        if (n < 0) break;
        long long amount = n >> 18, addr = n & TP18M1;
        if (addr == TP18M1) addr = -1;
        if (amount == 0 && addr == 0) break;
        if (amount == 0) amount = 512;
        while (amount-- > 0) {
            long long w = ip_word(f);
            if (w < 0) break;
            addr++;
            x8_mem_write(m, (uint32_t)addr, (word)w);
            words++;
        }
    }
    m->ccs += (words + 1) * 4 * CYCLES_PER_MS;       /* 1000 heptades a second */
    /* "Tenslotte zet Charon onafhankelijk van IFT de IF = true" */
    x8_setq(m, 1, DEV_IPREADER, 1);
}

void charon_reopen_ip(x8 *m, const char *path)
{
    dev *d = &C(m)->d[DEV_IPREADER];
    if (d->in) fclose(d->in);
    if (!(d->in = fopen(path, "rb"))) { perror(path); exit(2); }
}

/* --- normal devices: start orders, AFT and IFT (sections 4.2, 4.3) ---- */

static uint64_t word_time(int type)
{
    switch (type) {
    case T_READER: return CYCLES_PER_MS;              /* 1000 punchings a second */
    case T_PUNCH: return CYCLES_PER_MS * 20 / 3;      /* 150 a second */
    case T_TELEX: return 100 * CYCLES_PER_MS;         /* 10 characters a second */
    case T_LINEPRINTER: return CYCLES_PER_MS / 2;
    default: return 100;
    }
}

static void schedule_start(x8 *m, int n, uint64_t delay)
{
    dev *d = &C(m)->d[n];
    if (d->busy) return;
    d->busy = 1;
    d->phase = 0;
    d->t_next = m->ccs + delay;
}

void charon_af(x8 *m, int n)
{
    dev *d = &C(m)->d[n];
    if (!m->lvaf[n]) return;
    if (d->type == T_KEYBOARD || d->type == T_CLOCK) return;
    if (!d->busy) schedule_start(m, n, 4);
}

static void finish(x8 *m, int n, int slot)
{
    dev *d = &C(m)->d[n];
    word label = d->label;
    wr(m, label - 1, MKW(slot, 0));
    word ar2 = rd(m, ar(n, 2));
    unsigned aft = (CNT(ar2) + 511) & 511;
    wr(m, ar(n, 2), MKW(aft, ADR(ar2)));
    if (aft == 0) x8_setq(m, 0, n, 0);
    else {
        word ar0 = rd(m, ar(n, 0));
        wr(m, ar(n, 0), MKW(CNT(ar0), ADR(rd(m, ADR(ar0)))));
    }
    word ar1 = rd(m, ar(n, 1));
    unsigned ift = (CNT(ar1) + 1) & 511;
    wr(m, ar(n, 1), MKW(ift, ADR(ar1)));
    if (ift >= 1 && ift <= 255) x8_setq(m, 1, n, 1);
    d->busy = 0;
    d->t_next = UINT64_MAX;
    if (x8_readq(m, 0, n) && m->lvaf[n]) schedule_start(m, n, 4);
}

static void put_char(charon *c, dev *d, int code, uint64_t t)
{
    int ch = charon_char(code);
    if (ch < 0) return;
    if (c->on_char) {
        c->on_char(d->type == T_TELEX ? DEV_TELEX : DEV_LINEPRINTER, ch, t);
        return;
    }
    if (d->type == T_TELEX) {
        if (d->col == 0) {
            fprintf(d->out, "[%8.3f s] ", (double)t / (1000.0 * CYCLES_PER_MS));
        }
        fputc(ch, d->out);
        d->col = ch == '\n' ? 0 : d->col + 1;
    } else if (d->out) fputc(ch, d->out);
    (void)c;
}

static void drum_start(x8 *m, int n)
{
    charon *c = C(m);
    dev *d = &c->d[n];
    word cw = rd(m, d->label + 1), dw = rd(m, d->label + 2);
    d->count = CNT(cw) ? CNT(cw) : 512;
    d->core_addr = ADR(cw) + 1;
    d->drum_write = (dw >> 25) & 1;
    d->drum_addr = dw & 0x7FFFF;
    wr(m, ar(n, 3), cw);
    /* wait until the first drum word passes the heads */
    uint64_t now = m->ccs;
    uint64_t pos_t = (uint64_t)(d->drum_addr % 1024) * DRUM_REV / 1024;
    uint64_t in_rev = now % DRUM_REV;
    uint64_t wait = (pos_t + DRUM_REV - in_rev) % DRUM_REV;
    uint64_t dur = (uint64_t)d->count * DRUM_REV / 1024;
    d->phase = 2;
    d->t_next = now + wait + dur;
}

static void drum_done(x8 *m, int n)
{
    charon *c = C(m);
    dev *d = &c->d[n];
    for (uint32_t k = 0; k < d->count; k++) {
        uint32_t da = (d->drum_addr + k) % DRUM_WORDS, ca = d->core_addr + k;
        if (d->drum_write) c->drum[da] = rd(m, ca);
        else wr(m, ca, c->drum[da]);
    }
    c->drum_transfers++;
    wr(m, ar(n, 3), MKW(0, d->core_addr + d->count - 1));
    finish(m, n, OK);
}

static void normal_step(x8 *m, int n)
{
    charon *c = C(m);
    dev *d = &c->d[n];
    if (d->phase == 0) {                               /* accept a start order */
        if (!x8_readq(m, 0, n) || !m->lvaf[n]) { d->busy = 0; d->t_next = UINT64_MAX; return; }
        word ar0 = rd(m, ar(n, 0));
        d->label = ADR(ar0);
        int status = (int)CNT(ar0);
        word cw = rd(m, d->label + 1);
        if (status != OK && status != ASL) {           /* symbolic treatment */
            if (cw == 0) {
                int ns = (d->type == T_PUNCH && status == EB) ? ASL : OK;
                wr(m, ar(n, 0), MKW(ns, ADR(ar0)));
                finish(m, n, ns);
            } else finish(m, n, status);
            return;
        }
        if (cw == 0) {                                 /* HOK */
            wr(m, ar(n, 0), MKW(OK, ADR(ar0)));
            finish(m, n, OK);
            return;
        }
        if (d->type == T_DRUM) { drum_start(m, n); return; }
        wr(m, ar(n, 3), cw);
        d->phase = 1;
        d->t_next = m->ccs + word_time(d->type);
        return;
    }
    if (d->type == T_DRUM) { drum_done(m, n); return; }
    /* one word: first the running code word in AR3, then the word itself */
    word ar3 = rd(m, ar(n, 3));
    unsigned cnt = (CNT(ar3) + 511) & 511;
    uint32_t a = (ADR(ar3) + 1) & TP18M1;
    wr(m, ar(n, 3), MKW(cnt, a));
    if (d->type == T_READER) {
        int ch = d->in ? fgetc(d->in) : EOF;
        if (ch == EOF) {                               /* end of tape */
            word ar0 = rd(m, ar(n, 0));
            wr(m, ar(n, 0), MKW(EB, ADR(ar0)));
            finish(m, n, EB);
            return;
        }
        wr(m, a, (word)(ch & 255));
    } else {
        word w = rd(m, a);
        if (d->type == T_PUNCH) { if (d->out) fputc((int)(w & 255), d->out); }   /* eight holes */
        else put_char(c, d, (int)(w & 63), m->ccs);
    }
    if (cnt == 0) { finish(m, n, OK); return; }
    d->t_next = m->ccs + word_time(d->type);
}

/* --- the keyboard (section 5) ------------------------------------------ */

static void key_step(x8 *m, int n)
{
    charon *c = C(m);
    dev *d = &c->d[n];
    int code = d->keys[d->kpos].code;
    d->kpos++;
    d->t_next = d->kpos < d->nkeys ? d->keys[d->kpos].t : UINT64_MAX;
    if (d->t_next != UINT64_MAX && d->t_next < m->ccs) d->t_next = m->ccs;
    if (!m->lvca[n]) return;                           /* nobody listens: the key is lost */
    if (c->echo_keys) fprintf(stderr, "[key %c]\n", charon_char(code) == '\n' ? '/' : charon_char(code));
    if (x8_readq(m, 0, n) && m->lvaf[n]) wr(m, ar(n, 0), (word)code);
    else wr(m, ar(n, 3), (word)code);
    x8_setq(m, 0, n, 0);
    word ar1 = rd(m, ar(n, 1));
    unsigned ift = (CNT(ar1) + 1) & 511;
    wr(m, ar(n, 1), MKW(ift, ADR(ar1)));
    if (ift >= 1 && ift <= 255) x8_setq(m, 1, n, 1);
}

void charon_key_now(x8 *m, int code)
{
    dev *d = &C(m)->d[DEV_KEYBOARD];
    uint64_t t = m->ccs + 100;
    if (d->nkeys > d->kpos && d->keys[d->nkeys - 1].t + 100 * CYCLES_PER_MS > t)
        t = d->keys[d->nkeys - 1].t + 100 * CYCLES_PER_MS;   /* ten keys a second */
    d->keys = realloc(d->keys, sizeof(kev) * (size_t)(d->nkeys + 1));
    d->keys[d->nkeys].t = t;
    d->keys[d->nkeys].code = code;
    d->nkeys++;
    if (d->t_next == UINT64_MAX) d->t_next = d->keys[d->kpos].t;
}

void charon_ip_stream(x8 *m, FILE *f)
{
    dev *d = &C(m)->d[DEV_IPREADER];
    if (d->in) fclose(d->in);
    d->in = f;
}

/* --- the clock (section 9) ---------------------------------------------- */

static void clock_step(x8 *m, int n)
{
    charon *c = C(m);
    dev *d = &c->d[n];
    c->clock_next += 10 * CYCLES_PER_MS;
    d->t_next = c->clock_next;
    if (!m->lvca[n]) return;
    wr(m, ar(n, 0), (rd(m, ar(n, 0)) + 1) & W_MASK);
    word ar1 = rd(m, ar(n, 1));
    word nar1 = MKW(CNT(ar1), (ADR(ar1) + TP18M1) & TP18M1);
    if (nar1 == 0) { nar1 = MKW(1, 0); x8_setq(m, 1, n, 1); }
    wr(m, ar(n, 1), nar1);
    word ar2 = rd(m, ar(n, 2));
    unsigned t = (CNT(ar2) + 511) & 511;
    if (t == 0 && ADR(ar2) != 0) {
        int nr = (int)ADR(ar2);
        if (nr < X8_NDEV) m->lvaf[nr] = 1;
        wr(m, ar(n, 2), rd(m, ar(n, 3)));
    } else wr(m, ar(n, 2), MKW(t, ADR(ar2)));
}

/* --- the tooth brush (section 10.2) -------------------------------------- */

static void tooth_step(x8 *m, int n)
{
    charon *c = C(m);
    dev *d = &c->d[n];
    word w = rd(m, ar(n, 0));
    int nr = (int)(w & 63);
    if (nr < X8_NDEV) {
        m->lvca[nr] = ((w >> 20) & 0x7F) != 0;
        m->lvaf[nr] = ((w >> 11) & 0x7F) != 0;
        if (c->d[nr].type != T_KEYBOARD && c->d[nr].type != T_CLOCK && nr != n) {
            c->d[nr].busy = 0;
            c->d[nr].t_next = UINT64_MAX;
        }
    }
    x8_setq(m, 0, n, 0);
    x8_setq(m, 1, n, 1);
    d->busy = 0;
    d->t_next = UINT64_MAX;
}

/* --- the event loop ------------------------------------------------------ */

uint64_t charon_next_event(x8 *m)
{
    charon *c = C(m);
    uint64_t t = UINT64_MAX;
    for (int i = 0; i < X8_NDEV; i++) {
        if (c->d[i].type == T_CLOCK && !m->lvca[i]) continue;   /* a silent clock wakes nobody */
        if (c->d[i].t_next < t) t = c->d[i].t_next;
    }
    return t;
}

void charon_advance(x8 *m)
{
    charon *c = C(m);
    for (;;) {
        int best = -1;
        uint64_t t = UINT64_MAX;
        for (int i = 0; i < X8_NDEV; i++)
            if (c->d[i].t_next < t) { t = c->d[i].t_next; best = i; }
        if (best < 0 || t > m->ccs) return;
        dev *d = &c->d[best];
        switch (d->type) {
        case T_KEYBOARD: key_step(m, best); break;
        case T_CLOCK: clock_step(m, best); break;
        case T_TOOTH: tooth_step(m, best); break;
        default: normal_step(m, best); break;
        }
    }
}
