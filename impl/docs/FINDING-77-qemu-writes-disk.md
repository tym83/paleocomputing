[Русская версия](FINDING-77-qemu-writes-disk.ru.md)

# Finding 77. QEMU writes to disk for the first time, and it crashed right away

The model was also checked in `qemu-system-risc5`: the same image, the same
scenario of two middle clicks, and the system compiles `LM.Mod` by itself and
prints text. The result matched the reference and the RTL: `LM.Out` on disk is
`alice was one thought all `, and the frame buffer after the run is **bit-for-bit
equal** to the frame taken on the RTL with the same scenario (0 pixels out of
786 432).

QEMU does not model cycles, so it provides only a functional cross-check, with
no speed numbers.

Getting this far required closing two holes. Both are not in the model but in
the QEMU target: before episode 2 nobody had written to disk in it. Booting the
system only reads; compiling inside the system writes `.rsc`.

## 1. The very first write is an abort

```
qemu-system-risc5: ../block/io.c:2016: bdrv_co_write_req_prepare:
  Assertion `child->perm & BLK_PERM_WRITE' failed.
```

The SD card is taken by drive name (`blk_by_name("sd0")`) rather than attached
as a qdev device (the reason is in a comment in `hw/risc5/oberon.c`). A qdev
device receives write permissions when it is attached; a drive taken by name
does not. The fix is one explicit request:
`blk_set_perm(blk, CONSISTENT_READ | WRITE, ALL)`, if the drive allows it.

## 2. The image does not grow

After the fix the system reached the command and failed with
`TRAP 7 in Files`, i.e. `ASSERT(F.mark = HeaderMark)` when opening the freshly
written `LM.rsc`. The QEMU log (`-d guest_errors`) showed the cause:
`sector 2286 could not be written`. The file system takes new sectors **past the
end** of the reference image (~1 MB). The C emulator and the RTL testbench write
through `fseek`, and the file grows by itself; in QEMU the raw drive has a fixed
size, and a write past the end is rejected. The script `lm/qemu_run.py` grows
the image copy to 8 MB before launch. For a reader who follows `qemu/GUIDE.md`
and wants to save something, this is the same trap, and it should be accounted
for there too.

## 3. The keyboard does not get through via QMP

The system does not see key presses sent with `input-send-event` (it does see
the mouse; finding 39 checked specifically the mouse). The cause was not
investigated: the scenario bypasses the keyboard, and the commands are placed
in `System.Tool`. This is an open question for the QEMU target, not for the
model.

## How to reproduce

```
make -C qemu build     # in a container, slow the first time
cd impl && make lm-system && make lm-qemu
```

`lm-system` is needed only for the frame comparison; the text is checked
without it.
