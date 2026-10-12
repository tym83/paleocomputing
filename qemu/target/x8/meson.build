# The X8 core is the emulator of impl/x8-the/emu (x8.c, charon.c), copied in
# by graft.sh: QEMU runs exactly the machine the episode's tests check.
x8_ss = ss.source_set()
x8_system_ss = ss.source_set()

x8_ss.add(files(
  'translate.c',
  'helper.c',
  'cpu.c',
  'x8.c',
  'charon.c'))

x8_system_ss.add(files('qmp-cmds.c'))

target_arch += {'x8': x8_ss}
target_system_arch += {'x8': x8_system_ss}
