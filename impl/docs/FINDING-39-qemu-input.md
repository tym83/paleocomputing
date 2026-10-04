[Русская версия](FINDING-39-qemu-input.ru.md)

# Finding 39. The machine in QEMU can be controlled

The keyboard and mouse are written, and the system responds to them just as on the real
RTL. The check: a middle click on the words `System.ShowModules` in the tool window
opens a window with the list of loaded modules.

| | before the click | after |
|---|---|---|
| dots in the bottom-right strip | 563 | **4856** |

The machine under Verilator gives the same numbers. The window that opens shows the same
thirteen modules with the same addresses.

## The key codes are not made up

Our own translation table would have been a mistake: it would have diverged from the system on rare
keys, and that would not have been discovered for a long time. QEMU already has
`qemu_input_map_linux_to_atset2`, exactly the PS/2 set 2 that `PS2.v` reads.
The standard `ps2.c` uses the same table.

The byte order is taken from the protocol: the extension prefix `0xE0` comes **before**
the release marker `0xF0`, otherwise `Input.Mod` will decode the wrong key.

The queue is 16 bytes, like `fifo[15:0]` in the hardware, and reading port 7 removes a byte:
`doneKbd = rd & ioenb & (iowadr == 7)`.

## Mouse buttons are held as a set, not as the last event

Oberon needs the **simultaneous** state of the buttons: its interclicks mean
pressing one and, without releasing it, adding another. So the state is accumulated in a set
of bits (left 4, middle 2, right 1) rather than overwritten by every event.

The word layout is taken from `MousePM.v:36`:

```
out = {run, btns, 2'b0, y, 2'b0, x}
```

x in bits 9:0, y in 21:12, the buttons in 26:24. The origin is at the bottom left, so
the screen y is flipped.

## What had to be adjusted for the current QEMU

An input event arrives as `QemuInputEvent`, and the fields are read directly,
`evt->key.key`, `evt->btn.button`, `evt->abs.value`, rather than through nested
pointers as before. And `evt->key.key` is **already a linux code**, so exactly
one translation is needed, into set 2.

## Status of the target

Written and checked against the hardware: the integer core, memory, branches, ports,
the timer, the SPI disk, the screen, keyboard, mouse.

Not yet written: floating point (for now an honest refusal instead of computing). The system did not
need it to work: the screen and input get by without an FPU.
