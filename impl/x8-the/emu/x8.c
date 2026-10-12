/*
 * The X8 central processor ("CRO"), transliterated from X8S (X8S.a60, the
 * Algol 60 simulator of D. Grune, Mathematisch Centrum, 17-12-71). Labels of
 * X8S are named in the comments; error numbers are the ones X8S gives to
 * 'undef', in the form interrupt address * 1000 + error number.
 *
 * X8S computes with the reals of the X8 itself, whose arithmetic prefers -0
 * (Reference Manual A4.1.2, EWD 145): a sum is +0 only when both operands are
 * +0. Here words are bit patterns, and the adder is the end-around-carry
 * adder that has exactly that property.
 */
#include <setjmp.h>
#include <stdlib.h>
#include <string.h>
#include "x8.h"
#include "charon.h"

#define TP13 8192
#define TP14 16384
#define TP26 0x4000000LL
#define TP26M1 0x3FFFFFFLL
#define TP27M1 0x7FFFFFFLL

static jmp_buf undef_jmp;
static int undef_code;

/* --- words ----------------------------------------------------------- */

word w_from(long long v, int negzero)
{
    if (v > 0) return (word)(v & W_MAG);
    if (v < 0) return w_not((word)((-v) & W_MAG));
    return negzero ? W_MASK : 0;
}

word w_add(word x, word y, int *ovf)
{
    uint32_t s = x + y;
    if (s > W_MASK) s = (s & W_MASK) + 1;
    s &= W_MASK;
    if (ovf) *ovf = (w_neg(x) == w_neg(y)) && (w_neg(s) != w_neg(x));
    return s;
}

static int parity27(word w)
{
    int n = 0;
    for (w &= W_MASK; w; w &= w - 1) n++;
    return n & 1;
}

/* X8S parbit: the parity bit that makes the number of ones odd */
static int parbit(word w) { return (parity27(w) + 1) & 1; }

static int bitk(word w, int k) { return (w >> k) & 1; }

/* X8S 'star': reduce |x| to 18 bits, keeping the sign; a zero result of a
 * negative x is -0 */
static long long star18(long long x, int *negzero)
{
    long long y = x % TP18;              /* C truncates toward zero, like Algol */
    *negzero = (y == 0 && x < 0);
    return y;
}

/* --- the one-bit registers in T (X8S tlink) --------------------------- */

static word tlink(x8 *m)
{
    return (m->ot & TP18M1) | (m->c ? TP18 : 0) | (m->iv ? 1u << 19 : 0) |
           (m->lt ? 1u << 20 : 0) | (m->of ? 1u << 21 : 0) |
           (parbit(m->lastpar) ? 1u << 22 : 0) | (m->nint ? 1u << 23 : 0) |
           (m->ov ? 1u << 24 : 0) | (m->bt ? 0 : 1u << 25);
}

/* T read as a register: its sign bit is a copy of C (X8S memreg) */
static word treg(x8 *m) { return tlink(m) | (m->c ? W_SIGN : 0); }

/* --- CHARON flip-flops (X8S setq/readq; layout of EWD 149) ------------ */

static uint32_t *qword(x8 *m, int kind, int w)
{
    switch (kind) {
    case 0: return w ? &m->af1 : &m->af0;
    case 1: return w ? &m->if1 : &m->if0;
    case 2: return w ? &m->lvif1 : &m->lvif0;
    case 3: return w ? &m->ifv1 : &m->ifv0;
    default: return w ? &m->lvifv1 : &m->lvifv0;
    }
}

static void qpos(int l, int *w, int *bit)
{
    if (l > 31) { *w = 0; *bit = l - 14; }
    else if (l > 17) { *w = 1; *bit = 43 - l; }
    else { *w = 0; *bit = 17 - l; }
}

void x8_setq(x8 *m, int kind, int dev, int v)
{
    int w, b;
    qpos(dev, &w, &b);
    uint32_t *q = qword(m, kind, w);
    if (v) *q |= 1u << b; else *q &= ~(1u << b);
}

int x8_readq(x8 *m, int kind, int dev)
{
    int w, b;
    qpos(dev, &w, &b);
    return (*qword(m, kind, w) >> b) & 1;
}

word x8_setq_read(x8 *m, int kind, int dev) { return (word)x8_readq(m, kind, dev); }

/* --- errors: static stop or error interrupt (X8S undef) --------------- */

static void undef(x8 *m, int ern)
{
    (void)m;
    undef_code = ern;
    longjmp(undef_jmp, 1);
}

/* --- memory (X8S mem, mem1, stm, stm1) -------------------------------- */

typedef struct {
    long long addr;
    int addrop, regop, memop, mcaddr;
    int b20c19;                    /* 4 for the :DYN forms */
} ea;

word x8_mem_read(x8 *m, uint32_t addr)
{
    if (addr >= m->core_words) return 0;
    return m->m[addr];
}

void x8_mem_write(x8 *m, uint32_t addr, word w)
{
    if (addr >= m->core_words) return;
    m->m[addr] = w & W_MASK;
    m->filled[addr] = 1;
}

static word mem1(x8 *m, long long addr, int cg)
{
    if (addr < 0 || addr >= (long long)m->core_words) undef(m, 26323);
    if (m->prot && m->dgp[addr / 512] > 0 && !(addr < 16 || addr == 63)) undef(m, 27501);
    m->ccs += 2;
    int fa = m->filled[addr];
    if (cg < 2 && !fa) undef(m, 25400);
    word w = m->m[addr];
    if (cg == 1) m->lastpar = w;
    else if (cg >= 2) {
        m->lastpar = fa ? w : w_not(w);
        if (cg == 3) m->c = fa ? 0 : 1;
    }
    return w;
}

static word mem(x8 *m, long long addr, int cg)
{
    if (addr > 56 && addr < 63) undef(m, 304);
    return mem1(m, addr, cg);
}

static void stm1(x8 *m, long long addr, word w, int cg)
{
    if (addr < 0 || addr >= (long long)m->core_words) undef(m, 26322);
    if (m->prot && m->dgp[addr / 512] >= 0 && !(addr < 16 || addr == 63)) undef(m, 27500);
    m->filled[addr] = (cg == 0);
    m->m[addr] = w & W_MASK;
}

static void stm(x8 *m, long long addr, word w, int cg)
{
    if (addr > 56 && addr < 63) undef(m, 305);
    stm1(m, addr, w, cg);
}

/* the registers at addresses 57..62 (X8S memreg) */
static word memreg(x8 *m, ea *e, int cg)
{
    if (e->memop) return mem1(m, e->addr, cg);
    switch ((int)e->addr) {
    case 57: return m->fh;
    case 58: return m->ft;
    case 59: return m->a;
    case 60: return m->s;
    case 61: return m->b;
    default: return treg(m);
    }
}

