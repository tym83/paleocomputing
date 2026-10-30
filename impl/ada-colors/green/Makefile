# GREEN (Preliminary Ada, 1979): greenc, a GREEN compiler written in GREEN.
#
# greenc is built from a seed: seed/greenc.c is the C that the previous greenc
# made of itself. `make fixpoint` rebuilds greenc from its own source twice and
# checks that the two C files are identical; `make seed` refreshes the seed;
# `make genesis` replays the very first step, from the Python bootstrap.
CC ?= cc
# the C that greenc makes must have agreeing pointer and integer types: a
# STRING component once went by reference to an int formal (clang for wasm
# rejects that; natively it wrote four bytes into one)
STRICT = -Wno-everything -Werror=incompatible-pointer-types -Werror=int-conversion
CFLAGS ?= -std=gnu11 -O1 $(STRICT)
B = build
RTC = ../rt/paleo.c
INC = -I../rt
LINK = -lpthread -lm

all: fixpoint

$(B)/greenc.grn: greenc/*.grn
	@mkdir -p $(B)
	cat greenc/*.grn > $@

$(B)/greenc0: seed/greenc.c $(RTC) ../rt/paleo.h
	@mkdir -p $(B)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/greenc1.c: $(B)/greenc0 $(B)/greenc.grn
	$(B)/greenc0 < $(B)/greenc.grn > $@ || (tail -1 $@; rm -f $@; false)
$(B)/greenc1: $(B)/greenc1.c $(RTC)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/greenc2.c: $(B)/greenc1 $(B)/greenc.grn
	$(B)/greenc1 < $(B)/greenc.grn > $@ || (tail -1 $@; rm -f $@; false)
$(B)/greenc2: $(B)/greenc2.c $(RTC)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/greenc3.c: $(B)/greenc2 $(B)/greenc.grn
	$(B)/greenc2 < $(B)/greenc.grn > $@ || (tail -1 $@; rm -f $@; false)

fixpoint: $(B)/greenc2.c $(B)/greenc3.c
	cmp $(B)/greenc2.c $(B)/greenc3.c && echo "fixed point: greenc2.c == greenc3.c"
	cp $(B)/greenc2 $(B)/greenc

seed: fixpoint
	cp $(B)/greenc2.c seed/greenc.c

# the first step: the Python bootstrap translates the first greenc
genesis:
	@mkdir -p $(B)/genesis
	python3 boot/greenboot.py genesis/greenc.grn > $(B)/genesis/greenc0.c
	$(CC) $(CFLAGS) $(INC) $(B)/genesis/greenc0.c $(RTC) -o $(B)/genesis/greenc0 $(LINK)
	$(B)/genesis/greenc0 < genesis/greenc.grn > $(B)/genesis/greenc1.c
	cmp $(B)/genesis/greenc1.c genesis/greenc1.c && echo "genesis reproduced"

test: fixpoint
	tests/run.sh

clean:
	rm -rf $(B)
.PHONY: all fixpoint seed genesis test clean
