/* Runs the directed tests (tests/*.bin + .chk) on the Norebo processor, the
   emulator all compilation measurements were taken on (ext/norebo/Runtime/
   risc-cpu.c). Same program and same expectations as tb/run_tests.cpp on
   RTL: this way three descriptions of an instruction (the generator's model, RTL
   and the emulator) are checked against the same numbers. Needed above all for IDX
   (episode 14): compilation measurements with descriptors are valid only if the
   emulator executes IDX the way the hardware does.

   risc-cpu.c is included whole: risc_single_step in it is static.           */
#include "../ext/norebo/Runtime/risc-cpu.c"
#include <stdio.h>

#define ORG 0x00FFE000u
#define MEMW (1u << 22)                         /* 16 MB in words: the whole 24-bit address */
static uint32_t *mem;

static uint32_t rp(struct RISC *r, uint32_t a) { (void)r; return mem[a & (MEMW - 1)]; }
static uint32_t rw(struct RISC *r, uint32_t a) { (void)r; return mem[(a >> 2) & (MEMW - 1)]; }
static uint32_t rb(struct RISC *r, uint32_t a) { return (rw(r, a) >> (8 * (a & 3))) & 0xFF; }
static void ww(struct RISC *r, uint32_t a, uint32_t v) { (void)r; mem[(a >> 2) & (MEMW - 1)] = v; }
static void wb(struct RISC *r, uint32_t a, uint32_t v) {
  uint32_t *w = &mem[(a >> 2) & (MEMW - 1)]; int s = 8 * (a & 3);
  *w = (*w & ~(0xFFu << s)) | ((v & 0xFF) << s); (void)r;
}

int main(int argc, char **argv) {
  if (argc < 2) { fprintf(stderr, "usage: emu_tests tests/NAME\n"); return 2; }
  char path[512]; mem = calloc(MEMW, 4);
  snprintf(path, sizeof path, "%s.bin", argv[1]);
  FILE *f = fopen(path, "rb"); if (!f) { printf("no %s\n", path); return 1; }
  size_t n = fread(&mem[ORG >> 2], 4, 0x800, f); fclose(f);
  struct { int at; char nm[64]; uint32_t v; int fired; } e[4096]; int ne = 0;
  snprintf(path, sizeof path, "%s.chk", argv[1]);
  if ((f = fopen(path, "r"))) {
    char line[256]; long long v;
    while (fgets(line, sizeof line, f) && ne < 4096)
      if (line[0] != '#' && sscanf(line, "%d %63s %lld", &e[ne].at, e[ne].nm, &v) == 3)
        { e[ne].v = (uint32_t)v; e[ne].fired = 0; ne++; }
    fclose(f);
  }
  struct RISC r; memset(&r, 0, sizeof r); r.PC = ORG >> 2;
  const struct RISC_IO io = { rp, rw, rb, ww, wb };
  int fails = 0, done = 0;
  for (size_t k = 0; k < n * 4 + 64; k++) {
    uint32_t pc0 = r.PC; uint64_t c0 = risc_cycles;
    risc_single_step(&io, &r);
    uint32_t last = (uint32_t)(risc_cycles - c0), here = r.PC - (ORG >> 2);
    for (int i = 0; i < ne; i++) {
      if (e[i].fired || (uint32_t)e[i].at != here) continue;
      e[i].fired = 1; done++;
      const char *m = e[i].nm; uint32_t got;
      if (!strcmp(m, "CYCLES")) got = last;
      else if (!strcmp(m, "N")) got = r.N; else if (!strcmp(m, "Z")) got = r.Z;
      else if (!strcmp(m, "C")) got = r.C; else if (!strcmp(m, "V")) got = r.V;
      else if (!strcmp(m, "H")) got = r.H;
      else if (m[0] == 'R') got = r.R[atoi(m + 1) & 15];
      else { printf("  ⚠ %s is not checked by the emulator\n", m); continue; }
      if (got != e[i].v) {
        printf("  ❌ word %d: %s = %u, expected %u\n", e[i].at, m, got, e[i].v); fails++;
      }
    }
    if (r.PC == pc0) break;                      /* HALT = B . */
  }
  if (done != ne) { printf("  ❌ %d of %d expectations fired\n", done, ne); fails += ne - done; }
  printf("  Norebo emulator: checked %d/%d | failures %d  %s\n", done, ne, fails, fails ? "❌" : "✅");
  return fails ? 1 : 0;
}
