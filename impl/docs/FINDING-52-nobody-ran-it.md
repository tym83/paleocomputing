[Русская версия](FINDING-52-nobody-ran-it.ru.md)

# Finding 52. The "Just run the system" button led to a Russian page

English became the default language in the labs. On the machine launch page,
the one the `Just run the system` button on the English landing page leads to,
it did not appear at all: the heading, the hint about mouse buttons, the status
line and the item names were in Russian.

Along the way it turned out that the tab titles (`<title>`) and the document
language attribute had stayed Russian **in the labs too**. They are not visible
on the page itself: they are seen by bookmarks, link previews in messengers,
search engines and screen readers.

## Why it was missed

The launch page was not part of any check. The headless runs (`labs-test.mjs`,
`probe.mjs`) work with `machine.js` directly, bypassing its markup, and people
looked at it by eye in Russian.

## What is worse: nobody ran the checks

`make labs` had been failing **on the very first line** ever since language
selection was added:

```
const q = new URLSearchParams(location.search).get('lang');
                              ^
ReferenceError: location is not defined
```

node has no `location`. The nine labs had not been checked even once since that
commit, and this was not visible, because **nothing ran automatically** in the
repository except the site deployment and the image builds on tags.

Two silent breakages with one origin: the result exists, the check does not.

## What was done

The launch page was translated and got a language switcher, using the same
`data-i18n-en` attributes as the labs. `applyMarkup` now sets both
`<html lang>` and the tab title. `i18n.js` no longer fails outside a browser.

There is now a run on every change (`.github/workflows/check.yml`): the
workbook, the nine labs on the real machine, the site build with link checking,
and a comparison of the built workbook against the one in the repository. A
minute and a half, node and python3. RTL and QEMU do not fit there, but
everything that can be checked cheaply is now checked on its own.

## A small thing that is caught only in the browser

The mouse button hint is replaced entirely, together with the `b0..b2` `span`s
used to highlight pressed buttons. So `applyMarkup` must run **before** the
script looks up those nodes: otherwise the references will point to discarded
elements, highlighting will silently stop working, and no check will notice.
The same root as the earlier trap with `data-i18n-en` on a `<label>` swallowing
a `<select>`.
