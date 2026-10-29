// Builds what the RED, GREEN, BLUE and YELLOW page (site/red/) needs, with the
// same clang the page itself runs, compiled to WebAssembly:
//
//   redc.wasm, greenc.wasm  the two compilers, from their seeds
//   bluec.wasm, yellowc.wasm  the BLUE and YELLOW translators, from their seeds
//   prelude.yel             the YELLOW standard prelude, put before every program
//   toolchain.bin           zlib: the runtime object, its header, the libc
//                           headers a translated program includes, libc and
//                           the compiler builtins for wasm32-wasip1-threads
//   examples.js             the example programs, read from the repository
//
// The libc comes from wasi-sdk: the clang package carries a sysroot without
// threads. Both downloads are pinned by checksum.
//
//   node build.mjs            write the files into site/red/
//   node build.mjs --check    build and compare with what is committed
import { runClang } from '@yowasp/clang';
import { execFileSync } from 'node:child_process';
import crypto from 'node:crypto';
import fs from 'node:fs';
import path from 'node:path';
import zlib from 'node:zlib';
import { CFLAGS, CLANG_VERSION, ldflags } from '../../../site/red/flags.js';
import { pack, unpack, tree } from '../../../site/red/pack.js';

const here = path.dirname(new URL(import.meta.url).pathname);
const A = path.resolve(here, '..');              // impl/ada-colors
const ROOT = path.resolve(A, '../..');
const SITE = path.join(ROOT, 'site/red');
const CACHE = path.join(here, '.cache');
const check = process.argv.includes('--check');

const pkg = JSON.parse(fs.readFileSync(path.join(here, 'node_modules/@yowasp/clang/package.json')));
if (pkg.version !== CLANG_VERSION) throw new Error(`clang ${pkg.version} installed, the page uses ${CLANG_VERSION}`);

const SDK = 'https://github.com/WebAssembly/wasi-sdk/releases/download/wasi-sdk-34/';
const DOWNLOADS = {
  'wasi-sysroot-34.0.tar.gz': '9d813544eeebe38b7b8f2244ed591de46b6db812c6dd1a257ff9f0d2a905a2be',
  'libclang_rt-34.0.tar.gz': 'eee3e634dcf71aa22b1333391623cf5c9965a637dc428a27b1a858c026c587f1',
};
const T = 'wasm32-wasip1-threads';

function fetchPinned(name) {
  fs.mkdirSync(CACHE, { recursive: true });
  const file = path.join(CACHE, name);
  if (!fs.existsSync(file)) execFileSync('curl', ['-sSfL', '-o', file, SDK + name]);
  const sum = crypto.createHash('sha256').update(fs.readFileSync(file)).digest('hex');
  if (sum !== DOWNLOADS[name]) throw new Error(`${name}: sha256 ${sum}, expected ${DOWNLOADS[name]}`);
  return file;
}

function extract() {
  const dir = path.join(CACHE, 'x');
  if (!fs.existsSync(path.join(dir, 'done'))) {
    fs.mkdirSync(dir, { recursive: true });
    execFileSync('tar', ['xzf', fetchPinned('wasi-sysroot-34.0.tar.gz'), '-C', dir,
      `wasi-sysroot-34.0/include/${T}`, `wasi-sysroot-34.0/lib/${T}`]);
    execFileSync('tar', ['xzf', fetchPinned('libclang_rt-34.0.tar.gz'), '-C', dir,
      `libclang_rt-34.0/wasm32-unknown-wasip1-threads`]);
    fs.writeFileSync(path.join(dir, 'done'), '');
  }
  return dir;
}

function readTree(dir, skip = () => false) {
  const t = {};
  for (const e of fs.readdirSync(dir, { withFileTypes: true })) {
    if (skip(e.name)) continue;
    const p = path.join(dir, e.name);
    t[e.name] = e.isDirectory() ? readTree(p) : fs.readFileSync(p);
  }
  return t;
}

const x = extract();
const inc = path.join(x, 'wasi-sysroot-34.0/include', T);
const lib = path.join(x, 'wasi-sysroot-34.0/lib', T);
const LIBS = ['crt1-command.o', 'libc.a', 'libsetjmp.a'];
const BUILTINS = fs.readFileSync(path.join(x, 'libclang_rt-34.0/wasm32-unknown-wasip1-threads/libclang_rt.builtins.a'));
const rtFiles = { 'paleo.c': fs.readFileSync(path.join(A, 'rt/paleo.c')), 'paleo.h': fs.readFileSync(path.join(A, 'rt/paleo.h')) };

// the full sysroot is used here; the page gets only what a program needs
const work = {
  sysroot: {
    include: { [T]: readTree(inc, (n) => n === 'eh' || n === 'noeh' || n === 'c++') },
    lib: { [T]: Object.fromEntries(LIBS.map((n) => [n, fs.readFileSync(path.join(lib, n))])) },
  },
  rtlib: { 'libclang_rt.builtins.a': BUILTINS },
  rt: rtFiles,
};

