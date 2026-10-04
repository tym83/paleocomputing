// Page assembly: whatever the script looks up in the markup is really there.
//
// The browser does not report these breakages as errors: the page opens, and a
// button silently does nothing. It has already cost two debugging sessions: a
// `data-i18n-en` on a <label> that swallowed the nested <select>, and the lab's
// move to the component, where some nodes changed names.
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';
import { spawnSync } from 'node:child_process';

// Syntax of the inline module. An error there is invisible to every other check:
// the browser silently drops the whole module, and the page stays stuck on
// "loading…". That is how the lab on the site sat dead for a day, because of a
// variable declared twice.
function syntaxError(code) {
  const f = path.join(fs.mkdtempSync(path.join(os.tmpdir(), 'page-')), 'inline.mjs');
  fs.writeFileSync(f, code);
  const r = spawnSync(process.execPath, ['--check', f], { encoding: 'utf8' });
  return r.status === 0 ? null : (r.stderr.split('\n').find(l => /Error/.test(l)) || 'error');
}

const PAGES = ['lab.html', 'index.html', 'checks.html', 'embed.html'];
let bad = 0;
const say = (ok, s) => { console.log(`  ${ok ? '✅' : '❌'} ${s}`); if (!ok) bad++; };

for (const page of PAGES) {
  const src = fs.readFileSync(page, 'utf8');
  const ids = new Set([...src.matchAll(/\sid="([^"]+)"/g)].map(m => m[1]));

  // 1. Every node the script looks up must be in the markup.
  const used = new Set([...src.matchAll(/\$\('([^']+)'\)|getElementById\('([^']+)'\)/g)]
    .map(m => m[1] || m[2]));
  const missing = [...used].filter(id => !ids.has(id));
  say(missing.length === 0,
      `${page}: all nodes present (${used.size} used)` +
      (missing.length ? ` — missing: ${missing.join(', ')}` : ''));

  // 2. Markup translation replaces the content WHOLESALE. So it cannot sit on an
  //    element with a nested control node, or the translation would swallow it.
  const swallow = [...src.matchAll(/<(label|div)\b[^>]*\sdata-i18n-[a-z]{2}="[^"]*"[^>]*>([\s\S]*?)<\/\1>/g)]
    .filter(m => /<(select|input|button|canvas|oberon-machine)\b/.test(m[2]));
  say(swallow.length === 0,
      `${page}: translation does not swallow control nodes` +
      (swallow.length ? ` — ${swallow.length} found` : ''));

  // 3. Module imports point to existing files.
  const imports = [...src.matchAll(/from\s+'(\.\/[^']+)'|import\s+'(\.\/[^']+)'/g)]
    .map(m => m[1] || m[2]);
  const lost = imports.filter(f => !fs.existsSync(path.resolve(f)));
  say(lost.length === 0,
      `${page}: imports present (${imports.length})` + (lost.length ? ` — missing: ${lost.join(', ')}` : ''));

  // 4. Inline modules parse at all.
  const inline = [...src.matchAll(/<script type="module">([\s\S]*?)(?:<\/script>|$(?![\s\S]))/g)].map(m => m[1]);

  // 5. Every <script> is closed. Without the closing tag the browser does NOT
  //    forgive it, as we first thought: per the HTML spec a script at which the
  //    file ends is marked "already started" and never runs. Silently, with no
  //    error and no warning. That is how the lab on the site sat dead.
  const opened = (src.match(/<script\b/g) || []).length;
  const closed = (src.match(/<\/script>/g) || []).length;
  say(opened === closed, `${page}: all <script> closed (${opened} opened, ${closed} closed)`);
  const broken = inline.map(syntaxError).filter(Boolean);
  say(broken.length === 0,
      `${page}: inline modules parse (${inline.length})` + (broken.length ? ` — ${broken.join('; ')}` : ''));
}

// Negative control: the syntax check must recognise that very error.
say(syntaxError('let x = 1;\nlet x = 2;\n') !== null,
    'negative control: a twice-declared variable is detected');

console.log(bad ? `\n❌ page markup: ${bad} mismatches` : '\n✅ page markup and scripts agree');
process.exit(bad ? 1 : 0);
