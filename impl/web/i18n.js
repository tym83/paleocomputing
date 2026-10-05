/*
 * Language selection for the labs and the shell.
 *
 * English by default: that is what a visitor from outside will see.
 * Russian is enabled explicitly, with the switch or `?lang=ru` in the URL, and the
 * choice is remembered.
 *
 * Texts are stored as `{en, ru}` objects. A plain string is also allowed: it is
 * treated as the same in every language. This allows translating gradually
 * without breaking what has not been translated yet.
 */
export const LANGS = { en: 'English', ru: 'Русский' };

const KEY = 'paleo.lang';

function pick() {
  // Outside the browser (the headless lab run in node) there is nothing to choose
  // with or from: `location` does not exist there at all, and touching it crashes
  // the whole test suite before the first check.
  if (typeof location === 'undefined') return 'en';
  const q = new URLSearchParams(location.search).get('lang');
  if (q && q in LANGS) return q;
  try {
    const s = localStorage.getItem(KEY);
    if (s && s in LANGS) return s;
  } catch { /* private mode: just use the default language */ }
  return 'en';
}

export let LANG = pick();

export function setLang(code) {
  if (!(code in LANGS)) return;
  LANG = code;
  try { localStorage.setItem(KEY, code); } catch { /* not a problem */ }
  location.reload();
}

/**
 * Returns the text in the current language.
 * If there is no translation, falls back to English, then Russian, then whatever exists.
 */
export function t(v) {
  if (v == null) return '';
  if (typeof v === 'string') return v;
  return v[LANG] ?? v.en ?? v.ru ?? '';
}

/** Translates all labels in the markup: <span data-i18n-en="..." data-i18n-ru="..."> */
export function applyMarkup(root = document) {
  // The document language and the tab title. They are not visible on the page itself,
  // which is why they stayed Russian after English became the default language,
  // yet bookmarks, link previews in messengers, search and screen readers see them.
  if (typeof document !== 'undefined' && (root === document || root === document.documentElement)) {
    document.documentElement.lang = LANG;
  }
  root.querySelectorAll('[data-i18n-' + LANG + ']').forEach(el => {
    el.innerHTML = el.getAttribute('data-i18n-' + LANG);
  });
  root.querySelectorAll('[data-i18n-ph-' + LANG + ']').forEach(el => {
    el.placeholder = el.getAttribute('data-i18n-ph-' + LANG);
  });
  root.querySelectorAll('[data-i18n-title-' + LANG + ']').forEach(el => {
    el.title = el.getAttribute('data-i18n-title-' + LANG);
  });
}
