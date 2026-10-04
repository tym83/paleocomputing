# The decoder is generated from insn.decode by QEMU's own generator. The instruction
# width is 32 bits: all four RISC5 formats have the same length, which is what keeps
# the decoder so short.
gen = [
  decodetree.process('insn.decode', extra_args: [ '--static-decode', 'decode_insn',
                                                  '--insnwidth', '32' ])
]

risc5_ss = ss.source_set()
risc5_system_ss = ss.source_set()

risc5_ss.add(gen)
risc5_ss.add(files(
  'translate.c',
  'helper.c',
  'fp.c',
  'cpu.c'))

# Answers to the monitor are only needed in the system build.
risc5_system_ss.add(files('qmp-cmds.c'))

target_arch += {'risc5': risc5_ss}
target_system_arch += {'risc5': risc5_system_ss}
