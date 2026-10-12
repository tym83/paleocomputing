// Builds what the RED and GREEN page (site/red/) needs, with the same clang the
// page itself runs, compiled to WebAssembly:
//
//   redc.wasm, greenc.wasm  the two compilers, from their seeds
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

// The headers a translated program includes: paleo.h and math.h, and whatever
// those pull in. Taken from the dependency list clang writes.
const probe = await clang([...CFLAGS, '-c', '/probe.c', '-o', '/probe.o', '-MD', '-MF', '/probe.d'],
  { 'probe.c': '#include "paleo.h"\n#include <math.h>\n' });
const depText = probe['probe.d'];
const deps = (typeof depText === 'string' ? depText : new TextDecoder().decode(depText)).replace(/\\\n/g, ' ').split(/\s+/)
  .filter((p) => p.startsWith(`/sysroot/include/${T}/`));
const toolchain = { 'rt/paleo.h': rtFiles['paleo.h'], 'paleo.o': paleo, 'rtlib/libclang_rt.builtins.a': BUILTINS };
for (const d of deps) toolchain[d.slice(1)] = fs.readFileSync(path.join(inc, d.slice(`/sysroot/include/${T}/`.length)));
for (const n of LIBS) toolchain[`sysroot/lib/${T}/${n}`] = fs.readFileSync(path.join(lib, n));

// Examples: the labs, the NonStop kernel, the Kubernetes loops, GREEN tasking.
const EXAMPLES = [
  ...fs.readdirSync(path.join(A, 'labs/red')).filter((f) => f.endsWith('.red')).sort().map((f) => `labs/red/${f}`),
  'os/pairs.red', 'kube/kube.red', 'kube/kube_ha.red',
  'green/tests/tasking.grn', 'kube/kube_green.grn',
];
const examples = EXAMPLES.map((p) => ({
  path: p,
  lang: p.endsWith('.grn') ? 'green' : 'red',
  source: fs.readFileSync(path.join(A, p), 'utf8'),
}));
const examplesJs = '// Generated by impl/ada-colors/web/build.mjs from the repository; do not edit.\n' +
  'export const EXAMPLES = ' + JSON.stringify(examples, null, 1) + ';\n';

const outputs = {
  'redc.wasm': redc,
  'greenc.wasm': greenc,
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