const quiet = { stderr: (b) => b && process.stderr.write(b) };
async function clang(args, extra = {}) {
  return await runClang(['clang', ...args], { ...work, ...extra }, quiet);
}

console.log('runtime');
const paleo = (await clang([...CFLAGS, '-c', '/rt/paleo.c', '-o', '/paleo.o']))['paleo.o'];

async function compiler(name, seed) {
  console.log(name);
  const c = fs.readFileSync(path.join(A, seed));
  const o = (await clang([...CFLAGS, '-c', `/${name}.c`, '-o', `/${name}.o`], { [`${name}.c`]: c }))[`${name}.o`];
  const out = await clang([`/${name}.o`, '/paleo.o', ...ldflags(`/${name}.wasm`, 16)], { [`${name}.o`]: o, 'paleo.o': paleo });
  return out[`${name}.wasm`];
}
const redc = await compiler('redc', 'red/seed/redc.c');
const greenc = await compiler('greenc', 'green/seed/greenc.c');
const bluec = await compiler('bluec', 'blue/seed/bluec.c');
const yellowc = await compiler('yellowc', 'yellow/seed/yellowc.c');

// The headers a translated program includes: paleo.h, math.h, and for BLUE and
// YELLOW float.h, string.h and stdlib.h, and whatever those pull in. Taken from
// the dependency list clang writes.
const probe = await clang([...CFLAGS, '-c', '/probe.c', '-o', '/probe.o', '-MD', '-MF', '/probe.d'],
  { 'probe.c': ['"paleo.h"', '<math.h>', '<float.h>', '<string.h>', '<stdlib.h>'].map((h) => `#include ${h}\n`).join('') });
const depText = probe['probe.d'];
const deps = (typeof depText === 'string' ? depText : new TextDecoder().decode(depText)).replace(/\\\n/g, ' ').split(/\s+/)
  .filter((p) => p.startsWith(`/sysroot/include/${T}/`));
const toolchain = { 'rt/paleo.h': rtFiles['paleo.h'], 'paleo.o': paleo, 'rtlib/libclang_rt.builtins.a': BUILTINS };
for (const d of deps) toolchain[d.slice(1)] = fs.readFileSync(path.join(inc, d.slice(`/sysroot/include/${T}/`.length)));
for (const n of LIBS) toolchain[`sysroot/lib/${T}/${n}`] = fs.readFileSync(path.join(lib, n));

// Examples: the labs, the NonStop kernel, the Kubernetes loops, the examples of
// chapter 14 of the RED manual, GREEN tasking, THE and its contrast programs in
// BLUE and YELLOW, and for BLUE and YELLOW some tests and programs of their
// 1978 reports.
const LANGS = { '.red': 'red', '.grn': 'green', '.blu': 'blue', '.yel': 'yellow' };
const read = (p) => fs.readFileSync(path.join(A, p), 'utf8');
const sed = (script, text) => execFileSync('sed', ['-f', path.join(A, script)],
  { input: text, env: { ...process.env, LC_ALL: 'C' } }).toString();
const fixed = (script, text) => fs.existsSync(path.join(A, script)) ? sed(script, text) : text;
const part = (p) => fs.existsSync(path.join(A, p)) ? read(p) : '';

// BLUE corpus, as blue/corpus/run.sh makes it: the original with its fixes,
// put in its driver at the %%ORIGINAL%% line
function blueCorpus(n) {
  const orig = fixed(`blue/corpus/fix/${n}.sed`, read(`blue/corpus/orig/${n}.blu`));
  const lines = read(`blue/corpus/main/${n}.blu`).split(/(?<=\n)/);
  return lines.map((l) => l === '%%ORIGINAL%%\n' ? orig.replace(/([^\n])$/, '$1\n') : l).join('');
}
// YELLOW corpus, as yellow/corpus/run.sh makes it, without the standard
// prelude (the page puts it in front of every YELLOW program)
function yellowCorpus(n) {
  return (/^E(1[4-9]|2)/.test(n) ? read('yellow/corpus/original/E13-conventions.yel') : '') +
    part(`yellow/corpus/${n}.pre.yel`) +
    fixed(`yellow/corpus/${n}.sed`, read(`yellow/corpus/original/${n}.yel`)) +
    part(`yellow/corpus/${n}.post.yel`);
}

// the examples of chapter 14 of the RED manual, as red/manual/run/run.sh makes them
const manualBody = (n) => fixed(`red/manual/run/${n}.sed`,
  read(`red/manual/original/${n}.red`).split('% -----\n').slice(1).join('% -----\n'));
