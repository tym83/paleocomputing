# BLUE (SofTech, 15 Feb 1978): bluec, a BLUE translator written in BLUE.
#
# bluec is built from a seed: seed/bluec.c is the C that the previous bluec
# made of itself. `make fixpoint` rebuilds bluec from its own source twice and
# checks that the two C files are identical; `make seed` refreshes the seed;
# `make genesis` replays the very first step, from the Python bootstrap.
CC ?= cc
CFLAGS ?= -std=gnu11 -O1 -w
B = build
RTC = ../rt/paleo.c
INC = -I../rt
LINK = -lpthread -lm

all: fixpoint

$(B)/bluec.blu: bluec/*.blu
	@mkdir -p $(B)
	cat bluec/*.blu > $@

$(B)/bluec0: seed/bluec.c $(RTC) ../rt/paleo.h
	@mkdir -p $(B)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/bluec1.c: $(B)/bluec0 $(B)/bluec.blu
	$(B)/bluec0 < $(B)/bluec.blu > $@ || (tail -1 $@; rm -f $@; false)
$(B)/bluec1: $(B)/bluec1.c $(RTC)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/bluec2.c: $(B)/bluec1 $(B)/bluec.blu
	$(B)/bluec1 < $(B)/bluec.blu > $@ || (tail -1 $@; rm -f $@; false)
$(B)/bluec2: $(B)/bluec2.c $(RTC)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/bluec3.c: $(B)/bluec2 $(B)/bluec.blu
	$(B)/bluec2 < $(B)/bluec.blu > $@ || (tail -1 $@; rm -f $@; false)

# bluec1 may differ from the seed's output when bluec gained a feature; bluec2
# and bluec3 are both made by a translator built from the current source
fixpoint: $(B)/bluec2.c $(B)/bluec3.c
	cmp $(B)/bluec2.c $(B)/bluec3.c && echo "fixed point: bluec2.c == bluec3.c"
	cp $(B)/bluec2 $(B)/bluec

seed: fixpoint
	cp $(B)/bluec2.c seed/bluec.c

# the first step: the Python bootstrap translates the first bluec
genesis:
	@mkdir -p $(B)/genesis
	python3 boot/blueboot.py genesis/bluec.blu > $(B)/genesis/bluec0.c
	$(CC) $(CFLAGS) $(INC) $(B)/genesis/bluec0.c $(RTC) -o $(B)/genesis/bluec0 $(LINK)
	$(B)/genesis/bluec0 < genesis/bluec.blu > $(B)/genesis/bluec1.c
	cmp $(B)/genesis/bluec1.c genesis/bluec1.c && echo "genesis reproduced"

test: fixpoint
	tests/run.sh

clean:
	rm -rf $(B)
.PHONY: all fixpoint seed genesis test clean
