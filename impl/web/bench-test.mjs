// Test of the headline benchmark: the numbers the reader will see are computed here.
//
// A test that just prints numbers is useless, so expectations are stated here:
// the programs must run to completion, the hardware check must save exactly one
// instruction and one cycle per indexing, and the useful work must match
// (the accumulator is in R4).
import fs from 'node:fs';
import { runBench, perCheck } from './bench.js';

// ⚠ We read what ships to the READER, not what is generated in tests/: those files
// are built in place and do not exist at all in a fresh tree. The test must count
// exactly the same bytes as the page.
const P = JSON.parse(fs.readFileSync('bench_bounds.json', 'utf8'));
// ⚠ For small files `fs.readFileSync` returns a VIEW into node's shared pool, not
// its own buffer: `.buffer` there is the whole pool, and a second read in a row
// gives someone else's bytes. The program is then assembled from garbage and simply
// never finishes, silently, without a single error. We take exactly our own window.
const load = n => {
  const b = fs.readFileSync(`bench_bounds_${n}.bin`);
  return new Uint32Array(b.buffer, b.byteOffset, b.length / 4);
};

let bad = 0;
const say = (ok, s) => { console.log(`  ${ok ? '✅' : '❌'} ${s}`); if (!ok) bad++; };

const b = await runBench((await import('./risc5.js')).default, load('b'), P);
const e = await runBench((await import('./risc5-chk.js')).default, load('e'), P);

say(b.iterations > 1000 && !b.trapped,
    `B: ${b.iterations} iterations in ${b.insns} instructions, ${b.cycles} cycles`);
say(e.iterations > 1000 && !e.trapped,
    `E: ${e.iterations} iterations in ${e.insns} instructions, ${e.cycles} cycles`);

const d = perCheck(b, e);
say(Math.abs(d.insnsB - 10) < 0.01, `a B iteration costs ${d.insnsB.toFixed(3)} instructions (expected 10)`);
say(Math.abs(d.insnsE - 9) < 0.01,  `an E iteration costs ${d.insnsE.toFixed(3)} instructions (expected 9)`);
say(Math.abs(d.insnsPer - 1) < 0.01,
    `the hardware check saves ${d.insnsPer.toFixed(3)} instructions per indexing`);
say(d.cyclesPer > 0.9 && d.cyclesPer < 1.1,
    `and ${d.cyclesPer.toFixed(3)} cycles: ${d.cyclesB.toFixed(2)} → ${d.cyclesE.toFixed(2)}`);
say(d.percent > 5 && d.percent < 20,
    `on this workload bounds checking costs ${d.percent.toFixed(1)}% of cycles`);

console.log(bad ? `\n❌ headline benchmark: ${bad} mismatches` : '\n✅ headline benchmark numbers agree');
process.exit(bad ? 1 : 0);
