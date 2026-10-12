import { EXAMPLES } from './examples.js';
import { run } from './paleo.js';

const RU = new URLSearchParams(location.search).get('lang') === 'ru';
const T = RU ? {
  title: 'RED и GREEN в браузере',
  standfirst: 'Два финалиста конкурса языков Пентагона 1979 года. Программа переводится в C компилятором, написанным на самом RED или GREEN, компилируется clang и выполняется здесь же, по потоку на каждую задачу. Ничего не уходит со страницы.',
  run: 'Запустить', stdin: 'Стандартный ввод', how: 'Как это устроено',
  how1: 'redc и greenc, компиляторы, написанные на RED и GREEN, собраны в WebAssembly из тех же семян на C, от которых раскручивается репозиторий. Они переводят исходник в C. clang и lld, тоже собранные в WebAssembly, делают из этого C программу для wasm32 с потоками. Рантайм — тот же файл на C, что и в Linux: он передаёт процессор от задачи к задаче по правилам RED на виртуальных часах, поэтому вывод здесь совпадает с запуском на обычной машине байт в байт.',
  how2: 'Первый запуск скачивает компилятор C, около 20 МБ, с jsDelivr; потом браузер держит его у себя.',
  repo: 'Исходники, лабораторные и статья', home: '← Палеокомпьютинг',
  translate: 'перевод в C…', compile: 'компиляция C…', running: 'выполнение…',
  download: 'загрузка компилятора C', done: 'готово', exit: 'код выхода',
  noIso: 'Браузер не дал общую память (нужна изоляция страницы). Обновите страницу; если не поможет — откройте её в Chrome, Firefox или Safari последних версий.',
} : {
  translate: 'translating to C…', compile: 'compiling C…', running: 'running…',
  download: 'downloading the C compiler', done: 'done', exit: 'exit code',
  noIso: 'The browser gave no shared memory (the page must be cross-origin isolated). Reload the page; if that does not help, open it in a current Chrome, Firefox or Safari.',
};
if (RU) {
  document.documentElement.lang = 'ru';
  document.title = 'RED и GREEN в браузере — Палеокомпьютинг';
  for (const el of document.querySelectorAll('[data-i18n]')) if (T[el.dataset.i18n]) el.textContent = T[el.dataset.i18n];
  const home = document.getElementById('home-link');
  home.textContent = T.home; home.href = '../ru/';
  const l = document.getElementById('lang-link'); l.textContent = 'English'; l.href = '?';
}

const $ = (id) => document.getElementById(id);
const pick = $('pick'), src = $('src'), out = $('out'), status = $('status'), btn = $('run');
for (const [i, e] of EXAMPLES.entries()) {
  const o = document.createElement('option');
  o.value = i; o.textContent = e.path;
  pick.append(o);
}
const setLang = (l) => { for (const r of document.querySelectorAll('input[name=lang]')) r.checked = r.value === l; };
const load = () => { const e = EXAMPLES[pick.value]; src.value = e.source; setLang(e.lang); out.textContent = ''; };
pick.onchange = load;
load();

function show(fd, s) {
  if (fd === 2) { const span = document.createElement('span'); span.className = 'err'; span.textContent = s; out.append(span); }
  else out.append(s);
  out.scrollTop = out.scrollHeight;
}

async function runOne(lang, source, input, onOut) {
  return await run(lang, source, {
    input, onOut,
    stage: (s) => { status.textContent = T[s === 'run' ? 'running' : s]; },
    progress: (p) => { status.textContent = `${T.download}: ${Math.round(100 * p.done / p.total)}%`; },
  });
}

btn.onclick = async () => {
  if (!self.crossOriginIsolated) { out.textContent = T.noIso; return; }
  btn.disabled = true; out.textContent = '';
  const lang = document.querySelector('input[name=lang]:checked').value;
  try {
    const r = await runOne(lang, src.value, $('stdin').value, show);
    if (r.error) {
      show(2, r.error + '\n');
      if (r.line) {
        const text = src.value.split('\n')[r.line - 1];
        if (text !== undefined) show(2, `${r.line} | ${text}\n`);
      }
      status.textContent = '';
    } else status.textContent = r.timedOut ? 'timeout' : `${T.done}, ${T.exit} ${r.code}`;
  } catch (e) {
    show(2, String(e && e.stack || e) + '\n');
  }
  btn.disabled = false;
};

// ?test=1: run every example and leave the outputs in the page, for CI
if (new URLSearchParams(location.search).get('test')) {
  (async () => {
    const res = [];
    for (const e of EXAMPLES) {
      document.body.dataset.testAt = e.path;
      let r;
      try { r = await runOne(e.lang, e.source, '', () => {}); }
      catch (x) { r = { stage: 'page', code: -1, error: String(x && x.stack || x) }; }
      res.push({ path: e.path, code: r.code, out: r.error ? r.error : r.all, stage: r.stage });
    }
    const pre = document.createElement('pre');
    pre.id = 'test-results';
    pre.textContent = JSON.stringify(res);
    document.body.append(pre);
    document.body.dataset.testDone = '1';
  })();
}
document.body.dataset.iso = String(self.crossOriginIsolated);
document.body.dataset.scriptOk = '1';