/* --- B as a stack pointer (X8S b up1, bdown1, b up2, bdown2) ---------- */

static void bup(x8 *m, int k)
{
    if (w_neg(m->b)) undef(m, k == 1 ? 335 : 336);
    m->b = w_from(w_val(m->b) + k, 0);
}

static void bdown(x8 *m, int k)
{
    long long v = w_val(m->b) - k;
    if (v < 0) undef(m, k == 1 ? 330 : 331);
    m->b = w_from(v, 0);
}

/* --- the address (X8S calc addr) -------------------------------------- */

static void calc_addr(x8 *m, word or_, int b20c19, ea *e)
{
    int b14t0 = or_ & 0x7FFF;
    e->mcaddr = 0;
    e->b20c19 = b20c19;
    if (b20c19 < 3) {
        if (b20c19 < 2) {                       /* stat, :stat */
            e->addr = b14t0;
            e->addrop = b20c19 == 1;
        } else {                                /* statb */
            int nz;
            e->addrop = 0;
            e->addr = star18(w_val(m->b), &nz) + b14t0 - TP14;
        }
        e->regop = !e->addrop && e->addr > 56 && e->addr < 63;
    } else {                                    /* dyn, :dyn */
        int b14t9 = b14t0 >> 9, b8t0 = b14t0 & 511;
        long long x;
        if (b14t9 > 57) {                       /* mr */
            if (b14t9 == 63) {
                if (!m->filled[63]) undef(m, 25401);
                x = w_val(m->m[63]);
                m->ccs += 2;
            } else if (b14t9 == 58) x = w_val(m->ft);
            else if (b14t9 == 59) x = w_val(m->a);
            else if (b14t9 == 60) x = w_val(m->s);
            else if (b14t9 == 61) x = w_val(m->b);
            else x = m->ot;
        } else {                                /* mpq */
            int nz;
            if (!m->filled[63]) undef(m, 25402);
            long long y = w_val(m->m[63]);
            m->ccs += 2;
            y = star18(y, &nz);
            if (y < 64) undef(m, 332);
            x = w_val(mem1(m, y + b14t9, 0));
        }
        int nz;
        e->addr = star18(x, &nz) + b8t0 - 256;
        if (e->addr > 56 && e->addr < 63) undef(m, 333);
        e->regop = 0;
        e->addrop = b20c19 == 4;
        e->mcaddr = b14t9 == 61 && !e->addrop;
    }
    if (e->addr < 0) undef(m, 26320);
    else if (e->addr > (long long)TP18M1) undef(m, 26321);
    e->memop = !(e->addrop || e->regop);
}

/* --- condition setting (X8S cond, condf) ------------------------------ */

static void cond(x8 *m, int b18c17, word val)
{
    int x = w_neg(val);
    if (b18c17 == 1) m->c = x;
    else if (b18c17 == 2) m->c = w_zero(val) ? 0 : 1;
    else m->c = (m->lt == x) ? 0 : 1;
    m->lt = x;
}

static void condf(x8 *m, int b18c17, word valh, word valt)
{
    int x = bitk(valh, 14);
    if (b18c17 == 1) m->c = x;
    else if (b18c17 == 2) {
        if (!w_zero(valt)) m->c = 1;
        else m->c = ((valh & 0x3FFF) == (w_neg(valt) ? 0x3FFFu : 0)) ? 0 : 1;
    } else m->c = (m->lt == x) ? 0 : 1;
    m->lt = x;
}

/* --- floating point -----------------------------------------------------
 * RECONSTRUCTED. EWD 145 gives the numbers (m * 2^e, |m| < 2^40, |e| < 2^11,
 * exact rounding away from zero, normalisation towards the smallest |e|) but
 * not the layout in F. X8S shows that the tail holds the low mantissa bits
 * with its sign, that bit 14 of the head repeats that sign, and that a head of
 * at most 2^14-1 in absolute value means an integer. We take: positive
 * mantissa -> head = e (12 bits, ones' complement) << 15 | mantissa bits
 * 39..26, tail = mantissa bits 25..0; a negative number is the complement of
 * both words. The central processor of the episode never uses floats.
 */
typedef struct { long long m; int e; int negzero; } xfloat;

static xfloat fdecode(word h, word t)
{
    xfloat f;
    int neg = bitk(h, 14);
    if (neg) { h = w_not(h); t = w_not(t); }
    long long mag = ((long long)(h & 0x3FFF) << 26) | (t & W_MAG);
    int e12 = (h >> 15) & 0xFFF;
    int e = (e12 & 0x800) ? -(int)(~e12 & 0x7FF) : (e12 & 0x7FF);
    f.m = neg ? -mag : mag;
    f.e = e;
    f.negzero = neg && mag == 0;
    return f;
}

static void fencode(xfloat f, word *h, word *t)
{
    long long mag = f.m < 0 ? -f.m : f.m;
    int neg = f.m < 0 || (f.m == 0 && f.negzero);
    int e12 = f.e >= 0 ? (f.e & 0x7FF) : (~(-f.e) & 0xFFF);
    word hh = ((word)e12 << 15) | (word)((mag >> 26) & 0x3FFF);
    word tt = (word)(mag & W_MAG);
    if (neg) { hh = w_not(hh); tt = w_not(tt); }
    *h = hh & W_MASK;
    *t = tt & W_MASK;
}

/* round |num| (a 128-bit integer times 2^e) to 40 bits away from zero in the
 * tie, then normalise towards the smallest |e| (EWD 145) */
static xfloat fnorm(__int128 num, int e, int negzero)
{
    xfloat r;
    int neg = num < 0;
    unsigned __int128 mag = neg ? -num : num;
    if (mag == 0) { r.m = 0; r.e = 0; r.negzero = negzero; return r; }
    while (mag >> 40) {                      /* too many digits: halve, rounding */
        int lost = mag & 1;
        mag >>= 1; e++;
        if (lost && (mag >> 40) == 0 && (mag & 1)) mag++;   /* tie away from zero */
        else if (lost && (mag >> 40) == 0) { /* exact half below 2^40: keep */ }
    }
    while (e > 0 && (mag >> 39) == 0) { mag <<= 1; e--; }
    while (e < 0 && (mag & 1) == 0) { mag >>= 1; e++; }
    if (e >= 2048) { mag = ((unsigned __int128)1 << 40) - 1; e = 2047; }
    while (e <= -2048) { e++; if (mag > 1) mag >>= 1; }
    r.m = neg ? -(long long)mag : (long long)mag;
    r.e = e;
    r.negzero = 0;
    return r;
}

