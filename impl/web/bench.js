/*
 * The headline benchmark: what an array bounds check costs.
 *
 * The same loop body, built two ways (tools/gen_bounds_bench.py):
 *   B — as the compiler emits it today: SUB + BCC, two instructions per indexing
 *   E — the same with a single CHKS instruction, understood by the extended hardware
 *
 * The program is placed in ROM and runs from reset, so the measurement needs
 * neither the system nor a disk image, only the processor model.
 *
 * One module serves both the page and node: the number computed in the test
 * must match the number the reader sees.
 */

/**
 * Runs the program for EXACTLY `budget` instructions and returns the counters.
 *
 * ⚠ Not "until the program ends": the end is caught only to the nearest step, and
 * an idle tail gets into the numbers. On the first attempt this made the difference
 * between configurations come out ten times larger than the real one. The loop is
 * longer than the budget, and completed iterations are read from a counter register.
 */
export async function runBench(factory, prom, params) {
  const M = await factory();
  const pP = M._malloc(prom.length * 4);
  M.HEAPU8.set(new Uint8Array(prom.buffer, prom.byteOffset, prom.length * 4), pP);
  // No disk: the program never accesses it.
  const pI = M._malloc(1024);
  M._soc_init(pP, prom.length, pI, 1024);
  M._free(pP); M._free(pI);

  M._soc_run(params.budget);
  const left = M._soc_reg(params.counter) >>> 0;
  return {
    cycles: M._soc_cycles(), insns: M._soc_insns(),
    iterations: params.iterations - left,
    trapped: (M._soc_ram(params.done + 4) >>> 0) === 0xBAD,
  };
}

/** Breakdown of the result: what a single check costs. */
export function perCheck(b, e) {
  // The work is the same and the instruction budget is the same, so we must compare
  // the COST PER ITERATION, not the total: within one budget the configurations
  // complete a different number of iterations.
  const bc = b.cycles / b.iterations, ec = e.cycles / e.iterations;
  const bi = b.insns / b.iterations, ei = e.insns / e.iterations;
  return {
    cyclesB: bc, cyclesE: ec, insnsB: bi, insnsE: ei,
    cyclesPer: bc - ec, insnsPer: bi - ei,
    percent: ((bc - ec) / bc) * 100,
  };
}
