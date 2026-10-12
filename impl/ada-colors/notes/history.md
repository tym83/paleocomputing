# RED vs GREEN: history notes for the article

Research notes for the paleocomputing episode on the two DoD-1 finalists. Collected 2026-10-12.

Conventions:

- Every claim carries a source. Local sources live in `~/projects/ada-colors-sources/` (not in git,
  copyright); their public originals are linked where known.
- **Verified** = read in a primary or first-hand source during this session (quote or close paraphrase
  given). **Second-hand** = a reliable secondary source, not cross-checked against a primary.
  **Unverified / commonly repeated** = in circulation, but not confirmed here or contradicted.
- First-hand memoirs (Whitaker, Van Deusen, Dijkstra, Taft) are verified *as statements by that person*;
  they are not neutral. Where they disagree, both versions are given.

## Key sources

| Short name | What it is | Where |
|---|---|---|
| Whitaker 1993 | W. A. Whitaker, "Ada — The Project: The DoD High Order Language Working Group", HOPL-II, SIGPLAN Notices 28(3), March 1993 | http://archive.adaic.com/pol-hist/history/holwg-93/holwg-93.htm (https fails, http works) |
| Van Deusen, Memories | Mary Van Deusen, "Memories of the Ada Language Competition", 2009 | https://iment.com/maida/computer/redref/ (local: `red-rm/memories.txt`) |
| Time/Life 1986 | *Computer Languages*, Understanding Computers series, Time-Life Books 1986, pp. 78-84 (Van Deusen was a consultant) | transcribed at iment.com (local: `red-rm/computerlanguages.txt`) |
| RED LRM | J. Nestor, M. Van Deusen, *RED Language Reference Manual*, Intermetrics IR-310-2, 8 March 1979 | DTIC AD-A219453, https://apps.dtic.mil/sti/pdfs/ADA219453.pdf (local: `green/DTIC_ADA219453.txt`, `red-rm/*.txt`) |
| RED Rationale | B. Brosgol et al., *RED Rationale*, Intermetrics, March 1979 | iment.com (local: `red-rat/*.txt`) |
| Types in Red | M. Van Deusen, "Types in Red", SIGPLAN Notices 16(12), Dec 1981, pp. 27-38 | local: `red-rm/typesinred.txt` |
| Green Rationale | *Rationale for the Design of the Green Programming Language*, Honeywell / Cii Honeywell Bull, 15 March 1979 | DTIC AD-A073662 (local: `green/DTIC_ADA073662.txt`) |
| Green RM | *Preliminary Ada Reference Manual* (Green, with the Duncan letter of 14 May 1979) | DTIC AD-A071761 (local) |
| Ada 83 RM | ANSI/MIL-STD-1815A | DTIC AD-A131511 (local) |
| Steelman etc. | Strawman (Apr 1975) .. Steelman (Jun 1978) | https://dwheeler.com/steelman/steelman.htm; local: `steelman/*.txt` |
| EWD 659-662, 665 | Dijkstra's four reviews of BLUE/GREEN/RED/YELLOW (March 1978) and his April 1978 trip report | https://www.cs.utexas.edu/~EWD/transcriptions/EWD06xx/EWD661.html (and 659, 660, 662, 665) |
| Hoare 1980 | C.A.R. Hoare, "The Emperor's Old Clothes", Turing lecture, CACM 24(2), Feb 1981 | https://noncombatant.org/hoare-emperors-old-clothes-turing-award/ |
| Ada 95 Rationale | Ada 95 Rationale, Intermetrics 1995 | https://www.adaic.org/resources/add_content/standards/95rat/rat95html/rat95-p2-9.html |
| Taft A-Z | Computerworld "A-Z of Programming Languages: Ada", interview with S. Tucker Taft, 2008 | https://cse.sc.edu/~mgv/csce330f24/pres/az.pdf |

---

## 1. Timeline of the HOLWG competition

### Verified

