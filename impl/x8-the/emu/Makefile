CC ?= cc
CFLAGS ?= -std=c11 -O2 -Wall -Wextra -Wno-unused-parameter
x8emu: main.c x8.c charon.c x8.h charon.h
	$(CC) $(CFLAGS) -o $@ main.c x8.c charon.c
clean:
	rm -f x8emu

# The browser build, with the emscripten image of the series (see
# .github/workflows/x8-the.yml): the wasm and its loader go to ../web.
WEBFUNCS = _x8w_boot,_x8w_run,_x8w_key,_x8w_out,_x8w_cycles,_x8w_drum,_x8w_halted,_x8w_errnum,_x8w_iv,_x8w_dynstop,_x8w_core,_malloc,_free
web: x8.c charon.c web.c x8.h charon.h
	emcc -std=c11 -O2 -o ../web/x8.js x8.c charon.c web.c \
	  -sMODULARIZE=1 -sEXPORT_NAME=X8Module -sENVIRONMENT=web,worker \
	  -sINITIAL_MEMORY=33554432 -sEXPORTED_FUNCTIONS=$(WEBFUNCS) \
	  -sEXPORTED_RUNTIME_METHODS=HEAPU8,HEAPU32
