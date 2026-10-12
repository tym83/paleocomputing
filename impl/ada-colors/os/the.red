% THE -- Dijkstra's THE multiprogramming system (Eindhoven, 1965-68), rebuilt
% in RED (1979). Source: E.W. Dijkstra, "The structure of the 'THE'-
% multiprogramming system", CACM 11(5), 1968 (EWD 196). Section names below
% refer to that paper.
%
% "A survey of the system structure": the system is a society of sequential
% processes in a strict hierarchy, and a process on one level only calls on
% levels below it:
%
%   level 0  processor allocation and the semaphores (here: the RED scheduler,
%            and P/V built on mailboxes)
%   level 1  the segment controller: segments of information in core pages,
%            backed by a drum
%   level 2  the message interpreter: the one console, shared by conversations
%   level 3  buffering of input streams (three tape readers) and unbuffering
%            of output (the line printer)
%   level 4  user programs
%   level 5  the operator ("not implemented by us"; here a task that types)
%
% The paper's claim is that this order is what makes the society provably free
% of deadlock: no process ever waits for a process above it. The message
% interpreter sits ABOVE the segment controller for a stated reason: its
% vocabulary lives on segments. Set report_dumps to TRUE (lab 12) and the
% segment controller tells the operator about every page it dumps: a level-1
% process calling level 2, which needs level 1 to read its vocabulary.
%
% The run is deterministic: the RED scheduler is followed exactly and the clock
% is virtual. Time is in milliseconds.

