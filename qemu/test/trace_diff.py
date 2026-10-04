#!/usr/bin/env python3
"""Step-by-step cross-check of qemu-system-risc5 against the reference emulator.

The reference is the same one that was checked against the real RTL over
15 million instructions, so a match here means a match with the hardware, not
with ourselves.

Two subtleties, each of which once produced a false result:

1. The reference has its ROM at a different address (0xFFFFF800 versus our
   0xFFE000); this is recorded as finding 14. Offsets from the ROM start must
   be compared.

2. By default QEMU logs the state before entering a translation BLOCK, and a
   block can be longer than one instruction: in the branch-dense ROM code the
   blocks were one instruction each and everything matched, but in the system
   code the trace started "skipping" instructions. one-insn-per-tb=on is
   required.
"""
import re, pathlib, sys

Q_ROM, R_ROM = 0xFFE000, 0xFFFFF800


def norm(pc, rom_base):
    return ('ROM', pc - rom_base) if pc >= rom_base else ('RAM', pc)


def main(qemu_trace, ref_trace):
    q = [norm(int(l, 16), Q_ROM)
         for l in pathlib.Path(qemu_trace).read_text().split()]
    r = [norm(int(m.group(1), 16), R_ROM) for m in
         (re.search(r'PC=([0-9A-F]+)', l)
          for l in pathlib.Path(ref_trace).read_text().splitlines()) if m]

    n = min(len(q), len(r))
    if n == 0:
        print('❌ one of the traces is empty'); return 1

    for i in range(n):
        if q[i] != r[i]:
            print(f'❌ mismatch at instruction {i}')
            for j in range(max(0, i - 4), min(n, i + 2)):
                mark = '  <<<' if j == i else ''
                print(f'  {j:7}  reference {r[j][0]}+{r[j][1]:05X}'
                      f'   QEMU {q[j][0]}+{q[j][1]:05X}{mark}')
            return 1

    ram = sum(1 for x in q[:n] if x[0] == 'RAM')
    print(f'✅ matched on all {n} instructions')
    print(f'   of them in RAM (system code, not the boot loader): {ram}')
    print(f'   distinct addresses visited: {len(set(q[:n]))}')
    return 0


if __name__ == '__main__':
    sys.exit(main(*sys.argv[1:3]))
