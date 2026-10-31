# A book made for microfiche

First, where the texts came from in the first place. In 2023 a [message](https://lists.techfak.uni-bielefeld.de/pipermail/systemsafety/2023-September/005936.html) flashed by on the systemsafety mailing list, where people discuss the reliability of critical software: at the request of one enthusiast, DTIC, the DoD's archive of technical documentation, had scanned the volume "DoD Common High Order Language, Phase 1", number ADB950587, 4575 pages, and it contained all four first-round designs. While I was busy with Red and Green, the DTIC site first went down for maintenance and then started refusing every request, even from an ordinary browser. The Wayback Machine came to the rescue: in September 2023 someone had saved the whole PDF there. It carries the same marking as the RED manual: "approved for public release, distribution unlimited".

![The preface of volume ADB950587](../img/scan-preface.png)

![The colour key on the next page: Green is CII-Honeywell Bull, Red is Intermetrics, Yellow is SRI International, Blue is SofTech](../img/scan-colours.png)

The book's preface is a small historical document in its own right. The compilers write that the book was "created for microfiche", cards of photographic film carrying reduced pages that you read through a magnifier, and that "no bound version ever existed", while all two hundred copies of the designs went to the reviewers, so this volume is "the only distributable set of these designs". The colours are revealed there too. And the preface ends with a passage I reread several times: the losing designs "are not to be continued and should be of interest only to researchers", "the goal of the program is convergence", and "it is not appropriate at this time to foster alternatives".

Inside are the four preliminary designs exactly as they were delivered on February 15, 1978. Red is there in its first edition, the very REDL with monitors that the red team later threw out and started over. After the designs come analyses from eighty teams, from universities to defense contractors, and the report of the so-called Pittsburgh panel. That panel studied the analyses, questioned the authors and boiled everything down into the tables used in April 1978 to decide who would go on.

The OCR text is horrible in places: zero instead of the letter O, a dollar sign instead of S, the letter l instead of a percent sign. So I checked every program against the page image, and the blue ones, whose code is full of backslashes and hash signs, I simply retyped from the pictures.

## Who made them

The blue design was led by John Goodenough of SofTech. His is not a minor name in the history of Ada. In 1975 he published one of the first major papers on exception handling in Communications of the ACM, and after the competition it was SofTech, under his leadership, that got the contract for the test suite used to check every Ada compiler for conformance with the standard. Goodenough later headed the group that interpreted the standard, and wrote the requirements for Ada 95. So the blue team lost the language but stayed with Ada for twenty years, just on the other side of the table.

The yellow design was led by Jay Spitzen of SRI International, a research institute in California that was then building SIFT, a fault-tolerant flight computer for aircraft. We'll come back to it. A 1986 Time-Life popular book and Bertrand Meyer both write that the yellow team was advised by Hoare and Wirth. The document itself doesn't name its consultants, but the traces are on every page: the structure of the description follows Wirth's "Pascal Report", the modules are taken from his Modula, the monitors from Hoare's 1974 paper, and the bibliography includes the entries "Hoare, private communication" and "Wirth, private communication".

## What Dijkstra thought of them

Dijkstra spent March 1978 reading all four designs and [wrote a review of each](https://www.cs.utexas.edu/~EWD/index06xx.html). Blue got it for its chapter on types and operations, which, in his words, had grown to 160 (!) pages. Yellow he called a hopeless mess, adding that he sympathized with the consultants who had failed to prevent it. If you remember who are named as the yellow team's consultants, the line stings all the more.

He wasn't enthusiastic about Red and Green either, so by Dijkstra you can't tell the losers from the winners. The decision was made by the reviewers and the panel, and I'll come back to their conclusions once I've shown both languages at work.
