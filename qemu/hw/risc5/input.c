/*
 * Keyboard and mouse of the Oberon machine.
 *
 * The keyboard in hardware is a PS/2 receiver with a 16-byte queue (PS2.v).
 * The "byte available" flag is bit 28 of port 6, the byte itself is read from port 7,
 * and the read removes it from the queue (RISC5Top.v:131: doneKbd = rd & ioenb &
 * iowadr == 7).
 *
 * The codes are not invented: QEMU can translate its key names into PS/2 set
 * 2 via the qcode → linux → atset2 tables, and that is exactly what
 * Input.Mod understands. Writing our own table is not an option: it would diverge from the system on
 * rare keys, and that would be discovered only much later.
 *
 * ⚠ Chords for buttons a laptop does not have. Oberon needs all three
 * buttons, and a trackpad has no middle one at all. A VNC client passes three buttons
 * through faithfully, but there is nothing to press them with, so we substitute here, in the machine:
 * this works with any client and requires nothing from it.
 *
 *   ⌥ Alt + click    → middle button (run commands)
 *   Ctrl + click     → right
 *   ⇧ Shift + click  → LEFT AND RIGHT AT ONCE: the interclick that Oberon
 *                      uses to set the second corner of a rectangle. Without
 *                      it Rectangles.Make does not work: it needs two marks,
 *                      and the second is set without releasing the first.
 *
 * The mouse is delivered as one word (MousePM.v:36):
 *   out = {run, btns, 2'b0, y, 2'b0, x}
 * so x is in bits 9:0, y in 21:12, buttons in 26:24. The origin is at the bottom
 * left, so the screen y is flipped.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "ui/console.h"
#include "ui/input.h"
#include "oberon-io.h"

#define FB_WIDTH  1024
#define FB_HEIGHT  768

/* Linux key codes: the same ones that arrive in evt->key.key. */
#define LNX_LEFTCTRL   29
#define LNX_LEFTSHIFT  42
#define LNX_LEFTALT    56
#define LNX_RIGHTCTRL  97
#define LNX_RIGHTALT   100
#define LNX_RIGHTSHIFT 54

static int kbd_free(OberonIOState *s)
{
    return (s->kbd_tail - s->kbd_head - 1 + OBERON_KBD_FIFO) % OBERON_KBD_FIFO;
}

static void kbd_push(OberonIOState *s, uint8_t code)
{
    s->kbd_fifo[s->kbd_head] = code;
    s->kbd_head = (s->kbd_head + 1) % OBERON_KBD_FIFO;
}

static void oberon_key_event(DeviceState *dev, QemuConsole *src,
                             QemuInputEvent *evt)
{
    OberonIOState *s = (OberonIOState *)dev;
    uint16_t set2;

    /*
     * evt->key.key is already a linux code; exactly one translation is needed: into PS/2 set 2.
     * ps2.c does the same (line 506), and uses the very same table.
     */
    if (evt->key.key >= qemu_input_map_linux_to_atset2_len) {
        return;
    }
    /* Remember the modifier keys: mouse buttons are substituted based on them. */
    switch (evt->key.key) {
    case LNX_LEFTCTRL:  case LNX_RIGHTCTRL:
        s->mod_ctrl  = evt->key.down; break;
    case LNX_LEFTSHIFT: case LNX_RIGHTSHIFT:
        s->mod_shift = evt->key.down; break;
    case LNX_LEFTALT:   case LNX_RIGHTALT:
        s->mod_alt   = evt->key.down; break;
    default: break;
    }

    set2 = qemu_input_map_linux_to_atset2[evt->key.key];
    if (set2 == 0) {
        return;
    }

    /*
     * Extended codes come with a 0xE0 prefix, release with 0xF0 before
     * the code itself. The order matters: the extension prefix comes before the release
     * marker, otherwise Input.Mod decodes the wrong key.
     */
    /*
     * A key goes into the queue whole or not at all. Half a key (a release
     * without its 0xF0, say) would leave Input.Mod believing Shift is still
     * held.
     */
    if (kbd_free(s) < 3) {
        return;
    }
    if (set2 & 0xFF00) {
        kbd_push(s, set2 >> 8);
    }
    if (!evt->key.down) {
        kbd_push(s, 0xF0);
    }
    kbd_push(s, set2 & 0xFF);
}

