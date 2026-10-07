# Oberon-lab: RISC5 under Verilator + tests + synthesis
RTL  := rtl/RISC5.v rtl/Registers.v rtl/Multiplier.v rtl/Divider.v \
        rtl/FPAdder.v rtl/FPMultiplier.v rtl/FPMultiplierFast.v rtl/FPDivider.v \
        rtl/LeftShifter.v rtl/RightShifter.v
# The Python bytecode cache is dangerous for reproducibility: file times on macOS
# have one-second granularity, and editing a tool within the same second the
# .pyc was written leaves the OLD code running. This happened for real: a
# disassembler restored from a copy kept producing the mutated decoding.
export PYTHONDONTWRITEBYTECODE := 1

VFLAGS := -Wno-fatal --cc --build --exe --public-flat-rw -CFLAGS "-O2 -I../../tb"
TESTS  := t1_latency t1_flags t1_fpb2b t1_fp t1_arith t1_umul t1_probe_flags \
          t1_branch t1_branch_width t1_logic t1_dontcare t1_prime t1_alu_diff1 t1_alu_diff2 t1_shift t1_mem t1_movspec t1_irq
IDXT   := t3_idx t3_idx_neg t3_idx_hi t3_idx_zero t3_idx_max t3_idx_rand
ASM    := $(patsubst %,tests/%.bin,$(TESTS) t2_chk t2_chk_hi $(IDXT))
# The descriptor core (episode 14) is core E plus the IDX instruction: compiler
# configuration F emits both CHK (arrays of known length) and IDX (open arrays).
DESCDEF := -DWITH_CHK -DCHK_SPLIT -DWITH_DESC

.PHONY: boot-fast fpmul-diff lm lm-profile lm-check lm-stock lm-system lm-qemu site all check test roundtrip pristine bootstrap rebuild book labs image lab image-check equiv lockstep lockstep-chk boot boot-chk selfhost syn configs tools web deps clean
.PHONY: idx-diff idx-mutate boot-desc lockstep-desc desc-loop desc-measure desc-cross desc-profile
all: tools build/obj_tests/run_tests build/obj_chk/run_tests_chk build/obj_desc/run_tests_desc $(ASM)

# ───────────────────────────────────────────────────────────────────────────
# External tools. They used to sit in the tree as prebuilt binaries with no build
# rule at all, so on anything other than macOS/ARM NOTHING built (found by audit).
# ───────────────────────────────────────────────────────────────────────────
NOREBO := ext/norebo/norebo.bin
REFTOOLS := ext/refemu/refboot ext/refemu/reftrace

tools: $(NOREBO) $(REFTOOLS)

# ⚠ The name is norebo.bin, not norebo: on case-insensitive file systems (the
# macOS default) the target `norebo` matches the directory `Norebo/`, and make
# considers it up to date. So we build it directly and under a different name.
$(NOREBO): ext/norebo/Runtime/norebo.c ext/norebo/Runtime/risc-cpu.c
	@$(CC) -o $@ $^ -O2 -std=c99 -w
	@echo "built $@"

ext/refemu/refboot: ext/refemu/boot.c ext/refemu/risc.c ext/refemu/risc-fp.c ext/refemu/disk.c
	@$(CC) -o $@ $^ -O2 -std=c99 -w

ext/refemu/reftrace: ext/refemu/trace.c ext/refemu/risc.c ext/refemu/risc-fp.c ext/refemu/disk.c
	@$(CC) -o $@ $^ -O2 -std=c99 -w

# Browser build. The emcc command was not written down anywhere; the auditor
# had to reconstruct it from indirect evidence.
# ⚠ Paths to the testbench sources are ABSOLUTE. Verilator puts them into the
# generated makefile as is but builds from its own directory: a relative path
# resolves differently across versions, and with the apt verilator the build
# fails with "No rule to make target 'tb/run_tests.cpp'". It does not show
# locally: recent versions resolve the path correctly.
TB := $(abspath tb)