const R = (f) => part(`red/manual/run/${f}`);
const RED_MANUAL = {
  '14.1.1-pulsed-events': () => manualBody('14.1.1-pulsed-events') + R('14.1.1-main.red'),
  '14.1.3-replies': () => R('14.1.3-head.red') + manualBody('14.1.3-replies') + R('14.1.3-main.red'),
  '14.1.4-keyboard': () => R('14.1.4-head.red') + manualBody('14.1.4-keyboard') + R('14.1.4-main.red'),
  '14.3.1-mailboxes': () => R('14.3.1-units.red') + manualBody('14.3.1-mailboxes') + R('14.3.1-main.red'),
  '14.4.1-monitors': () => manualBody('14.4.1-monitor-defs') + R('14.4.1-head.red') +
    manualBody('14.4.1-monitor-use').replace(/^/gm, '   ').replace(/^   $/gm, '').replace(/   $/, '') +
    R('14.4.1-main.red'),
  '14.5.3-round-robin': () => manualBody('14.5.3-round-robin') + R('14.5.3-main.red'),
};

const labs = (lang, ext) => fs.readdirSync(path.join(A, `labs/${lang}`)).filter((f) => f.endsWith(ext)).sort()
  .map((f) => `labs/${lang}/${f}`);
const contrast = (lang, ext) => ['failure', 'readers', 'timeout'].map((n) => `os/contrast/${n}_${lang}${ext}`);
const EXAMPLES = [
  ...labs('red', '.red'),
  'os/pairs.red', 'kube/kube.red', 'kube/kube_ha.red',
  'green/tests/tasking.grn', 'kube/kube_green.grn',
  ...labs('blue', '.blu'),
  'os/the.blu', 'os/the_kube_blue.blu', 'kube/kube_blue.blu', ...contrast('blue', '.blu'),
  ...labs('yellow', '.yel'),
  'os/the_yellow.yel', 'os/the_kube_yellow.yel', 'kube/kube_yellow.yel', ...contrast('yellow', '.yel'),
  'blue/tests/basics.blu', 'blue/tests/generics.blu', 'blue/tests/modules.blu',
  'yellow/tests/basics.yel', 'yellow/tests/templates.yel', 'yellow/tests/processes.yel', 'yellow/tests/parallel.yel',
].map((p) => ({ path: p, source: read(p), input: part(p.replace(/\.\w+$/, '.in')) }));
// the assembled programs: their path is the one of their .out file
for (const [n, make] of Object.entries(RED_MANUAL))
  EXAMPLES.push({ path: `red/manual/run/${n}.red`, source: make(), input: part(`red/manual/run/${n}.in`) });
for (const n of ['integrate', 'generic-stack', 'producer-consumer', 'sum', 'appendix-c'])
  EXAMPLES.push({ path: `blue/corpus/${n}.blu`, source: blueCorpus(n), input: part(`blue/corpus/${n}.in`) });
for (const n of ['H1893-arraysum', 'E14-realtime', 'E17-exceptions', 'E22-searchtree', 'E26-exchangesort'])
  EXAMPLES.push({ path: `yellow/corpus/${n}.yel`, source: yellowCorpus(n), input: '' });
const ORDER = Object.values(LANGS);
const examples = EXAMPLES.map(({ path: p, source, input }) => ({
  path: p, lang: LANGS[path.extname(p)], source, ...(input ? { input } : {}),
})).sort((x, y) => ORDER.indexOf(x.lang) - ORDER.indexOf(y.lang));
const examplesJs = '// Generated by impl/ada-colors/web/build.mjs from the repository; do not edit.\n' +
  'export const EXAMPLES = ' + JSON.stringify(examples, null, 1) + ';\n';

const outputs = {
  'redc.wasm': redc,
  'greenc.wasm': greenc,
  'bluec.wasm': bluec,
  'yellowc.wasm': yellowc,
  'prelude.yel': fs.readFileSync(path.join(A, 'yellow/lib/prelude.yel')),
  'toolchain.bin': zlib.deflateSync(pack(toolchain), { level: 9 }),
  'examples.js': Buffer.from(examplesJs),
};

if (check) {
  // zlib output may differ between zlib builds, so the toolchain is compared unpacked
  let bad = 0;
  for (const [name, bytes] of Object.entries(outputs)) {
    const file = path.join(SITE, name);
    const have = fs.existsSync(file) ? fs.readFileSync(file) : Buffer.alloc(0);
    let same;
    if (name === 'toolchain.bin') {
      const a = unpack(zlib.inflateSync(have)), b = toolchain;
      same = Object.keys(a).length === Object.keys(b).length &&
        Object.keys(b).every((k) => a[k] && Buffer.compare(Buffer.from(a[k]), Buffer.from(b[k])) === 0);
    } else same = Buffer.compare(have, Buffer.from(bytes)) === 0;
    console.log(`${same ? 'ok' : 'DIFFERS'} site/red/${name}`);
    if (!same) bad = 1;
  }
  process.exit(bad);
}
for (const [name, bytes] of Object.entries(outputs)) {
  fs.writeFileSync(path.join(SITE, name), bytes);
  console.log(`site/red/${name}: ${bytes.length} bytes`);
}