CAPSULE the EXPORTS NONE;

   VAR report_dumps : BOOL := FALSE;
   VAR done : MAILBOX[INT](8);

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & s);
   END PROC log;

   FUNC img(CONST n : INT) => STRING[ASCII];
      RETURN CNVT[STRING[ASCII]](n);
   END FUNC img;

   % the processes, numbered for their private reply mailboxes
   CONST p_interp := 1;
   CONST p_segctl := 2;
   CONST p_printer := 3;
   CONST p_reader := 4;       % readers 4, 5, 6: one per paper tape reader
   CONST p_user := 7;         % users 7, 8, 9
   CONST nproc := 9;
   CONST nusers := 3;

   % ==== level 0: semaphores ==================================================
   % "Their harmonious co-operation is regulated by means of explicit mutual
   % synchronization statements." A semaphore is a mailbox of tokens: P takes
   % one, waiting while there is none; V puts one back. RED's DATA_LOCK and
   % REGION give only the bracketed form P..V within one process; THE also
   % signals between processes (V by one, P by another), which a mailbox does.
   CONST nsem := 16;
   VAR sem : ARRAY INT(1 .. nsem) OF MAILBOX[INT](8);

   PROC P(CONST s : INT) IMPORTS sem;
      VAR t : INT;
      RECEIVE(sem(s), t);
   END PROC P;

   PROC V(CONST s : INT) IMPORTS sem;
      SEND(sem(s), 0);
   END PROC V;

   PROC init_sem(CONST s, n : INT) IMPORTS sem;
      FOR i : INT(1 .. 8) REPEAT
         IF i <= n THEN
            SEND(sem(s), 0);
         END IF;
      END REPEAT;
   END PROC init_sem;

   % the private semaphores of the processes, carrying an answer
   VAR reply : ARRAY INT(1 .. nproc) OF MAILBOX[INT](1);

   % ==== level 1: the segment controller =========================================
   % "Storage allocation": segments are units of information, pages are units
   % of store; a segment variable says whether its segment is empty, in a core
   % page or in a drum page. A segment dumped to the drum goes to the free drum
   % page with the minimum latency, not back where it came from.
   CONST ncore := 3;          % core pages
   CONST ndrum := 8;          % drum pages, evenly round one track
   CONST nseg := 8;           % segments
   CONST words := 8;          % words per page
   CONST rev := 40;           % drum revolution, ms ("rev. time 40ms")

   CONST seg_vocab := 1;      % the message interpreter's vocabulary
   CONST seg_print := 2;      % the printer's output buffer
   CONST seg_input := 3;      % input buffers 3, 4, 5, one per tape reader
   CONST seg_work := 6;       % working storage 6, 7, 8, one per user program

   ABBREV seg_req : RECORD[op, seg, off, val, who : INT];
   CONST op_read := 1;
   CONST op_write := 2;

   VAR seg_requests : MAILBOX[seg_req](16);
   VAR seg_where : ARRAY INT(1 .. nseg) OF INT;     % 0 empty, c > 0 core page, -d drum page
   VAR core_seg : ARRAY INT(1 .. ncore) OF INT;     % 0 free
   VAR core_dirty : ARRAY INT(1 .. ncore) OF BOOL;
   VAR core_word : ARRAY INT(1 .. ncore * words) OF INT;
   VAR drum_free : ARRAY INT(1 .. ndrum) OF BOOL;
   VAR drum_word : ARRAY INT(1 .. ndrum * words) OF INT;
   VAR next_victim : INT := 1;
   VAR transfers, faults : INT := 0;

   % called by levels 2 and up: the identity of pages is gone above level 1
   PROC seg_read(CONST who, seg, off : INT, VAR val : INT) IMPORTS seg_requests, reply;
      SEND(seg_requests, [op : op_read, seg : seg, off : off, val : 0, who : who]);
      RECEIVE(reply(who), val);
   END PROC seg_read;

   PROC seg_write(CONST who, seg, off, val : INT) IMPORTS seg_requests, reply;
      VAR ack : INT;
      SEND(seg_requests, [op : op_write, seg : seg, off : off, val : val, who : who]);
      RECEIVE(reply(who), ack);
   END PROC seg_write;

   % only the broken variant (report_dumps) calls level 2 from here
   CONST msg_dumped := 4;

   TASK segment_controller IMPORTS ALL;
      VAR r : seg_req;
      VAR c : INT;

      % "among the free drum pages the one with the minimum latency is selected"
      FUNC latency(CONST d : INT) => INT;
         RETURN ((d - 1) * (rev DIV ndrum) - TIME MOD rev + 2 * rev) MOD rev;
      END FUNC latency;

      PROC drum_wait(CONST d : INT) IMPORTS transfers;
         DELAY(latency(d) + rev DIV ndrum);
         transfers := transfers + 1;
      END PROC drum_wait;

      PROC dump(CONST c : INT) IMPORTS ALL;
         VAR best : INT := 0;
         CONST s := core_seg(c);
         FOR d : INT(1 .. ndrum) REPEAT
            IF drum_free(d) THEN
               IF best = 0 THEN
                  best := d;
               ELSEIF latency(d) < latency(best) THEN
                  best := d;
               END IF;
            END IF;
         END REPEAT;
         drum_wait(best);
         FOR i : INT(1 .. words) REPEAT
            drum_word((best - 1) * words + i) := core_word((c - 1) * words + i);
         END REPEAT;
         drum_free(best) := FALSE;
         seg_where(s) := -best;
         log("  segment controller: segment " & img(s) & " dumped from core page " & img(c)
             & " to drum page " & img(best));
         IF report_dumps THEN
            % the broken order: level 1 waits for a conversation on level 2
            say(p_segctl, msg_dumped, s);
         END IF;
      END PROC dump;

      % make segment s present in core and return its core page
      PROC present(CONST s : INT, VAR c : INT) IMPORTS ALL;
         VAR d : INT;
         IF seg_where(s) > 0 THEN
            c := seg_where(s);
            RETURN;
         END IF;
         faults := faults + 1;
         c := 0;
         FOR i : INT(1 .. ncore) REPEAT
            IF c = 0 AND core_seg(i) = 0 THEN
               c := i;
            END IF;
         END REPEAT;
         IF c = 0 THEN
            c := next_victim;
            next_victim := next_victim MOD ncore + 1;
            % a segment read in from the drum gave its drum page back, so
            % every segment leaving core is written out
            dump(c);
         END IF;
         IF seg_where(s) < 0 THEN
            d := -seg_where(s);
            drum_wait(d);
            FOR i : INT(1 .. words) REPEAT
               core_word((c - 1) * words + i) := drum_word((d - 1) * words + i);
            END REPEAT;
            drum_free(d) := TRUE;
            log("  segment controller: segment " & img(s) & " read from drum page " & img(d)
                & " into core page " & img(c));
         ELSE
            FOR i : INT(1 .. words) REPEAT
               core_word((c - 1) * words + i) := 0;
            END REPEAT;
         END IF;
         core_seg(c) := s;
         core_dirty(c) := TRUE;
         seg_where(s) := c;
      END PROC present;

      WHILE TRUE REPEAT
         RECEIVE(seg_requests, r);
         present(r.seg, c);
         IF r.op = op_read THEN
            SEND(reply(r.who), core_word((c - 1) * words + r.off));
         ELSE
            core_word((c - 1) * words + r.off) := r.val;
            core_dirty(c) := TRUE;
            SEND(reply(r.who), 0);
         END IF;
      END REPEAT;
   END TASK segment_controller;

   % ==== level 2: the message interpreter ========================================
   % "Above this level it is as if each process had its private conversational
   % console." One conversation at a time; the vocabulary sits on a segment, so
   % the interpreter calls on level 1 for every message it prints.
   ABBREV conv : RECORD[who, m, v : INT];
   VAR conversations : MAILBOX[conv](16);
   VAR keyboard : MAILBOX[INT](8);                  % the operator's keys
   VAR console_in : ARRAY INT(1 .. nproc) OF MAILBOX[INT](1);

   CONST msg_ready := 1;
   CONST msg_paper := 2;
   CONST msg_done := 3;
   % msg_dumped = 4, above
   CONST key_paper := 1;                             % "printer: paper loaded"

   FUNC phrase(CONST w : INT) => STRING[ASCII];
      IF w = 11 THEN
         RETURN "tape loaded, reading";
      ELSEIF w = 12 THEN
         RETURN "out of paper, waiting for the operator";
      ELSEIF w = 13 THEN
         RETURN "finished, result queued for the printer";
      ELSEIF w = 14 THEN
         RETURN "dumped a segment to the drum:";
      END IF;
      RETURN "?";
   END FUNC phrase;

   FUNC who_name(CONST p : INT) => STRING[ASCII];
      IF p = p_segctl THEN
         RETURN "segment controller";
      ELSEIF p = p_printer THEN
         RETURN "printer";
      ELSEIF p >= p_reader AND p < p_user THEN
         RETURN "reader " & img(p - p_reader + 1);
      ELSEIF p >= p_user THEN
         RETURN "program " & img(p - p_user + 1);
      END IF;
      RETURN "?";
   END FUNC who_name;

   PROC say(CONST who, m, arg : INT) IMPORTS conversations, reply;
      VAR ack : INT;
      SEND(conversations, [who : who, m : m, v : arg]);
      RECEIVE(reply(who), ack);
   END PROC say;

   TASK message_interpreter IMPORTS conversations, keyboard, console_in, reply;
      VAR cv : conv;
      VAR k, w : INT;
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(conversations, cv) =>
               seg_read(p_interp, seg_vocab, cv.m, w);
               DELAY(20);                            % the teleprinter types
               IF cv.m = msg_dumped THEN
                  log("CONSOLE  " & who_name(cv.who) & ": " & phrase(w) & " " & img(cv.v));
               ELSE
                  log("CONSOLE  " & who_name(cv.who) & ": " & phrase(w));
               END IF;
               SEND(reply(cv.who), 0);
            WHEN RECEIVE(keyboard, k) =>
               % the operator opened the conversation: its first words say whom
               % it is for, and they must be interpreted before that is known
               seg_read(p_interp, seg_vocab, 4 + k, w);
               DELAY(20);
               log("CONSOLE  operator to " & who_name(w) & ": paper loaded");
               SEND(console_in(w), k);
         END WAIT;
      END REPEAT;
   END TASK message_interpreter;

   % ==== level 3: buffering of input and output streams ==========================
   % Buffers are segments, not drum areas ("buffering ... occurs in terms of
   % segments"). Each buffer is a ring of `words` slots with two semaphores.
   CONST s_print_full := 1;
   CONST s_print_empty := 2;
   CONST s_print_mutex := 3;
   CONST s_in_full := 4;      % 4, 5, 6
   CONST s_in_empty := 7;     % 7, 8, 9
   CONST tape_len := 4;
   CONST nlines := 3;

   TASK reader(CONST n : INT) IMPORTS reply;
      CONST me := p_reader + n - 1;
      say(me, msg_ready, 0);
      FOR i : INT(1 .. tape_len) REPEAT
         DELAY(1);                                   % 1000 characters a second
         P(s_in_empty + n - 1);
         seg_write(me, seg_input + n - 1, (i - 1) MOD words + 1, 10 * n + i);
         V(s_in_full + n - 1);
      END REPEAT;
   END TASK reader;

   % the line printer: three lines fit on the paper, then it asks the operator
   TASK printer IMPORTS reply, console_in, done;
      VAR item, k : INT;
      FOR line : INT(1 .. nusers) REPEAT
         IF line = nlines THEN
            say(p_printer, msg_paper, 0);
            RECEIVE(console_in(p_printer), k);
         END IF;
         P(s_print_full);
         seg_read(p_printer, seg_print, (line - 1) MOD words + 1, item);
         V(s_print_empty);
         DELAY(10);
         log("PRINTER  program " & img(item DIV 100000) & ": sum of squares " & img(item MOD 100000));
      END REPEAT;
      SEND(done, 0);
   END TASK printer;

   VAR print_slot : INT := 0;

   % the logical communication units seen from level 4
   PROC get(CONST u : INT, CONST i : INT, VAR x : INT);
      P(s_in_full + u - 1);
      seg_read(p_user + u - 1, seg_input + u - 1, (i - 1) MOD words + 1, x);
      V(s_in_empty + u - 1);
   END PROC get;

   PROC put(CONST u : INT, CONST result : INT) IMPORTS print_slot;
      P(s_print_empty);
      P(s_print_mutex);
      print_slot := print_slot MOD words + 1;
      seg_write(p_user + u - 1, seg_print, print_slot, 100000 * u + result);
      V(s_print_mutex);
      V(s_print_full);
   END PROC put;

   % ==== level 4: user programs ======================================================

   TASK program(CONST u : INT) IMPORTS reply, done;
      CONST me := p_user + u - 1;
      VAR x, sum, w : INT;
      FOR i : INT(1 .. tape_len) REPEAT
         get(u, i, x);
         seg_write(me, seg_work + u - 1, i, x * x);
      END REPEAT;
      sum := 0;
      FOR i : INT(1 .. tape_len) REPEAT
         seg_read(me, seg_work + u - 1, i, w);
         sum := sum + w;
      END REPEAT;
      put(u, sum);
      say(me, msg_done, 0);
      SEND(done, u);
   END TASK program;

   % ==== level 5: the operator ===========================================================
   % the operator reads the console and loads paper a while after being asked
   TASK operator IMPORTS keyboard;
      DELAY(400);
      SEND(keyboard, key_paper);
   END TASK operator;

   % ---- boot ------------------------------------------------------------------------
   VAR a_seg, a_int, a_prn, a_op : ACT;
   VAR a_rd, a_pg : ARRAY INT(1 .. nusers) OF ACT;
   VAR got, w : INT;

   FOR i : INT(1 .. nseg) REPEAT
      seg_where(i) := 0;
   END REPEAT;
   FOR c : INT(1 .. ncore) REPEAT
      core_seg(c) := 0;
      core_dirty(c) := FALSE;
   END REPEAT;
   FOR d : INT(1 .. ndrum) REPEAT
      drum_free(d) := TRUE;
   END REPEAT;
   init_sem(s_print_full, 0);
   init_sem(s_print_empty, words);
   init_sem(s_print_mutex, 1);
   FOR n : INT(1 .. nusers) REPEAT
      init_sem(s_in_full + n - 1, 0);
      init_sem(s_in_empty + n - 1, words);
   END REPEAT;
   CREATE segment_controller NAMED a_seg;
   % the vocabulary: words 1..4 map message numbers to phrases, words 5..8
   % map the operator's keys to the process they address
   seg_write(p_interp, seg_vocab, msg_ready, 11);
   seg_write(p_interp, seg_vocab, msg_paper, 12);
   seg_write(p_interp, seg_vocab, msg_done, 13);
   seg_write(p_interp, seg_vocab, msg_dumped, 14);
   seg_write(p_interp, seg_vocab, 4 + key_paper, p_printer);
   CREATE message_interpreter NAMED a_int;
   CREATE printer NAMED a_prn;
   CREATE operator NAMED a_op;
   FOR n : INT(1 .. nusers) REPEAT
      CREATE reader(n) NAMED a_rd(n);
      CREATE program(n) NAMED a_pg(n);
   END REPEAT;
   FOR n : INT(1 .. nusers + 1) REPEAT
      RECEIVE(done, got);
   END REPEAT;
   log("all programs finished, the printer is empty");
   log("drum transfers " & img(transfers) & ", segment faults " & img(faults)
       & ", with " & img(nseg) & " segments in " & img(ncore) & " core pages");
   log("no process waited for one on a higher level, so no circle of waiting could form");
   HALT(0);
END CAPSULE the;
