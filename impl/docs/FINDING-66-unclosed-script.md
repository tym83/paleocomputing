[Русская версия](FINDING-66-unclosed-script.ru.md)

# Finding 66. The browser does not execute an unclosed `<script>`, silently

The lab on the website did not work: the list of labs was empty, the machine
did not start, and "loading…" stayed at the bottom forever. The first
explanation, a variable declared twice causing a `SyntaxError` (fixed in #24),
was correct but not the only one: after the fix the page stayed dead.

## The real cause

`lab.html` had no closing `</script>`. I considered this harmless ("the
browser forgives it") and even taught the page check to forgive a missing
tag. That is wrong. Per the HTML specification, if the file ends inside a
`script` element, the parser marks it as "already started", and the script
**is not executed at all**. No error in the console, no warning.

## How it was found

* Executing the text of the same module by hand worked: the list got filled.
* Headless Chrome on the published page: 0 labs, an empty console.
* A debug copy of the page with markers along the script: the classic script
  ran, the first line of the module did not. No top-level `await` was found in
  the dependencies, so the module did not run at all.
* With `</script>` added: all markers and 12 labs.

## What changed

* `lab.html` closes its script.
* `page-test.mjs` requires every `<script>` to be closed.
* `tools/browser-smoke.sh`, in the fast CI job, opens the built site in
  headless Chrome and requires as many labs in the list as there are in
  `labs.js`. Verified both ways: the fixed page gives 12 of 12, the previous
  one 0 of 12.

## In general

Two breakages in a row slipped past the static checks because the checks
looked at the page's text, while what was broken was its execution. Only a
browser checks a page. "The browser forgives it" is a claim that should have
been checked with a browser, not accepted.
