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

// ── English mode shows no Russian ───────────────────────────────────────────
// English is the default language, and Russian is kept as the base text with an
// English overlay next to it. Whatever lacks an English variant silently stays
// Russian, so a forgotten entry is invisible to every check above: the page
// works, it just speaks Russian to an English reader. That is how the lab check
// results (lab 7: "Math.rsc пересобран…") and the answer hints stayed Russian.
const CYR = /[А-Яа-яЁё]/;

// 1. Markup: text with Cyrillic must sit inside an element that carries
//    data-i18n-en (applyMarkup replaces the content wholesale); a Cyrillic
//    title/placeholder needs data-i18n-title-en / data-i18n-ph-en. Inline
//    scripts: a Cyrillic string is allowed only as the `ru:` half of a
//    t({ en, ru }) pair.
const VOID = new Set(['area', 'base', 'br', 'col', 'embed', 'hr', 'img', 'input', 'link', 'meta', 'source', 'track', 'wbr']);
function russianInMarkup(src) {
  const bad = [], stack = [];
  const tokens = src.matchAll(/<!--[\s\S]*?-->|<(script|style)\b[^>]*>([\s\S]*?)<\/\1>|<(\/?)([a-zA-Z][\w-]*)((?:[^>"']|"[^"]*"|'[^']*')*)>|[^<]+/g);
  for (const t of tokens) {
    if (t[1] === 'script') {
      const lines = t[2].split('\n');
      lines.forEach((l, i) => {
        const code = l.replace(/\/\/.*$/, '');
        if (!CYR.test(code)) return;
        if (!/\bru:/.test(code) || !/\ben:/.test(code + lines[i - 1]))
          bad.push(`script: ${l.trim().slice(0, 70)}`);
      });
      continue;
    }
    if (t[1] || t[0].startsWith('<!--')) continue;
    if (t[4]) {
      const tag = t[4].toLowerCase(), attrs = t[5] || '';
      if (t[3]) {                       // closing tag: pop up to its opener
        const k = stack.map(e => e.tag).lastIndexOf(tag);
        if (k >= 0) stack.length = k;
        continue;
      }
      for (const [, a, v] of attrs.matchAll(/\s(title|placeholder|alt|aria-label)="([^"]*)"/g)) {
        const tr = a === 'placeholder' ? 'data-i18n-ph-en' : `data-i18n-${a}-en`;
        if (CYR.test(v) && !attrs.includes(tr + '=')) bad.push(`<${tag} ${a}="${v.slice(0, 50)}">`);
      }
      if (!VOID.has(tag) && !attrs.trimEnd().endsWith('/'))
        stack.push({ tag, en: /\sdata-i18n-en=/.test(attrs) });
      continue;
    }
    if (CYR.test(t[0]) && !stack.some(e => e.en)) bad.push(`text: ${t[0].trim().slice(0, 70)}`);
  }
  return bad;
}
for (const page of PAGES) {
  const bad = russianInMarkup(fs.readFileSync(page, 'utf8'));
  say(bad.length === 0, `${page}: every Russian text has an English variant` +
      (bad.length ? ` — ${bad.length} without: ${bad.slice(0, 3).join(' | ')}` : ''));
}
say(russianInMarkup('<div data-i18n-en="Hi"><b>Привет</b></div><p>Пока</p><span title="Тест">x</span>'
      + '<script>const a = LANG === "ru" ? "да" : "yes";</script>').length === 3,
    'negative control: untranslated text, title and script string are detected');

// 2. The labs themselves, as English mode builds them (in node the language is
//    the default, English): every field the page shows.
const { LABS } = await import('./labs.js');
const { EN } = await import('./labs.en.js');
const shown = [];
for (const l of LABS) {
  const f = { title: l.title, level: l.level, intro: l.intro, hint: l.hint, payoff: l.payoff };
  (l.read || []).forEach(([, t], i) => { f[`read.${i}`] = t; });
  l.steps.forEach((st, i) => { f[`step.${i}`] = st.text; if (st.answer) f[`answer.${i}`] = st.answer; });
  for (const [k, v] of Object.entries(f)) if (CYR.test(v || '')) shown.push(`${l.id}.${k}`);
}
say(shown.length === 0, `labs: no Russian in English mode (${LABS.length} labs)` +
    (shown.length ? ` — Russian in: ${shown.join(', ')}` : ''));

// 3. Check results. They are computed in the worker from the machine's state,
//    so they cannot all be produced here; instead every result in labs.js must
//    go through tr() with a key the overlay has, and the English must come out
//    English for any values.
const anyValue = new Proxy({}, { get: (_, k) => (k === Symbol.toPrimitive ? undefined : 7) });
function untranslatedChecks(src, en) {
  const bad = [];
  for (const [, rest] of src.matchAll(/\bmsg:\s*([^\n]{0,80})/g)) {
    const key = (/^tr\(c, '([^']+)'/.exec(rest) || [])[1];
    if (!key) { bad.push(`no tr(): ${rest.slice(0, 50)}`); continue; }
    if (en[key] === undefined) { bad.push(`no English for ${key}`); continue; }
    const out = typeof en[key] === 'function' ? en[key](anyValue) : en[key];
    if (CYR.test(out)) bad.push(`Russian in ${key}`);
  }
  return bad;
}
const labsSrc = fs.readFileSync('labs.js', 'utf8')
  .split('\n').filter(l => !/^\s*(\*|\/\/|\/\*)/.test(l)).join('\n');   // code, not comments
const nMsg = [...labsSrc.matchAll(/\bmsg:/g)].length;
const badMsg = untranslatedChecks(labsSrc, EN);
say(badMsg.length === 0, `labs: all ${nMsg} check results have English` +
    (badMsg.length ? ` — ${badMsg.length} without: ${badMsg.slice(0, 4).join('; ')}` : ''));
const { ['7.check.1.ok']: _, ...lacking } = EN;
say(untranslatedChecks(labsSrc, lacking).includes('no English for 7.check.1.ok'),
    'negative control: a check result without an English entry is detected');

// 4. The language travels with the check: the worker cannot see the page's
//    choice. One check that needs no machine, in both languages.
const lab5 = LABS.find(l => l.id === 5).steps[1];
const ask = lang => lab5.check({ cycles: 2, insns: 1 }, { state: {}, answer: 'x', lang }).msg;
say(ask('en') === 'enter a number' && ask('ru') === 'введите число',
    `labs: check result follows the requested language (en: "${ask('en')}", ru: "${ask('ru')}")`);

console.log(bad ? `\n❌ page markup: ${bad} mismatches` : '\n✅ page markup and scripts agree');
process.exit(bad ? 1 : 0);