| Date | Event | Source |
|---|---|---|
| Jan 1975 | HOLWG chartered by DDR&E (Malcolm Currie memo); Lt Col William Whitaker chairs | Whitaker 1993 (Figure 1, Currie memo); Tinman text (local `steelman/tinman.txt`) |
| Apr 1975 | STRAWMAN circulated | Whitaker 1993; local `steelman/strawman.txt` header "April 1975"; Time/Life 1986 |
| Aug 1975 | WOODENMAN | local `steelman/woodenman.txt` header; Whitaker 1993 |
| Jan 1976 | TINMAN; during 1976 circulated to "more than 1,000 individuals" and reviewed; Cornell workshop in fall 1976 | Whitaker 1993 |
| Jun 1976 – Jan 1977 | Formal evaluation of 23 existing languages against Tinman (ALGOL 60/68, CMS-2, COBOL, CORAL 66, CS-4, ECL, EUCLID, FORTRAN, HAL/S, JOVIAL J3B/J73, LIS, LTR, MORAL, RTL/2, Pascal, PDL/2, PEARL, PL/I, SIMULA 67, SPL/1, TACPOL). Conclusion (Amorosa subcommittee, Jan 1977): none met the requirements; a new language should be designed from Pascal, PL/I or ALGOL 68 | Whitaker 1993, "Evaluations" |
| (sidenote) | Bell Labs asked *not* to have C evaluated, and HOLWG honoured the request | Whitaker 1993: "When invited to evaluate C against the DoD requirements, they said that ... be on the list of evaluated languages. We recognized the truth in their observation and honored their request." |
| Jan 1977 | IRONMAN; revised July 1977 | Whitaker 1993; local `steelman/ironman.txt` header |
| Mar–Apr 1977 | SOW approved March 1977; RFP MDA903-77-R-0082 released April 1977; foreign bidders "actively encouraged" | Whitaker 1993 |
| Aug 1977 | Four contracts awarded out of **fourteen bids** (some teaming): Cii-Honeywell Bull, Intermetrics, SofTech, SRI International. All four started from Pascal "coincidentally" | Whitaker 1993. (Time/Life 1986 says "Fifteen design teams responded"; Van Deusen's overview page says 16 proposals — numbers differ.) |
| 15 Feb 1978 | Four preliminary designs delivered | Perry memo of 11 Apr 1978, reproduced as Figure 8 in Whitaker 1993 |
| Feb–Mar 1978 | Colour codes assigned for anonymity: green = Cii, red = Intermetrics, blue = SofTech, yellow = SRI. "There was no other significance to the colors." Evaluated by **80 volunteer analysis teams** | Whitaker 1993; Perry memo: "analysis and comparisons ... performed by 80 defense and civil organizations" |
| Apr 1978 | Green and Red selected to continue; resumed work in April 1978; DDR&E (William J. Perry) memo dated **11 April 1978** | Whitaker 1993, Figure 8 |
| Jun 1978 | STEELMAN, written partly in reaction to the four designs; "the parallel processing requirements were generalized" | Whitaker 1993; local `steelman/steelman.txt` |
| 8 Mar 1979 | RED LRM dated (IR-310-2) | RED LRM cover |
| 15 Mar 1979 | Both finalists deliver: full specification, Rationale, sample-problem solutions, test translator | Whitaker 1993 ("delivered on 15 March 1979"); Green Rationale cover date 15 March 1979 |
| Apr 1979 | Large evaluation meeting in the Washington DC area, design teams questioned in depth | Whitaker 1993. Van Deusen places the presentation "at a church in Arlington VA" (Memories) |
| 2 May 1979 | HOLWG meeting incl. UK, France, FRG representatives selects Green. Whitaker mails 3000 green postcards "Green is Ada!" the same afternoon | Whitaker 1993 |
| 14 May 1979 | Deputy SecDef C. W. Duncan Jr. letter announces Ada, invites comments until 30 Nov 1979 | Whitaker 1993, Figure 10; the letter is the first page of local `green/DTIC_ADA071761.txt` |
| Jun 1979 | Preliminary Ada RM and Rationale published as SIGPLAN Notices 14(6), Parts A and B | Whitaker 1993 |
| Jun–Jul 1979 | Five one-week courses (instructors incl. Ichbiah, Firth, Barnes); test and evaluation by recoding applications; results meeting 23-26 Oct 1979, Boston Museum of Science | Whitaker 1993 |
| 24 Jul 1980 | Cii delivers revised design; HOLWG accepts on 25 Aug 1980; "Distinguished Reviewers" chaired by Carlson | Whitaker 1993, "Phase III" |
| Feb 1983 | ANSI/MIL-STD-1815A; ISO 8652 in 1987 | Whitaker 1993 |

Process facts worth quoting:

- **Unanimity.** "Every formal vote that the HOLWG ever took was unanimous! ... I waited until everybody
  agreed on a course of action before posing a formal vote." (Whitaker 1993). This matches Van Deusen's
  claim that the winner had to be chosen unanimously (below), but from the chairman's side.
- **Translators did not count.** Whitaker: "In the end the translator products were insufficiently
  complete, and perhaps too slow, to provide any input to the evaluation process, contrary to our early
  expectations." Van Deusen: "According to the contract for Phase Two, the Test Translator was not to be
  considered as a factor in the choice of the winning language design." (Memories; also the overview page:
  "the contract terms dictated that the translator would not be used as a factor in the language
  selection").
- **Schedule.** Whitaker: completion date fixed two years in advance "and met it to within two days." The
  only missed milestone was the *name*, missed "by over a year".
- **Name.** "DOD-1 was never a candidate for the name" — it was the password of the common HOLWG
  computer account (Whitaker 1993). Name proposed by Jack Cooper; Lord Lytton (Lovelace's heir) asked for
  permission by letter of 10 Oct 1978 (Whitaker 1993, Figures 11-13).
- **ARPANET-run project.** "This project was run almost entirely over the net, perhaps the first
  independent project to do so." Money came from the Services, routed via DARPA (ARPA Order 3341) to
  DSS-W; DARPA's Bill Carlson (IPTO) managed contracts and designed the down-select competition "modeled
  on an architectural competition" (Whitaker 1993).
- **Side entries.** CMU's TARTAN (Shaw, Hilfinger, Wulf, CMU-CS-78-133, June 1978) and an IBM study
  "reduce the base PL/I by 75% and supplement it by 15%" were submitted for technical input, not in the
  competition (Whitaker 1993).

### Dijkstra's view of the 1978 cut (verified, first-hand but hearsay in parts)

- Dijkstra spent March 1978 on the four designs and "had suggested to Lt.Col. William A. Whitaker to
  proceed with none of the four, because they were all too poor." (EWD665)
- He reports 75 evaluation teams and an advisory committee incl. D. Fisher, W. Wulf, D. Gries,
  J. Reynolds that met two weeks in Pittsburgh and wrote a 12-page report; "I have been told — by the
  well-known 'reliable source' — that Lt.Col. William A. Whitaker, however, has refused to distribute
  this report ... 'because it was too negative'." On the Red/Green choice: "don't ask how that decision
  has been enforced!" (EWD665). This is explicitly second-hand.
- On RED (phase-1 REDL): initially "repelled", then sympathy for "obvious efforts to keep the language
  simple and systematic" (no dangerous aliasing, no side effects in functions, named types only); ends
  with "The proposal is both advanced and backward in such an incongruous manner that I am baffled." Note:
  REDL had **monitors, EVENTs and a fork statement** (EWD661) — not the mailboxes of the 1979 RED.
- On GREEN: "Parts of it are excellent!" (Curate's Egg); 72 reserved words; "multiple ways of doing the
  same thing"; ends: "Technical incompetence, probably enhanced by dishonesty." (EWD660)
- On BLUE: the chapter on types and operators "has grown to 160 (!) pages" (EWD659) — corroborates Van
  Deusen's story that Blue lost partly by over-explaining.
- On YELLOW: "An unsalvageable mess. I am full of sympathy for their consultants who were unable to
  prevent this." (EWD662)

### Why Green won — what the sources actually say

Verified statements (all partisan in some direction):

- **Van Deusen (Red team):** reviewers saw two clusters, conservative Blue/Red vs ambitious "academic"
  Yellow/Green; picked one from each; "it was always assumed that Green was going to win"; Green "had a
  fine-tuned political sense ... Green's first design decision was the length of the book"; the phase-2
  Red was a from-scratch redesign by John Nestor, and an intermediate presentation showed it at its most
  complex; reviewers were already writing the first Green books. (Memories)
- **Time/Life 1986 (quoting a competitor):** "Red was the more conservative language, Green the more
  briefly described, avant-garde language ... But both languages changed during this final phase: Red
  becoming more avant-garde, Green becoming more conservative as it was fleshed out."
- **Taft (Intermetrics, joined 1980):** "The Green proposal reached a level of stability and completeness
  earlier than the other designs, and Jean Ichbiah did an excellent job of presenting its features in a
  way that the reviewers could understand and appreciate. Although there were flashes of brilliance in the
  other designs, none of them achieved the polish and maturity of the Green design." (Taft A-Z, p. ~4)
- **Types in Red (1981):** RED "was generally acknowledged to be an innovative and ambitious design" and
  "gained much from the TARTAN language".
- **Gap:** the phase-2 evaluation reports and any written decision rationale are only on microfiche
  (Whitaker cites [HOLWG, 1980a], produced at Eglin AFB). Not found online.

### Unverified / commonly repeated

- **Air Force delegate under orders.** Van Deusen: "the Air Force sent a low-ranking young man to attend
  the voting meeting ... instructed to vote for Green, to not discuss the matter, and to not change his
  vote." Single first-hand source from the losing side; no corroboration found. Whitaker's unanimity
  practice makes the story *mechanically* plausible (one fixed vote forces the rest), but nothing confirms
  it.
- **"Green translator not ready on the day."** Van Deusen says Green's translator was not ready while
  Red's worked. Whitaker says *both* translators were insufficient to inform evaluation. Green's own
  foreword confirms a test translator was started only in phase 2 (Ripken, Boullier, Hueras, Lange).
- **"Nearly 400 reviewers" in 1978** (Time/Life 1986) vs "80 teams" (Whitaker, Perry memo) vs "75 teams"
  (Dijkstra). Probably ~400 people in ~75-80 teams; not reconciled in any source seen.
- **Number of proposals:** 14 (Whitaker), 15 (Time/Life), 16 (Van Deusen overview page).
- **"Hoare and Wirth consulted for Yellow."** Time/Life 1986 says Hoare "served with Wirth on the SRI
  International team"; Bertrand Meyer repeats "Hoare and Wirth had consulted for the 'Yellow' proposal"
  (https://bertrandmeyer.com/2026/03/16/celebrating-tony-hoares-mark-on-computer-science/, written on
  Hoare's death in March 2026). Two secondary sources agree; the Yellow documents themselves were not seen.
  Note Hoare is also thanked in the Green Rationale foreword, and Whitaker says ONR London paid "Dijkstra,
  Hoare, Wirth, ..." for Strawman inputs.

---

## 2. Who was who; what happened to RED and Intermetrics

### Verified

- **RED people.** Project manager Benjamin Brosgol; principal designer John Nestor; LRM authors Nestor
  and Van Deusen; design/review: Belmont, Boyd, Brosgol, Cassels, Mark Davis, Knobe, Levine, Martin,
  Eliot Moss, Craig Schaffert, Tighe, Van Deusen. **Consultants: Barbara Liskov (MIT), William Wulf (CMU),
  Paul Abrahams (NYU), Robert Dewar (NYU).** Government technical monitor: William Carlson. Contract
  MDA903-77-C-0330. (RED LRM, DTIC AD-A219453, front matter and acknowledgements.)
  The RED Rationale was written by Brosgol, Mark Davis, Knobe, Liskov, Schaffert, Wulf (RED Rationale 1.2).
- **Wulf on both sides of the table.** Dijkstra lists Wulf on the 1978 advisory committee that digested
  the evaluations (EWD665); Wulf is then a RED phase-2 consultant (RED LRM). TARTAN, Wulf's CMU design, is
  named as RED's spiritual source (Types in Red). Fact, not an accusation; the article can note it.
- **Green people.** Led by Jean D. Ichbiah with Bernd Krieg-Brueckner, Brian A. Wichmann, Henry F.
  Ledgard, Jean-Claude Heliard, Jean-Raymond Abrial, John G.P. Barnes, Olivier Roubine; formal
  denotational definition by Donzeau-Gouge, Kahn, Lang (INRIA). Commenters included Brinch Hansen, Fisher,
  Goos, Hoare, Woodger. Design reviews with J.B. Goodenough, Habermann, Wegner and others. (Green
  Rationale, Foreword.) Wichmann was thus a Green insider, not a neutral historian.
- **Blue** was led by John Goodenough (SofTech); **Yellow** by Jay Spitzen (SRI). (Van Deusen overview
  page; Types in Red references: "J. Spitzen, Language Specification, YELLOW, SRI, February 1978".)
- **REDL vs RED.** "REDL, the Red language of Phase 1, and RED, the Red Language of Phase 2, are two
  entirely different languages." (Types in Red; also Van Deusen overview and Memories: Nestor threw REDL
  out and started from scratch.)
- **RED translator.** "No implementation of RED, beyond the original translator delivered with the
  language design, has been planned [Davis and Levine 79]" — reference: "M. Davis and D. Levine. RED
  Translator, Intermetrics, Inc., March 1979." (Types in Red.) The RED Rationale says the ten DoD contract
  problems were "verified [for] syntactic correctness through the RED Test Translator", and section 10.7
  describes the subset of I/O the Test Translator supports (READ/WRITE/READLN/WRITELN on ASCII files). Van
  Deusen credits Mark Davis's team (Memories; overview page: "a brilliant example of working in a
  constantly changing environment, led by Mark Davis").
- **The RED LRM is public.** DTIC AD-A219453, "Approved for public release; distribution unlimited",
  controlling office AJPO, entered DTIC in March 1990 (accession stamp "MAR 02 1990"). Van Deusen wrote
  that the RM and Rationale "were not publicly available after the end of the contest" — true in 1979-1990,
  no longer true.
- **Intermetrics after 1979:**
  - Built a Preliminary-Ada interpreter for the DEC-10 in 1980, available via ARPANET ("much more useful"
    than Honeywell's Multics interpreter). (Whitaker 1993)
  - Won the Air Force **Ada Integrated Environment (AIE)** run-off (vs CSC, TI); IBM 370 host/target,
    written in Ada; environment deferred, compiler finished after the contract expired; Whitaker calls AIE
    and the Army's ALS "embarrassing contractual failures". (Whitaker 1993) Taft: "we had to build a
    separate boot compiler in Pascal ... almost a million lines of Ada code". (Taft A-Z)
  - Brosgol and Tighe (Intermetrics), Nestor (now at CMU) and Wulf were at the January 1981 Eglin
    "parley" that produced **DIANA**, the standard Ada intermediate representation. (Whitaker 1993)
  - VHDL: USAF contract 1983 to Intermetrics + TI + IBM, Intermetrics as the language experts; VHDL
    "borrows heavily from the Ada programming language in both concept and syntax"; IEEE 1076-1987.
    (https://en.wikipedia.org/wiki/VHDL — second-hand)
  - **Ada 9X**: from 1988; the Intermetrics Mapping/Revision Team won "over several other teams,
    including one that included Jean Ichbiah"; Taft technical lead; Ichbiah joined as reviewer in
    1992-93 and "ultimately left the project" over the OO design. (Taft A-Z) Ada 95 Rationale foreword:
    "prepared by the Ada 9X Design Team based at Intermetrics, Inc., under the direction of William
    Carlson, Program Manager, and S. Tucker Taft, Technical Director ... consultants John Barnes, Ben
    Brosgol, and Offer Pazy."
  - Corporate: merged with Whitesmiths (1988), renamed AverStar (1998), merged into Titan (March 2000),
    Titan bought by L-3 (2005). (https://en.wikipedia.org/wiki/AverStar — second-hand)
- **Taft joined Intermetrics in September 1980** — after RED; he was not on the Red team. (Taft A-Z)

So: the loser of 1979 wrote the language that replaced Ada 83's model in 1995, with the RED project
manager (Brosgol) as a consultant and Ichbiah walking out. This is the strongest "RED got a second
chance" thread and it is fully verified.

### Unverified

- Whether the Ada 95 "William Carlson, Program Manager" is the same person as DARPA's Bill Carlson who
  monitored the RED contract in 1979. Same name, plausible, not confirmed.
- Robert Dewar (RED consultant) "always preferred Green from a technical point of view" — a comp.lang.ada
  post (https://usenet.ada-lang.io/comp.lang.ada/dewar.873632504@merv) seen only via search snippet; site
  is behind a Cloudflare challenge. Worth reading manually before quoting.
- Brosgol's own retrospective "From Strawman to Ada 2005: a Socio-Technical Retrospective", SIGAda 2008
  (abstract: https://sigada.org/conf/sigada2008/Ben-Brosgol-Abstract.html). Slides not found; might hold
  the Red-side account of the decision.

---

## 3. Concurrency: RED vs Green/Ada, critiques, and what later Ada did

### Verified

**What the requirements demanded.** Ironman 9C asked that a path "wait for and gain exclusive use of
certain program declared objects" (local `steelman/ironman.txt`). Steelman 9C-9J (June 1978): mark shared
variables and warn on unmarked sharing; efficient mutual exclusion but "shall not require any use of
mutual exclusion"; FIFO within priorities; real-time clock and delay; asynchronous termination; data
passing that can be delayed "until both the sending and receiving processes have requested the transfer"
(9H); signals (9I); wait for the first of several waits (9J). (Steelman text, local `steelman/steelman.txt`;
https://dwheeler.com/steelman/steelman.htm)

**RED (March 1979)** — RED LRM chapter 10 and chapter 14 (local `red-rm/multitasking.txt`):

- Tasks are invoked to produce *activations*, each named by an ACT variable; priority scheduler.
- **MAILBOX** is a typed variable with a declared capacity, e.g. `VAR m : MAILBOX[STRING[ASCII](4)] (3);`
  FIFO; sender blocks when full; capacity 0 means "the sender can never get ahead of the receiver"
  (synchronous hand-off). SEND/RECEIVE can be used in a multi-way **WAIT** statement together with delays.
- Shared variables are allowed; "No automatic mutual exclusion is provided"; the translator warns on
  "dangerous sharing". The **REGION** statement over a **DATA_LOCK** variable gives FIFO mutual exclusion
  (a critical region); REGION "can also be defined to work for variables with types other than DATA_LOCK".
- **Two levels**: high-level (ACT, MAILBOX, DATA_LOCK) and low-level (LATCH, user-defined schedulers and
  synchronisation, interrupt handling) "to allow system programmers to define new schedulers".
- REDL (phase 1) had monitors, EVENTs and fork instead (EWD661). So RED moved *away* from monitors
  toward messages + regions between 1978 and 1979.

**Green (March 1979)** — Green Rationale ch. 11.4 (local `green/DTIC_ADA073662.txt`, ~line 10290 ff.):

- Explicitly credits Conway's coroutines, "Two recent papers by Hoare (Ho 78) and Brinch Hansen (BH 78)
  ... have strongly influenced the design of the Green language" (CSP and Distributed Processes).
- Rejects channels "to avoid an additional language concept"; chooses **asymmetric naming**: caller names
  the server, server does not name callers, so library servers are possible.
- Preliminary (1978) Green had CSP-like typed *boxes* with `connect`; final Green introduced the
  **extended rendezvous** so a consumer needs one call (`BUFFERING.READ(X)`) instead of two.
- Message systems are dismissed: "Perhaps the biggest disadvantages of message systems is the need for a
  sizable message controller ... they do not easily solve exclusion problems because of the high
  overhead." Monitors solve "the exclusion problem but not the message problem".

So the 1979 choice was literally between **typed bounded mailboxes + critical regions (RED)** and
**one universal primitive, the extended rendezvous (Green)**, and Green's Rationale argues against the RED
model by name of category.

**Contemporary critiques of Ada (not specifically of the rendezvous):**

- Hoare 1980 Turing lecture: "Gradually these objectives have been sacrificed in favor of power,
  supposedly achieved by a plethora of features and notational conventions, many of them unnecessary and
  some of them, like exception handling, even dangerous. ... Gadgets and glitter prevail over fundamental
  concerns of safety and economy." and "Do not allow this language in its present state to be used in
  applications where reliability is critical". He also says "I have been giving the best of my advice to
  this project since 1975."
- Wirth (quoted in Time/Life 1986): "It throws too many things at the programmer. I don't think you can
  just learn a third of Ada and be fine." Ichbiah's reply in the same text: "Big problems need big
  solutions!"
- Brinch Hansen (1982, quoted by himself in "The Evolution of Operating Systems", 2000,
  http://brinch-hansen.net/papers/2001b.pdf): "The recent development of the complicated programming
  language Ada ... will soon make the development of incomprehensible, unreliable software inevitable even
  for personal computers. Both predictions turned out to be true (although Ada was not to blame)."
- Book-length critique of Ada tasking: A. Burns, A. M. Lister, A. J. Wellings, *A Review of Ada Tasking*,
  LNCS 262, Springer 1987 (https://link.springer.com/10.1007/3-540-18008-7). Contents not read.

**What Ada 95 did (protected objects):**

- Ada 95 Rationale 9.1: "In Ada 83, the rendezvous was used for both inter-task communication and for
  synchronizing access to shared data structures. However, the very generality of the rendezvous means
  that it has a relatively high overhead. Ada 95 overcomes this problem by introducing a low overhead,
  data-oriented synchronization mechanism based on the concept of protected objects." A protected object
  "is designed to be a very efficient conditional critical region".
- 9.1.4 "Relationship with Previous Work": lineage is Hoare's conditional critical region
  (`region V when barrier do ... end`) and Brinch Hansen/Hoare monitors; "the rendezvous has a heavy
  implementation overhead through the introduction of an intermediary task and can also suffer from race
  conditions"; "Protected objects are very similar to the shared objects of the Orca language". **RED is
  not mentioned.**
- Taft: protected objects are "the new passive, data-oriented synchronization construct that we defined
  to augment the existing active message/rendezvous-oriented task construct of Ada 83" (Taft A-Z).

**What high-integrity Ada did to the rendezvous:** the Ravenscar profile (Ada 2005, RM D.13) includes
`Max_Task_Entries => 0` and `No_Select_Statements` — no task entries, therefore no rendezvous at all;
communication only through protected objects (http://www.ada-auth.org/standards/22rm/html/RM-D-13.html).

**Bounded mailboxes came back as a library:** Ada 2012 added
`Ada.Containers.Bounded_Synchronized_Queues` / `Unbounded_Synchronized_Queues` (RM A.18.28-A.18.29,
https://www.adaic.org/resources/add_content/standards/12rm/html/RM-A-18-29.html) — functionally a typed
bounded mailbox, built from protected objects.

**User-defined scheduling:** never standardised in Ada; Annex D gives a fixed menu of dispatching
policies. Application-defined scheduling was proposed by Aldea Rivas, González Harbour et al. 2002-2005
(e.g. https://sigada.hosting.acm.org/ada_letters/dec2003/10_Harbour_final.pdf); adoption not confirmed.
RED had user-defined schedulers in its 1979 low-level layer.

### Assessment of the two claims asked about

- **"Ada 95 protected types ~ RED datalocks/regions"** — *Partly true as convergence, false as
  influence.* RED REGION/DATA_LOCK is an unconditional critical region over a lock variable placed
  anywhere in the code — exactly the "scattered critical regions" Brinch Hansen criticised and which Ada
  95's Rationale quotes as the reason for monitors. Protected objects are CCR + monitor encapsulation with
  barriers. Both descend from Hoare/Brinch Hansen 1972-73. The Ada 95 Rationale cites CCR, monitors, CSP
  and Orca, not RED. Honest framing: "Ada 95 conceded RED's point that shared data needs its own cheap
  primitive separate from messaging; it did not adopt RED's form."
- **"Ada 2012 pre/postconditions ~ RED ASSERT"** — *False as stated.* Steelman 10F *required*
  assertions, and **both** finalists had them: RED's assertion raises X_ASSERT (RED LRM 3.4); Green /
  Preliminary Ada had an `assert` statement raising ASSERT_ERROR (Green RM 5.9, local
  `green/DTIC_ADA071761.txt`). **Ada 83 dropped it** — the word "assert" does not occur in the 1815A RM
  (local `green/DTIC_ADA131511.txt`, 0 matches; also absent from the Ada 83 predefined pragma list,
  http://archive.adaic.com/standards/83lrm/html/lrm-B.html). `pragma Assert` returned in Ada 2005 (RM
  11.4.2, https://www.adaic.org/resources/add_content/standards/12rm/html/RM-11-4-2.html), and Ada 2012
  contracts are credited by Barnes to "languages such as SPARK and Eiffel"
  (https://www.adacore.com/uploads/techPapers/Ada2012_Rationale_Chp1_contracts_and_aspects-cc.pdf).
  Better story: "assert was in Green in 1979, removed in the 1980-83 polishing, and took 26 years to come
  back."

### A stronger, verified RED-to-later-Ada convergence: user-definable language forms

RED LRM chapter 13 "Advanced Definitions" (local `red-rm/advanced.txt`): "ways in which special language
forms can be extended to work for data items having user-defined types. These forms include infix and
prefix operators, assignment, selectors, and the case and repeat statements. Also included is a discussion
of the automatically invoked initialization and finalization operations." Plus user-defined "resolution"
`x # t` for literals/constructors (13.5).

| RED 1979 | Ada equivalent | Year |
|---|---|---|
| user-defined assignment, automatic initialization/finalization (13.2-13.3) | RM 7.6 "User-Defined Assignment and Finalization" (controlled types) | Ada 95 (https://www.adaic.org/resources/add_content/standards/95lrm/ARM_HTML/RM-7-6.html) |
| user-defined selectors: subscripting and dot (13.4) | RM 4.1.6 "User-Defined Indexing", 4.1.5 "User-Defined References" | Ada 2012 |
| extending REPEAT to user-defined types | RM 5.5.1 "User-Defined Iterator Types" | Ada 2012 |
| resolution form for literals/constructors (13.5) | RM 4.2.1 "User-Defined Literals", 4.3.5 "Container Aggregates" | Ada 2022 (http://www.ada-auth.org/standards/22rm/html/RM-4-2-1.html) |
| extending CASE to user-defined types | none (Ada case still discrete types only) | — |

Convergence, not documented influence. But it is a clean fact pattern: every one of these RED features
except user-defined CASE eventually entered Ada, over 1995-2022.

---

## 4. Influence chains (for grounding alt-history)

### Verified

- **PL/SQL.** Oracle's own docs: "PL/SQL is based on the programming language Ada. As a result, PL/SQL
  uses a variant of Descriptive Intermediate Attributed Notation for Ada (DIANA) ... Both the DIANA and
  system code for a subprogram or package are stored in the database."
  (https://docs.oracle.com/en/database/oracle/oracle-database/19/lnpls/plsql-program-limits.html, same
  text in 10g/12c docs.) Community history: first PL/SQL compiler code January 1987, "The PL/SQL compiler
  began as a verbatim copy of the specification" of DIANA (https://oracle-internals.com/, secondary).
  DIANA was born at the Jan 1981 Eglin meeting with Nestor (RED designer), Brosgol and Tighe (Intermetrics)
  among the participants (Whitaker 1993). So every Oracle database stores DIANA trees designed partly by
  RED people.
- **VHDL.** Intermetrics (Red's company) was the language expert on the 1983 VHDL team; VHDL is Ada-based
  in syntax and concepts (Wikipedia VHDL, second-hand; the Ada-syntax requirement claim there is tagged
  "citation needed").
- **C++.** Stroustrup, "A History of C++: 1979-1991" (HOPL-II, https://www.stroustrup.com/hopl2.pdf):
  "The post-1985 evolution of C++ shows the influence of ideas from Ada, Clu, and ML"; the 1986 "whatis"
  paper: "Ada, Clu, and ML support parameterized types. C++ does not" and "Ada, Algol68, and Clu each
  support a standard way of handling exceptions. Unfortunately, C++ does not"; on iostreams: "Part of the
  inspiration came from the last page and a half of the Ada Rationale [Ichbiah,1979]" — the *1979*
  Rationale (SIGPLAN Notices 14(6) Part B), i.e. essentially the Green Rationale. Templates are explicitly
  contrasted with Ada's explicit instantiation ("something like Ada's 'new' operator"). He also says
  separate inline/compiled pop() "In this, C++ resembles Ada [Ichbiah,1979]."
- **Eiffel** (1985-86) lists Ada among influences (https://en.wikipedia.org/wiki/Eiffel_(programming_language),
  second-hand).
- **SPARK.** First version 1987, University of Southampton (Bernard Carré, Trevor Jennings), MoD-sponsored,
  based on Ada 83; name from "SPADE Ada Kernel"; SPARK 2014 on Ada 2012
  (https://en.wikipedia.org/wiki/SPARK_(programming_language), second-hand).
- **Erlang.** Armstrong, "A History of Erlang", HOPL-III 2007
  (https://www.labouseur.com/courses/erlang/history-of-erlang-armstrong.pdf): the SPOTS experiments
  programmed POTS in "Ada, Concurrent Euclid, PFL, LPL0, Frames and CLU"; languages with processes in the
  language known to them were "Ada (with tasks), EriPascal, Chill, PLEX and Euclid"; Figure 1 puts Erlang
  between concurrent functional languages and "Concurrent system programming languages like Ada, Modula or
  Chill". Armstrong first tried pipes, threw them away, then "implemented a point-to-point communication
  mechanism with mailboxes ... At this point, pipes were rejected and mailboxes accepted." Erlang: no
  shared memory, asynchronous copying message passing, per-process mailbox, selective receive.
- **occam** (1983, David May et al., Inmos, guided by Hoare) is based on CSP
  (https://en.wikipedia.org/wiki/Occam_(programming_language), second-hand). Brinch Hansen: "I prefer occam
  to its competitors, Fortran, C, and Ada" (http://brinch-hansen.net/papers/1993b.pdf).
- **The Ada mandate.**
  - DoD Directive 3405.1 "Computer Programming Language Policy", 2 April 1987 (NRC, *Ada and Beyond*,
    1997, https://nap.nationalacademies.org/catalog/5463).
  - Statute: Pub. L. 101-511 (DoD Appropriations Act 1991, 5 Nov 1990) **Sec. 8092**: "after June 1,
    1991, where cost effective, all Department of Defense software shall be written in the programming
    language Ada, in the absence of special exemption by an official designated by the Secretary of
    Defense." (104 Stat. 1856, https://www.govinfo.gov/content/pkg/STATUTE-104/pdf/STATUTE-104-Pg1856.pdf,
    text checked). Some secondary sources say "101-611" — wrong.
  - Repeated as Sec. 8073 (FY92) and Sec. 9070 (FY93) appropriations; a 1996 Air Force legal memo
    concluded it applied only to the years it appeared (comp.lang.ada repost, seen via search only:
    https://usenet.ada-lang.io/comp.lang.ada/321DF7BA.3278@lmtas.lmco.com) — treat as second-hand.
  - NRC *Ada and Beyond* (1997): "Focus the Ada requirement on warfighting applications."
  - Assistant SecDef Emmett Paige memo, **29 April 1997**: eliminate the Ada requirement in DoDD 3405.1
    in favour of engineering-based language selection (https://adahome.com/articles/1997-04/po_memopaige.html,
    https://adahome.com/articles/1997-05/po_memoweight.html).
- **No subsets, validation.** Whitaker: "I made it a principle that there were to be no subset and no
  supersets compilers for Ada"; the ACVC was contracted to SofTech (Blue's company) in Oct 1979 under John
  Goodenough. (Whitaker 1993) Hoare 1980 called the no-subset rule "the strangest paradox of the whole
  strange project. If you want a language with no subsets, you must make it small."

### Unverified / not checked

- That Ada's exceptions specifically shaped Java/C# — commonly said, not checked here.
- That VHDL's Ada syntax was a *DoD requirement* (Wikipedia tags it "citation needed").
- PL/SQL release date (Oracle 6, 1988) — only weak sources seen.

---

## 5. Blue and Yellow documents

### Verified

- Dijkstra's reviews exist and are online (EWD659 Blue, EWD662 Yellow), published in SIGPLAN Notices
  13(10), Oct 1978 (FOLDOC; EWD index https://www.cs.utexas.edu/~EWD/index06xx.html). They quote page
  numbers from the Blue and Yellow "Preliminary Design Phase Report" and "Language Specification".
- Yellow spec citation: "J. Spitzen, Language Specification, YELLOW, SRI, February 1978" (Types in Red
  references). Blue: "[Goodenough 78]".
- Derek M. Jones (forwarding Luke A. Guest, Aug-Sep 2023) reports that DTIC scanned the 4,575-page
  "DoD Common High Order Language, Phase I, Reports and Analyses" (1978) at
  https://apps.dtic.mil/sti/trecms/pdf/ADB950587.pdf, containing "all 4 language reports", after Edward
  Fish asked DTIC to scan them
  (https://lists.techfak.uni-bielefeld.de/pipermail/systemsafety/2023-September/005936.html).

### Not verified

- I could not open ADB950587 (DTIC returns 403 to scripted clients; not on archive.org under that ID).
  Needs a manual browser download. If it is what Guest says, it contains the phase-1 Blue, Yellow, REDL
  and preliminary Green designs plus the analyses — the single most valuable missing source for this
  episode.
- TARTAN (CMU-CS-78-133) was not looked up; likely obtainable from CMU or DTIC.

---

## 6. Rational R1000 emulator status (October 2026)

### Verified

- DataMuseum.dk's emulator moved from GitHub (`Datamuseum-DK/R1000.Emulator2`, last push 2026-03-25,
  README "has moved") to **https://codeberg.org/Datamuseum-dk/R1000.Emulator**; last commit 2026-07-22.
- The Codeberg README describes two emulations: a SystemC hardware-level one "several thousand times
  slower than the real computer", and a software emulation obtained by progressively collapsing the
  schematics into six C++ components (FIU, IOC, SEQ, TYP, VAL, MEM32): "Subsequent optimization has
  brought the software emulation to speed parity with the actual hardware."
- History: release1 had a 420x slowdown and 137 h to idle; release2 "HW-true schematics booted to login"
  (GitHub Emulator2 README). First official release 2024-02-03 (museum wiki, via search). A physical
  R1000/400 at the museum runs (2022 status page,
  https://datamuseum.dk/wiki/Rational/R1000s400/2022_Project_Status).
- Disk images (1 GB each) at https://datamuseum.dk/wiki/Bits:Keyword/RATIONAL_1000/DISK; cleaned faster
  images on request from phk@datamuseum.dk. "Getting Started" is marked "(Needs revision)".
- Builds on FreeBSD and macOS; needs C++, Python 3, SystemC, KiCad 7+; uses the Musashi 68k emulator for
  the IOC's 68k.

### Unverified

- That the R1000 executed DIANA directly / stored programs as DIANA. Rational used a DIANA variant in its
  later Ada 95 compiler/Apex (comp.lang.ada, via search only); the R1000 internals claim was not confirmed.

---

## 7. Surviving RED translator

- **Nothing found online.** The deliverable "M. Davis and D. Levine, RED Translator, Intermetrics, March
  1979" is cited in Types in Red; no DTIC record, archive.org item or source listing found.
- Van Deusen: "we had to let Red disappear quickly, and completely. And so it did." (Memories)
- The Mark Davis of the RED team is listed as "Dr. Mark Davis" (RED LRM). Do **not** assume he is Mark
  Davis of Unicode (1979 Stanford PhD in philosophy, per Wikipedia); no link between them found.
- Leads: Van Deusen's site (contact via iment.com); Brosgol (SIGAda 2008 talk); the 1979 phase-2
  microfiche [HOLWG 1980a] and DTIC records under contract MDA903-77-C-0330.

---

## Alt-history raw material

Each thread: the real fork point, the mechanism, what plausibly changes, what evidence supports it.
Ordered roughly from best-grounded to most speculative.

1. **The unanimous vote breaks (2 May 1979).**
   *Fork:* the HOLWG meeting of 2 May 1979. *Mechanism:* Whitaker only called formal votes once everyone
   agreed (Whitaker 1993); if one Service had dug in for Red (or the Air Force delegate in Van Deusen's
   story had not had orders), the choice stalls. *Plausible change:* not an instant Red win but a delay —
   Whitaker was reassigned to Eglin within a month and Fisher took over; Dijkstra had already urged
   picking none (EWD665). A stall in mid-1979 with Whitaker gone could have meant a third phase, a merger
   of the two designs, or the "interim list" (CMS-2, JOVIAL J73, etc.) becoming permanent. *Evidence:*
   Whitaker on unanimity and his reassignment; Van Deusen on the vote; Dijkstra on the 1978 cut.

2. **RED wins, but the Ada 9X team is still Intermetrics.**
   *Fork:* same date, other outcome. *Mechanism:* the people who did Ada 95 (Taft, Brosgol as consultant)
   were at Intermetrics; RED already had user-defined assignment/finalization, selectors and iteration
   (RED LRM ch. 13), which Ada needed until 1995/2012/2022. *Change:* "RED 83" would ship with controlled
   types and user-defined indexing from day one; the 1990s revision would be about OO (Taft's main Ada 95
   topic) rather than catching up. *Evidence:* RED LRM ch. 13 vs RM 7.6 (Ada 95), 4.1.6/5.5.1 (2012),
   4.2.1 (2022); Ada 95 Rationale foreword; Taft A-Z.

3. **No rendezvous, no abstraction inversion.**
   *Fork:* Red's MAILBOX + REGION instead of Green's entry/accept. *Mechanism:* RED separates messaging
   (typed bounded mailboxes, size-0 for synchronous hand-off) from mutual exclusion (data locks), which is
   exactly the split Ada needed to re-add in 1995 because "the very generality of the rendezvous means that
   it has a relatively high overhead" (Ada 95 Rationale 9.1). *Change:* no decade of complaints about
   rendezvous overhead (Burns/Lister/Wellings 1987 would review a different model); Ravenscar-like
   restricted profiles look natural from the start. Downside: RED's regions are unstructured, so the
   "scattered critical regions" problem (Brinch Hansen 1973, quoted in the Ada 95 Rationale) arrives
   instead. *Evidence:* RED LRM 10.3-10.7; Green Rationale 11.4; Ada 95 Rationale 9.1, 9.1.4; RM D.13
   (`Max_Task_Entries => 0`).

4. **Erlang meets a DoD language that already has mailboxes.**
   *Fork:* Ericsson's SPOTS experiments (mid-1980s) tried Ada. *Mechanism:* if the DoD language had
   typed mailboxes, the POTS experiments would have tested message passing in a mainstream language.
   *Change (modest):* Erlang still happens — its design drivers are no sharing, process isolation, failure
   handling and asynchronous copying messages (Armstrong), none of which RED has (RED allows shared
   variables; mailboxes are bounded and blocking). Honest version: RED would have been "closer to Erlang
   than Ada was", not Erlang's ancestor. *Evidence:* Armstrong HOPL-III (SPOTS language list, mailbox
   decision); RED LRM 10.3, 10.6.

5. **Green frozen as of March 1979 (no 1980-83 polishing).**
   *Fork:* skip "Phase III" (Whitaker 1993). *Mechanism:* Preliminary Ada still had the `assert`
   statement (Green RM 5.9), CSP-era pragmas Dijkstra mocked (`SIMULATION`, EWD660), and was the version
   Hoare attacked. *Change:* assertions would be in the language from 1979 (they vanished from Ada 83 and
   returned only in Ada 2005); on the other hand, the many fixes from the "Distinguished Reviewers" and
   the formal-definition work would be missing. *Evidence:* Green RM 5.9; Ada 83 RM (no "assert");
   RM 11.4.2 (Ada 2005); Whitaker on Phase III.

6. **DIANA is RED-flavoured — and so is every Oracle database.**
   *Fork:* the Jan 1981 Eglin meeting. *Mechanism:* DIANA was designed for whichever language won, by
   Goos/Wulf/Nestor/Brosgol/Tighe and others. *Change:* in a RED world a "DIANA for RED" exists; Oracle
   (1987) models PL/SQL on the DoD language "because Ada was known to be a simple, safe, and modular
   language" — PL/SQL would have RED syntax (capsules, `VAR`, `DATA_LOCK`?). *Evidence:* Whitaker 1993 on
   DIANA participants; Oracle PL/SQL limits page ("based on the programming language Ada ... uses a variant
   of DIANA"); oracle-internals.com history.

7. **VHDL designed by the winner rather than the loser.**
   *Fork:* the 1983 USAF VHDL contract went to Intermetrics/TI/IBM. *Mechanism:* VHDL copied the DoD
   language's syntax; Intermetrics were the language experts. *Change:* with RED as the DoD language,
   Intermetrics would copy *its own* language — VHDL processes might talk through RED mailboxes rather than
   signals. Real-world irony to note: the Red team ended up shaping a hardware language in Green's image.
   *Evidence:* Wikipedia VHDL (second-hand), AverStar article.

8. **The no-subset rule meets a smaller language.**
   *Fork:* Whitaker's "no subset and no supersets" principle. *Mechanism:* Hoare: "If you want a language
   with no subsets, you must make it small." RED was the "workmanlike" conservative design (Van Deusen) but
   its phase-2 rewrite was "more avant-garde" (Time/Life) and kept two levels of tasking. *Change:* a
   genuinely smaller winning language might have made the 1987-1997 mandate cheaper to comply with and
   killed the waiver industry; but RED's user-definable forms and low-level schedulers are not small
   either — RED would not have pleased Hoare. *Evidence:* Whitaker 1993; Hoare 1980; RED LRM ch. 13-14.

9. **Ichbiah stays for Ada 95.**
   *Fork:* 1992-93, Ichbiah as 9X reviewer leaves over the OO design (Taft A-Z); his team had lost the 9X
   competition to Intermetrics. *Mechanism:* the original designer with a different OO model. *Change:*
   Ada 95 tagged types might look different (Ichbiah preferred another approach); the 1979 loser's victory
   in 1990 becomes less complete. *Evidence:* Taft A-Z.

10. **The Pittsburgh report is distributed (April 1978).**
    *Fork:* the advisory committee report (Fisher, Wulf, Gries, Reynolds) that Dijkstra says Whitaker
    withheld "because it was too negative". *Mechanism:* a negative expert report in front of the deciding
    meeting. *Change:* possibly no phase 2 at all, or a TARTAN-like restart (TARTAN was submitted by CMU
    around then, and RED later drew on it). *Evidence:* EWD665 (explicitly hearsay); Whitaker 1993 on
    TARTAN; Types in Red ("gained much from the TARTAN language"). Speculative, flag it as such.

11. **Blue survives the 1978 cut.**
    *Fork:* April 1978. *Mechanism:* Blue was the conservative, implementation-detailed design (160 pages
    on types, EWD659; "pages devoted to the meaning of BOOLEAN", Van Deusen). Blue's lead, Goodenough, went
    on to write the ACVC and lead the Ada Rapporteur Group and the 9X requirements (Whitaker 1993; Ada 95
    Rationale foreword). *Change:* a Blue-Green final would have been "precision vs presentation"; the
    validation culture Goodenough built might have been designed into the language itself. *Evidence:*
    EWD659; Van Deusen Memories; Whitaker 1993.

12. **The mandate with a RED-shaped language (1987/1991-1997).**
    *Fork:* DoDD 3405.1 (1987) and Pub. L. 101-511 Sec. 8092 (1990). *Mechanism:* the mandate tied a
    language to procurement; its end in 1997 (Paige memo, NRC *Ada and Beyond*) was about cost and the
    commercial market, not about rendezvous vs mailboxes. *Change:* probably little — the mandate's rise
    and fall would track the commercial software market (C, C++) either way. Useful as a corrective in the
    essay: the language choice of 1979 mattered less to Ada's commercial fate than the procurement rules.
    *Evidence:* statute text; NRC 1997; Paige memo.

13. **C++ without the 1979 Ada Rationale.**
    *Fork:* Stroustrup read "the last page and a half of the Ada Rationale [Ichbiah,1979]" and took its
    argument against terse type-safe I/O as a challenge, producing iostreams. *Mechanism:* the RED
    Rationale was never published (the Green one was, as SIGPLAN Notices 14(6) Part B). *Change:* with RED
    winning, its Rationale would have been the one in SIGPLAN Notices; C++ templates/exceptions would cite
    RED's generics/exceptions instead (both had them). *Evidence:* Stroustrup HOPL-II; Whitaker on the
    SIGPLAN publication; Van Deusen on RED documents not being public.

14. **The R1000 for RED.**
    *Fork:* Rational's R1000 (released 1985, per Wikipedia "Rational R1000", second-hand) was a machine
    "focused entirely on the data model and tasking model of Ada" (DataMuseum.dk, via search snippet). *Mechanism:* hardware support for the winner's tasking
    model. *Change:* an R1000 for RED would accelerate mailbox queues and lock regions rather than
    rendezvous — closer to what later message-passing hardware (transputer/occam, 1983) did. The emulator
    now running at hardware speed (Codeberg README) makes it possible to *measure* rendezvous cost on the
    real Ada machine for the episode. *Evidence:* DataMuseum.dk R1000 pages; Codeberg README; occam
    article.

15. **RED's user-defined schedulers as a precedent for application-defined scheduling.**
    *Fork:* RED's low-level layer let system programmers define new schedulers and synchronisation schemes
    (RED LRM ch. 10 intro, ch. 14). *Mechanism:* Ada never standardised this; researchers proposed it for
    Ada 2005 (Aldea Rivas, González Harbour). *Change:* a RED-based DoD language might have become the
    natural language for writing real-time kernels and OS schedulers in the 1980s, competing with C in
    that niche. Grounds the episode's "small OS on RED concepts". *Evidence:* RED LRM; Ada Letters
    Dec 2003 paper.