static xfloat fop(x8 *m, xfloat x, xfloat y, int op)  /* 0 + 1 - 2 * 3 / */
{
    if (op == 1) { y.m = -y.m; y.negzero = !y.negzero && y.m == 0 ? 1 : 0; op = 0; }
    if (op == 0) {
        int e = x.e < y.e ? x.e : y.e;
        __int128 a = (__int128)x.m << (x.e - e), b = (__int128)y.m << (y.e - e);
        int bothpos = (x.m != 0 || !x.negzero) && (y.m != 0 || !y.negzero);
        __int128 s = a + b;
        return fnorm(s, e, !(s == 0 && bothpos && x.m == 0 && y.m == 0 && !x.negzero && !y.negzero) && s == 0);
    }
    if (op == 2) {
        __int128 p = (__int128)x.m * y.m;
        int nz = ((x.m < 0 || x.negzero) != (y.m < 0 || y.negzero));
        return fnorm(p, x.e + y.e, nz);
    }
    if (y.m == 0) {                           /* EWD 145: largest number, sign rule */
        xfloat r = { (x.m < 0) != (y.negzero) ? -((1LL << 40) - 1) : (1LL << 40) - 1, 2047, 0 };
        (void)m;
        return r;
    }
    __int128 n = (__int128)x.m << 80;
    __int128 q = n / y.m;
    return fnorm(q, x.e - y.e - 80, ((x.m < 0 || x.negzero) != (y.m < 0)));
}

/* --- multiplication and division (X8S mulas, divas) ------------------- */

/* AS := S * x + A, with the zero signs of X8S */
static void mul_as(x8 *m, word x, int flag)
{
    if (flag) m->a = 0;
    long long sv = w_val(m->s), xv = w_val(x), av = w_val(m->a);
    __int128 y = (__int128)sv * xv + av;
    if (y == 0) {
        int prodneg = w_neg(m->s) != w_neg(x);
        int z = !(prodneg == 0 && !w_neg(m->a));      /* +0 only if both +0 */
        m->a = m->s = z ? W_MASK : 0;
    } else if (y < TP26 && y > -TP26) {
        m->s = w_from((long long)y, 0);
        m->a = y > 0 ? 0 : W_MASK;
    } else {
        long long hi = (long long)(y / TP26), lo = (long long)(y % TP26);
        m->a = w_from(hi, 0);
        m->s = lo == 0 ? (hi < 0 ? W_MASK : 0) : w_from(lo, 0);
    }
    /* X8S rep ccs mulas: one cycle per bit, two zero bits in one cycle */
    long long v = xv < 0 ? -xv : xv;
    int k = 25;
    while (k >= 0) {
        long long rest = v & ((1LL << (k + 1)) - 1);
        if (rest == 0) { m->ccs += (k + 2) / 2; break; }
        m->ccs++;
        int bit = (v >> k) & 1;
        k--;
        if (!bit) k--;
    }
}

static void div_as(x8 *m, word x, int flag)
{
    long long xv = w_val(x);
    long long av = w_val(m->a);
    if ((xv < 0 ? -xv : xv) <= (av < 0 ? -av : av)) undef(m, 103);
    if (flag) m->s = (av == 0) ? m->a : (av > 0 ? 0 : W_MASK);
    else if (w_neg(m->a) != w_neg(m->s)) undef(m, 102);
    word hulp1 = m->a;
    long long sv = w_val(m->s);
    __int128 d = (__int128)av * TP26 + sv;
    long long q = (long long)(d / xv), r = (long long)(d - (__int128)q * xv);
    /* a zero quotient follows the sign rule; the dividend a * 2^26 + s is +0
     * only when A and S are both +0 (EWD 145, remark 7) */
    int dneg = d < 0 || (d == 0 && (w_neg(m->a) || w_neg(m->s)));
    m->s = q == 0 ? ((dneg != w_neg(x)) ? W_MASK : 0) : w_from(q, 0);
    if (r == 0) m->a = w_zero(hulp1) ? hulp1 : (w_neg(hulp1) ? W_MASK : 0);
    else m->a = w_from(r, 0);
    m->ccs += 28;
}

/* --- shifts (X8S lca .. rusa) -----------------------------------------
 * X8S builds them from integer division; on bit patterns they are rotations
 * and arithmetic shifts of A, S or the pair, as Grune 5.7 describes. */

static word rot27(word w, int n, int left)
{
    n %= 27;
    if (n == 0) return w;
    if (!left) n = 27 - n;
    return ((w << n) | (w >> (27 - n))) & W_MASK;
}

static word lu1(word w, int n)                      /* lua, lus */
{
    if (n >= 26) return (w_neg(w) && !(w == W_MASK)) ? W_MASK : (w == W_MASK ? W_MASK : 0);
    if (w_zero(w) || n == 0) return w;
    uint32_t fill = w_neg(w) ? (1u << n) - 1 : 0;
    return (w & W_SIGN) | (((w << n) | fill) & W_MAG);
}

static word ru1(word w, int n)                      /* rua, rus */
{
    if (n >= 26) return w_neg(w) ? W_MASK : 0;
    uint32_t mag = w & W_MAG;
    uint32_t fill = w_neg(w) ? (W_MAG & ~(W_MAG >> n)) : 0;
    return (w & W_SIGN) | ((mag >> n) | fill);
}

