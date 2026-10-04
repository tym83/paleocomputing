[Русская версия](FINDING-86-qemu-keyboard-byte-load.ru.md)

# Finding 86. The very first key press hung the system in QEMU

## Symptom

In Cozystack (OberonVM, `virtctl vnc`) and in local QEMU, after a single key
press the machine stopped responding: the letter did not appear, and the mouse
pointer no longer moved. Mouse clicks before the key press worked. This had
already been noticed in `impl/lm/qemu_run.py` ("key presses via
input-send-event do not get through"), but the cause had not been investigated;
it was worked around by putting the commands into `System.Tool` in advance.

## Cause

The execution log (`-d exec,nochain`) showed that the processor was not stuck:
every pass of `Oberon.Loop` took the "a key is available" branch, called
`Input.Read` and handed the character to the text viewer. The background tasks
were never reached.

`Input.Peek` reads the key code into a variable of type `BYTE`:

```
SYSTEM.GET(kbdAdr, kbdCode)      (* kbdCode: BYTE *)
```

This is a byte load from port 7. The ports in `qemu/hw/risc5/io.c` were declared
with `.valid = {4, 4}`, that is, word accesses only. QEMU rejected such an
access, the port handler was not called, and the code was not removed from the
queue. The "code available" flag in port 6 stayed raised forever, and the system
read the same key press endlessly.

In hardware the ports are decoded by `adr[5:2]`, and the low bits do not
participate, so a byte read works. The step-by-step comparison with the RTL did
not catch this, because booting the system does not read the keyboard.

## Fix

`.valid = {1, 4}`, `.impl = {4, 4}`: accesses of any size are accepted, while the
handler still receives a whole word, and QEMU itself extracts the byte from it.

## Verification

`qemu/test/keyboard_check.py` boots the system, places the caret at the end of
`System.Tool`, types the string `System.ShowModules` on the keyboard (with
Shift) and runs it with a middle click. It passes only if a viewer with the list
of modules appears below `System.Tool`. Negative control: the same scenario
without the caret, so the key presses have nowhere to go, and no viewer appears.

| build | dark pixels in the viewer area: typed / control | result |
|---|---|---|
| with the fix | 3534 / 885 | ✅ |
| before the fix | 885 / 885 | ❌ |

Over VNC with real Shift presses, capital letters, brackets, `:=`, `~`, quotes
and `|` can be typed.

## Long input: the queue and the viewer edge

To test the keyboard seriously, `Kube.Mod` (10 212 characters) was typed into the
system's editor through QMP `input-send-event`, saved with `Edit.Store`, compiled
inside the system and run. Two more things turned up along the way.

**A 16-byte queue loses fast input.** In Wirth's design the `PS2.v` queue is 16
bytes, but there the keyboard cannot send faster than a human. QMP and a VNC
client can, and a key press with Shift takes six bytes in the queue. When typing
680 characters per second, 5359 of 10 212 characters reached the system. The
queue became 4096 bytes, and a key press is put into it either whole or not at
all: half a key press, for example a release without 0xF0, would leave Input.Mod
believing that Shift is still held. With the large queue at the same speed, 6490
got through: the machine processes key presses more slowly than they are fed, and
no queue can save a stream that is constantly faster than the machine. That is
the sender's concern. In the final run (5 ms between characters and a click
before each line) not a single character was lost.

**The editor loses key presses at the bottom edge of the viewer.** When the caret
reaches the last visible line, some key presses are lost and lines get glued
together: every time exactly at line 60, at any speed. This is TextFrames
behavior, and QEMU has nothing to do with it. If lines are inserted in reverse
order at the beginning of the text, the caret does not move down, and the module
arrives whole.

**Result.** The module was typed in full (10 212 of 10 212), compiled inside the
system, `Kube.Start` set up three controllers, `Kube.Apply web 3 nginx` brought up
three pods, and scaling to 1 and to 4 was reconciled by background tasks. A file
saved before a reboot is still there after it.

Separately, it turned out that `Kube.DeletePod web-rs-3` silently does nothing:
the text scanner ends the name at the hyphen and looks for a pod named `web`.
This is a bug in Kube.Mod.
