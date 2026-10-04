/*
 * The Oberon machine's screen: 1024x768, one bit per pixel.
 *
 * The frame buffer lives directly in main memory: the machine has no separate
 * video memory. The address and layout are taken from VID.v:
 *
 *   localparam Org = 18'b1101_1111_1111_0000_00;
 *   assign vidadr = Org + {3'b0, ~vcnt, hword};
 *
 * The address there is a WORD address, hence the byte start 0xE7F00. The key part is `~vcnt`:
 * lines are stored BOTTOM UP, screen line zero lives at the highest
 * address. Forget that and you get an upside-down picture.
 *
 * Within a word the low bit is the leftmost pixel (VID.v shifts pixbuf right).
 * One is black: assign vid = pixbuf[0] ^ inv, and then RGB = {vid,vid,vid}
 * on a white background gives black letters.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "ui/console.h"
#include "ui/vgafont.h"
#include "qemu/timer.h"
#include "system/address-spaces.h"
#include "oberon-io.h"

#define FB_WIDTH   1024
#define FB_HEIGHT   768
#define FB_WORDS_PER_LINE (FB_WIDTH / 32)

/*
 * Hint about the mouse buttons.
 *
 * Oberon needs three buttons, and a laptop has no middle one. The machine supports chords,
 * but a person has no way to learn about them: they see the screen over VNC, with no
 * documentation nearby. So the hint is drawn ON THE SCREEN ITSELF,
 * the one place they are sure to look.
 *
 * The bar stays for half a minute and goes away sooner if a chord has already been used:
 * that means it was understood. It does not touch the frame buffer: it is drawn over the finished
 * picture, so the byte-for-byte comparison with the hardware stays honest.
 *
 * The text is in English: it is read by someone coming from outside.
 */
#define HINT_MS      30000
#define HINT_LINES   2
#define HINT_H       (HINT_LINES * 16 + 8)

static const char *const HINT[HINT_LINES] = {
    "Oberon needs three mouse buttons. On a laptop, hold a key and click:",
    "  Alt = middle (runs commands)   Ctrl = right   Shift = both (interclick)",
};

/* One 8x16 glyph over the finished picture. */
static void draw_char(uint32_t *dst, int x, int y, unsigned char c,
                      uint32_t fg, uint32_t bg)
{
    const uint8_t *g = vgafont16 + (unsigned)c * 16;
    int r, b;

    for (r = 0; r < 16; r++) {
        uint32_t *out = dst + (size_t)(y + r) * FB_WIDTH + x;
        for (b = 0; b < 8; b++) {
            out[b] = (g[r] >> (7 - b)) & 1 ? fg : bg;
        }
    }
}

static void draw_hint(OberonDisplay *d, uint32_t *dst)
{
    int64_t now = qemu_clock_get_ms(QEMU_CLOCK_VIRTUAL);
    int line, i, y0;

    if (d->hint_done || now > HINT_MS) {
        return;
    }

    y0 = FB_HEIGHT - HINT_H;
    /* Full-width backdrop so the letters are readable on any background. */
    for (i = 0; i < HINT_H * FB_WIDTH; i++) {
        dst[(size_t)y0 * FB_WIDTH + i] = 0xFF101010u;
    }
    for (line = 0; line < HINT_LINES; line++) {
        const char *s = HINT[line];
        for (i = 0; s[i] && i < FB_WIDTH / 8; i++) {
            draw_char(dst, i * 8, y0 + 4 + line * 16,
                      (unsigned char)s[i], 0xFFFFFFFFu, 0xFF101010u);
        }
    }
}

static void oberon_display_update(void *opaque)
{
    OberonDisplay *d = opaque;
    DisplaySurface *surface = qemu_console_surface(d->con);
    uint32_t *dst;
    const uint32_t *fb;
    int y, w, bit;

    if (!surface || surface_bits_per_pixel(surface) != 32) {
        return;
    }

    fb = (const uint32_t *)memory_region_get_ram_ptr(d->ram) +
         (OBERON_FB_BASE / 4);
    dst = (uint32_t *)surface_data(surface);

    for (y = 0; y < FB_HEIGHT; y++) {
        /* Lines go bottom up: screen line y corresponds to buffer line 767-y. */
        const uint32_t *src = fb + (size_t)(FB_HEIGHT - 1 - y) * FB_WORDS_PER_LINE;
        uint32_t *out = dst + (size_t)y * FB_WIDTH;

        for (w = 0; w < FB_WORDS_PER_LINE; w++) {
            uint32_t v = src[w];
            for (bit = 0; bit < 32; bit++) {
                /* The low bit is the left pixel; one is black. */
                out[w * 32 + bit] = (v >> bit) & 1 ? 0xFF000000u : 0xFFFFFFFFu;
            }
        }
    }

    draw_hint(d, dst);
    qemu_console_update(d->con, 0, 0, FB_WIDTH, FB_HEIGHT);
}

static bool oberon_display_gfx_update(void *opaque)
{
    oberon_display_update(opaque);
    return true;
}

static void oberon_display_invalidate(void *opaque)
{
    oberon_display_update(opaque);
}

static const GraphicHwOps oberon_display_ops = {
    .gfx_update  = oberon_display_gfx_update,
    .invalidate  = oberon_display_invalidate,
};

void oberon_display_init(OberonDisplay *d, MemoryRegion *ram)
{
    d->ram = ram;
    d->con = qemu_graphic_console_create(NULL, 0, &oberon_display_ops, d);
    qemu_console_resize(d->con, FB_WIDTH, FB_HEIGHT);
}