static void shift2(x8 *m, int which, int n)
{
    /* which: 0 lcas 1 rcas 2 lcsa 3 rcsa 4 luas 5 ruas 6 lusa 7 rusa */
    uint64_t A = m->a, S = m->s;
    int sa = w_neg(m->a), ss = w_neg(m->s);
    switch (which) {
    case 0: case 1: {                    /* A27 . S26, circular, S sign kept */
        uint64_t v = (A << 26) | (S & W_MAG), M53 = (1ULL << 53) - 1;
        int k = n % 53;
        if (which == 1) k = (53 - k) % 53;
        if (k) v = ((v << k) | (v >> (53 - k))) & M53;
        m->a = (word)(v >> 26) & W_MASK;
        m->s = (word)((S & W_SIGN) | (v & W_MAG));
        break;
    }
    case 2: case 3: {                    /* S27 . A27, circular */
        uint64_t v = (S << 27) | A, M54 = (1ULL << 54) - 1;
        int k = n % 54;
        if (which == 3) k = (54 - k) % 54;
        if (k) v = ((v << k) | (v >> (54 - k))) & M54;
        m->s = (word)(v >> 27) & W_MASK;
        m->a = (word)(v & W_MASK);
        break;
    }
    case 4: {                            /* A26 . S26 left, fill with sign of A */
        uint64_t v = ((A & W_MAG) << 26) | (S & W_MAG), M52 = (1ULL << 52) - 1;
        uint64_t fill = sa ? ((n >= 52) ? M52 : ((1ULL << n) - 1)) : 0;
        v = (n >= 52 ? 0 : (v << n)) | fill;
        v &= M52;
        m->a = (word)((A & W_SIGN) | ((v >> 26) & W_MAG));
        m->s = (word)((S & W_SIGN) | (v & W_MAG));
        break;
    }
    case 5: {                            /* A27 . S26 right, arithmetic on A */
        uint64_t v = (A << 26) | (S & W_MAG);
        int64_t sv = (int64_t)(v << 11) >> 11;          /* 53-bit signed */
        sv = n >= 63 ? (sa ? -1 : 0) : (sv >> n);
        v = (uint64_t)sv & ((1ULL << 53) - 1);
        m->a = (word)(v >> 26) & W_MASK;
        m->s = (word)((S & W_SIGN) | (v & W_MAG));
        break;
    }
    case 6: {                            /* S26 . A27 left, fill with sign of S */
        uint64_t v = ((S & W_MAG) << 27) | A, M53 = (1ULL << 53) - 1;
        uint64_t fill = ss ? ((1ULL << n) - 1) : 0;
        v = ((v << n) | fill) & M53;
        m->s = (word)((S & W_SIGN) | ((v >> 27) & W_MAG));
        m->a = (word)(v & W_MASK);
        break;
    }
    default: {                           /* S27 . A27 right, arithmetic on S */
        uint64_t v = (S << 27) | A;
        int64_t sv = (int64_t)(v << 10) >> 10;          /* 54-bit signed */
        sv = n >= 63 ? (ss ? -1 : 0) : (sv >> n);
        v = (uint64_t)sv & ((1ULL << 54) - 1);
        m->s = (word)(v >> 27) & W_MASK;
        m->a = (word)(v & W_MASK);
        break;
    }
    }
}

/* number of places to the most significant bit (X8S norm shift) */
static int normshift(word w, word *out)
{
    if (w_zero(w)) { *out = w; return 26; }
    uint32_t mag = w_neg(w) ? w_not(w) : w;
    int k = 0;
    while (!(mag & (1u << 25))) { mag <<= 1; k++; }
    *out = w_neg(w) ? w_not(mag & W_MAG) : (mag & W_MAG);
    return k;
}

/* --- the machine ------------------------------------------------------ */

void x8_init(x8 *m, uint32_t core_words)
{
    memset(m, 0, sizeof *m);
    if (core_words > X8_CORE_MAX) core_words = X8_CORE_MAX;
    m->core_words = core_words;
    m->m = calloc(X8_CORE_MAX, sizeof(word));
    m->filled = calloc(X8_CORE_MAX, 1);
    m->dgp = calloc(X8_CORE_MAX / 512, 1);
    for (int i = 0; i < X8_CORE_MAX / 512; i++) m->dgp[i] = 2;  /* dp = gp = 1 */
    /* X8S init charon: which IF and LVIF exist on the MC installation */
    const char *ifv = "1111111111111111111111001111110000111111";
    const char *lvifv = "1111111111111100111111001111110000001111";
    for (int i = 0; i < 40; i++) {
        x8_setq(m, 3, i, ifv[i] == '1');
        x8_setq(m, 4, i, lvifv[i] == '1');
    }
    m->max_cycles = 0;
    x8_ls(m);
}

void x8_ls(x8 *m)
{
    m->iv = m->bt = 1;
    m->ov = 0;
    m->ie0 = m->ie1 = 0;
    m->dyst = 0;
    m->af0 = m->af1 = m->if0 = m->if1 = 0;
    m->lvif0 = (word)TP26M1;
    m->lvif1 = (word)TP26M1 - 4096 + 1;
    for (int i = 0; i < X8_NDEV; i++) { m->lvaf[i] = 1; m->lvca[i] = 0; }
    m->halted = 0;
}

void x8_ip(x8 *m)
{
    m->ot = TP18M1;                /* the dynamic stop */
    charon_ip(m);
}

static void report_stop(x8 *m)
{
    (void)m;
}

/* one instruction already in OR; returns at time0 */
static void execute(x8 *m);

int x8_run(x8 *m, uint64_t until)
{
    if (m->halted) return 1;
    for (;;) {
        if (until && m->ccs >= until) return 0;
        if (m->max_cycles && m->ccs >= m->max_cycles) {
            m->halted = 1; m->errnum = 2; m->erraddr = 0;
            return 1;
        }
        if (setjmp(undef_jmp)) {
            /* X8S undef: static stop, or an error interrupt via M[25..27] */
            int ir = undef_code / 1000, en = undef_code % 1000;
            if (!m->filled[ir] || ir == 0 || m->ov == 0) {
                m->halted = 1;
                m->errnum = en;
                m->erraddr = ir;
                report_stop(m);
                return 1;
            }
            m->ingreep += 2;
            m->ov = 0;
            if (m->itv == 1) { m->halted = 1; m->errnum = 135; m->erraddr = 0; return 1; }
            m->prot = 0;
            m->or_ = m->m[ir];
            m->ccs += 2;
            execute(m);
            continue;
        }
        /* basis cyclus 1 */
        if (m->ot > TP18M1 - 2) {
            /* the dynamic stop: wait for CHARON */
            if (m->dyst < 2) {
                m->dyst++;
                m->ccs += 1;
                charon_advance(m);
                goto time0_only;
            }
            uint64_t t = charon_next_event(m);
            /* nothing pending, or deaf: nothing can ever wake the machine */
            if (t == UINT64_MAX || !m->iv) undef(m, 1);
            if (t > m->ccs) m->ccs = t;
            m->dyst = 0;
            charon_advance(m);
            goto time0_only;
        }
        m->dyst = 0;
        m->or_ = mem(m, m->ot, 0);
        m->ot++;
        if (m->ot >= m->core_words) undef(m, 26358);
        execute(m);
        continue;
    time0_only:
        /* a skipped instruction: only the interrupt test of time0 */
        {
            uint32_t x = 0, y = 0;
            if (m->iv) {
                x = m->lvif0; y = m->lvif1;
                if (((m->ie0 & m->lvif0 & m->if0) | (m->ie1 & m->lvif1 & m->if1)) != 0) {
                    m->ingreep = 1;
                    if (m->itv == 1) undef(m, 135);
                    m->prot = 0;
                    m->or_ = mem1(m, 24, 0);
                    execute(m);
                    continue;
                }
            }
            m->ie0 = x; m->ie1 = y;
        }
    }
}

