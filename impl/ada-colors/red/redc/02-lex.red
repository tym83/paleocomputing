% ---- small helpers ------------------------------------------------------------

ABNORMAL FUNC mk(READONLY s : STRING[ASCII]) => text;
   VAR t : text;
   ALLOC t PTR (s.LEN) := s;
   RETURN t;
END FUNC mk;

FUNC chs(CONST c : ASCII) => STRING[ASCII];
   VAR r : STRING[ASCII](1);
   r(1) := c;
   RETURN r;
END FUNC chs;

FUNC itos(CONST n : INT) => STRING[ASCII];
   RETURN CNVT[STRING[ASCII]](n);
END FUNC itos;

FUNC is_letter(CONST c : ASCII) => BOOL;
   RETURN ('A <= c AND c <= 'Z) OR ('L_A <= c AND c <= 'L_Z);
END FUNC is_letter;

FUNC is_digit(CONST c : ASCII) => BOOL;
   RETURN 'N_0 <= c AND c <= 'N_9;
END FUNC is_digit;

FUNC upper(CONST c : ASCII) => ASCII;
   CONST letters := "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   IF 'L_A <= c AND c <= 'L_Z THEN
      RETURN letters(POS(c) - POS('L_A) + 1);
   END IF;
   RETURN c;
END FUNC upper;

FUNC lower_s(READONLY s : STRING[ASCII]) => STRING[ASCII];
   CONST letters := "abcdefghijklmnopqrstuvwxyz";
   VAR r : STRING[ASCII](s.LEN) := s;
   FOR i : INT(1 .. s.LEN) REPEAT
      IF 'A <= r(i) AND r(i) <= 'Z THEN
         r(i) := letters(POS(r(i)) - POS('A) + 1);
      END IF;
   END REPEAT;
   RETURN r;
END FUNC lower_s;

% a component name in C: one that is a C keyword (char, int, ...) gets a '_'
FUNC field_c(READONLY s : STRING[ASCII]) => STRING[ASCII];
   CONST l := lower_s(s);
   CONST kw := " auto break case char const continue default do double else enum extern float for goto "
      & "if inline int long register restrict return short signed sizeof static struct switch "
      & "typedef union unsigned void volatile while ";
   CONST w := " " & l & " ";
   FOR i : INT(1 .. kw.LEN - w.LEN + 1) REPEAT
      IF kw(i .. i + w.LEN - 1) = w THEN
         RETURN l & "_";
      END IF;
   END REPEAT;
   RETURN l;
END FUNC field_c;

FUNC q => STRING[ASCII];
   RETURN chs('QUOTE);
END FUNC q;

ABNORMAL FUNC new_name(READONLY base : STRING[ASCII]) => STRING[ASCII] IMPORTS serial;
   serial := serial + 1;
   RETURN base & itos(serial);
END FUNC new_name;

% while overloads are being tried (trial > 0) an error only means "no match"
PROC fail(CONST line : INT, READONLY msg : STRING[ASCII]) IMPORTS trial;
   IF trial = 0 THEN
      WRITELN("redc: line " & itos(line) & ": " & msg);
   END IF;
   RAISE compile_error;
END PROC fail;

% ---- output buffers -----------------------------------------------------------------

ABNORMAL FUNC new_buffer => buffer;
   VAR b : buffer;
   ALLOC b PTR;
   RETURN b;
END FUNC new_buffer;

PROC put(CONST b : buffer, READONLY s : STRING[ASCII]);
   VAR l : lines;
   ALLOC l PTR;
   l.s := mk(s);
   IF b.tail = NIL THEN
      b.head := l;
   ELSE
      b.tail.next := l;
   END IF;
   b.tail := l;
END PROC put;

PROC emit(READONLY s : STRING[ASCII]) IMPORTS code;
   put(code, s);
END PROC emit;

PROC print_buffer(CONST b : buffer);
   VAR l : lines := b.head;
   WHILE l /= NIL REPEAT
      WRITELN(l.s.ALL);
      l := l.next;
   END REPEAT;
END PROC print_buffer;

% append the lines of b to the end of a, emptying b
PROC splice(CONST a : buffer, CONST b : buffer);
   IF b.head = NIL THEN
      RETURN;
   END IF;
   IF a.tail = NIL THEN
      a.head := b.head;
   ELSE
      a.tail.next := b.head;
   END IF;
   a.tail := b.tail;
   b.head := NIL;
   b.tail := NIL;
END PROC splice;

% ---- lexer (chapter 2) --------------------------------------------------------

FUNC is_reserved(READONLY w : STRING[ASCII]) => BOOL;
   CASE w
      WHEN "ABBREV", "ABNORMAL", "ALL", "ALLOC", "ASSERT", "BEGIN", "BY",
           "CAPSULE", "CASE", "CONST", "CREATE", "DO", "ELSE", "ELSEIF",
           "END", "EXCEPTION", "EXIT", "EXPORTS", "EXPOSE", "EXTERNAL",
           "FOR", "FROM", "FUNC", "GENERIC", "GOTO", "GUARD", "IF",
           "IMPORTS", "LOCATION", "NAMED", "NEEDS", "NEW", "NONE", "OUT",
           "OF", "PRAG", "PROC", "RAISE", "READONLY", "REVERSE", "REGION",
           "RENAMING", "REP", "REPEAT", "RERAISE", "RETURN", "SUBTYPE",
           "TASK", "THEN", "TO", "TYPE", "VAR", "WAIT", "WHEN", "WHILE" =>
         RETURN TRUE;
      ELSE =>
         RETURN FALSE;
   END CASE;
END FUNC is_reserved;

FUNC is_word_op(READONLY w : STRING[ASCII]) => BOOL;
   RETURN w = "DIV" OR w = "MOD" OR w = "IN" OR w = "OR" OR w = "XOR"
       OR w = "AND" OR w = "NOT";
END FUNC is_word_op;

PROC add_token(CONST kind : INT, READONLY s : STRING[ASCII], CONST ival : INT)
      IMPORTS toks, ntoks, src_line, pending_prag;
   VAR t : token;
   ALLOC t PTR;
   t.kind := kind;
   t.line := src_line;
   t.ival := ival;
   t.s := mk(s);
   t.prags := pending_prag;
   pending_prag := NIL;
   ntoks := ntoks + 1;
   toks(ntoks) := t;
END PROC add_token;

% the end of an identifier that starts at i (diagram C): letters and digits,
% single underscores between them
ABNORMAL FUNC ident_end(READONLY line : STRING[ASCII], CONST i : INT) => INT IMPORTS src_line;
   VAR j : INT := i + 1;
   WHILE j <= line.LEN AND (is_letter(line(j)) OR is_digit(line(j)) OR line(j) = 'UNDERSCORE) REPEAT
      IF line(j) = 'UNDERSCORE AND (j = line.LEN OR NOT (is_letter(line(j + 1)) OR is_digit(line(j + 1)))) THEN
         fail(src_line, "an underscore in an identifier must stand between letters or digits");
      END IF;
      j := j + 1;
   END REPEAT;
   RETURN j;
END FUNC ident_end;

FUNC upper_s(READONLY s : STRING[ASCII]) => STRING[ASCII];
   VAR w : STRING[ASCII](s.LEN) := s;
   FOR k : INT(1 .. w.LEN) REPEAT
      w(k) := upper(w(k));
   END REPEAT;
   RETURN w;
END FUNC upper_s;

FUNC skip_blanks(READONLY line : STRING[ASCII], CONST i : INT) => INT;
   VAR j : INT := i;
   WHILE j <= line.LEN AND (line(j) = 'SP OR line(j) = 'HT) REPEAT
      j := j + 1;
   END REPEAT;
   RETURN j;
END FUNC skip_blanks;

% PRAG ( pragmat, ... ) (diagrams 82, 83): a token separator, kept with the
% token that follows; j is just after PRAG, the result just after the )
ABNORMAL FUNC lex_prag(READONLY line : STRING[ASCII], CONST at : INT) => INT IMPORTS src_line, pending_prag;
   VAR j : INT := skip_blanks(line, at);
   VAR r : text := mk("");
   VAR more : BOOL := TRUE;
   IF j > line.LEN OR line(j) /= 'LPAREN THEN
      fail(src_line, "PRAG needs ( pragmat, ... )");
   END IF;
   j := j + 1;
   WHILE more REPEAT
      VAR k : INT;
      j := skip_blanks(line, j);
      IF j > line.LEN OR NOT is_letter(line(j)) THEN
         fail(src_line, "a pragmat is an identifier");
      END IF;
      k := ident_end(line, j);
      r := mk(r.ALL & upper_s(line(j .. k - 1)));
      j := skip_blanks(line, k);
      IF j <= line.LEN AND line(j) = 'LPAREN THEN
         VAR go : BOOL := TRUE;
         r := mk(r.ALL & "(");
         j := j + 1;
         WHILE go REPEAT
            j := skip_blanks(line, j);
            IF j > line.LEN OR NOT is_letter(line(j)) THEN
               fail(src_line, "a pragmat argument is an identifier");
            END IF;
            k := ident_end(line, j);
            r := mk(r.ALL & upper_s(line(j .. k - 1)));
            j := skip_blanks(line, k);
            IF j <= line.LEN AND line(j) = 'COMMA THEN
               r := mk(r.ALL & ",");
               j := j + 1;
            ELSEIF j <= line.LEN AND line(j) = 'RPAREN THEN
               j := j + 1;
               go := FALSE;
            ELSE
               fail(src_line, "a pragmat ends with )");
            END IF;
         END REPEAT;
         r := mk(r.ALL & ")");
      END IF;
      r := mk(r.ALL & ";");
      j := skip_blanks(line, j);
      IF j <= line.LEN AND line(j) = 'COMMA THEN
         j := j + 1;
      ELSEIF j <= line.LEN AND line(j) = 'RPAREN THEN
         j := j + 1;
         more := FALSE;
      ELSE
         fail(src_line, "PRAG ( ... ) is not closed");
      END IF;
   END REPEAT;
   check_pragmats(r.ALL);
   IF pending_prag = NIL THEN
      pending_prag := r;
   ELSE
      pending_prag := mk(pending_prag.ALL & r.ALL);
   END IF;
   RETURN j;
END FUNC lex_prag;

% the language-defined pragmats (B) take the arguments shown in diagram 83
PROC check_pragmats(READONLY r : STRING[ASCII]) IMPORTS src_line;
   VAR i : INT := 1;
   VAR k : INT;
   WHILE i <= r.LEN REPEAT
      k := i;
      WHILE r(k) /= 'SEMI REPEAT
         k := k + 1;
      END REPEAT;
      BEGIN
         CONST p := r(i .. k - 1);
         CONST ok := p = "OPTIMIZE(SPACE)" OR p = "OPTIMIZE(TIME)" OR p = "OPEN" OR p = "CLOSED"
            OR p = "LIST(ON)" OR p = "LIST(OFF)" OR p = "NONRECURSIVE" OR p = "NONREENTRANT"
            OR p = "OK(ALIAS)" OR p = "OK(SHARE)" OR (p.LEN > 10 AND p(1 .. 9) = "SUPPRESS(");
         CONST known := p.LEN >= 8 AND (p(1 .. 8) = "OPTIMIZE" OR p(1 .. 8) = "SUPPRESS")
            OR p = "OPEN" OR p = "CLOSED" OR (p.LEN >= 4 AND p(1 .. 4) = "LIST") OR p = "NONRECURSIVE"
            OR p = "NONREENTRANT" OR (p.LEN >= 2 AND p(1 .. 2) = "OK");
         IF known AND NOT ok THEN
            fail(src_line, "malformed pragmat " & p);
         END IF;
      END;
      i := k + 1;
   END REPEAT;
END PROC check_pragmats;

PROC lex_line(READONLY line : STRING[ASCII]) IMPORTS src_line;
   VAR i : INT := 1;
   VAR j : INT := 0;
   VAR n : INT := line.LEN;
   VAR c : ASCII;
   WHILE i <= n REPEAT
      c := line(i);
      IF c = 'SP OR c = 'HT OR c = 'CR OR c = 'FF THEN
         i := i + 1;
      ELSEIF c = 'PERCENT THEN
         i := n + 1;
      ELSEIF is_letter(c) THEN
         j := ident_end(line, i);
         BEGIN
            VAR w : STRING[ASCII](j - i) := line(i .. j - 1);
            FOR k : INT(1 .. w.LEN) REPEAT
               w(k) := upper(w(k));
            END REPEAT;
            IF w = "PRAGMAT" THEN
               % a pragmat does not change the meaning of a program (B)
               WHILE j <= n AND line(j) /= 'SEMI REPEAT
                  j := j + 1;
               END REPEAT;
               j := j + 1;
            ELSEIF w = "PRAG" THEN
               j := lex_prag(line, j);
            ELSEIF is_reserved(w) THEN
               add_token(k_kw, w, 0);
            ELSEIF is_word_op(w) THEN
               add_token(k_op, w, 0);
            ELSE
               add_token(k_id, w, 0);
            END IF;
         END;
         i := j;
      ELSEIF is_digit(c) THEN
         j := i;
         WHILE j <= n AND is_digit(line(j)) REPEAT
            j := j + 1;
         END REPEAT;
         IF j < n AND line(j) = 'PERIOD AND is_digit(line(j + 1)) THEN
            j := j + 1;
            WHILE j <= n AND is_digit(line(j)) REPEAT
               j := j + 1;
            END REPEAT;
            IF j <= n AND (line(j) = 'E OR line(j) = 'L_E) THEN
               j := j + 1;
               IF j <= n AND (line(j) = 'PLUS OR line(j) = 'MINUS) THEN
                  j := j + 1;
               END IF;
               WHILE j <= n AND is_digit(line(j)) REPEAT
                  j := j + 1;
               END REPEAT;
            END IF;
            add_token(k_float, line(i .. j - 1), 0);
         ELSE
            add_token(k_int, line(i .. j - 1), CNVT[INT](line(i .. j - 1)));
         END IF;
         i := j;
      ELSEIF c = 'APOS AND i < n AND line(i + 1) = 'APOS THEN
         % '' is the 55-character form of the quote (2.3.8)
         j := i + 2;
         WHILE j < n AND NOT (line(j) = 'APOS AND line(j + 1) = 'APOS) REPEAT
            IF line(j) = 'QUOTE THEN
               fail(src_line, "a string literal may not contain a quote");
            END IF;
            j := j + 1;
         END REPEAT;
         IF j >= n THEN
            fail(src_line, "unterminated string literal");
         END IF;
         add_token(k_str, line(i + 2 .. j - 1), 0);
         i := j + 2;
      ELSEIF c = 'APOS THEN
         j := i + 1;
         IF j > n OR NOT is_letter(line(j)) THEN
            fail(src_line, "bad enumeration literal");
         END IF;
         j := ident_end(line, j);
         BEGIN
            VAR w : STRING[ASCII](j - i - 1) := line(i + 1 .. j - 1);
            FOR k : INT(1 .. w.LEN) REPEAT
               w(k) := upper(w(k));
            END REPEAT;
            add_token(k_enum, w, 0);
         END;
         i := j;
      ELSEIF c = 'QUOTE THEN
         j := i + 1;
         WHILE j <= n AND line(j) /= 'QUOTE REPEAT
            IF line(j) = 'APOS THEN
               % an apostrophe is written 'APOS: '' would end the 55-character form
               fail(src_line, "a string literal may not contain an apostrophe");
            END IF;
            j := j + 1;
         END REPEAT;
         IF j > n THEN
            fail(src_line, "unterminated string literal");
         END IF;
         add_token(k_str, line(i + 1 .. j - 1), 0);
         i := j + 1;
      ELSE
         BEGIN
            VAR two : STRING[ASCII](2) := "  ";
            two(1) := c;
            IF i < n THEN
               two(2) := line(i + 1);
            END IF;
            IF two = ":=" OR two = "=>" OR two = ".." OR two = "**" OR two = "/="
                  OR two = "<=" OR two = ">=" THEN
               add_token(k_op, two, 0);
               i := i + 2;
            ELSEIF two = "<<" OR two = ">>" OR two = "::" THEN
               % the 55-character forms of [, ] and # (2.3.3)
               IF two = "<<" THEN
                  add_token(k_op, "[", 0);
               ELSEIF two = ">>" THEN
                  add_token(k_op, "]", 0);
               ELSE
                  add_token(k_op, "#", 0);
               END IF;
               i := i + 2;
            ELSEIF c = 'LPAREN OR c = 'RPAREN OR c = 'LBRACKET OR c = 'RBRACKET
                  OR c = 'COMMA OR c = 'COLON OR c = 'SEMI OR c = 'PERIOD
                  OR c = 'NUMBER OR c = 'PLUS OR c = 'MINUS OR c = 'STAR
                  OR c = 'SLASH OR c = 'AMPERSAND OR c = 'EQUAL OR c = 'LESS
                  OR c = 'GREATER THEN
               add_token(k_op, chs(c), 0);
               i := i + 1;
            ELSE
               fail(src_line, "unexpected character");
            END IF;
         END;
      END IF;
   END REPEAT;
END PROC lex_line;

PROC read_source IMPORTS src_line;
   WHILE NOT EOF REPEAT
      VAR line : STRING[ASCII](SIZELN);
      READLN(line);
      src_line := src_line + 1;
      lex_line(line);
   END REPEAT;
   add_token(k_eof, "<end>", 0);
END PROC read_source;
