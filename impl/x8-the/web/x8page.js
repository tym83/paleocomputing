// The X8 page: boots THE from its paper tape on the X8 emulator (x8.wasm),
// shows the console teleprinter and the line printer, lets you type on the
// console keyboard, and reads the core table of segment control live.
(function () {
  'use strict';
  const params = new URLSearchParams(location.search);
  const ru = params.get('lang') === 'ru';
  const T = ru ? {
    title: 'THE на Electrologica X8',
    lead: 'Мультипрограммная система Дейкстры (1965–68), заново написанная в машинном коде X8 по его статьям, на эмуляторе X8, собранном по симулятору Математического центра 1971 года. Машина стартует как настоящая: LS, затем IP, и CHARON читает ленту с системой. Время виртуальное: при скорости 1× X8 работает со своей настоящей скоростью, телетайп печатает десять знаков в секунду. Когда pm2 спросит, сколько квадратов печатать, ответьте строкой «pm2 12». Kubernetes работает здесь как программы пользователей: «k kill 2» выключает машину узла 2, «k scale 5» просит пять реплик, а API-сервер пишет журнал на построчную печать. В конце наберите «end».',
    start: 'LS, IP', restart: 'Заново', speed: 'скорость ', console: 'Консольный телетайп', lp: 'Построчная печать',
    core: 'Ферритовая память: страницы сегментов', send: 'Нажать', running: 'работает', stopped: 'машина остановилась',
    idle: 'динамический стоп: ждёт прерывания', time: 'время', drum: 'обмены с барабаном', scb: 'буфер контроллера',
    page: 'стр.', holds: 'сегмент', holy: 'святость', victim: 'Жертва', free: 'свободна', coming: 'едет с барабана',
    placeholder: 'например: pm2 12',
    legend: 'Жертва — страница, в которую придёт следующий сегмент с барабана. Святую страницу нельзя выбрать Жертвой (EWD 113).',
    names: { sieve: 'pm1 решето', data: 'pm3 данные', voc: 'словарь сообщений', out: 'вывод', queue: 'очередь печати', store: 'хранилище Kube' }
  } : {
    title: 'THE on the Electrologica X8',
    lead: 'Dijkstra\'s multiprogramming system (1965–68), written again in X8 machine code from his papers, on an X8 emulator built from the 1971 simulator of the Mathematisch Centrum. The machine starts as the real one did: LS, then IP, and CHARON reads the system tape. Time is virtual: at 1× the X8 runs at its own speed and the teleprinter prints ten characters a second. When pm2 asks how many squares to print, answer with the line "pm2 12". Kubernetes runs here as user programs: "k kill 2" switches off the machine of node 2, "k scale 5" asks for five replicas, and the API server keeps its log on the line printer. At the end type "end".',
    start: 'LS, IP', restart: 'Again', speed: 'speed ', console: 'Console teleprinter', lp: 'Line printer',
    core: 'Core: the pages of segment control', send: 'Type', running: 'running', stopped: 'the machine stopped',
    idle: 'dynamic stop: waiting for an interrupt', time: 'time', drum: 'drum transfers', scb: 'controller buffer',
    page: 'page', holds: 'segment', holy: 'holiness', victim: 'Victim', free: 'free', coming: 'coming from the drum',
    placeholder: 'for example: pm2 12',
    legend: 'The Victim is the page the next segment from the drum will come into. A holy page is never chosen as the Victim (EWD 113).',
    names: { sieve: 'pm1 sieve', data: 'pm3 data', voc: 'message vocabulary', out: 'output', queue: 'printer queue', store: 'Kube store' }
  };
  const $ = (id) => document.getElementById(id);
  document.documentElement.lang = ru ? 'ru' : 'en';
  document.title = T.title;
  $('h1').textContent = T.title;
  $('lead').textContent = T.lead;
  $('other').textContent = ru ? 'English' : 'Русский';
  $('other').href = ru ? '?' : '?lang=ru';
  $('start').textContent = T.start;
  $('speedlabel').textContent = T.speed;
  $('consoleh').textContent = T.console;
  $('lph').textContent = T.lp;
  $('coreh').textContent = T.core;
  $('send').textContent = T.send;
  $('line').placeholder = T.placeholder;
  $('legend').textContent = T.legend;
  const PROCS = ['sc', 'mi', 'lp', 'pm1', 'pm2', 'pm3', 'kapi', 'ctrl', 'schd', 'kub1', 'kub2', 'node', 'kctl'];
  const CPM = 800;   // cycles per millisecond (1.25 us a cycle)

  let mod = null, sym = null, tapeBytes = null;
  let running = false, booted = false, last = 0, col = 0;

  function seconds(c) { return (c / (1000 * CPM)).toFixed(3).padStart(8, ' '); }

  function word(a) { return mod.HEAPU32[(mod._x8w_core() >> 2) + a] & 0o777777777; }

  function segName(sv) {
    const n = T.names;
    if (sv >= sym.pm1sv && sv < sym.pm1sv + 4) return n.sieve + ' ' + (sv - sym.pm1sv);
    if (sv >= sym.pm3sv && sv < sym.pm3sv + 6) return n.data + ' ' + (sv - sym.pm3sv);
    if (sv === sym.vocsv) return n.voc;
    if (sv === sym.ksv) return n.store;
    if (sv >= sym.tsv && sv < sym.tsv + 8) return n.queue + ' ' + (sv - sym.tsv);
    const k = Math.floor((sv - sym.pcbs) / sym.pcbsize);
    if (k >= 0 && k < PROCS.length && sv - sym.pcbs - k * sym.pcbsize === 40) return PROCS[k] + ' ' + n.out;
    return '@' + sv.toString(8);
  }

  function drawCore() {
    if (!booted) return;
    const victim = word(sym.victim);
    let rows = '<tr><th>' + T.page + '</th><th>' + T.holds + '</th><th>' + T.holy + '</th></tr>';
    for (let k = 0; k < sym.ncp; k++) {
      const cte = sym.cttab + 4 * k;
      const w3 = word(cte + 3), base = word(cte + 2);
      let what, holy = '';
      if (cte === victim) what = '<span class="muted">' + T.victim + '</span>';
      else if (w3 === 0o377777777) what = '<span class="muted">' + T.free + '</span>';
      else {
        what = segName(word(cte));
        const h = (w3 >> 20) & 31;
        if (w3 & 0o200000000) what = '<span class="coming">' + what + ' · ' + T.coming + '</span>';
        if (h) holy = '<span class="holy">' + h + '</span>';
      }
      rows += '<tr><td>' + base.toString(8) + '</td><td>' + what + '</td><td>' + holy + '</td></tr>';
    }
    $('pages').innerHTML = rows;
    $('stats').innerHTML =
      '<span>' + T.time + '</span><span>' + seconds(mod._x8w_cycles()).trim() + ' s</span>' +
      '<span>' + T.drum + '</span><span>' + mod._x8w_drum() + '</span>' +
      '<span>' + T.scb + '</span><span>' + word(sym.scbuse) + ' / 7 (max ' + word(sym.scbmax) + ')</span>';
  }

  function drain() {
    const buf = mod._malloc(6000);
    for (;;) {
      const n = mod._x8w_out(buf, 6000);
      if (!n) break;
      let con = '', lp = '';
      for (let i = 0; i < n; i += 6) {
        const h = mod.HEAPU8, dev = h[buf + i], ch = String.fromCharCode(h[buf + i + 1]);
        const ms = h[buf + i + 2] | (h[buf + i + 3] << 8) | (h[buf + i + 4] << 16) | (h[buf + i + 5] << 24);
        if (dev === 1) {
          if (col === 0) con += '[' + seconds(ms * CPM) + ' s] ';
          con += ch;
          col = ch === '\n' ? 0 : col + 1;
        } else lp += ch;
      }
      if (con) { const c = $('console'); c.textContent += con; c.scrollTop = c.scrollHeight; }
      if (lp) { const p = $('lp'); p.textContent += lp; p.scrollTop = p.scrollHeight; }
    }
    mod._free(buf);
  }

  function frame(now) {
    if (!running) return;
    const speed = Number($('speed').value);
    const dt = Math.min(now - last, 100);
    last = now;
    const cycles = speed === 0 ? 4e6 : dt * CPM * speed;
    const stopped = mod._x8w_run(cycles);
    drain();
    drawCore();
    if (stopped) {
      running = false;
      $('state').textContent = T.stopped;
      $('start').textContent = T.restart;
      return;
    }
    $('state').textContent = mod._x8w_dynstop() ? T.idle : T.running;
    requestAnimationFrame(frame);
  }

  async function boot() {
    if (booted) { location.reload(); return; }
    const p = mod._malloc(tapeBytes.length);
    mod.HEAPU8.set(tapeBytes, p);
    mod._x8w_boot(p, tapeBytes.length);
    mod._free(p);
    booted = true;
    running = true;
    last = performance.now();
    $('start').disabled = false;
    requestAnimationFrame(frame);
  }

  $('keys').addEventListener('submit', (e) => {
    e.preventDefault();
    if (!booted) return;
    for (const ch of $('line').value.toLowerCase()) mod._x8w_key(ch.charCodeAt(0));
    mod._x8w_key(10);
    $('line').value = '';
  });
  $('start').addEventListener('click', boot);

  Promise.all([
    X8Module(),
    fetch('the.json').then((r) => r.json()),
    fetch('the.tape').then((r) => r.arrayBuffer())
  ]).then(([m, s, t]) => {
    mod = m; sym = s; tapeBytes = new Uint8Array(t);
    if (params.get('speed')) $('speed').value = params.get('speed');
    document.body.setAttribute('data-script-ok', '1');
    if (params.get('autostart')) boot();
  });
})();
