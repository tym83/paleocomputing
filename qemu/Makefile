# The RISC5 target for QEMU: our own build.
QEMU_DECODETREE ?= /tmp/decodetree.py

.PHONY: check decodetree help build diff fp

help:
	@echo "  make check   verify the decoder with QEMU's own generator"
	@echo "  make build   build qemu-system-risc5 in a container"
	@echo "  make diff    compare QEMU against the model taken from the real RTL"
	@echo "  make fp      compare floating point against the risc-fp.c reference"

# Download the generator if it is missing: it is small and lives in the QEMU tree.
$(QEMU_DECODETREE):
	@curl -fsSL -o $@ https://raw.githubusercontent.com/qemu/qemu/master/scripts/decodetree.py

# ⚠ The check must be able to fail. The generator complains if even one bit of
# an instruction is left unspecified; that is exactly how the decoder used to
# break, while don't-care bits were marked with a dot instead of a dash.
check: $(QEMU_DECODETREE)
	@python3 $(QEMU_DECODETREE) --output-null target/risc5/insn.decode \
	  && echo "  decoder accepted by the QEMU generator ✅"
	@python3 $(QEMU_DECODETREE) -o /tmp/risc5-decode.c.inc target/risc5/insn.decode
	@n=$$(grep -c 'trans_' /tmp/risc5-decode.c.inc); \
	  test "$$n" -ge 5 && echo "  decode functions: $$n (one per format) ✅" \
	  || { echo "  ❌ fewer than five formats"; exit 1; }

# Build in a container: QEMU's dependencies are not installed on the developer's machine.
# QEMU_SRC is where the tree is cloned; by default next door, in .qemu-work.
QEMU_SRC ?= ../.qemu-work
# ⚠ The QEMU tree is pinned by COMMIT, not by branch or tag.
#
# Not by branch: master today and master a week later are different machines, and a
# comparison with the RTL that cannot be reproduced proves nothing.
#
# Not by tag either: the target is written against current master, where headers live in
# hw/core/ and system/. In 10.2 they are still in hw/ and sysemu/, in 9.2 even more so, and
# the build fails on the very first include. Both were tried.
QEMU_REF ?= 942229961efea74b153c44c59188eb08375f10f1

build:
	@test -d $(QEMU_SRC) || { mkdir -p $(QEMU_SRC) && cd $(QEMU_SRC) && \
	  git init -q && git remote add origin https://gitlab.com/qemu-project/qemu.git && \
	  git fetch --depth 1 -q origin $(QEMU_REF) && git checkout -q FETCH_HEAD; }
	@./graft.sh $(QEMU_SRC)
	@docker build -q -f build/Containerfile -t qemu-build:risc5 . >/dev/null
	@docker run --rm -v "$$(cd $(QEMU_SRC) && pwd):/src" qemu-build:risc5 \
	  'cd /src && test -d build || ./configure --target-list=risc5-softmmu \
	     --disable-docs --disable-tools --disable-guest-agent \
	     --without-default-features --enable-vnc --enable-pixman >/dev/null; ninja -C build'
	@echo "  built: $(QEMU_SRC)/build/qemu-system-risc5"

# The main check of the target: not "it builds" but "it computes the same as the hardware".
diff:
	@python3 test/compare.py $(abspath $(QEMU_SRC))

# Floating point against the risc-fp.c reference: table, ROM, run, comparison and
# negative control in one target. This used to be done once by hand, and an
# edit to fp.c could silently break the arithmetic.
fp:
	@python3 test/fp_check.py $(abspath $(QEMU_SRC))