/* time0 of X8S: end of instruction, interrupts */
static int time0(x8 *m)
{
    if (m->ingreep > 0) { m->bt = 1; m->iv = 0; }
    m->ingreep = m->itv = 0;
    m->prot = m->bt == 0;
    charon_advance(m);
    m->dcs = 0;
    uint32_t x = 0, y = 0;
    if (m->iv) {
        x = m->lvif0; y = m->lvif1;
        if ((m->if0 | m->if1) &&
            (((m->ie0 & m->lvif0 & m->if0) | (m->ie1 & m->lvif1 & m->if1)) != 0)) {
            m->ingreep = 1;
            return 24;                 /* interrupt via M[24] */
        }
    }
    m->ie0 = x; m->ie1 = y;
    return 0;
}

#define B26T22(o) (((o) >> 22) & 31)
#define B21(o) (((o) >> 21) & 1)
#define B20C19(o) (((o) >> 19) & 3)
#define B18C17(o) (((o) >> 17) & 3)
#define B16C15(o) (((o) >> 15) & 3)
#define B14T0(o) ((o) & 0x7FFF)

/* the instruction is skipped when its Y/N condition does not hold */
#define PREFIX(b1615) do { if ((b1615) > 1 && (b1615) != m->c + 2) goto skip; } while (0)

static word *reg_of(x8 *m, int r) { return r == 0 ? &m->a : r == 1 ? &m->s : &m->b; }

