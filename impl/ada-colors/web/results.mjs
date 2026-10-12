// Opens the page in headless Chrome over the DevTools protocol and prints the
// JSON the page leaves in #test-results. (--dump-dom freezes the page's timers
// and promises, so a page that works for minutes cannot be read that way.)
// Usage: node results.mjs <chrome> <url> <timeout ms>
import { spawn } from 'node:child_process';
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';

const [chrome, url, timeout = '300000'] = process.argv.slice(2);
const port = 9300 + Math.floor(Math.random() * 500);
const prof = fs.mkdtempSync(path.join(os.tmpdir(), 'red-'));
const proc = spawn(chrome, ['--headless=new', '--disable-gpu', '--no-first-run', '--no-sandbox',
  `--user-data-dir=${prof}`, `--remote-debugging-port=${port}`, url], { stdio: 'ignore' });
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const done = (code, text) => { if (text) process.stdout.write(text); proc.kill(); process.exit(code); };

let ws;
for (let i = 0; i < 100 && !ws; i++) {
  await sleep(200);
  try {
    const pages = await (await fetch(`http://127.0.0.1:${port}/json`)).json();
    const page = pages.find((p) => p.type === 'page');
    if (page) ws = new WebSocket(page.webSocketDebuggerUrl);
  } catch { /* not up yet */ }
}
if (!ws) done(2, 'chrome did not start\n');
await new Promise((r) => { ws.onopen = r; });
let id = 0;
const calls = new Map();
ws.onmessage = (ev) => { const m = JSON.parse(ev.data); if (calls.has(m.id)) { calls.get(m.id)(m); calls.delete(m.id); } };
const evaluate = (expression) => new Promise((r) => {
  calls.set(++id, (m) => r(m.result && m.result.result && m.result.result.value));
  ws.send(JSON.stringify({ id, method: 'Runtime.evaluate', params: { expression } }));
});
const end = Date.now() + Number(timeout);
while (Date.now() < end) {
  const v = await evaluate("(document.getElementById('test-results') || {}).textContent || ''");
  if (v) done(0, v);
  await sleep(1000);
}
done(1, '');