# ⚠ Deferred assignment: with `:=` make invoked verilator on EVERY run, and
# where it is not installed (the fast CI job) every target printed an error.
VINC = $(shell verilator --getenv VERILATOR_ROOT)/include
WASM_SRC := $$(ls build/obj_wasm/*.cpp | grep -v "__Dpi\.cpp$$")

BENCH := web/bench_bounds_b.bin web/bench_bounds_e.bin web/bench_bounds.json

web: web/risc5.js web/risc5-chk.js web/prom_sd.mem web/oberon.dsk web/oberon.dsk.gz $(BENCH)

build/obj_wasm/VRISC5.cpp: $(RTL)
	@verilator -Wno-fatal --cc --public-flat-rw --Mdir build/obj_wasm --top-module RISC5 $(RTL)

# The second HARDWARE variant: the same core with hardware bounds checking. The
# page switches between them instantly, and that is exactly "I changed the
# processor": nothing to rebuild, both models already sit side by side.
build/obj_wasm_chk/VRISC5.cpp: $(RTL)
	@verilator -Wno-fatal --cc --public-flat-rw -DWITH_CHK -DCHK_SPLIT \
	  --Mdir build/obj_wasm_chk --top-module RISC5 $(RTL)

# ⚠ The list of generated files is taken by the SHELL, not by $(wildcard).
#
# GNU make caches directory contents for the whole run: it reads build/obj_wasm
# before verilator writes there, and the list stays empty. Then VRISC5.cpp is
# left out of the build and linking fails on eval_step.
#
# It does not show locally: the files are left over from the previous run and
# the cache sees them. It shows only on a clean build, which is exactly where
# everyone else builds.
# ⚠ One recipe for both hardware variants. Two identical recipes would diverge
# at the first edit; in this repository that has already happened three times.
# So there is one rule, and the object directory comes from a target variable.
#
# ⚠ And it MUST NOT be wrapped in define/eval: inside it `$@` and the shell
# substitution `$(ls …)` are expanded twice, and em++ silently gets an empty
# `-o`. Verified.
WASM_OBJ = build/obj_wasm
web/risc5-chk.js: WASM_OBJ = build/obj_wasm_chk

web/risc5.js web/risc5-chk.js: build/obj_wasm/VRISC5.cpp build/obj_wasm_chk/VRISC5.cpp \
                              tb/wasm_main.cpp tb/wasm_stubs.cpp tb/memdisk.h tb/memradio.h
	@em++ -O3 -I $(WASM_OBJ) -I $(VINC) -I $(VINC)/vltstd -I tb 	  -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -DVM_TRACE_FST=0 -DVM_TRACE_VCD=0 -DVM_TRACE_SAIF=0 	  $$(ls $(WASM_OBJ)/*.cpp | grep -v "__Dpi\.cpp$$") 	  $(VINC)/verilated.cpp $(VINC)/verilated_threads.cpp tb/wasm_main.cpp tb/wasm_stubs.cpp 	  -s EXPORTED_FUNCTIONS='["_soc_init","_soc_run","_soc_framebuffer","_soc_fb_words","_soc_cycles","_soc_insns","_soc_pc","_soc_key","_soc_mouse","_soc_reg","_soc_flags","_soc_h","_soc_ram","_soc_fb_crc","_soc_disk_word","_soc_disk_size","_soc_poke","_soc_radio_take","_soc_radio_give","_soc_serial","_soc_reboot","_soc_timescale","_malloc","_free"]' 	  -s EXPORTED_RUNTIME_METHODS='["HEAPU8","HEAPU32"]' 	  -s ALLOW_MEMORY_GROWTH=1 -s MODULARIZE=1 -s EXPORT_ES6=1 -s EXPORT_NAME=OberonRISC5 	  -s ENVIRONMENT=web,node -s FILESYSTEM=0 -o $@

web/prom_sd.mem: rtl/prom_sd.mem
	@cp $< $@

# The centrepiece workload. Sources are generated from one template and then
# assembled; the copies in web/ are derived and must not be placed by hand.
tests/bench_bounds_b.s tests/bench_bounds_e.s tests/bench_bounds.json: tools/gen_bounds_bench.py
	@python3 tools/gen_bounds_bench.py > /dev/null

web/bench_bounds_b.bin: tests/bench_bounds_b.bin
	@cp $< $@
web/bench_bounds_e.bin: tests/bench_bounds_e.bin
	@cp $< $@
web/bench_bounds.json: tests/bench_bounds.json
	@cp $< $@
web/oberon.dsk: ext/disk/Oberon-2016-08-02.dsk
	@cp $< $@

# Compressed image for the page: GitHub Pages serves neither brotli nor gzip on
# the fly, so the megabyte is compressed ahead of time and the browser itself
# decompresses it (DecompressionStream). The uncompressed one stays for browsers
# without it.
web/oberon.dsk.gz: web/oberon.dsk
	@gzip -9 -n -c $< > $@

# Environment check: without it errors surface in the middle of the build
deps:
	@for t in verilator yosys python3 cc; do \
	  command -v $$t >/dev/null || { echo "MISSING: $$t"; exit 1; }; \
	  printf "  %-12s ✅ %s\n" "$$t" "$$($$t --version 2>&1 | head -1 | cut -c1-48)"; \
	done
	@command -v em++ >/dev/null && echo "  em++         ✅ (needed only for make web)" || echo "  em++         ⚠ missing: make web will not build"
	@test -f $(SKY130) && echo "  Sky130       ✅" || echo "  Sky130       ⚠ missing: fetched automatically by make syn (12 MB)"

# Generated tests: kept derived from their generators, otherwise a .s file can
# fall behind the model and the check quietly degenerates into comparing it
# with itself.
tests/t1_alu_diff1.s tests/t1_alu_diff2.s: tools/gen_alu_diff.py tools/alu_model.py tools/asm.py
	@python3 tools/gen_alu_diff.py

tests/t1_dontcare.s: tools/gen_dontcare_test.py
	@python3 tools/gen_dontcare_test.py

tests/t1_branch.s: tools/gen_branch_test.py
	@python3 tools/gen_branch_test.py

$(patsubst %,tests/%.s,$(filter-out t3_idx_rand,$(IDXT))): tools/gen_idx_tests.py
	@python3 tools/gen_idx_tests.py > /dev/null

tests/t3_idx_rand.s: tools/gen_idx_diff.py
	@python3 tools/gen_idx_diff.py > /dev/null

# IDX differential: the same tests on the Norebo processor, the emulator the
# compilation measurements were taken on. RTL passes them in `make test`; here
# it is the emulator.
build/emu_tests: tb/emu_tests.c ext/norebo/Runtime/risc-cpu.c ext/norebo/Runtime/risc-cpu.h
	@mkdir -p build && $(CC) -O2 -std=c99 -w -o $@ tb/emu_tests.c

idx-diff: build/emu_tests $(patsubst %,tests/%.bin,$(IDXT) t2_chk t2_chk_hi)
	@fail=0; for t in $(IDXT) t2_chk t2_chk_hi; do \
	  out=$$(build/emu_tests tests/$$t); rc=$$?; \
	  printf "  %-12s %s\n" "$$t" "$$(echo "$$out" | tail -1)"; [ $$rc -eq 0 ] || fail=1; \
	done; [ $$fail -eq 0 ] || { echo "  ❌ emulator disagrees with the tests"; exit 1; }

# The "descriptors" step (episode 14). The numbers of findings 80-84 are
# reproduced by these targets; each writes its tables to build/.
#   desc-loop     the centrepiece loop on RTL: A, B, E, D (seconds)
#   desc-measure  three workloads × four homogeneous environments A/B/E/F
#                 (~10 minutes: building four Norebo environments in three stages)
#   desc-cross    F versus E breakdown on a 2×2 compilation (after desc-measure)
#   desc-profile  dynamic profile of open arrays (after desc-measure)
desc-loop: build/obj_tests/run_tests build/obj_chk/run_tests_chk build/obj_desc/run_tests_desc \
           $(patsubst %,tests/bench_bounds_%.bin,a b e d)
	@bash tools/measure_loop_desc.sh

tests/bench_bounds_a.s tests/bench_bounds_d.s: tools/gen_bounds_bench.py
	@python3 tools/gen_bounds_bench.py > /dev/null

desc-measure: $(NOREBO)
	@bash tools/measure_desc.sh

desc-cross: $(NOREBO)
	@bash tools/measure_desc_cross.sh

desc-profile: $(NOREBO)
	@bash tools/profile_desc.sh

# Mutation check of the IDX tests: six RTL mutations, each of which must be
# caught. About five minutes (six Verilator builds).
idx-mutate:
	@bash tools/mutate_idx.sh

tests/%.bin tests/%.chk: tests/%.s tools/asm.py
	@python3 tools/asm.py $<

# 🔴 Found by audit: `|| true` swallowed the build error, and `make test`
# reported "ALL GREEN" with zero tests run. Now the build must succeed.
build/obj_tests/run_tests: $(RTL) tb/run_tests.cpp tb/soc_mem.h
	@mkdir -p build
	@verilator $(VFLAGS) -o run_tests --top-module RISC5 --Mdir build/obj_tests $(RTL) $(TB)/run_tests.cpp
	@test -x $@ || { echo "BUILD PRODUCED NO BINARY: $@"; exit 1; }

build/obj_chk/run_tests_chk: $(RTL) tb/run_tests.cpp tb/soc_mem.h
	@mkdir -p build
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -o run_tests_chk --top-module RISC5 --Mdir build/obj_chk $(RTL) $(TB)/run_tests.cpp
	@test -x $@ || { echo "BUILD PRODUCED NO BINARY: $@"; exit 1; }

build/obj_desc/run_tests_desc: $(RTL) tb/run_tests.cpp tb/soc_mem.h
	@mkdir -p build
	@verilator $(VFLAGS) $(DESCDEF) -o run_tests_desc --top-module RISC5 --Mdir build/obj_desc $(RTL) $(TB)/run_tests.cpp
	@test -x $@ || { echo "BUILD PRODUCED NO BINARY: $@"; exit 1; }

# Full regression. The base tests must give IDENTICAL cycle counts on both cores;
# that is the check that "the ISA extension does not change the behaviour of
# existing code".
test: all
	@mkdir -p build
	@python3 -c "import sys; sys.path.insert(0,'tools'); import asm; sys.exit(asm._selftest())" \
	  > build/asm_selftest.txt \
	  || { cat build/asm_selftest.txt; echo "  ❌ assembler self-test failed"; exit 1; }
	@tail -1 build/asm_selftest.txt
	@python3 tools/sweep_encoding.py > build/sweep.txt \
	  || { cat build/sweep.txt; echo "  ❌ encoding sweep failed"; exit 1; }
	@head -2 build/sweep.txt
	@fail=0; \
	for t in $(TESTS); do \
	  for v in "build/obj_tests/run_tests:base" "build/obj_chk/run_tests_chk:with CHK" "build/obj_desc/run_tests_desc:with IDX"; do \
	    bin=$${v%%:*}; name=$${v##*:}; \
	    out=$$($$bin tests/$$t); rc=$$?; \
	    printf "  %-12s %-9s %s\n" "$$t" "$$name" "$$(echo "$$out" | tail -1)"; \
	    [ $$rc -eq 0 ] || fail=1; \
	  done; \
	done; \
	for t in t2_chk t2_chk_hi; do \
	  for v in "build/obj_chk/run_tests_chk:with CHK" "build/obj_desc/run_tests_desc:with IDX"; do \
	    bin=$${v%%:*}; name=$${v##*:}; \
	    out=$$($$bin tests/$$t); rc=$$?; \
	    printf "  %-12s %-9s %s\n" "$$t" "$$name" "$$(echo "$$out" | tail -1)"; \
	    [ $$rc -eq 0 ] || fail=1; \
	  done; \
	done; \
	for t in $(IDXT); do \
	  out=$$(build/obj_desc/run_tests_desc tests/$$t); rc=$$?; \
	  printf "  %-12s %-9s %s\n" "$$t" "with IDX" "$$(echo "$$out" | tail -1)"; \
	  [ $$rc -eq 0 ] || fail=1; \
	done; \
	for t in $(IDXT); do \
	  if build/obj_chk/run_tests_chk tests/$$t > /dev/null 2>&1; then \
	    echo "  ❌ $$t passed on a core WITHOUT IDX: the test checks nothing"; fail=1; \
	  else printf "  %-12s %-9s %s\n" "$$t" "with CHK" "failed, as it should (no IDX) ✅"; fi; \
	done; \
	echo; [ $$fail -eq 0 ] || { echo "THERE ARE FAILURES ❌"; exit 1; }; \
	$(MAKE) --no-print-directory idx-diff && \
	$(MAKE) --no-print-directory equiv && echo && echo "ALL GREEN ✅"

# Decoder equivalence check: all 256 combinations of {IR[31:28] x op} on five
# operand sets. EXACTLY one encoding must differ. RISC5 has no trap on an
# unknown instruction, so taking over someone else's encoding would show up as a
# silent change in the behaviour of old code.
equiv:
	@verilator $(VFLAGS) -o deq_base --top-module RISC5 --Mdir build/obj_deqb $(RTL) $(TB)/decoder_equiv.cpp 2>&1 | grep -E "error:" || true
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -o deq_chk --top-module RISC5 --Mdir build/obj_deqc $(RTL) $(TB)/decoder_equiv.cpp 2>&1 | grep -E "error:" || true
	@./build/obj_deqb/deq_base > build/deq_base.txt
	@./build/obj_deqc/deq_chk  > build/deq_chk.txt
	@python3 tools/cmp_decoder.py build/deq_base.txt build/deq_chk.txt
	@verilator $(VFLAGS) $(DESCDEF) -o deq_desc --top-module RISC5 --Mdir build/obj_deqd $(RTL) $(TB)/decoder_equiv.cpp 2>&1 | grep -E "error:" || true
	@./build/obj_deqd/deq_desc > build/deq_desc.txt
	@echo "  descriptor core:"
	@python3 tools/cmp_decoder.py build/deq_base.txt build/deq_desc.txt 1:1,1:8

# Differential testbench: RTL against the reference emulator, instruction by
# instruction, while booting the real Oberon system.
REFOBJ := build/refobj/risc.o build/refobj/risc-fp.o build/refobj/disk.o
$(REFOBJ): build/refobj/%.o: ext/refemu/%.c
	@mkdir -p build/refobj && cc -O2 -std=c99 -w -c $< -o $@

lockstep: $(REFOBJ)
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_rtl.dsk
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_ref.dsk
	@verilator $(VFLAGS) -CFLAGS "-I../../ext/refemu" -o lockstep --top-module RISC5 \
	  --Mdir build/obj_ls $(RTL) $(TB)/lockstep.cpp \
	  ../../build/refobj/risc.o ../../build/refobj/risc-fp.o ../../build/refobj/disk.o \
	  2>&1 | grep -E "error:" || true
	@./build/obj_ls/lockstep --max=15000000

# System boot on RTL with a screen dump
# Reference checksum of the framebuffer after the system has booted. It matches
# in all builds: native with a file-backed disk, native with an in-memory disk,
# and WASM.
BOOT_CRC := B5DFC933

boot:
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# The same system runs on the core WITH the ISA extension. Found by audit: all
# system-level evidence (lockstep, boot, screen CRC) had been taken only on the
# base core.
lockstep-chk: $(REFOBJ)
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_rtl.dsk
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_ref.dsk
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -CFLAGS "-I../../ext/refemu" -o lockstep_chk \
	  --top-module RISC5 --Mdir build/obj_ls_chk $(RTL) $(TB)/lockstep.cpp \
	  ../../build/refobj/risc.o ../../build/refobj/risc-fp.o ../../build/refobj/disk.o \
	  2>&1 | grep -E "error:" || true
	@./build/obj_ls_chk/lockstep_chk --max=15000000

boot-chk:
	@mkdir -p build
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -o soc_tb_chk --top-module RISC5 --Mdir build/obj_soc_chk $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@./build/obj_soc_chk/soc_tb_chk --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# System boot on the core with the fast FP multiplier (episode 2): the screen
# must match the same reference, and the cycle model must match RTL (the model
# accounts for this variant).
boot-fast:
	@mkdir -p build
	@verilator $(VFLAGS) -DFPMUL_FAST -CFLAGS -DFPMUL_FAST -o soc_tb_fast --top-module RISC5 --Mdir build/obj_soc_fast $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c > build/soc_fast.log 2>&1 || { cat build/soc_fast.log; exit 1; }
	@./build/obj_soc_fast/soc_tb_fast --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# ───────────────────────────────────────────────────────────────────────────
# Episode 2: a language model on RISC5 (13-episode-lm-on-risc5.md, findings 72-78)
# ───────────────────────────────────────────────────────────────────────────
# Cheap check: weights = manifest, and the module on the Norebo emulator
# produces exactly the reference text (risc-fp.c arithmetic). Seconds, fit for CI.
lm-check: $(NOREBO)
	@python3 lm/train.py --check
	@python3 lm/compare.py emu 64 1 2 3

# The same comparison on Wirth's RTL (Norebo on top of Verilator).
lm: $(NOREBO) build/obj_nb/norebo_tb
	@python3 lm/train.py --check
	@python3 lm/compare.py rtl 16 1 7

# The headline numbers: cycles per character, profile, speedup, FMAC ceiling. ~3 minutes.
LM_N ?= 32
lm-profile: $(NOREBO) build/obj_nb/norebo_tb build/obj_nbf/norebo_tb build/obj_nbr/norebo_tb
	@python3 lm/profile.py $(LM_N)

# Stock workload on three cores: the compiler builds itself. ~2 minutes.
lm-stock: build/obj_nb/norebo_tb build/obj_nbf/norebo_tb build/obj_nbr/norebo_tb
	@bash lm/stock.sh

# The model inside the real system (1 MB RAM, disk, windows) on RTL: the system
# itself compiles LM.Mod and runs the command with a middle click. ~4 minutes.
lm-system: $(NOREBO) scripts/lm.txt
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c > build/soc.log 2>&1 || { cat build/soc.log; exit 1; }
	@bash lm/mkdisk.sh
	@cp -f build/lm/oberon-lm.dsk build/lm/oberon-lm-run.dsk
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=130000000 --disk=build/lm/oberon-lm-run.dsk \
	  --persist --script=scripts/lm.txt | grep -E "screen dumped: build/lm|mismatches"
	@python3 lm/outcheck.py build/lm/oberon-lm-run.dsk

# The same in QEMU: functional comparison only (QEMU does not model cycles).
lm-qemu: $(NOREBO)
	@python3 lm/qemu_run.py

scripts/lm.txt: scripts/lm.src tools/mkscript.py tools/keymap.py
	@PYTHONPATH=tools python3 tools/mkscript.py $< > $@
# The same system runs on the descriptor core (episode 14): the stock system
# must boot with the same screen CRC and run in lockstep with the reference, as
# IDX takes an encoding that stock code never emits.
lockstep-desc: $(REFOBJ)
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_rtl.dsk
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_ref.dsk
	@verilator $(VFLAGS) $(DESCDEF) -CFLAGS "-I../../ext/refemu" -o lockstep_desc \
	  --top-module RISC5 --Mdir build/obj_ls_desc $(RTL) $(TB)/lockstep.cpp \
	  ../../build/refobj/risc.o ../../build/refobj/risc-fp.o ../../build/refobj/disk.o \
	  2>&1 | grep -E "error:" || true
	@./build/obj_ls_desc/lockstep_desc --max=15000000

boot-desc:
	@mkdir -p build
	@verilator $(VFLAGS) $(DESCDEF) -o soc_tb_desc --top-module RISC5 --Mdir build/obj_soc_desc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@./build/obj_soc_desc/soc_tb_desc --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# ───────────────────────────────────────────────────────────────────────────
# Full check. The strongest checks (differential testbench, system boot) used to
# be separate targets that nothing depended on, so they were not part of the gate.
# ───────────────────────────────────────────────────────────────────────────
check: pristine test boot boot-chk boot-desc lockstep lockstep-desc selfhost roundtrip bootstrap rebuild book labs
	@echo
	@echo "═══ FULL CHECK PASSED ═══"

# Closing the loop: the Oberon compiler runs on real RTL rather than on the
# emulator and produces byte-identical code.
# The Norebo bridge is C code and is built as C, as a separate object: it
# includes all of norebo.c, which uses designated array initializers that C++
# lacks. g++ on Linux failed on this; clang on macOS let it pass.
NBOBJ := build/nbobj/norebo_bridge.o
$(NBOBJ): tb/norebo_bridge.c ext/norebo/Runtime/norebo.c ext/norebo/Runtime/risc-cpu.h
	@mkdir -p $(@D) && $(CC) -O2 -std=gnu99 -w -c $< -o $@

build/obj_nb/norebo_tb: $(RTL) tb/norebo_tb.cpp $(NBOBJ)
	@mkdir -p build
	@verilator $(VFLAGS) -o norebo_tb --top-module RISC5 --Mdir build/obj_nb $(RTL) $(TB)/norebo_tb.cpp ../../$(NBOBJ)
	@test -x $@ || { echo "BUILD PRODUCED NO BINARY: $@"; exit 1; }

# The same cores with the fast FP multiplier (episode 2): single-cycle and two-cycle.
build/obj_nbf/norebo_tb: $(RTL) tb/norebo_tb.cpp $(NBOBJ)
	@mkdir -p build
	@verilator $(VFLAGS) -DFPMUL_FAST -o norebo_tb --top-module RISC5 --Mdir build/obj_nbf $(RTL) $(TB)/norebo_tb.cpp ../../$(NBOBJ)
	@test -x $@ || { echo "BUILD PRODUCED NO BINARY: $@"; exit 1; }

build/obj_nbr/norebo_tb: $(RTL) tb/norebo_tb.cpp $(NBOBJ)
	@mkdir -p build
	@verilator $(VFLAGS) -DFPMUL_FAST -DFPMUL_FAST_REG -o norebo_tb --top-module RISC5 --Mdir build/obj_nbr $(RTL) $(TB)/norebo_tb.cpp ../../$(NBOBJ)
	@test -x $@ || { echo "BUILD PRODUCED NO BINARY: $@"; exit 1; }

# The fast FP multiplier against the original, bit for bit (finding 73). FPMUL_N
# is the number of random pairs on top of the exhaustive sweep of exponents and
# edge-case mantissas.
FPMUL_N ?= 10000000
fpmul-diff: build/refobj/risc-fp.o
	@mkdir -p build
	@verilator $(VFLAGS) -CFLAGS "-I../../ext/refemu" -o fpmul_diff --top-module fpmul_diff_top \
	  --Mdir build/obj_fmd rtl/FPMultiplier.v rtl/FPMultiplierFast.v tb/fpmul_diff_top.v \
	  $(TB)/fpmul_diff.cpp ../../build/refobj/risc-fp.o > build/fmd.log 2>&1 || { cat build/fmd.log; exit 1; }
	@verilator $(VFLAGS) -DFPMUL_FAST_REG -CFLAGS "-I../../ext/refemu -DFPMUL_FAST_REG" -o fpmul_diff \
	  --top-module fpmul_diff_top --Mdir build/obj_fmr rtl/FPMultiplier.v rtl/FPMultiplierFast.v \
	  tb/fpmul_diff_top.v $(TB)/fpmul_diff.cpp ../../build/refobj/risc-fp.o > build/fmr.log 2>&1 || { cat build/fmr.log; exit 1; }
	@echo "  single-cycle variant:"; ./build/obj_fmd/fpmul_diff $(FPMUL_N)
	@echo "  two-cycle variant (FPMUL_FAST_REG):"; ./build/obj_fmr/fpmul_diff $(FPMUL_N)

selfhost: build/obj_nb/norebo_tb $(NOREBO)
	@bash tools/selfhost_rtl.sh

# Round trip on the REAL output of Wirth's compiler: every code word from the
# .rsc files is disassembled and assembled back, and a bit-exact match is
# required. Depends on selfhost, which produces the object files.
roundtrip:
	@test -f build/self_rtl/ORP.rsc \
	  || { echo "  ❌ no object files, run make selfhost first"; exit 1; }
	@python3 tools/roundtrip.py build/self_rtl/*.rsc build/self_emu/*.rsc

# An image with the toolchain for the labs that the browser is not enough for.
# Editing the processor or the compiler needs Verilator and a build; that is an
# ordinary batch workload, and it runs the same way locally and as a cluster
# job (deploy/k8s/lab-job.yaml).
IMAGE ?= oberon-lab:dev

image:
	@docker build -f deploy/Containerfile -t $(IMAGE) .
	@docker image ls $(IMAGE) --format "  image {{.Repository}}:{{.Tag}}, {{.Size}}"

# Run a lab in a container. The edit is supplied as a directory:
#   make lab WORK=build/labwork TASK=isa
WORK ?= build/labwork
TASK ?= isa

lab:
	@mkdir -p $(WORK)
	@docker run --rm -v "$(PWD)/$(WORK):/work" $(IMAGE) $(TASK)

# Check of the image itself: on a clean tree the lab must pass, on a broken edit
# it must fail. Without the second half the image is useless: a verdict that is
# always green checks nothing.
image-check: image
	@rm -rf build/imgtest && mkdir -p build/imgtest
	@docker run --rm -v "$(PWD)/build/imgtest:/work" $(IMAGE) isa > /dev/null \
	  && echo "  clean tree: passed ✅" \
	  || { echo "  ❌ clean tree did not pass"; exit 1; }
	@mkdir -p build/imgtest/rtl
	@sed 's|(~op\[0\] ? B & C1 : B & ~C1)|(~op[0] ? B \& ~C1 : B \& C1)|' \
	  rtl/RISC5.v > build/imgtest/rtl/RISC5.v
	@cmp -s rtl/RISC5.v build/imgtest/rtl/RISC5.v \
	  && { echo "  ❌ the probe edit did not apply"; exit 1; } || true
	@docker run --rm -v "$(PWD)/build/imgtest:/work" $(IMAGE) isa > /dev/null 2>&1 \
	  && { echo "  ❌ the broken edit passed"; exit 1; } \
	  || echo "  broken edit: failed ✅"

# The course book: docs/book/*.md -> web/book/*.html. Links between chapters and
# links to the labs are checked: a broken link in a textbook is worse than a
# missing chapter, because it looks like it works.
book:
	@python3 tools/mkbook.py

# Site: the same as the Pages deployment does. It checks the contents and local
# links, so it works as a pre-push check and not only as a preview.
site: web book
	@cd .. && ./tools/build-site.sh _site

# Labs: a headless run of each lab's scenarios. A check that is always green or
# always red is useless, so the test requires the intended actions to move a
# lab from "not done" to "done".
labs: web book
	@cd web && node labs-test.mjs
	@cd web && node worker-test.mjs
	@cd web && node bench-test.mjs
	@cd web && node page-test.mjs

# Full rebuild of the system by Oberon inside the system itself, on RTL.
# Three sessions: in batches, then one by one whatever hit trap 4 (heap
# exhaustion inside a command). State is carried between sessions on the disk.
# A heavy run: about a billion instructions, roughly eight minutes.
REBUILD_SRC := build/disksrc

$(REBUILD_SRC):
	@mkdir -p $@
	@python3 -c "import sys; sys.path.insert(0,'tools'); from oberonfs import Image; \
	  img=Image('ext/disk/Oberon-2016-08-02.dsk'); fs=img.files(); \
	  [open('$@/'+n,'wb').write(img.read(h)) for n,h in fs.items() if n.endswith('.Mod')]"

scripts/rebuild1.txt scripts/rebuild2.txt: tools/gen_rebuild.py tools/modorder.py | $(REBUILD_SRC)
	@python3 tools/gen_rebuild.py $(REBUILD_SRC) > /dev/null
	@for n in 1 2; do PYTHONPATH=tools python3 tools/mkscript.py scripts/rebuild$$n.src > scripts/rebuild$$n.txt; done

scripts/rebuild3.txt: scripts/rebuild3.src
	@PYTHONPATH=tools python3 tools/mkscript.py $< > $@

rebuild: scripts/rebuild1.txt scripts/rebuild2.txt scripts/rebuild3.txt
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/rebuild.dsk
	@echo "  rebuilding the system inside the system: 3 sessions, ~8 minutes"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=430000000 \
	  --disk=build/rebuild.dsk --persist --script=scripts/rebuild1.txt | grep -c "screen dumped" | xargs echo "    session 1, snapshots:"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=450000000 \
	  --disk=build/rebuild.dsk --persist --script=scripts/rebuild2.txt | grep -c "screen dumped" | xargs echo "    session 2, snapshots:"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=210000000 \
	  --disk=build/rebuild.dsk --persist --script=scripts/rebuild3.txt | grep -c "screen dumped" | xargs echo "    session 3, snapshots:"
	@python3 tools/check_rebuild.py ext/disk/Oberon-2016-08-02.dsk build/rebuild.dsk
	@cp -f build/rebuild.dsk build/rebuild_boot.dsk
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=12000000 \
	  --disk=build/rebuild_boot.dsk --expect-crc=$(BOOT_CRC) | grep -E "screen matches|❌"

# The reference disk image is the source of truth. The disk emulator writes real
# sectors into the image, so a run accidentally started directly on it silently
# corrupts the original. The boot check does not catch this: its checksum
# matches on the corrupted image too.
pristine:
	@cd ext/disk && shasum -a 256 -c SHA256SUMS >/dev/null \
	  && echo "  reference disk image ✅" \
	  || { echo "  ❌ reference disk image modified: restore it from upstream"; exit 1; }

# Bootstrap inside the system itself: not a single line of code from the host in
# the loop, only mouse and keyboard. Two compiler generations must match.
# A heavy run: 715 million instructions, about four minutes.
scripts/gen2_sep.txt: scripts/gen2_sep.src tools/mkscript.py tools/keymap.py
	@PYTHONPATH=tools python3 tools/mkscript.py $< > $@

bootstrap: scripts/gen2_sep.txt
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@echo "  bootstrap inside the system: 715 million instructions, ~4 minutes"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=715000000 \
	  --script=scripts/gen2_sep.txt | grep -E "instructions|mismatches"
	@python3 tools/check_bootstrap.py build/g2_gen2.pbm

# The Sky130 cell library (Apache-2.0) is 12 MB and is fetched on demand.
# The former Nangate45 may not be redistributed, see THIRD-PARTY.md.
SKY130 := syn/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
SKY130_URL := https://raw.githubusercontent.com/The-OpenROAD-Project/OpenROAD-flow-scripts/master/flow/platforms/sky130hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib

lib: $(SKY130)
$(SKY130):
	@mkdir -p syn/lib && curl -fsSL -o $@ $(SKY130_URL) \
	  && echo "  Sky130 cell library downloaded ($$(du -h $@ | cut -f1))"

syn: $(SKY130)
	@python3 syn/sweep.py

# ⚠ Code generator patches live in patches/, NOT in build/; otherwise a single
# clean destroys all configurations along with a series of measurements (found
# by audit).
clean:
	@rm -rf build tests/*.bin tests/*.chk
	@echo "code generator patches are kept in patches/; to restore: make configs"

# Restore the configuration working directories from the versioned patches
configs:
	@for c in A C D E; do mkdir -p build/cfg$$c && cp patches/ORG-cfg$$c.Mod build/cfg$$c/ORG.Mod; done
	@mkdir -p build/cfgB
	@echo "configurations restored from patches/ (B is stock, no patch)"