static void execute(x8 *m)
{
    for (;;) {                                 /* DO restarts here */
    word o = m->or_;
    int cls = B26T22(o), b21 = B21(o), b20c19 = B20C19(o), b18c17 = B18C17(o),
        b16c15 = B16C15(o), b14t0 = B14T0(o);
    ea e;
    word val = 0;
    int extra = 0;                             /* cycles of time1..time3 */
    int ovf;

    if (m->trace)
        fprintf(stderr, "%06o: %09o  A=%09o S=%09o B=%09o F=%09o.%09o C=%d\n",
                (m->ot - 1) & TP18M1, o, m->a, m->s, m->b, m->fh, m->ft, m->c);

    switch (cls) {
    case 0: case 1: case 4: case 5: case 16: case 17: {   /* aplus aeq splus seq bplus beq */

        int r = (cls < 4) ? 0 : (cls < 16) ? 1 : 2;
        int is_eq = cls & 1;
        word *R = reg_of(m, r);
        PREFIX(b16c15);
        calc_addr(m, o, b20c19, &e);
        if (e.addrop) val = (word)e.addr;
        else val = memreg(m, &e, is_eq ? m->itv * 2 + 1 : m->itv + 1);
        if (e.mcaddr) bdown(m, 1);
        if (is_eq) {
            if (b21) val = w_not(val);
        } else {
            val = w_add(*R, b21 ? w_not(val) : val, &ovf);
            if (ovf) m->of = 1;
        }
        if (b18c17) cond(m, b18c17, val);
        if (b16c15 != 1) *R = val;
        break;
    }
    case 2: case 6: case 18:                  /* plusa pluss plusb, or the :DYN form */
        if (b20c19 == 1) { cls -= 2; b20c19 = 4; goto plain_dyn; }
        goto plus_mem;
    case 3: case 7: case 19:                  /* eqa eqs eqb / aplusa spluss bplusb, or :DYN */
        if (b20c19 == 1) { cls -= 2; b20c19 = 4; goto plain_dyn; }
        if (b16c15 == 1) goto plus_mem;
        {
            int r = (cls < 4) ? 0 : (cls < 16) ? 1 : 2;
            PREFIX(b16c15);
            calc_addr(m, o, b20c19, &e);
            if (e.regop) undef(m, 306 + r);
            val = b21 ? w_not(*reg_of(m, r)) : *reg_of(m, r);
            if (b18c17) cond(m, b18c17, val);
            stm1(m, e.addr, val, m->itv);
            if (e.mcaddr) bup(m, 1);
            extra = 2;
        }
        break;
    plain_dyn:
        {
            /* the :DYN variants go to aplus/aeq/... with b20c19 = 4 */
            int r = (cls < 4) ? 0 : (cls < 16) ? 1 : 2;
            int is_eq = cls & 1;
            word *R = reg_of(m, r);
            PREFIX(b16c15);
            calc_addr(m, o, 4, &e);
            val = (word)e.addr;
            if (is_eq) { if (b21) val = w_not(val); }
            else { val = w_add(*R, b21 ? w_not(val) : val, &ovf); if (ovf) m->of = 1; }
            if (b18c17) cond(m, b18c17, val);
            if (b16c15 != 1) *R = val;
        }
        break;
    plus_mem: {
        int r = (cls < 4) ? 0 : (cls < 16) ? 1 : 2;
        int flag = (cls & 1) && b16c15 == 1;      /* aplusa, spluss, bplusb */
        word *R = reg_of(m, r);
        PREFIX(b16c15);
        calc_addr(m, o, b20c19, &e);
        if (e.regop) undef(m, 309 + r);
        val = mem1(m, e.addr, 1);
        val = w_add(val, b21 ? w_not(*R) : *R, &ovf);
        if (ovf) m->of = 1;
        if (b18c17) cond(m, b18c17, val);
        if (flag || b16c15 != 1) stm1(m, e.addr, val, m->itv);
        if (flag) *R = val;
        if (e.mcaddr) bup(m, 1);
        extra = 3;
        break;
    }
    case 8: case 9:                           /* mulas, muls */
        if (b16c15 == 1) undef(m, cls == 9 ? 223 : 222);
        PREFIX(b16c15);
        calc_addr(m, o, b20c19, &e);
        val = e.addrop ? (word)e.addr : memreg(m, &e, 1);
        if (e.mcaddr) bdown(m, 1);
        if (b21) val = w_not(val);
        mul_as(m, val, cls == 9);
        if (b18c17) cond(m, b18c17, m->a);
        extra = 2;
        break;
    case 10: case 11: case 14: case 15: {     /* axor aand sxor sand */
        word *R = (cls < 14) ? &m->a : &m->s;
        PREFIX(b16c15);
        calc_addr(m, o, b20c19, &e);
        val = e.addrop ? (word)e.addr : memreg(m, &e, 1);
        if (e.mcaddr) bdown(m, 1);
        if (b21) val = w_not(val);
        val = (cls & 1) ? (*R & val) : (*R ^ val);
        if (b18c17) cond(m, b18c17, val);
        if (b16c15 != 1) *R = val;
        break;
    }
    case 12: case 13:                         /* divas, diva */
        if (b16c15 == 1) undef(m, cls == 13 ? 224 : 225);
        PREFIX(b16c15);
        calc_addr(m, o, b20c19, &e);
        val = e.addrop ? (word)e.addr : memreg(m, &e, 1);
        if (e.mcaddr) bdown(m, 1);
        if (b21) val = w_not(val);
        div_as(m, val, cls == 13);
        if (b18c17) cond(m, b18c17, m->a);
        break;
    case 20: case 21: {                        /* jump, goto (gotor, jumpr) */
        int flag = cls == 20;
        if (flag && b18c17 > 1) undef(m, 202);
        if (!flag) {
            if (b18c17 > 1) undef(m, 204);
            if (b21) {
                if (b20c19 != 3) undef(m, 203);
                b20c19 = 4; b21 = 0;           /* gotodyn */
            }
        }
        if (b16c15 > 1) { if (b16c15 != m->c + 2) goto skip; }
        else if (b16c15 == 1) { if (m->of == 0) goto skip; }
        calc_addr(m, o, b20c19, &e);
        if (e.mcaddr) bdown(m, 1);
        if (b16c15 == 1) m->of = 0;
        if (e.addrop) val = (word)e.addr;
        else if (e.addr == 62) undef(m, 343);
        else val = memreg(m, &e, 0);
        if (b21) val = w_not(val);
        word hulp1 = val;
        long long v = w_val(val);
        int nz = w_neg(val) && v == 0;
        if (v > (long long)TP18M1 || v < -(long long)TP18M1) v = star18(v, &nz);
        if (flag) { v = (long long)m->ot + v; nz = 0; }   /* -(-ot - val): +0 preferent */
        if (v < 0 || nz) undef(m, 26350);
        else if (v > (long long)TP18M1) v = star18(v, &nz);
        else if (v > (long long)TP18M1 - 2) { }
        else if (v >= (long long)m->core_words) undef(m, 26351);
        m->ot = (uint32_t)v;
        if (b18c17 == 1) {                    /* restore the one-bit registers */
            word h = w_neg(hulp1) ? (word)((hulp1 & W_MAG)) : hulp1;
            uint32_t y = (h >> 18) & 0xFF;
            m->c = y & 1; m->iv = (y >> 1) & 1; m->lt = (y >> 2) & 1; m->of = (y >> 3) & 1;
            m->lastpar = ((y >> 4) & 1) ? 0 : 1;
            m->nint = (y >> 5) & 1; m->ov = (y >> 6) & 1;
            if (m->bt == 0 || ((y >> 7) & 1)) { m->iv = m->ov = 1; m->bt = 0; }
        }
        break;
    }
    case 22: {                                 /* repn */
        if (b16c15 > 1) { if (b16c15 != m->c + 2) goto skip; }
        else if (b16c15 == 1) { if (m->of == 0) goto skip; }
        if (b16c15 == 1) m->of = 0;
        int h = b21 * 4 + b20c19;
        if (!m->filled[h]) undef(m, 25410);
        word x = w_add(m->m[h], w_not(1), NULL);
        if (w_val(m->m[h]) == -TP26M1) x = (word)TP26M1;
        m->m[h] = x;
        long long xv = w_val(x);
        int go = b18c17 == 0 ? 1 : b18c17 == 1 ? xv >= 1 : b18c17 == 2 ? xv == 0 : xv >= 0;
        if (go) {
            if (b14t0 >= (int)m->core_words) undef(m, 26354);
            m->ot = b14t0;
        }
        break;
    }
    case 23: {                                 /* subn, subc, subcd, do, dos */
        if (b16c15 > 1) { if (b16c15 != m->c + 2) goto skip; }
        else if (b16c15 == 1) { if (m->of == 0) goto skip; }
        if (b18c17 == 0 || b18c17 == 2) {      /* subn */
            if (b16c15 == 1) m->of = 0;
            word link = tlink(m) | (m->ingreep == 2 ? 1u << 24 : 0);
            int h = (b18c17 + b21) * 4 + b20c19 + 8;
            if (m->prot && h > 15 && m->dgp[0] >= 0) undef(m, 27503);
            m->filled[h] = 1;
            m->m[h] = link;
            if (b14t0 >= (int)m->core_words) undef(m, 26355);
            m->ot = b14t0;
            break;
        }
        if (b21 == 0 || b20c19 == 1) {         /* subc, subcd, subcdyn */
            int bz = b21 ? 4 : b20c19;
            calc_addr(m, o, bz, &e);
            int subcd = m->bt == 1 && b18c17 == 3;
            int gate = m->bt == 0 && e.addr >= 256 && e.addr < 320;
            if (e.mcaddr) bdown(m, 1);
            if (b16c15 == 1) m->of = 0;
            if (gate) m->prot = 0;
            if (e.addrop) val = (word)e.addr;
            else if (e.addr == 62) undef(m, 344);
            else val = memreg(m, &e, 0);
            if (gate) m->prot = 1;
            word link = tlink(m) | (m->ingreep == 2 ? 1u << 24 : 0);
            int nz;
            long long ba = w_val(m->b);
            if (ba > (long long)TP18M1) ba = star18(ba, &nz);
            if (w_neg(m->b)) undef(m, 26362);
            if (!e.addrop && w_zero(m->b)) undef(m, 26363);
            if (gate && ba < 256) undef(m, 27502);
            stm(m, ba, link, 0);
            m->b = w_from(w_val(m->b) + 1, 0);
            long long v = w_val(val);
            nz = w_neg(val) && v == 0;
            if (v > (long long)TP18M1 || v < -(long long)TP18M1) v = star18(v, &nz);
            if (v < 0 || nz) undef(m, 26352);
            else if (v > (long long)TP18M1 - 2) { }
            else if (v >= (long long)m->core_words) undef(m, 26353);
            m->ot = (uint32_t)v;
            if (gate) { m->bt = 1; m->iv = 0; }
            if (subcd) m->iv = 0;
            extra = 2;
            break;
        }
        /* do, dos */
        calc_addr(m, o, b20c19, &e);
        if (e.mcaddr) bdown(m, 1);
        if (b16c15 == 1) m->of = 0;
        if (b18c17 == 3) m->s = (word)e.addr;
        if (e.addr == 62) undef(m, 345);
        m->or_ = memreg(m, &e, 0);
        if (++m->dcs > 100) undef(m, 3);
        continue;                              /* basis cyclus 2 */
    }
    case 24: case 25: case 28: case 29: {     /* f and g */
        int isg = b16c15 == 1;
        word valh, valt;
        if (cls == 29 && !isg && b20c19 == 1) { cls = 25; b20c19 = 4; }   /* feqdyn */
        if (cls == 29 && isg && b20c19 == 1) undef(m, 231);
        if (cls == 24 || cls == 28 || cls == 25) {
            if (!isg) {
                PREFIX(b16c15);
                calc_addr(m, o, b20c19, &e);
                if (e.addrop) { valh = 0; valt = (word)e.addr; }
                else if (e.addr == 57) { valh = m->fh; valt = m->ft; }
                else if (e.addr == 59) { valh = m->a; valt = m->s; }
                else { valh = mem(m, e.addr, 0); valt = mem(m, e.addr + 1, 0); }
                if (e.mcaddr) bdown(m, 2);
                if (bitk(valh, 14) != w_neg(valt)) m->of = 1;
            } else {
                if (cls == 25 && b20c19 == 1) undef(m, 229);
                if (cls == 24 && b20c19 == 1) undef(m, 228);
                if (cls == 28 && b20c19 == 1) undef(m, 230);
                calc_addr(m, o, b20c19, &e);
                if (e.addr == 57) undef(m, cls == 25 ? 341 : 342);
                valt = memreg(m, &e, 0);
                valh = w_neg(valt) ? W_MASK : 0;
                if (e.mcaddr) bdown(m, 1);
            }
            if (cls == 25) {
                if (b21) { valh = w_not(valh); valt = w_not(valt); }
            } else {
                xfloat x = fdecode(m->fh, m->ft), y = fdecode(valh, valt);
                int op = cls == 28 ? (b21 ? 3 : 2) : (b21 ? 1 : 0);
                if (op == 3 && x.m == 0 && y.m == 0) undef(m, isg ? 121 : 120);
                xfloat r = fop(m, x, y, op);
                fencode(r, &valh, &valt);
                m->ccs += op >= 2 ? 44 : 9;
            }
            if (b18c17) condf(m, b18c17, valh, valt);
            if ((w_val(valh) > 0x3FFF) || (w_val(valh) < -0x3FFF)) m->nint = 1;
            m->fh = valh; m->ft = valt;
        } else {                               /* eqf, eqg */
            if (!isg) PREFIX(b16c15);
            calc_addr(m, o, b20c19, &e);
            if (isg && e.regop) undef(m, 312);
            valh = b21 ? w_not(m->fh) : m->fh;
            valt = b21 ? w_not(m->ft) : m->ft;
            if (b18c17) condf(m, b18c17, valh, valt);
            if (!isg) {
                if ((w_val(valh) > 0x3FFF) || (w_val(valh) < -0x3FFF)) m->nint = 1;
                stm(m, e.addr, valh, 0);
                stm(m, e.addr + 1, valt, 0);
                if (e.mcaddr) bup(m, 2);
            } else {
                if (!(w_zero(valh) && w_neg(valh) == w_neg(valt))) m->nint = 1;
                stm1(m, e.addr, valt, 0);
                if (e.mcaddr) bup(m, 1);
            }
        }
        break;
    }
    case 26:                                   /* operate: X8S pseudo-instructions */
        if (b21 || b20c19 == 1 || b20c19 == 3 || b18c17) undef(m, 232);
        if (b16c15 == 1) undef(m, 226);
        PREFIX(b16c15);
        {
            long long l = b20c19 != 2 ? b14t0 : b14t0 + w_val(m->b);
            if (l < 0 || l > 15) undef(m, 154);
            FILE *out = m->simout ? m->simout : stdout;
            switch ((int)l) {
            case 0: fputc('\f', out); break;
            case 1: { int ch = m->simin ? fgetc(m->simin) : EOF; m->s = ch == EOF ? 127 : (word)ch; break; }
            case 2: fprintf(out, "%03o\n", m->s & 0177); break;          /* puhep */
            case 4: fputc((int)(m->s & 0177), out); break;               /* prsym */
            case 8: fprintf(out, " %09o ", m->s); break;                 /* proct */
            case 12: fprintf(out, " %lld ", w_val(m->s)); break;         /* print */
            default: break;
            }
        }
        break;
    case 27: case 31: {                         /* tabel6, tabel7: no address */
        int b24 = cls == 31;
        int b20 = b20c19 >> 1;
        if (b20 * 2 != b20c19) {
            if (((o >> 17) & 0x3FF) == 1004 && b14t0 == 31488) goto memprot;
            undef(m, 206);
        }
        int b14t12 = b14t0 >> 12, b11t0 = b14t0 & 07777;
        if (b14t12 == 0) {
            int b11t5 = b11t0 >> 5, b4t0 = b11t0 & 31;
            if (b11t5 < 4) goto shift;
            if (b11t5 == 5 && b21 + b20 + b4t0 == 0) {
                PREFIX(b16c15);
                word v;
                int n = normshift(b24 ? m->s : m->a, &v);
                m->b = w_from(n, 0);
                if (b18c17) cond(m, b18c17, v);
                if (b16c15 != 1) { if (b24) m->s = v; else m->a = v; }
                m->ccs += n < 16 ? 1 : 2;
                break;
            }
            if (b11t5 == 7 && b24 + b21 + b20 + b4t0 == 0) goto shift;   /* noras */
            if (b11t5 > 7 && b11t5 < 11 && b24 + b20 == 0 && b4t0 < 3) {   /* rgt */
                PREFIX(b16c15);
                val = b11t5 == 8 ? m->a : b11t5 == 9 ? m->s : m->b;
                if (b21) val = w_not(val);
                if (b18c17) cond(m, b18c17, val);
                if (b16c15 != 1) *reg_of(m, b4t0) = val;
                break;
            }
            if (b11t5 == 32 && b24 == 1 && b21 + b20 == 0 && b4t0 < 2) {   /* tens, tenas */
                if (b16c15 == 1) undef(m, 211);
                PREFIX(b16c15);
                word a0 = m->a;
                m->a = 0;
                mul_as(m, 10, 0);
                val = m->s;
                if (b4t0 != 0) m->a = a0;
                if (b18c17) cond(m, b18c17, val);
                extra = 1;
                break;
            }
            undef(m, 205);
        shift:
            {
                int noras = b11t5 == 7;
                if (noras && b16c15 == 1) undef(m, 219);
                if (!noras && b16c15 == 1) undef(m, 218);
                PREFIX(b16c15);
                long long l = b20 == 0 ? b4t0 : b4t0 + w_val(m->b);
                if (b20 && (l < 0 || l > 31)) undef(m, 140);
                int n = (int)l;
                if (noras) {
                    word v;
                    int nb;
                    if (w_zero(m->a)) {
                        word sx = m->s;
                        int nega = w_neg(m->a), negs = w_neg(m->s);
                        if (nega && !negs) sx = w_from(w_val(m->s) - TP26M1, 0);
                        else if (negs && !nega) sx = w_from(w_val(m->s) + TP26M1, 0);
                        nb = normshift(sx, &v) + 26;
                    } else nb = normshift(m->a, &v);
                    m->b = w_from(nb, 0);
                    n = nb;
                    shift2(m, 0, n);           /* lcas */
                    if (b18c17) cond(m, b18c17, m->a);
                    m->ccs += 1 + (n - 1) / 2;
                    break;
                }
                int idx = (b24 * 2 + b21) * 4 + b11t5;
                switch (idx) {
                case 0: m->a = rot27(m->a, n, 1); val = m->a; break;          /* lca */
                case 1: m->a = lu1(m->a, n); val = m->a; break;               /* lua */
                case 2: shift2(m, 0, n); val = m->a; break;                   /* lcas */
                case 3: shift2(m, 4, n); val = m->a; break;                   /* luas */
                case 4: m->a = rot27(m->a, n, 0); val = m->a; break;          /* rca */
                case 5: m->a = ru1(m->a, n); val = m->a; break;               /* rua */
                case 6: shift2(m, 1, n); val = m->a; break;                   /* rcas */
                case 7: shift2(m, 5, n); val = m->a; break;                   /* ruas */
                case 8: m->s = rot27(m->s, n, 1); val = m->s; break;          /* lcs */
                case 9: m->s = lu1(m->s, n); val = m->s; break;               /* lus */
                case 10: shift2(m, 2, n); val = m->s; break;                  /* lcsa */
                case 11: shift2(m, 6, n); val = m->s; break;                  /* lusa */
                case 12: m->s = rot27(m->s, n, 0); val = m->s; break;         /* rcs */
                case 13: m->s = ru1(m->s, n); val = m->s; break;              /* rus */
                case 14: shift2(m, 3, n); val = m->s; break;                  /* rcsa */
                default: shift2(m, 7, n); val = m->s; break;                  /* rusa */
                }
                if (b18c17) cond(m, b18c17, val);
                if (b11t5 == 1 && (idx == 1 || idx == 5 || idx == 9 || idx == 13))
                    m->ccs += n < 16 ? 1 : 2;
                else m->ccs += 1 + (n > 0 ? (n - 1) / 2 : 0);
                break;
            }
        }
        if (b14t12 == 6) {                      /* the small registers */
            int b11t9 = b11t0 >> 9, b8t0 = b11t0 & 511;
            if (b21 + b20 + b18c17 + b8t0 == 0) {
                if (b11t9 == 0 || b11t9 == 1) {         /* ivon/ivoff, ovon/ovoff */
                    if (b16c15 == 1) undef(m, b11t9 ? 215 : 214);
                    PREFIX(b16c15);
                    if (m->bt == 0) undef(m, b11t9 ? 132 : 131);
                    if (b11t9) m->ov = b24; else m->iv = b24;
                    break;
                }
                if (b11t9 == 2 && b24 == 1) {           /* itvon */
                    if (b16c15 == 1) undef(m, 216);
                    PREFIX(b16c15);
                    if (m->bt == 0) undef(m, 133);
                    m->itv = 1;
                    return;                             /* straight to basis cyclus 1 */
                }
                if (b11t9 == 3 && b24 == 0) {           /* clp */
                    if (b16c15 == 1) undef(m, 212);
                    PREFIX(b16c15);
                    m->c = parbit(m->lastpar);
                    break;
                }
                if (b11t9 == 4 && b24 == 0) {           /* int */
                    PREFIX(b16c15);
                    int v = m->nint;
                    m->nint = 0;
                    if (b16c15 != 1) m->c = v;
                    break;
                }
            }
            undef(m, 205);
        }
        if (b14t12 == 7) {                      /* the CHARON flip-flops */
            int b11t9 = b11t0 >> 9, b8t0 = b11t0 & 511, b8t6 = b8t0 >> 6, b5t0 = b8t0 & 63;
            if (b11t9 < 4 && b21 + b18c17 + b8t6 == 0) {   /* maak q: afon .. lvifoff */
                if (b16c15 == 1) undef(m, 213);
                PREFIX(b16c15);
                if (m->bt == 0) undef(m, 130);
                long long l = b5t0;
                if (b20) { if (w_neg(m->b)) undef(m, 142); l += w_val(m->b); }
                if (l > 39) undef(m, 143);
                if (b11t9 == 0) {
                    if (!charon_present(m, (int)l)) undef(m, 147);
                    x8_setq(m, 0, (int)l, b24);
                    if (b24) charon_af(m, (int)l);
                } else if (b11t9 == 1) {
                    if (!x8_readq(m, 3, (int)l)) undef(m, 148);
                    x8_setq(m, 1, (int)l, b24);
                } else if (b11t9 == 2) {
                    if (!x8_readq(m, 4, (int)l)) undef(m, 149);
                    x8_setq(m, 2, (int)l, b24);
                } else undef(m, 146);
                extra = 1;
                break;
            }
            if (b21 == 0 && b8t6 < 2 && b5t0 < 2 && (b11t9 == 5 || b11t9 == 6)) {   /* lees q */
                PREFIX(b16c15);
                long long l = b5t0;
                if (b20) { l += w_val(m->b); if (l < 0 || l > 1) undef(m, 141); }
                val = b11t9 == 5 ? (l == 0 ? m->if0 : m->if1) : (l == 0 ? m->lvif0 : m->lvif1);
                if (b8t6 == 1) val &= b24 == 0 ? m->a : m->s;
                if (b18c17) cond(m, b18c17, val);
                if (b16c15 != 1) { if (b24) m->s = val; else m->a = val; }
                extra = 1;
                break;
            }
        }
        undef(m, 205);
    memprot:
        if (b16c15 == 1) undef(m, 217);
        PREFIX(b16c15);
        if (m->bt == 0) undef(m, 134);
        {
            word o2 = (o & ~0x1FFFFFu) | (2u << 19) | TP14;
            calc_addr(m, o2, 2, &e);
            val = memreg(m, &e, 0);
            int h1 = ((val >> 13) & 31) * 16;
            if (h1 > (int)((m->core_words - 1) / 512)) undef(m, 26361);
            val = rot27(val, 3, 1);
            for (int k = 0; k < 16; k++)
                m->dgp[h1 + k] = (int8_t)(bitk(val, k) * 2 + bitk(val, k / 8 + 25) - 1);
            bup(m, 1);
            extra = 2;
        }
        break;
    }
    default:
        undef(m, 201);
    }
    goto done;
skip:
    extra = 0;
done:
    m->ccs += extra;
    if (time0(m) == 24) {
        if (m->itv == 1) undef(m, 135);
        m->prot = 0;
        m->or_ = mem1(m, 24, 0);
        continue;                              /* the interrupt instruction */
    }
    return;
    }
}