static void oberon_mouse_event(DeviceState *dev, QemuConsole *src,
                               QemuInputEvent *evt)
{
    OberonIOState *s = (OberonIOState *)dev;

    switch (evt->type) {
    case INPUT_EVENT_KIND_ABS: {
        int v = qemu_input_scale_axis(evt->abs.value, INPUT_EVENT_ABS_MIN,
                                      INPUT_EVENT_ABS_MAX, 0,
                                      evt->abs.axis == INPUT_AXIS_X
                                      ? FB_WIDTH : FB_HEIGHT);
        if (evt->abs.axis == INPUT_AXIS_X) {
            s->mouse_x = v;
        } else {
            /* The machine's origin is at the bottom left. */
            s->mouse_y = FB_HEIGHT - 1 - v;
        }
        break;
    }
    case INPUT_EVENT_KIND_BTN: {
        int bit;

        /*
         * Oberon needs buttons SIMULTANEOUSLY: its interclicks
         * mean pressing one and adding another without releasing it. So we keep
         * the set, not the last event.
         */
        switch (evt->btn.button) {
        case INPUT_BUTTON_LEFT:
            /*
             * The left button with a modifier key means a different one. Chords
             * are checked in order of decreasing complexity: Shift gives TWO AT ONCE, and
             * that is exactly what Oberon calls an interclick.
             */
            if (s->mod_shift)     { bit = 4 | 1; }
            else if (s->mod_alt)  { bit = 2; }
            else if (s->mod_ctrl) { bit = 1; }
            else                  { bit = 4; }
            /* A chord has been used: the on-screen hint can go away. */
            if (bit != 4 && s->chord_used) {
                *s->chord_used = true;
            }
            break;
        case INPUT_BUTTON_MIDDLE:
            if (s->chord_used) {
                *s->chord_used = true;   /* a real middle button all the more so */
            }
            bit = 2;
            break;
        case INPUT_BUTTON_RIGHT:  bit = 1; break;
        default: return;
        }
        if (evt->btn.down) {
            s->mouse_btn |= bit;
        } else {
            s->mouse_btn &= ~bit;
        }
        break;
    }
    default:
        return;
    }

    s->mouse = (s->mouse_btn & 7) << 24 |
               (s->mouse_y & 0xFFF) << 12 |
               (s->mouse_x & 0xFFF);
}

static const QemuInputHandler oberon_kbd_handler = {
    .name  = "Oberon keyboard",
    .mask  = INPUT_EVENT_MASK_KEY,
    .event = oberon_key_event,
};

static const QemuInputHandler oberon_mouse_handler = {
    .name  = "Oberon mouse",
    .mask  = INPUT_EVENT_MASK_BTN | INPUT_EVENT_MASK_ABS,
    .event = oberon_mouse_event,
};

void oberon_input_init(OberonIOState *s)
{
    s->kbd_head = s->kbd_tail = 0;

    /*
     * ⚠ The mouse starts at ZERO, not in the middle of the screen. In hardware
     * (MousePM.v:47) the coordinates stay zero until the mouse has responded:
     * `x <= ~run ? 10'b0 : done ? x + dx : x`. The system draws the cursor where
     * the register points, i.e. in the bottom left corner, until the mouse
     * is moved.
     *
     * Putting it in the middle seemed more convenient, but that diverges from the hardware:
     * the frame buffer stopped matching the reference byte for byte, and this was found
     * precisely by comparison, not by looking.
     */
    s->mouse_x = s->mouse_y = s->mouse_btn = 0;
    s->mouse = 0;

    /* Keep the returned states: otherwise the build treats them as a leak. */
    s->kbd_handler = qemu_input_handler_register((DeviceState *)s,
                                                 &oberon_kbd_handler);
    s->mouse_handler = qemu_input_handler_register((DeviceState *)s,
                                                   &oberon_mouse_handler);
}
