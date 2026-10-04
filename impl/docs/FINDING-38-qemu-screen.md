[Русская версия](FINDING-38-qemu-screen.ru.md)

# Finding 38. Oberon shows its screen in our own QEMU

`qemu-system-risc5` boots the Oberon system from a disk image and draws its screen.
The screenshot shows the log with the line `Oberon V5 NW 14.4.2013`, the `System.Tool` window with
its list of commands, the mouse cursor. The very same picture as on the real RTL.

## A check not by eye

Looking at a picture is a weak check: the eye will not notice a shift by one line or
a flipped bit in a rare glyph. So bytes are compared.

**98 304 bytes of the framebuffer matched byte for byte** with the buffer of the same system
booted on the real circuit description under Verilator. Black dots: 18 607, the same
in both machines.

The check is packaged as `qemu/test/fb_diff.py`.

## What had to be taken from the hardware

The address and layout were taken from `VID.v`, not from descriptions:

```
localparam Org = 18'b1101_1111_1111_0000_00;
assign vidadr = Org + {3'b0, ~vcnt, hword};
```

Three things, each of which on its own spoils the picture:

* the address there is a **word** address, hence the byte start `0xE7F00`;
* `~vcnt` means the rows are stored **bottom-up**: row zero of the screen is at
  the highest address. Forget this and you get an upside-down screen;
* within a word **the least significant bit is the leftmost dot**, and a one means black
  (`assign vid = pixbuf[0] ^ inv`).

The machine has no separate video memory: the framebuffer lives in ordinary RAM, and
the device simply reads it.

## A small thing that cost a round

In this version of QEMU the function with which a device reports a screen change
is called `qemu_console_update`, not `dpy_gfx_update`; the latter remained
only as a callback for the display subsystem. The compiler catches this immediately, but
it had to be looked up in other people's devices.

There is no `screendump` in our build: it was configured without extras. And that is good: instead of
a picture via QMP, the buffer memory itself is dumped (`pmemsave`), and that is exactly what
can be compared byte for byte.

## Where we are now

The integer core, memory, branches, ports, the timer, the SPI disk and the
screen are reproduced correctly, checked against the hardware rather than against our own expectations.

Not yet written: keyboard, mouse, floating point. After them the machine will become
complete, and the experiment with libvirt can be set up.
