% redc -- a translator for RED (Intermetrics, March 1979), written in RED.
%
% It reads a RED program on SYS_IN and writes C on SYS_OUT; the C is linked
% with rt/paleo.c. The source is kept in several files that are joined in
% name order before translation. This file holds the shared data: token and
% node kinds, the tree, types, symbols and the output buffers.

CAPSULE redc EXPORTS NONE;

% ---- token kinds ---------------------------------------------------------
CONST k_eof := 0;
CONST k_id := 1;
CONST k_kw := 2;
CONST k_op := 3;
CONST k_int := 4;
CONST k_float := 5;
CONST k_enum := 6;
CONST k_str := 7;

% ---- node kinds ------------------------------------------------------------
CONST n_int := 1;
CONST n_float := 2;
CONST n_str := 3;
CONST n_enum := 4;
CONST n_bool := 5;
CONST n_nil := 6;
CONST n_name := 7;
CONST n_unop := 8;
CONST n_binop := 9;
CONST n_apply := 10;
CONST n_select := 11;
CONST n_ttapply := 12;
CONST n_resolve := 13;
CONST n_cons := 14;
CONST n_citem := 15;
CONST n_range := 16;
CONST n_paren := 17;

CONST n_assign := 20;
CONST n_call := 21;
CONST n_if := 22;
CONST n_case := 23;
CONST n_repeat := 24;
CONST n_begin := 25;
CONST n_guard := 26;
CONST n_exit := 27;
CONST n_return := 28;
CONST n_goto := 29;
CONST n_raise := 30;
CONST n_reraise := 31;
CONST n_alloc := 32;
CONST n_assert := 33;
CONST n_create := 34;
CONST n_wait := 35;
CONST n_region := 36;

CONST n_var := 40;
CONST n_const := 41;
CONST n_abbrev := 42;
CONST n_newtype := 43;
CONST n_ptrtype := 44;
CONST n_proc := 45;
CONST n_func := 46;
CONST n_capsule := 47;
CONST n_expose := 48;
CONST n_exception := 49;
CONST n_task := 50;
CONST n_generic := 51;
CONST n_param := 52;

CONST n_arm := 60;
CONST n_label := 61;
CONST n_handler := 62;
CONST n_comp := 63;

CONST s_int := 70;
CONST s_float := 71;
CONST s_enum := 72;
CONST s_string := 73;
CONST s_array := 74;
CONST s_record := 75;
CONST s_union := 76;
CONST s_set := 77;
CONST s_mailbox := 78;
CONST s_file := 79;
CONST s_name := 80;
CONST s_of := 81;

% ---- parameter binding classes (7.3) --------------------------------------
CONST m_const := 1;
CONST m_var := 2;
CONST m_out := 3;
CONST m_readonly := 4;

% ---- type kinds -------------------------------------------------------------
CONST t_int := 1;
CONST t_bool := 2;
CONST t_float := 3;
CONST t_enum := 4;
CONST t_string := 5;
CONST t_array := 6;
CONST t_record := 7;
CONST t_ptr := 8;
CONST t_void := 9;
CONST t_file := 10;
CONST t_nil := 11;

% ---- symbol kinds -------------------------------------------------------------
CONST y_var := 1;
CONST y_const := 2;
CONST y_func := 3;
CONST y_proc := 4;
CONST y_type := 5;
CONST y_abbrev := 6;
CONST y_exc := 7;

% ---- the data ---------------------------------------------------------------
TYPE text : PTR (n : INT) STRING[ASCII](n);

TYPE token : PTR RECORD[kind : INT, line : INT, ival : INT, s : text];
TYPE tokens : PTR (n : INT) ARRAY INT(1 .. n) OF token;

TYPE node : PTR RECORD[kind : INT, line : INT, ival : INT, flag : INT,
                       name : text, tag : text,
                       a, b, c, d : node, next : node];

TYPE cons : PTR RECORD[lo, hi, slen : text, mlo, mhi : INT, hasm : BOOL];

TYPE typ : PTR RECORD[kind : INT, name : text, lits : node,
                      elem : typ, idx : typ, elemcons : cons, elemst : node,
                      fields : field, target : typ, decl : node,
                      cname : text, forward, defined, helpers : BOOL,
                      next : typ];

TYPE field : PTR RECORD[name : text, t : typ, st : node, next : field];

TYPE parm : PTR RECORD[name : text, mode : INT, t : typ, c : cons, next : parm];

TYPE sym : PTR RECORD[kind : INT, name : text, t : typ, c : cons,
                      access, cname : text, ro_flag : BOOL,
                      mvalue : INT, hasmv : BOOL, st : node, decl : node,
                      params : parm, result : typ, depth : INT,
                      chain, stack : sym];

TYPE lines : PTR RECORD[s : text, next : lines];
TYPE buffer : PTR RECORD[head, tail : lines];

TYPE buckets : PTR (n : INT) ARRAY INT(0 .. n) OF sym;

TYPE exitrec : PTR RECORD[match, label : text, depth : INT, next : exitrec];

EXCEPTION compile_error;

VAR toks : tokens;
VAR ntoks : INT := 0;
VAR tpos : INT := 1;
VAR src_line : INT := 0;

VAR table : buckets;
VAR depth : INT := 0;
VAR scope_stack : sym;

VAR all_types : typ;
VAR serial : INT := 0;

VAR out_types, out_helpers, out_protos, out_globals, out_funcs, out_init, out_excs : buffer;
VAR code : buffer;
VAR fields_buf : buffer;
VAR in_func : BOOL := FALSE;
VAR func_sym : sym;
VAR exits : exitrec;
VAR frames : INT := 0;
VAR handlers : lines;

VAR ty_int, ty_bool, ty_float, ty_ascii, ty_string, ty_void, ty_file, ty_nil : typ;
VAR no_cons : cons;
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

FUNC q => STRING[ASCII];
   RETURN chs('QUOTE);
END FUNC q;

ABNORMAL FUNC new_name(READONLY base : STRING[ASCII]) => STRING[ASCII] IMPORTS serial;
   serial := serial + 1;
   RETURN base & itos(serial);
END FUNC new_name;

PROC fail(CONST line : INT, READONLY msg : STRING[ASCII]);
   WRITELN("redc: line " & itos(line) & ": " & msg);
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
      IMPORTS toks, ntoks, src_line;
   VAR t : token;
   ALLOC t PTR;
   t.kind := kind;
   t.line := src_line;
   t.ival := ival;
   t.s := mk(s);
   ntoks := ntoks + 1;
   toks(ntoks) := t;
END PROC add_token;

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
         j := i;
         WHILE j <= n AND (is_letter(line(j)) OR is_digit(line(j)) OR line(j) = 'UNDERSCORE) REPEAT
            j := j + 1;
         END REPEAT;
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
      ELSEIF c = 'APOS THEN
         j := i + 1;
         IF j > n OR NOT is_letter(line(j)) THEN
            fail(src_line, "bad enumeration literal");
         END IF;
         WHILE j <= n AND (is_letter(line(j)) OR is_digit(line(j)) OR line(j) = 'UNDERSCORE) REPEAT
            j := j + 1;
         END REPEAT;
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
% ---- parser: the flow diagrams of the Reference Manual -----------------------

ABNORMAL FUNC nn(CONST kind : INT, CONST line : INT) => node;
   VAR x : node;
   ALLOC x PTR;
   x.kind := kind;
   x.line := line;
   RETURN x;
END FUNC nn;

PROC append(VAR head : node, VAR tail : node, CONST x : node);
   IF head = NIL THEN
      head := x;
   ELSE
      tail.next := x;
   END IF;
   tail := x;
   WHILE tail.next /= NIL REPEAT
      tail := tail.next;
   END REPEAT;
END PROC append;

FUNC list_len(CONST l : node) => INT;
   VAR n : INT := 0;
   VAR p : node := l;
   WHILE p /= NIL REPEAT
      n := n + 1;
      p := p.next;
   END REPEAT;
   RETURN n;
END FUNC list_len;

ABNORMAL FUNC cur_line => INT IMPORTS toks, tpos;
   RETURN toks(tpos).line;
END FUNC cur_line;

ABNORMAL FUNC at_kw(READONLY w : STRING[ASCII]) => BOOL IMPORTS toks, tpos;
   RETURN toks(tpos).kind = k_kw AND toks(tpos).s.ALL = w;
END FUNC at_kw;

ABNORMAL FUNC at_op(READONLY w : STRING[ASCII]) => BOOL IMPORTS toks, tpos;
   RETURN toks(tpos).kind = k_op AND toks(tpos).s.ALL = w;
END FUNC at_op;

ABNORMAL FUNC at_kind(CONST k : INT) => BOOL IMPORTS toks, tpos;
   RETURN toks(tpos).kind = k;
END FUNC at_kind;

ABNORMAL FUNC kind_at(CONST k : INT) => INT IMPORTS toks, tpos, ntoks;
   IF tpos + k > ntoks THEN
      RETURN k_eof;
   END IF;
   RETURN toks(tpos + k).kind;
END FUNC kind_at;

ABNORMAL FUNC text_at(CONST k : INT) => text IMPORTS toks, tpos, ntoks;
   IF tpos + k > ntoks THEN
      RETURN toks(ntoks).s;
   END IF;
   RETURN toks(tpos + k).s;
END FUNC text_at;

PROC perror(READONLY msg : STRING[ASCII]) IMPORTS toks, tpos;
   fail(toks(tpos).line, msg & " (at " & toks(tpos).s.ALL & ")");
END PROC perror;

ABNORMAL FUNC accept_kw(READONLY w : STRING[ASCII]) => BOOL IMPORTS tpos;
   IF at_kw(w) THEN
      tpos := tpos + 1;
      RETURN TRUE;
   END IF;
   RETURN FALSE;
END FUNC accept_kw;

ABNORMAL FUNC accept_op(READONLY w : STRING[ASCII]) => BOOL IMPORTS tpos;
   IF at_op(w) THEN
      tpos := tpos + 1;
      RETURN TRUE;
   END IF;
   RETURN FALSE;
END FUNC accept_op;

PROC expect_kw(READONLY w : STRING[ASCII]) IMPORTS tpos;
   IF NOT at_kw(w) THEN
      perror("expected " & w);
   END IF;
   tpos := tpos + 1;
END PROC expect_kw;

PROC expect_op(READONLY w : STRING[ASCII]) IMPORTS tpos;
   IF NOT at_op(w) THEN
      perror("expected " & w);
   END IF;
   tpos := tpos + 1;
END PROC expect_op;

ABNORMAL FUNC expect_id => text IMPORTS toks, tpos;
   IF NOT at_kind(k_id) THEN
      perror("expected an identifier");
   END IF;
   tpos := tpos + 1;
   RETURN toks(tpos - 1).s;
END FUNC expect_id;

ABNORMAL FUNC name_node => node IMPORTS tpos;
   VAR x : node := nn(n_name, cur_line);
   x.name := expect_id;
   RETURN x;
END FUNC name_node;

% a list of names separated by commas, as n_name nodes
ABNORMAL FUNC id_list => node IMPORTS tpos;
   VAR head, tail : node;
   append(head, tail, name_node);
   WHILE accept_op(",") REPEAT
      append(head, tail, name_node);
   END REPEAT;
   RETURN head;
END FUNC id_list;

% ---- types and subtypes (diagrams 10, 12) --------------------------------------

ABNORMAL FUNC p_subtype => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   IF at_kw("SUBTYPE") THEN
      tpos := tpos + 1;
      x := nn(s_of, line);
      expect_op("(");
      x.a := expr;
      expect_op(")");
      RETURN x;
   END IF;
   IF NOT at_kind(k_id) THEN
      perror("expected a type or p_subtype");
   END IF;
   BEGIN
      CONST w := toks(tpos).s.ALL;
      tpos := tpos + 1;
      IF w = "ARRAY" THEN
         x := nn(s_array, line);
         BEGIN
            VAR head, tail : node;
            append(head, tail, p_subtype);
            WHILE accept_op(",") REPEAT
               append(head, tail, p_subtype);
            END REPEAT;
            x.a := head;
         END;
         expect_kw("OF");
         x.b := p_subtype;
      ELSEIF w = "RECORD" OR w = "UNION" THEN
         IF w = "RECORD" THEN
            x := nn(s_record, line);
         ELSE
            x := nn(s_union, line);
         END IF;
         expect_op("[");
         BEGIN
            VAR head, tail : node;
            VAR more : BOOL := TRUE;
            WHILE more REPEAT
               VAR names : node := id_list;
               VAR st : node;
               expect_op(":");
               st := p_subtype;
               WHILE names /= NIL REPEAT
                  VAR cmp : node := nn(n_comp, names.line);
                  cmp.name := names.name;
                  cmp.a := st;
                  append(head, tail, cmp);
                  names := names.next;
               END REPEAT;
               more := accept_op(",");
            END REPEAT;
            x.a := head;
         END;
         expect_op("]");
         IF w = "UNION" AND at_op("(") THEN
            tpos := tpos + 1;
            x.b := expr;
            expect_op(")");
         END IF;
      ELSEIF w = "ENUM" THEN
         x := nn(s_enum, line);
         expect_op("[");
         BEGIN
            VAR head, tail : node;
            VAR more : BOOL := TRUE;
            WHILE more REPEAT
               VAR lit : node := nn(n_enum, line);
               IF NOT at_kind(k_enum) THEN
                  perror("expected an enumeration literal");
               END IF;
               lit.name := toks(tpos).s;
               tpos := tpos + 1;
               append(head, tail, lit);
               more := accept_op(",");
            END REPEAT;
            x.a := head;
         END;
         expect_op("]");
         IF at_op("(") THEN
            tpos := tpos + 1;
            x.b := expr;
            expect_op("..");
            x.c := expr;
            expect_op(")");
         END IF;
      ELSEIF w = "STRING" OR w = "SET" OR w = "MAILBOX" OR w = "FILE" THEN
         IF w = "STRING" THEN
            x := nn(s_string, line);
         ELSEIF w = "SET" THEN
            x := nn(s_set, line);
         ELSEIF w = "MAILBOX" THEN
            x := nn(s_mailbox, line);
         ELSE
            x := nn(s_file, line);
         END IF;
         expect_op("[");
         x.a := p_subtype;
         expect_op("]");
         IF at_op("(") THEN
            x.b := actual_params;
         END IF;
      ELSEIF w = "INT" THEN
         x := nn(s_int, line);
         IF at_op("(") THEN
            tpos := tpos + 1;
            x.a := expr;
            expect_op("..");
            x.b := expr;
            expect_op(")");
         END IF;
      ELSEIF w = "FLOAT" THEN
         x := nn(s_float, line);
         IF accept_op("(") THEN
            x.a := expr;
            IF accept_op(",") THEN
               x.b := expr;
               expect_op("..");
               x.c := expr;
            END IF;
            expect_op(")");
         END IF;
      ELSE
         x := nn(s_name, line);
         x.name := mk(w);
         IF at_op("[") THEN
            x.a := actual_tt;
         END IF;
         IF at_op("(") THEN
            x.b := actual_params;
            x.flag := 1;
         END IF;
      END IF;
   END;
   RETURN x;
END FUNC p_subtype;

ABNORMAL FUNC actual_params => node IMPORTS tpos;
   VAR head, tail : node;
   expect_op("(");
   IF NOT at_op(")") THEN
      append(head, tail, expr);
      WHILE accept_op(",") REPEAT
         append(head, tail, expr);
      END REPEAT;
   END IF;
   expect_op(")");
   RETURN head;
END FUNC actual_params;

FUNC is_type_word(READONLY w : STRING[ASCII]) => BOOL;
   RETURN w = "INT" OR w = "BOOL" OR w = "FLOAT" OR w = "ENUM" OR w = "RECORD"
       OR w = "UNION" OR w = "ARRAY" OR w = "STRING" OR w = "SET" OR w = "MAILBOX"
       OR w = "FILE" OR w = "ASCII" OR w = "ACT" OR w = "DATA_LOCK" OR w = "LATCH";
END FUNC is_type_word;

% actual translation time properties (diagram 67): types or manifest values
ABNORMAL FUNC actual_tt => node IMPORTS ALL;
   VAR head, tail : node;
   expect_op("[");
   VAR more : BOOL := TRUE;
   WHILE more REPEAT
      IF at_kind(k_id) AND is_type_word(toks(tpos).s.ALL) THEN
         append(head, tail, p_subtype);
      ELSE
         append(head, tail, expr);
      END IF;
      more := accept_op(",");
   END REPEAT;
   expect_op("]");
   RETURN head;
END FUNC actual_tt;

% ---- expressions (chapter 5) ----------------------------------------------------

ABNORMAL FUNC binop(CONST op : text, CONST l : node, CONST r : node, CONST line : INT) => node;
   VAR x : node := nn(n_binop, line);
   x.name := op;
   x.a := l;
   x.b := r;
   RETURN x;
END FUNC binop;

ABNORMAL FUNC expr => node IMPORTS ALL;
   VAR l : node := expr_and;
   WHILE at_op("OR") OR at_op("XOR") REPEAT
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_and, line);
   END REPEAT;
   RETURN l;
END FUNC expr;

ABNORMAL FUNC expr_and => node IMPORTS ALL;
   VAR l : node := expr_not;
   WHILE at_op("AND") REPEAT
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(mk("AND"), l, expr_not, line);
   END REPEAT;
   RETURN l;
END FUNC expr_and;

% 5.2: prefix NOT binds less tightly than the relations
ABNORMAL FUNC expr_not => node IMPORTS ALL;
   IF at_op("NOT") THEN
      VAR x : node := nn(n_unop, cur_line);
      tpos := tpos + 1;
      x.name := mk("NOT");
      x.a := expr_not;
      RETURN x;
   END IF;
   RETURN expr_rel;
END FUNC expr_not;

FUNC is_rel(READONLY s : STRING[ASCII]) => BOOL;
   RETURN s = "=" OR s = "/=" OR s = "<" OR s = "<=" OR s = ">" OR s = ">=" OR s = "IN";
END FUNC is_rel;

ABNORMAL FUNC expr_rel => node IMPORTS ALL;
   VAR l : node := expr_add;
   IF at_kind(k_op) AND is_rel(toks(tpos).s.ALL) THEN
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_add, line);
   END IF;
   RETURN l;
END FUNC expr_rel;

ABNORMAL FUNC expr_add => node IMPORTS ALL;
   VAR l : node := expr_mul;
   WHILE at_op("+") OR at_op("-") REPEAT
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_mul, line);
   END REPEAT;
   RETURN l;
END FUNC expr_add;

ABNORMAL FUNC expr_mul => node IMPORTS ALL;
   VAR l : node := expr_pow;
   WHILE at_op("*") OR at_op("/") OR at_op("MOD") OR at_op("DIV") OR at_op("&") REPEAT
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_pow, line);
   END REPEAT;
   RETURN l;
END FUNC expr_mul;

ABNORMAL FUNC expr_pow => node IMPORTS ALL;
   VAR l : node := expr_prefix;
   WHILE at_op("**") REPEAT
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(mk("**"), l, expr_prefix, line);
   END REPEAT;
   RETURN l;
END FUNC expr_pow;

ABNORMAL FUNC expr_prefix => node IMPORTS ALL;
   IF at_op("+") OR at_op("-") THEN
      VAR x : node := nn(n_unop, cur_line);
      x.name := toks(tpos).s;
      tpos := tpos + 1;
      x.a := expr_prefix;
      RETURN x;
   END IF;
   RETURN postfix;
END FUNC expr_prefix;

ABNORMAL FUNC postfix => node IMPORTS ALL;
   VAR p : node := primary;
   WHILE TRUE REPEAT
      VAR line : INT := cur_line;
      IF at_op("(") THEN
         VAR x : node := nn(n_apply, line);
         VAR head, tail : node;
         tpos := tpos + 1;
         IF NOT at_op(")") THEN
            VAR more : BOOL := TRUE;
            WHILE more REPEAT
               VAR lo : node := expr;
               IF accept_op("..") THEN
                  VAR r : node := nn(n_range, line);
                  r.a := lo;
                  r.b := expr;
                  append(head, tail, r);
               ELSE
                  append(head, tail, lo);
               END IF;
               more := accept_op(",");
            END REPEAT;
         END IF;
         expect_op(")");
         x.a := p;
         x.b := head;
         p := x;
      ELSEIF at_op(".") AND (kind_at(1) = k_id OR kind_at(1) = k_kw) THEN
         VAR x : node := nn(n_select, line);
         tpos := tpos + 1;
         x.a := p;
         x.name := toks(tpos).s;
         tpos := tpos + 1;
         p := x;
      ELSEIF at_op("[") AND p.kind = n_name THEN
         VAR x : node := nn(n_ttapply, line);
         x.a := p;
         x.b := actual_tt;
         p := x;
      ELSEIF at_op("#") THEN
         VAR x : node := nn(n_resolve, line);
         tpos := tpos + 1;
         x.a := p;
         x.b := p_subtype;
         p := x;
      ELSE
         RETURN p;
      END IF;
   END REPEAT;
END FUNC postfix;

ABNORMAL FUNC primary => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   VAR k : INT := toks(tpos).kind;
   IF k = k_int THEN
      x := nn(n_int, line);
      x.ival := toks(tpos).ival;
      x.name := toks(tpos).s;
      tpos := tpos + 1;
      RETURN x;
   END IF;
   IF k = k_float OR k = k_str OR k = k_enum THEN
      IF k = k_float THEN
         x := nn(n_float, line);
      ELSEIF k = k_str THEN
         x := nn(n_str, line);
      ELSE
         x := nn(n_enum, line);
      END IF;
      x.name := toks(tpos).s;
      tpos := tpos + 1;
      RETURN x;
   END IF;
   IF k = k_id THEN
      CONST w := toks(tpos).s.ALL;
      IF w = "TRUE" OR w = "FALSE" THEN
         x := nn(n_bool, line);
         IF w = "TRUE" THEN
            x.ival := 1;
         END IF;
         tpos := tpos + 1;
         RETURN x;
      END IF;
      IF w = "NIL" THEN
         tpos := tpos + 1;
         RETURN nn(n_nil, line);
      END IF;
      RETURN name_node;
   END IF;
   IF accept_op("(") THEN
      x := nn(n_paren, line);
      x.a := expr;
      expect_op(")");
      RETURN x;
   END IF;
   IF accept_op("[") THEN
      VAR head, tail : node;
      x := nn(n_cons, line);
      IF NOT at_op("]") THEN
         VAR more : BOOL := TRUE;
         WHILE more REPEAT
            append(head, tail, constructor_item);
            more := accept_op(",");
         END REPEAT;
      END IF;
      expect_op("]");
      x.a := head;
      RETURN x;
   END IF;
   perror("expected an expression");
   RETURN NIL;
END FUNC primary;

% constructor items (diagrams 32-34): value, or keys ':' value
ABNORMAL FUNC constructor_item => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR it : node := nn(n_citem, line);
   VAR first : node := expr;
   VAR keys, ktail : node;
   VAR lab : node := nn(n_label, line);
   lab.a := first;
   IF accept_op("..") THEN
      lab.b := expr;
      append(keys, ktail, lab);
   ELSEIF at_op(":") THEN
      append(keys, ktail, lab);
   ELSEIF at_op(",") THEN
      % maybe a list of keys followed by ':'
      VAR save : INT := tpos;
      VAR more, tail2 : node;
      VAR ok : BOOL := FALSE;
      VAR go : BOOL := TRUE;
      WHILE go AND accept_op(",") REPEAT
         VAR l2 : node := nn(n_label, line);
         l2.a := expr;
         IF accept_op("..") THEN
            l2.b := expr;
         END IF;
         append(more, tail2, l2);
         IF at_op(":") THEN
            ok := TRUE;
            go := FALSE;
         ELSEIF NOT at_op(",") THEN
            go := FALSE;
         END IF;
      END REPEAT;
      IF ok THEN
         append(keys, ktail, lab);
         append(keys, ktail, more);
      ELSE
         tpos := save;
      END IF;
   END IF;
   IF keys /= NIL THEN
      expect_op(":");
      it.a := keys;
      it.b := expr;
   ELSE
      it.b := first;
   END IF;
   RETURN it;
END FUNC constructor_item;
% ---- bodies, declarations and statements -----------------------------------

ABNORMAL FUNC at_body_end => BOOL IMPORTS ALL;
   RETURN at_kw("END") OR at_kw("ELSE") OR at_kw("ELSEIF") OR at_kw("WHEN")
       OR at_kw("BY") OR at_kind(k_eof);
END FUNC at_body_end;

% body (3.2, diagram 2): declarations, statements and assertions
ABNORMAL FUNC body => node IMPORTS ALL;
   VAR head, tail : node;
   WHILE NOT at_body_end REPEAT
      append(head, tail, body_element);
   END REPEAT;
   RETURN head;
END FUNC body;

ABNORMAL FUNC body_element => node IMPORTS ALL;
   VAR x : node;
   IF at_kw("VAR") OR at_kw("CONST") OR at_kw("ABBREV") OR at_kw("TYPE")
         OR at_kw("PROC") OR at_kw("FUNC") OR at_kw("ABNORMAL") OR at_kw("CAPSULE")
         OR at_kw("EXPOSE") OR at_kw("EXCEPTION") OR at_kw("TASK") OR at_kw("GENERIC") THEN
      x := declaration;
   ELSEIF at_kw("ASSERT") THEN
      x := nn(n_assert, cur_line);
      tpos := tpos + 1;
      x.a := expr;
   ELSE
      x := statement;
   END IF;
   expect_op(";");
   RETURN x;
END FUNC body_element;

ABNORMAL FUNC declaration => node IMPORTS ALL;
   VAR line : INT := cur_line;
   IF at_kw("VAR") OR at_kw("CONST") THEN
      RETURN object_decl;
   ELSEIF at_kw("ABBREV") THEN
      RETURN abbrev_decl;
   ELSEIF at_kw("TYPE") THEN
      RETURN type_decl;
   ELSEIF at_kw("PROC") OR at_kw("FUNC") OR at_kw("ABNORMAL") THEN
      RETURN subprogram_decl;
   ELSEIF at_kw("CAPSULE") THEN
      RETURN capsule_decl;
   ELSEIF at_kw("EXCEPTION") THEN
      VAR head, tail : node;
      VAR names : node;
      tpos := tpos + 1;
      names := id_list;
      WHILE names /= NIL REPEAT
         VAR x : node := nn(n_exception, line);
         x.name := names.name;
         append(head, tail, x);
         names := names.next;
      END REPEAT;
      RETURN head;
   END IF;
   perror("this declaration is not handled yet");
   RETURN NIL;
END FUNC declaration;

% VAR and CONST (diagrams 15, 16): one node per declared name
ABNORMAL FUNC object_decl => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR is_var : BOOL := at_kw("VAR");
   VAR names, st, init : node;
   VAR head, tail : node;
   tpos := tpos + 1;
   names := id_list;
   IF is_var THEN
      expect_op(":");
      st := p_subtype;
      IF accept_op(":=") THEN
         init := expr;
      END IF;
   ELSE
      IF accept_op(":") THEN
         st := p_subtype;
      END IF;
      expect_op(":=");
      init := expr;
   END IF;
   WHILE names /= NIL REPEAT
      VAR x : node;
      IF is_var THEN
         x := nn(n_var, line);
      ELSE
         x := nn(n_const, line);
      END IF;
      x.name := names.name;
      x.a := st;
      x.b := init;
      append(head, tail, x);
      names := names.next;
   END REPEAT;
   RETURN head;
END FUNC object_decl;

ABNORMAL FUNC abbrev_decl => node IMPORTS ALL;
   VAR x : node := nn(n_abbrev, cur_line);
   tpos := tpos + 1;
   x.name := expect_id;
   IF at_op("(") THEN
      x.b := formal_params;
   END IF;
   expect_op(":");
   x.a := p_subtype;
   RETURN x;
END FUNC abbrev_decl;

ABNORMAL FUNC type_decl => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR name : text;
   VAR params, x : node;
   tpos := tpos + 1;
   name := expect_id;
   IF at_op("(") THEN
      params := formal_params;
   END IF;
   expect_op(":");
   IF at_kind(k_id) AND toks(tpos).s.ALL = "PTR" THEN
      tpos := tpos + 1;
      x := nn(n_ptrtype, line);
      IF at_op("(") THEN
         x.b := formal_params;
      END IF;
   ELSE
      x := nn(n_newtype, line);
      x.b := params;
   END IF;
   x.name := name;
   x.a := p_subtype;
   RETURN x;
END FUNC type_decl;

FUNC mode_of(READONLY w : STRING[ASCII]) => INT;
   IF w = "VAR" THEN
      RETURN m_var;
   ELSEIF w = "OUT" THEN
      RETURN m_out;
   ELSEIF w = "READONLY" THEN
      RETURN m_readonly;
   END IF;
   RETURN m_const;
END FUNC mode_of;

% formal parameters (diagram 52)
ABNORMAL FUNC formal_params => node IMPORTS ALL;
   VAR head, tail : node;
   VAR more : BOOL := TRUE;
   expect_op("(");
   WHILE more REPEAT
      VAR mode : INT := m_const;
      VAR names, ntail, st : node;
      IF at_kw("CONST") OR at_kw("READONLY") OR at_kw("VAR") OR at_kw("OUT") THEN
         mode := mode_of(toks(tpos).s.ALL);
         tpos := tpos + 1;
      END IF;
      append(names, ntail, name_node);
      WHILE at_op(",") AND kind_at(1) = k_id AND kind_at(2) = k_op
            AND (text_at(2).ALL = "," OR text_at(2).ALL = ":") REPEAT
         tpos := tpos + 1;
         append(names, ntail, name_node);
      END REPEAT;
      expect_op(":");
      st := p_subtype;
      WHILE names /= NIL REPEAT
         VAR p : node := nn(n_param, names.line);
         p.name := names.name;
         p.ival := mode;
         p.a := st;
         append(head, tail, p);
         names := names.next;
      END REPEAT;
      more := accept_op(",");
   END REPEAT;
   expect_op(")");
   RETURN head;
END FUNC formal_params;

% IMPORTS (diagram 9): the list is kept as names; ALL sets flag
ABNORMAL FUNC imports_list(CONST owner : node) => BOOL IMPORTS ALL;
   VAR head, tail : node;
   VAR more : BOOL := TRUE;
   IF NOT accept_kw("IMPORTS") THEN
      RETURN FALSE;
   END IF;
   IF accept_kw("ALL") THEN
      owner.flag := owner.flag + 2;
      RETURN TRUE;
   END IF;
   WHILE more REPEAT
      VAR ro : BOOL := accept_kw("READONLY");
      VAR x : node := name_node;
      IF ro THEN
         x.ival := 1;
      END IF;
      append(head, tail, x);
      more := accept_op(",");
   END REPEAT;
   owner.d := head;
   RETURN TRUE;
END FUNC imports_list;

FUNC is_definable(READONLY w : STRING[ASCII]) => BOOL;
   RETURN w = "+" OR w = "-" OR w = "*" OR w = "/" OR w = "**" OR w = "&"
       OR w = "=" OR w = "<" OR w = "<=" OR w = ">" OR w = ">=" OR w = "/="
       OR w = "DIV" OR w = "MOD" OR w = "AND" OR w = "OR" OR w = "XOR"
       OR w = "NOT" OR w = "IN" OR w = ":=" OR w = "#";
END FUNC is_definable;

ABNORMAL FUNC definable_name => text IMPORTS ALL;
   IF at_kind(k_id) OR (at_kind(k_op) AND is_definable(toks(tpos).s.ALL)) THEN
      tpos := tpos + 1;
      RETURN toks(tpos - 1).s;
   END IF;
   perror("expected a name");
   RETURN NIL;
END FUNC definable_name;

% procedures and functions (diagrams 48, 50); flag 1 = ABNORMAL
ABNORMAL FUNC subprogram_decl => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   VAR is_abn : BOOL := accept_kw("ABNORMAL");
   VAR is_func : BOOL := at_kw("FUNC");
   VAR dummy : BOOL;
   IF is_func THEN
      x := nn(n_func, line);
   ELSEIF at_kw("PROC") THEN
      x := nn(n_proc, line);
   ELSE
      perror("expected PROC or FUNC");
   END IF;
   tpos := tpos + 1;
   IF is_abn THEN
      x.flag := 1;
   END IF;
   x.name := definable_name;
   IF at_op("(") THEN
      x.a := formal_params;
   END IF;
   IF is_func THEN
      expect_op("=>");
      x.b := p_subtype;
   END IF;
   dummy := imports_list(x);
   expect_op(";");
   x.c := body;
   expect_kw("END");
   IF is_func THEN
      expect_kw("FUNC");
   ELSE
      expect_kw("PROC");
   END IF;
   IF definable_name.ALL /= x.name.ALL THEN
      fail(cur_line, "END name does not match " & x.name.ALL);
   END IF;
   RETURN x;
END FUNC subprogram_decl;

ABNORMAL FUNC capsule_decl => node IMPORTS ALL;
   VAR x : node := nn(n_capsule, cur_line);
   VAR dummy : BOOL;
   tpos := tpos + 1;
   x.name := expect_id;
   dummy := imports_list(x);
   expect_kw("EXPORTS");
   IF accept_kw("ALL") THEN
      x.ival := 1;
   ELSEIF accept_kw("NONE") THEN
      x.ival := 0;
   ELSE
      VAR head, tail : node;
      VAR more : BOOL := TRUE;
      WHILE more REPEAT
         VAR n : node := nn(n_name, cur_line);
         IF accept_kw("READONLY") THEN
            n.ival := 1;
         END IF;
         n.name := definable_name;
         append(head, tail, n);
         more := accept_op(",");
      END REPEAT;
      x.a := head;
      x.ival := 2;
   END IF;
   expect_op(";");
   x.c := body;
   expect_kw("END");
   expect_kw("CAPSULE");
   IF expect_id.ALL /= x.name.ALL THEN
      fail(cur_line, "END CAPSULE name does not match");
   END IF;
   RETURN x;
END FUNC capsule_decl;

% ---- statements (chapter 6) --------------------------------------------------------

FUNC is_compound_kw(READONLY w : STRING[ASCII]) => BOOL;
   RETURN w = "IF" OR w = "CASE" OR w = "FOR" OR w = "WHILE" OR w = "BEGIN"
       OR w = "GUARD" OR w = "WAIT" OR w = "REGION";
END FUNC is_compound_kw;

ABNORMAL FUNC statement => node IMPORTS ALL;
   VAR labels, ltail : node;
   VAR match : text;
   VAR s : node;
   % goto labels: identifier ':' (6.8)
   WHILE at_kind(k_id) AND kind_at(1) = k_op AND text_at(1).ALL = ":" REPEAT
      append(labels, ltail, name_node);
      tpos := tpos + 1;
   END REPEAT;
   IF at_kind(k_id) AND kind_at(1) = k_kw AND is_compound_kw(text_at(1).ALL) THEN
      match := expect_id;
   END IF;
   s := unlabeled_statement;
   IF match /= NIL THEN
      IF s.kind /= n_if AND s.kind /= n_case AND s.kind /= n_repeat AND s.kind /= n_begin
            AND s.kind /= n_guard AND s.kind /= n_wait AND s.kind /= n_region THEN
         fail(s.line, "a matching identifier must bracket a compound statement");
      END IF;
      IF expect_id.ALL /= match.ALL THEN
         fail(s.line, "matching identifier does not match " & match.ALL);
      END IF;
      s.tag := match;
   END IF;
   IF labels /= NIL THEN
      fail(s.line, "goto labels are not handled yet");
   END IF;
   RETURN s;
END FUNC statement;

ABNORMAL FUNC unlabeled_statement => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   IF at_kw("IF") THEN
      RETURN if_stmt;
   ELSEIF at_kw("CASE") THEN
      RETURN case_stmt;
   ELSEIF at_kw("FOR") OR at_kw("WHILE") THEN
      RETURN repeat_stmt;
   ELSEIF at_kw("BEGIN") THEN
      x := nn(n_begin, line);
      tpos := tpos + 1;
      x.a := body;
      expect_kw("END");
      RETURN x;
   ELSEIF at_kw("GUARD") THEN
      RETURN guard_stmt;
   ELSEIF at_kw("EXIT") THEN
      x := nn(n_exit, line);
      tpos := tpos + 1;
      x.name := expect_id;
      RETURN x;
   ELSEIF at_kw("RETURN") THEN
      x := nn(n_return, line);
      tpos := tpos + 1;
      IF NOT at_op(";") THEN
         x.a := expr;
      END IF;
      RETURN x;
   ELSEIF at_kw("RAISE") THEN
      x := nn(n_raise, line);
      tpos := tpos + 1;
      x.name := expect_id;
      RETURN x;
   ELSEIF at_kw("RERAISE") THEN
      tpos := tpos + 1;
      RETURN nn(n_reraise, line);
   ELSEIF at_kw("ALLOC") THEN
      x := nn(n_alloc, line);
      tpos := tpos + 1;
      x.a := postfix;
      IF NOT (at_kind(k_id) AND toks(tpos).s.ALL = "PTR") THEN
         perror("expected PTR");
      END IF;
      tpos := tpos + 1;
      IF at_op("(") THEN
         x.b := actual_params;
      END IF;
      IF accept_op(":=") THEN
         x.c := expr;
      END IF;
      RETURN x;
   END IF;
   BEGIN
      VAR target : node := postfix;
      IF accept_op(":=") THEN
         x := nn(n_assign, line);
         x.a := target;
         x.b := expr;
      ELSE
         x := nn(n_call, line);
         x.a := target;
      END IF;
   END;
   RETURN x;
END FUNC unlabeled_statement;

ABNORMAL FUNC arm(CONST cond : node, CONST b : node, CONST line : INT) => node;
   VAR x : node := nn(n_arm, line);
   x.a := cond;
   x.b := b;
   RETURN x;
END FUNC arm;

% IF (diagram 42); flag 1 = has ELSE
ABNORMAL FUNC if_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_if, cur_line);
   VAR head, tail, cond : node;
   VAR go : BOOL := TRUE;
   tpos := tpos + 1;
   cond := expr;
   expect_kw("THEN");
   append(head, tail, arm(cond, body, x.line));
   WHILE go REPEAT
      IF accept_kw("ELSEIF") THEN
         cond := expr;
         expect_kw("THEN");
         append(head, tail, arm(cond, body, x.line));
      ELSEIF accept_kw("ELSE") THEN
         x.flag := 1;
         x.b := body;
      ELSE
         go := FALSE;
      END IF;
   END REPEAT;
   expect_kw("END");
   expect_kw("IF");
   x.a := head;
   RETURN x;
END FUNC if_stmt;

% CASE (diagram 43): arms hold n_label lists
ABNORMAL FUNC case_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_case, cur_line);
   VAR head, tail : node;
   tpos := tpos + 1;
   x.a := expr;
   WHILE accept_kw("WHEN") REPEAT
      VAR labs, ltail : node;
      VAR more : BOOL := TRUE;
      WHILE more REPEAT
         VAR l : node := nn(n_label, cur_line);
         l.a := expr;
         IF accept_op("..") THEN
            l.b := expr;
         END IF;
         append(labs, ltail, l);
         more := accept_op(",");
      END REPEAT;
      expect_op("=>");
      append(head, tail, arm(labs, body, x.line));
   END REPEAT;
   IF accept_kw("ELSE") THEN
      expect_op("=>");
      x.flag := 1;
      x.c := body;
   END IF;
   expect_kw("END");
   expect_kw("CASE");
   x.b := head;
   RETURN x;
END FUNC case_stmt;

% REPEAT (diagram 44): flag 1 = FOR, ival 1 = REVERSE
ABNORMAL FUNC repeat_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_repeat, cur_line);
   IF accept_kw("FOR") THEN
      x.flag := 1;
      x.name := expect_id;
      expect_op(":");
      IF accept_kw("REVERSE") THEN
         x.ival := 1;
      END IF;
      x.a := p_subtype;
   ELSE
      expect_kw("WHILE");
      x.a := expr;
   END IF;
   expect_kw("REPEAT");
   x.b := body;
   expect_kw("END");
   expect_kw("REPEAT");
   RETURN x;
END FUNC repeat_stmt;

% GUARD (diagram 58): handlers are n_handler with a name list; flag 1 = ELSE
ABNORMAL FUNC guard_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_guard, cur_line);
   VAR head, tail : node;
   tpos := tpos + 1;
   x.a := body;
   expect_kw("BY");
   WHILE accept_kw("WHEN") REPEAT
      VAR h : node := nn(n_handler, cur_line);
      h.a := id_list;
      expect_op("=>");
      h.b := body;
      append(head, tail, h);
   END REPEAT;
   IF accept_kw("ELSE") THEN
      expect_op("=>");
      x.flag := 1;
      x.c := body;
   END IF;
   expect_kw("END");
   expect_kw("GUARD");
   x.b := head;
   RETURN x;
END FUNC guard_stmt;

% the program: one main capsule (3.1)
ABNORMAL FUNC program => node IMPORTS ALL;
   VAR x : node;
   IF NOT at_kw("CAPSULE") THEN
      perror("a program is a capsule declaration");
   END IF;
   x := capsule_decl;
   expect_op(";");
   IF NOT at_kind(k_eof) THEN
      perror("text after the main capsule");
   END IF;
   RETURN x;
END FUNC program;
% ---- symbols: one hash table, scopes as a stack ------------------------------

FUNC hash(READONLY s : STRING[ASCII]) => INT;
   VAR h : INT := 0;
   FOR i : INT(1 .. s.LEN) REPEAT
      h := (h * 31 + POS(s(i))) MOD 4093;
   END REPEAT;
   RETURN h;
END FUNC hash;

ABNORMAL FUNC lookup(READONLY name : STRING[ASCII]) => sym IMPORTS table;
   VAR y : sym := table(hash(name));
   WHILE y /= NIL REPEAT
      IF y.name.ALL = name THEN
         RETURN y;
      END IF;
      y := y.chain;
   END REPEAT;
   RETURN NIL;
END FUNC lookup;

PROC define(CONST y : sym, CONST line : INT) IMPORTS table, depth, scope_stack;
   VAR h : INT := hash(y.name.ALL);
   VAR z : sym := table(h);
   WHILE z /= NIL REPEAT
      IF z.depth = depth AND z.name.ALL = y.name.ALL THEN
         fail(line, y.name.ALL & " is already defined in this scope");
      END IF;
      z := z.chain;
   END REPEAT;
   y.depth := depth;
   y.chain := table(h);
   table(h) := y;
   y.stack := scope_stack;
   scope_stack := y;
END PROC define;

PROC open_scope IMPORTS depth;
   depth := depth + 1;
END PROC open_scope;

PROC close_scope IMPORTS table, depth, scope_stack;
   WHILE scope_stack /= NIL AND scope_stack.depth = depth REPEAT
      table(hash(scope_stack.name.ALL)) := scope_stack.chain;
      scope_stack := scope_stack.stack;
   END REPEAT;
   depth := depth - 1;
END PROC close_scope;

ABNORMAL FUNC new_sym(CONST kind : INT, CONST name : text) => sym;
   VAR y : sym;
   ALLOC y PTR;
   y.kind := kind;
   y.name := name;
   RETURN y;
END FUNC new_sym;

% ---- types --------------------------------------------------------------------

ABNORMAL FUNC new_typ(CONST kind : INT) => typ;
   VAR t : typ;
   ALLOC t PTR;
   t.kind := kind;
   RETURN t;
END FUNC new_typ;

ABNORMAL FUNC new_cons => cons;
   VAR c : cons;
   ALLOC c PTR;
   RETURN c;
END FUNC new_cons;

FUNC same_lits(CONST a : node, CONST b : node) => BOOL;
   VAR x : node := a;
   VAR y : node := b;
   WHILE x /= NIL AND y /= NIL REPEAT
      IF x.name.ALL /= y.name.ALL THEN
         RETURN FALSE;
      END IF;
      x := x.next;
      y := y.next;
   END REPEAT;
   RETURN x = NIL AND y = NIL;
END FUNC same_lits;

% type equivalence (4.1.5): built-in types by extended name, new types by identity
FUNC same(CONST a : typ, CONST b : typ) => BOOL;
   IF a = b THEN
      RETURN TRUE;
   END IF;
   IF a = NIL OR b = NIL OR a.kind /= b.kind THEN
      RETURN FALSE;
   END IF;
   IF a.kind = t_int OR a.kind = t_bool OR a.kind = t_float OR a.kind = t_string
         OR a.kind = t_void OR a.kind = t_file THEN
      RETURN TRUE;
   END IF;
   IF a.kind = t_enum THEN
      RETURN same_lits(a.lits, b.lits);
   END IF;
   IF a.kind = t_array THEN
      RETURN same(a.elem, b.elem) AND same(a.idx, b.idx);
   END IF;
   IF a.kind = t_record THEN
      VAR f : field := a.fields;
      VAR g : field := b.fields;
      WHILE f /= NIL AND g /= NIL REPEAT
         IF f.name.ALL /= g.name.ALL OR NOT same(f.t, g.t) THEN
            RETURN FALSE;
         END IF;
         f := f.next;
         g := g.next;
      END REPEAT;
      RETURN f = NIL AND g = NIL;
   END IF;
   RETURN FALSE;
END FUNC same;

FUNC kind_name(CONST t : typ) => STRING[ASCII];
   CASE t.kind
      WHEN t_int => RETURN "INT";
      WHEN t_bool => RETURN "BOOL";
      WHEN t_float => RETURN "FLOAT";
      WHEN t_enum => RETURN "ENUM";
      WHEN t_string => RETURN "STRING";
      WHEN t_array => RETURN "ARRAY";
      WHEN t_record => RETURN "RECORD";
      WHEN t_ptr => RETURN "indirect type " & t.name.ALL;
      WHEN t_nil => RETURN "NIL";
      ELSE => RETURN "this type";
   END CASE;
END FUNC kind_name;

PROC check_type(CONST got : typ, CONST want : typ, CONST line : INT);
   IF want = NIL THEN
      RETURN;
   END IF;
   IF got.kind = t_nil AND want.kind = t_ptr THEN
      RETURN;
   END IF;
   IF NOT same(got, want) THEN
      fail(line, "type mismatch: " & kind_name(got) & " where " & kind_name(want) & " is required");
   END IF;
END PROC check_type;

% ---- C types -------------------------------------------------------------------------

ABNORMAL FUNC ctype(CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   CASE t.kind
      WHEN t_int => RETURN "rt_int";
      WHEN t_bool, t_enum, t_file => RETURN "int";
      WHEN t_float => RETURN "double";
      WHEN t_string => RETURN "rstr";
      WHEN t_void => RETURN "void";
      ELSE =>
         IF t.cname = NIL THEN
            declare_ctype(t);
         ELSEIF t.kind = t_record AND t.forward AND NOT t.defined THEN
            t.defined := TRUE;
            put(out_types, "struct " & t.cname.ALL & " { " & field_decls(t) & " };");
         END IF;
         RETURN t.cname.ALL;
   END CASE;
END FUNC ctype;

ABNORMAL FUNC field_decls(CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR f : field := t.fields;
   VAR s : text := mk(" ");
   WHILE f /= NIL REPEAT
      s := mk(s.ALL & ctype(f.t) & " " & lower_s(f.name.ALL) & "; ");
      f := f.next;
   END REPEAT;
   RETURN s.ALL;
END FUNC field_decls;

PROC declare_ctype(CONST t : typ) IMPORTS ALL;
   VAR u : typ := all_types;
   IF t.kind = t_ptr AND t.target = NIL THEN
      finish_ptr(t);
      IF t.cname /= NIL THEN
         RETURN;
      END IF;
   END IF;
   IF t.kind /= t_ptr THEN
      WHILE u /= NIL REPEAT
         IF u.kind = t.kind AND same(u, t) THEN
            t.cname := u.cname;
            RETURN;
         END IF;
         u := u.next;
      END REPEAT;
   END IF;
   IF t.kind = t_array THEN
      t.cname := mk(new_name("A"));
   ELSEIF t.kind = t_record THEN
      t.cname := mk(new_name("R"));
   ELSE
      t.cname := mk(new_name("P"));
   END IF;
   t.next := all_types;
   all_types := t;
   IF t.kind = t_ptr THEN
      VAR target : typ := t.target;
      IF target.kind = t_record THEN
         IF target.cname = NIL THEN
            target.cname := mk(new_name("R"));
            target.next := all_types;
            all_types := target;
            put(out_types, "typedef struct " & target.cname.ALL & " " & target.cname.ALL & ";");
            target.forward := TRUE;
         END IF;
         put(out_types, "typedef struct " & target.cname.ALL & " *" & t.cname.ALL & ";");
      ELSE
         put(out_types, "typedef " & ctype(target) & " *" & t.cname.ALL & ";");
      END IF;
   ELSEIF t.kind = t_array THEN
      put(out_types, "typedef struct " & t.cname.ALL & " " & t.cname.ALL & ";");
      put(out_types, "struct " & t.cname.ALL & " { rt_int lo, hi; " & ctype(t.elem) & " *p; };");
   ELSE
      put(out_types, "typedef struct " & t.cname.ALL & " " & t.cname.ALL & ";");
      t.defined := TRUE;
      put(out_types, "struct " & t.cname.ALL & " { " & field_decls(t) & " };");
   END IF;
END PROC declare_ctype;

% ---- ASCII (Appendix C.15) ----------------------------------------------------------

PROC init_ascii IMPORTS ALL;
   CONST names := "NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 "
      & "DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE "
      & "NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA "
      & "MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI "
      & "LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T "
      & "U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A "
      & "L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S "
      & "L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ";
   VAR head, tail : node;
   VAR start : INT := 1;
   FOR i : INT(1 .. names.LEN) REPEAT
      IF names(i) = 'SP THEN
         VAR lit : node := nn(n_enum, 0);
         lit.name := mk(names(start .. i - 1));
         append(head, tail, lit);
         start := i + 1;
      END IF;
   END REPEAT;
   ty_ascii := new_typ(t_enum);
   ty_ascii.lits := head;
   ty_ascii.name := mk("ASCII");
END PROC init_ascii;

FUNC lit_index(CONST lits : node, READONLY name : STRING[ASCII]) => INT;
   VAR i : INT := 0;
   VAR l : node := lits;
   WHILE l /= NIL REPEAT
      IF l.name.ALL = name THEN
         RETURN i;
      END IF;
      i := i + 1;
      l := l.next;
   END REPEAT;
   RETURN -1;
END FUNC lit_index;

% ---- subtypes ------------------------------------------------------------------------

ABNORMAL FUNC resolve_subtype(CONST st : node, OUT c : cons) => typ IMPORTS ALL;
   VAR t : typ;
   VAR ok : BOOL;
   VAR dummy : typ;
   c := new_cons;
   CASE st.kind
      WHEN s_int =>
         IF st.a /= NIL THEN
            c.lo := mk(gexpr(st.a, ty_int, dummy));
            c.hi := mk(gexpr(st.b, ty_int, dummy));
            c.mlo := manifest(st.a, ok);
            c.hasm := ok;
            c.mhi := manifest(st.b, ok);
            c.hasm := c.hasm AND ok;
         END IF;
         RETURN ty_int;
      WHEN s_float =>
         RETURN ty_float;
      WHEN s_enum =>
         t := new_typ(t_enum);
         t.lits := st.a;
         IF st.b /= NIL THEN
            c.lo := mk(gexpr(st.b, t, dummy));
            c.hi := mk(gexpr(st.c, t, dummy));
         END IF;
         RETURN t;
      WHEN s_string =>
         t := resolve_subtype(st.a, c);
         IF NOT same(t, ty_ascii) THEN
            fail(st.line, "only STRING[ASCII] is supported");
         END IF;
         c := new_cons;
         IF st.b /= NIL THEN
            c.slen := mk(gexpr(st.b, ty_int, dummy));
         END IF;
         RETURN ty_string;
      WHEN s_array =>
         IF list_len(st.a) /= 1 THEN
            fail(st.line, "only one-dimensional arrays are supported");
         END IF;
         BEGIN
            VAR ic, ec : cons;
            VAR it : typ := resolve_subtype(st.a, ic);
            VAR et : typ := resolve_subtype(st.b, ec);
            t := new_typ(t_array);
            t.idx := it;
            t.elem := et;
            t.elemcons := ec;
            t.elemst := st.b;
            IF ic.lo /= NIL THEN
               c.lo := ic.lo;
               c.hi := ic.hi;
            ELSEIF it.kind = t_enum THEN
               c.lo := mk("0");
               c.hi := mk(itos(list_len(it.lits) - 1));
            END IF;
         END;
         RETURN t;
      WHEN s_record =>
         t := new_typ(t_record);
         BEGIN
            VAR comp : node := st.a;
            VAR tail : field;
            WHILE comp /= NIL REPEAT
               VAR cc : cons;
               VAR f : field;
               ALLOC f PTR;
               f.name := comp.name;
               f.t := resolve_subtype(comp.a, cc);
               f.st := comp.a;
               IF tail = NIL THEN
                  t.fields := f;
               ELSE
                  tail.next := f;
               END IF;
               tail := f;
               comp := comp.next;
            END REPEAT;
         END;
         RETURN t;
      WHEN s_file =>
         RETURN ty_file;
      WHEN s_name =>
         IF st.name.ALL = "BOOL" THEN
            RETURN ty_bool;
         ELSEIF st.name.ALL = "ASCII" THEN
            RETURN ty_ascii;
         END IF;
         BEGIN
            VAR y : sym := lookup(st.name.ALL);
            IF y = NIL THEN
               fail(st.line, "unknown type " & st.name.ALL);
            END IF;
            IF y.kind = y_abbrev THEN
               RETURN resolve_subtype(y.st, c);
            ELSEIF y.kind = y_type THEN
               IF y.t /= NIL THEN
                  RETURN y.t;
               END IF;
               RETURN resolve_subtype(y.st, c);
            END IF;
            fail(st.line, st.name.ALL & " is not a type");
         END;
      ELSE =>
         fail(st.line, "this subtype form is not handled yet");
   END CASE;
   RETURN NIL;
END FUNC resolve_subtype;

% give a fresh variable its storage (strings, arrays and records own buffers)
PROC init_storage(READONLY lval : STRING[ASCII], CONST t : typ, CONST c : cons) IMPORTS ALL;
   IF t.kind = t_ptr THEN
      % indirect variables start as NIL (4.4.3), at every elaboration
      emit(lval & " = NULL;");
   ELSEIF t.kind = t_string THEN
      IF c.slen = NIL THEN
         fail(0, "a string variable needs a length");
      END IF;
      emit(lval & " = rt_str_new(" & c.slen.ALL & ");");
   ELSEIF t.kind = t_array THEN
      IF c.lo = NIL THEN
         fail(0, "an array variable needs index bounds");
      END IF;
      emit(lval & ".lo = " & c.lo.ALL & "; " & lval & ".hi = " & c.hi.ALL & ";");
      emit(lval & ".p = rt_alloc(sizeof(" & ctype(t.elem) & ") * (size_t)(" & lval & ".hi >= "
           & lval & ".lo ? " & lval & ".hi - " & lval & ".lo + 1 : 0));");
      IF t.elem.kind = t_string OR t.elem.kind = t_array OR t.elem.kind = t_record THEN
         CONST i := new_name("i");
         emit("for (rt_int " & i & " = 0; " & i & " <= " & lval & ".hi - " & lval & ".lo; "
              & i & "++) {");
         init_storage(lval & ".p[" & i & "]", t.elem, t.elemcons);
         emit("}");
      END IF;
   ELSEIF t.kind = t_record THEN
      VAR f : field := t.fields;
      WHILE f /= NIL REPEAT
         VAR fc : cons;
         VAR ft : typ := resolve_subtype(f.st, fc);
         init_storage(lval & "." & lower_s(f.name.ALL), f.t, fc);
         f := f.next;
      END REPEAT;
   END IF;
END PROC init_storage;

% manifest expressions (5.5)
ABNORMAL FUNC manifest(CONST e : node, OUT ok : BOOL) => INT IMPORTS ALL;
   VAR a, b : INT;
   VAR ok2 : BOOL;
   ok := FALSE;
   IF e.kind = n_int THEN
      ok := TRUE;
      RETURN e.ival;
   ELSEIF e.kind = n_paren THEN
      RETURN manifest(e.a, ok);
   ELSEIF e.kind = n_unop AND e.name.ALL = "-" THEN
      a := manifest(e.a, ok);
      RETURN -a;
   ELSEIF e.kind = n_binop AND (e.name.ALL = "+" OR e.name.ALL = "-" OR e.name.ALL = "*") THEN
      a := manifest(e.a, ok);
      b := manifest(e.b, ok2);
      ok := ok AND ok2;
      IF NOT ok THEN
         RETURN 0;
      END IF;
      IF e.name.ALL = "+" THEN
         RETURN a + b;
      ELSEIF e.name.ALL = "-" THEN
         RETURN a - b;
      END IF;
      RETURN a * b;
   ELSEIF e.kind = n_name THEN
      VAR y : sym := lookup(e.name.ALL);
      IF y /= NIL AND y.kind = y_const AND y.hasmv THEN
         ok := TRUE;
         RETURN y.mvalue;
      END IF;
   END IF;
   RETURN 0;
END FUNC manifest;

% ---- assignment, copy and equality --------------------------------------------------

ABNORMAL FUNC assign_code(READONLY lval : STRING[ASCII], CONST t : typ, READONLY v : STRING[ASCII],
                          CONST c : cons) => STRING[ASCII] IMPORTS ALL;
   IF t.kind = t_string THEN
      RETURN "rt_str_assign(&" & lval & ", " & v & ");";
   ELSEIF t.kind = t_array OR t.kind = t_record THEN
      RETURN "as_" & ctype(t) & "(&" & lval & ", " & v & ");";
   ELSEIF t.kind = t_int AND c /= NIL AND c.hasm THEN
      RETURN lval & " = rt_range(" & v & ", " & itos(c.mlo) & ", " & itos(c.mhi) & ");";
   END IF;
   RETURN lval & " = " & v & ";";
END FUNC assign_code;

ABNORMAL FUNC copy_code(CONST t : typ, READONLY v : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   IF t.kind = t_string THEN
      RETURN "rt_str_copy(" & v & ")";
   ELSEIF t.kind = t_array OR t.kind = t_record THEN
      RETURN "cp_" & ctype(t) & "(" & v & ")";
   END IF;
   RETURN v;
END FUNC copy_code;

ABNORMAL FUNC eq_code(CONST t : typ, READONLY a : STRING[ASCII], READONLY b : STRING[ASCII])
      => STRING[ASCII] IMPORTS ALL;
   IF t.kind = t_string THEN
      RETURN "rt_str_eq(" & a & ", " & b & ")";
   ELSEIF t.kind = t_array OR t.kind = t_record THEN
      RETURN "eq_" & ctype(t) & "(" & a & ", " & b & ")";
   END IF;
   RETURN "(" & a & " == " & b & ")";
END FUNC eq_code;

ABNORMAL FUNC elem_assign(READONLY lval : STRING[ASCII], CONST t : typ, READONLY v : STRING[ASCII])
      => STRING[ASCII] IMPORTS ALL;
   RETURN assign_code(lval, t, v, NIL);
END FUNC elem_assign;

FUNC seen_name(CONST l : lines, READONLY s : STRING[ASCII]) => BOOL;
   VAR p : lines := l;
   WHILE p /= NIL REPEAT
      IF p.s.ALL = s THEN
         RETURN TRUE;
      END IF;
      p := p.next;
   END REPEAT;
   RETURN FALSE;
END FUNC seen_name;

% assignment, copy and equality for every composite C type, oldest type first
PROC emit_helpers IMPORTS ALL;
   VAR order : typ;
   VAR t : typ := all_types;
   VAR done : lines;
   WHILE t /= NIL REPEAT
      IF t.kind /= t_ptr AND NOT seen_name(done, t.cname.ALL) THEN
         VAR l : lines;
         VAR c : STRING[ASCII](t.cname.LEN) := t.cname.ALL;
         ALLOC l PTR;
         l.s := t.cname;
         l.next := done;
         done := l;
         put(out_helpers, "static void as_" & c & "(" & c & " *d, " & c & " s);");
         put(out_helpers, "static " & c & " cp_" & c & "(" & c & " s);");
         put(out_helpers, "static int eq_" & c & "(" & c & " a, " & c & " b);");
         helper_bodies(t);
      END IF;
      t := t.next;
   END REPEAT;
END PROC emit_helpers;

PROC helper_bodies(CONST t : typ) IMPORTS ALL;
   VAR c : STRING[ASCII](t.cname.LEN) := t.cname.ALL;
   VAR b : buffer := out_funcs;
   IF t.kind = t_array THEN
      VAR e : typ := t.elem;
      put(b, "static void as_" & c & "(" & c & " *d, " & c & " s) {");
      put(b, "  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, " & q & "array length" & q & ");");
      put(b, "  for (rt_int i = 0; i <= s.hi - s.lo; i++) { " & elem_assign("d->p[i]", e, "s.p[i]") & " }");
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) {");
      put(b, "  " & c & " d = s; d.p = rt_alloc(sizeof(" & ctype(e) & ") * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));");
      put(b, "  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = " & copy_code(e, "s.p[i]") & ";");
      put(b, "  return d;");
      put(b, "}");
      put(b, "static int eq_" & c & "(" & c & " a, " & c & " b) {");
      put(b, "  if (a.hi - a.lo != b.hi - b.lo) return 0;");
      put(b, "  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!(" & eq_code(e, "a.p[i]", "b.p[i]") & ")) return 0;");
      put(b, "  return 1;");
      put(b, "}");
   ELSE
      VAR f : field := t.fields;
      VAR conds : text := mk("1");
      put(b, "static void as_" & c & "(" & c & " *d, " & c & " s) {");
      WHILE f /= NIL REPEAT
         CONST fn := lower_s(f.name.ALL);
         put(b, "  " & elem_assign("d->" & fn, f.t, "s." & fn));
         f := f.next;
      END REPEAT;
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) {");
      put(b, "  " & c & " d = s;");
      f := t.fields;
      WHILE f /= NIL REPEAT
         CONST fn := lower_s(f.name.ALL);
         put(b, "  d." & fn & " = " & copy_code(f.t, "s." & fn) & ";");
         conds := mk(conds.ALL & " && " & eq_code(f.t, "a." & fn, "b." & fn));
         f := f.next;
      END REPEAT;
      put(b, "  return d;");
      put(b, "}");
      put(b, "static int eq_" & c & "(" & c & " a, " & c & " b) {");
      put(b, "  return " & conds.ALL & ";");
      put(b, "}");
   END IF;
END PROC helper_bodies;
% ---- declarations ------------------------------------------------------------------

% first pass over a body: deferred declarations may be used before they appear (3.6)
PROC declare_body(CONST elems : node) IMPORTS ALL;
   VAR e : node := elems;
   WHILE e /= NIL REPEAT
      IF e.kind = n_proc OR e.kind = n_func THEN
         declare_subprogram(e);
      ELSEIF e.kind = n_exception THEN
         VAR y : sym := new_sym(y_exc, e.name);
         y.cname := mk(new_name("ex_" & lower_s(e.name.ALL) & "_"));
         define(y, e.line);
         put(out_globals, "static int " & y.cname.ALL & ";");
         put(out_excs, "  " & y.cname.ALL & " = rt_exc(" & q & e.name.ALL & q & ");");
      ELSEIF e.kind = n_abbrev THEN
         VAR y : sym := new_sym(y_abbrev, e.name);
         y.st := e.a;
         define(y, e.line);
      ELSEIF e.kind = n_ptrtype THEN
         VAR y : sym := new_sym(y_type, e.name);
         VAR t : typ := new_typ(t_ptr);
         t.name := e.name;
         t.decl := e;
         y.t := t;
         define(y, e.line);
      ELSEIF e.kind = n_newtype THEN
         VAR y : sym := new_sym(y_type, e.name);
         y.st := e.a;
         define(y, e.line);
      END IF;
      e := e.next;
   END REPEAT;
END PROC declare_body;

% the target of an indirect type is resolved when first needed: types may refer
% to each other in any order
PROC finish_ptr(CONST t : typ) IMPORTS ALL;
   VAR d : node := t.decl;
   VAR p : node;
   VAR c : cons;
   VAR dummy : STRING[ASCII](1) := " ";
   IF t.target /= NIL THEN
      RETURN;
   END IF;
   open_scope;
   p := d.b;
   WHILE p /= NIL REPEAT
      VAR y : sym := new_sym(y_const, p.name);
      y.t := ty_int;
      y.access := mk("0");
      define(y, d.line);
      p := p.next;
   END REPEAT;
   t.target := resolve_subtype(d.a, c);
   close_scope;
   dummy(1) := ctype(t)(1);
   dummy(1) := ctype(t.target)(1);
END PROC finish_ptr;

PROC declare_subprogram(CONST d : node) IMPORTS ALL;
   VAR y : sym;
   VAR p : node := d.a;
   VAR tail : parm;
   IF d.kind = n_func THEN
      y := new_sym(y_func, d.name);
   ELSE
      y := new_sym(y_proc, d.name);
   END IF;
   WHILE p /= NIL REPEAT
      VAR pm : parm;
      ALLOC pm PTR;
      pm.name := p.name;
      pm.mode := p.ival;
      pm.t := resolve_subtype(p.a, pm.c);
      IF tail = NIL THEN
         y.params := pm;
      ELSE
         tail.next := pm;
      END IF;
      tail := pm;
      p := p.next;
   END REPEAT;
   y.result := ty_void;
   IF d.b /= NIL THEN
      VAR rc : cons;
      y.result := resolve_subtype(d.b, rc);
   END IF;
   y.cname := mk(new_name("f_" & lower_s(d.name.ALL) & "_"));
   y.decl := d;
   define(y, d.line);
END PROC declare_subprogram;

PROC element(CONST e : node) IMPORTS ALL;
   VAR k : INT := e.kind;
   IF k = n_proc OR k = n_func THEN
      subprogram(e);
   ELSEIF k = n_exception OR k = n_abbrev OR k = n_newtype THEN
      RETURN;
   ELSEIF k = n_ptrtype THEN
      finish_ptr(lookup(e.name.ALL).t);
   ELSEIF k = n_var THEN
      var_decl(e);
   ELSEIF k = n_const THEN
      const_decl(e);
   ELSEIF k = n_assert THEN
      VAR t : typ;
      CONST c := gexpr(e.a, ty_bool, t);
      emit("if (!(" & c & ")) rt_raise(RT_X_ASSERT);");
   ELSE
      gen_statement(e);
   END IF;
END PROC element;

% storage for a variable: a global at capsule level, a frame field in a subprogram
ABNORMAL FUNC storage(READONLY name : STRING[ASCII], CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   IF NOT in_func THEN
      CONST g := new_name("g_" & lower_s(name) & "_");
      put(out_globals, "static " & ctype(t) & " " & g & ";");
      RETURN g;
   END IF;
   BEGIN
      CONST f := new_name(lower_s(name) & "_");
      put(fields_buf, " " & ctype(t) & " " & f & ";");
      RETURN "F->" & f;
   END;
END FUNC storage;

PROC var_decl(CONST d : node) IMPORTS ALL;
   VAR c : cons;
   VAR t : typ := resolve_subtype(d.a, c);
   VAR y : sym := new_sym(y_var, d.name);
   CONST access := storage(d.name.ALL, t);
   init_storage(access, t, c);
   IF d.b /= NIL THEN
      VAR vt : typ;
      CONST v := gexpr(d.b, t, vt);
      check_type(vt, t, d.line);
      emit(assign_code(access, t, v, c));
   END IF;
   y.t := t;
   y.c := c;
   y.access := mk(access);
   define(y, d.line);
END PROC var_decl;

PROC const_decl(CONST d : node) IMPORTS ALL;
   VAR c : cons := new_cons;
   VAR t, vt : typ;
   VAR y : sym := new_sym(y_const, d.name);
   VAR ok : BOOL;
   IF d.a /= NIL THEN
      t := resolve_subtype(d.a, c);
   END IF;
   BEGIN
      CONST v := gexpr(d.b, t, vt);
      IF t /= NIL THEN
         check_type(vt, t, d.line);
      ELSE
         t := vt;
      END IF;
      IF t.kind = t_int THEN
         y.mvalue := manifest(d.b, ok);
         y.hasmv := ok;
      END IF;
      BEGIN
         CONST access := storage(d.name.ALL, t);
         emit(access & " = " & copy_code(t, v) & ";");
         y.access := mk(access);
      END;
   END;
   y.t := t;
   y.c := c;
   y.ro_flag := TRUE;
   define(y, d.line);
END PROC const_decl;

% ---- subprograms ------------------------------------------------------------------------

PROC subprogram(CONST d : node) IMPORTS ALL;
   VAR y : sym := lookup(d.name.ALL);
   VAR saved_code : buffer := code;
   VAR saved_fields : buffer := fields_buf;
   VAR saved_in : BOOL := in_func;
   VAR saved_sym : sym := func_sym;
   VAR saved_exits : exitrec := exits;
   VAR saved_frames : INT := frames;
   VAR args : text := mk("");
   VAR pm : parm := y.params;
   VAR frame : STRING[ASCII](4) := "FR  ";
   VAR head : text;
   code := new_buffer;
   fields_buf := new_buffer;
   in_func := TRUE;
   func_sym := y;
   exits := NIL;
   frames := 0;
   open_scope;
   WHILE pm /= NIL REPEAT
      CONST ct := ctype(pm.t);
      CONST f := new_name(lower_s(pm.name.ALL) & "_");
      VAR p : sym;
      IF args.LEN > 0 THEN
         args := mk(args.ALL & ", ");
      END IF;
      IF pm.mode = m_const THEN
         p := new_sym(y_const, pm.name);
         put(fields_buf, " " & ct & " " & f & ";");
         args := mk(args.ALL & ct & " " & f);
         p.access := mk("F->" & f);
         emit("F->" & f & " = " & copy_code(pm.t, f) & ";");
      ELSE
         p := new_sym(y_var, pm.name);
         put(fields_buf, " " & ct & " *" & f & ";");
         args := mk(args.ALL & ct & " *" & f);
         p.access := mk("(*F->" & f & ")");
         emit("F->" & f & " = " & f & ";");
      END IF;
      p.t := pm.t;
      p.c := pm.c;
      p.ro_flag := pm.mode = m_const OR pm.mode = m_readonly;
      define(p, d.line);
      pm := pm.next;
   END REPEAT;
   IF y.result.kind /= t_void THEN
      put(fields_buf, " " & ctype(y.result) & " result_;");
   END IF;
   declare_body(d.c);
   body_elements(d.c);
   close_scope;
   IF args.LEN = 0 THEN
      args := mk("void");
   END IF;
   head := mk("static " & ctype(y.result) & " " & y.cname.ALL & "(" & args.ALL & ")");
   put(out_protos, head.ALL & ";");
   put(out_funcs, head.ALL & " {");
   put(out_funcs, "  struct " & y.cname.ALL & "fr { int dummy;");
   splice(out_funcs, fields_buf);
   put(out_funcs, "  } *F = rt_alloc(sizeof *F);");
   splice(out_funcs, code);
   IF y.result.kind /= t_void THEN
      put(out_funcs, "  rt_raise_msg(RT_X_ASSERT, " & q & "function ended without RETURN" & q & ");");
      put(out_funcs, "ret_:");
      put(out_funcs, "  return F->result_;");
   ELSE
      put(out_funcs, "ret_:");
      put(out_funcs, "  return;");
   END IF;
   put(out_funcs, "}");
   put(out_funcs, "");
   code := saved_code;
   fields_buf := saved_fields;
   in_func := saved_in;
   func_sym := saved_sym;
   exits := saved_exits;
   frames := saved_frames;
END PROC subprogram;

% ---- statements --------------------------------------------------------------------------

PROC body_elements(CONST elems : node) IMPORTS ALL;
   VAR e : node := elems;
   WHILE e /= NIL REPEAT
      element(e);
      e := e.next;
   END REPEAT;
END PROC body_elements;

% a body is an open scope (3.2)
PROC gen_body(CONST elems : node) IMPORTS ALL;
   open_scope;
   declare_body(elems);
   body_elements(elems);
   close_scope;
END PROC gen_body;

PROC pop_frames(CONST upto : INT) IMPORTS frames;
   VAR i : INT := frames;
   WHILE i > upto REPEAT
      emit("RT_POP(xf" & itos(i) & ");");
      i := i - 1;
   END REPEAT;
END PROC pop_frames;

PROC gen_statement(CONST s : node) IMPORTS ALL;
   VAR label : text;
   IF s.tag /= NIL THEN
      VAR x : exitrec;
      ALLOC x PTR;
      label := mk(new_name("L_end_"));
      x.match := s.tag;
      x.label := label;
      x.depth := frames;
      x.next := exits;
      exits := x;
   END IF;
   CASE s.kind
      WHEN n_assign => st_assign(s);
      WHEN n_call => st_call(s);
      WHEN n_if => st_if(s);
      WHEN n_case => st_case(s);
      WHEN n_repeat => st_repeat(s);
      WHEN n_begin =>
         emit("{");
         gen_body(s.a);
         emit("}");
      WHEN n_exit => st_exit(s);
      WHEN n_return => st_return(s);
      WHEN n_raise =>
         emit("rt_raise(" & exc_id(s.name.ALL, s.line) & ");");
      WHEN n_reraise =>
         IF handlers = NIL THEN
            fail(s.line, "RERAISE outside a handler");
         END IF;
         emit("rt_raise(" & handlers.s.ALL & ");");
      WHEN n_guard => st_guard(s);
      WHEN n_alloc => st_alloc(s);
      ELSE => fail(s.line, "this statement is not handled yet");
   END CASE;
   IF s.tag /= NIL THEN
      exits := exits.next;
      emit(label.ALL & ": ;");
   END IF;
END PROC gen_statement;

PROC st_assign(CONST s : node) IMPORTS ALL;
   VAR lv : text;
   VAR t, vt : typ;
   VAR c : cons;
   VAR ro : BOOL;
   lvalue(s.a, lv, t, c, ro);
   IF ro THEN
      fail(s.line, "assignment to a readonly data item");
   END IF;
   BEGIN
      CONST v := gexpr(s.b, t, vt);
      check_type(vt, t, s.line);
      emit(assign_code(lv.ALL, t, v, c));
   END;
END PROC st_assign;

PROC st_call(CONST s : node) IMPORTS ALL;
   VAR c : node := s.a;
   VAR t : typ;
   IF c.kind = n_name OR c.kind = n_ttapply THEN
      VAR x : node := nn(n_apply, c.line);
      x.a := c;
      c := x;
   END IF;
   IF c.kind /= n_apply THEN
      fail(s.line, "not a procedure invocation");
   END IF;
   emit(gcall(c, TRUE, t) & ";");
END PROC st_call;

PROC st_if(CONST s : node) IMPORTS ALL;
   VAR a : node := s.a;
   VAR first : BOOL := TRUE;
   VAR t : typ;
   WHILE a /= NIL REPEAT
      CONST c := gexpr(a.a, ty_bool, t);
      check_type(t, ty_bool, s.line);
      IF first THEN
         emit("if (" & c & ") {");
      ELSE
         emit("} else if (" & c & ") {");
      END IF;
      first := FALSE;
      gen_body(a.b);
      a := a.next;
   END REPEAT;
   IF s.flag = 1 THEN
      emit("} else {");
      gen_body(s.b);
   END IF;
   emit("}");
END PROC st_if;

PROC st_case(CONST s : node) IMPORTS ALL;
   VAR st, vt : typ;
   VAR first : BOOL := TRUE;
   VAR a : node := s.b;
   CONST sel := gexpr(s.a, NIL, st);
   CONST tmp := new_name("sel");
   emit("{ " & ctype(st) & " " & tmp & " = " & sel & ";");
   WHILE a /= NIL REPEAT
      VAR lab : node := a.a;
      VAR conds : text := mk("0");
      WHILE lab /= NIL REPEAT
         IF lab.b = NIL THEN
            CONST v := gexpr(lab.a, st, vt);
            check_type(vt, st, s.line);
            conds := mk(conds.ALL & " || " & eq_code(st, tmp, v));
         ELSE
            CONST lo := gexpr(lab.a, st, vt);
            CONST hi := gexpr(lab.b, st, vt);
            conds := mk(conds.ALL & " || (" & tmp & " >= " & lo & " && " & tmp & " <= " & hi & ")");
         END IF;
         lab := lab.next;
      END REPEAT;
      IF first THEN
         emit("if (" & conds.ALL & ") {");
      ELSE
         emit("} else if (" & conds.ALL & ") {");
      END IF;
      first := FALSE;
      gen_body(a.b);
      a := a.next;
   END REPEAT;
   IF first THEN
      emit("{");
   ELSE
      emit("} else {");
   END IF;
   IF s.flag = 1 THEN
      gen_body(s.c);
   ELSE
      emit("rt_raise(RT_X_CASE);");
   END IF;
   emit("}");
   emit("}");
END PROC st_case;

PROC st_repeat(CONST s : node) IMPORTS ALL;
   VAR t : typ;
   VAR c : cons;
   IF s.flag = 0 THEN
      CONST cond := gexpr(s.a, ty_bool, t);
      emit("while (" & cond & ") {");
      gen_body(s.b);
      emit("}");
      RETURN;
   END IF;
   t := resolve_subtype(s.a, c);
   IF t.kind = t_enum AND c.lo = NIL THEN
      c.lo := mk("0");
      c.hi := mk(itos(list_len(t.lits) - 1));
   ELSEIF c.lo = NIL THEN
      fail(s.line, "a FOR index needs a range");
   END IF;
   BEGIN
      CONST access := storage(s.name.ALL, t);
      CONST lov := new_name("lo");
      CONST hiv := new_name("hi");
      CONST it := new_name("it");
      VAR y : sym := new_sym(y_const, s.name);
      emit("{ rt_int " & lov & " = " & c.lo.ALL & ", " & hiv & " = " & c.hi.ALL & ";");
      IF s.ival = 1 THEN
         emit("for (rt_int " & it & " = " & hiv & "; " & it & " >= " & lov & "; " & it & "--) {");
      ELSE
         emit("for (rt_int " & it & " = " & lov & "; " & it & " <= " & hiv & "; " & it & "++) {");
      END IF;
      emit(access & " = " & it & ";");
      open_scope;
      y.t := t;
      y.c := c;
      y.access := mk(access);
      y.ro_flag := TRUE;
      define(y, s.line);
      gen_body(s.b);
      close_scope;
      emit("}");
      emit("}");
   END;
END PROC st_repeat;

PROC st_exit(CONST s : node) IMPORTS ALL;
   VAR x : exitrec := exits;
   WHILE x /= NIL REPEAT
      IF x.match.ALL = s.name.ALL THEN
         pop_frames(x.depth);
         emit("goto " & x.label.ALL & ";");
         RETURN;
      END IF;
      x := x.next;
   END REPEAT;
   fail(s.line, "EXIT " & s.name.ALL & " names no enclosing statement");
END PROC st_exit;

PROC st_return(CONST s : node) IMPORTS ALL;
   VAR vt : typ;
   IF NOT in_func THEN
      pop_frames(0);
      emit("rt_main_done();");
      RETURN;
   END IF;
   IF func_sym.result.kind = t_void THEN
      IF s.a /= NIL THEN
         fail(s.line, "a procedure returns no value");
      END IF;
      pop_frames(0);
      emit("goto ret_;");
      RETURN;
   END IF;
   IF s.a = NIL THEN
      fail(s.line, "RETURN needs a value in a function");
   END IF;
   BEGIN
      CONST v := gexpr(s.a, func_sym.result, vt);
      check_type(vt, func_sym.result, s.line);
      emit("F->result_ = " & v & ";");
      pop_frames(0);
      emit("goto ret_;");
   END;
END PROC st_return;

ABNORMAL FUNC exc_id(READONLY name : STRING[ASCII], CONST line : INT) => STRING[ASCII] IMPORTS ALL;
   VAR y : sym := lookup(name);
   IF y /= NIL AND y.kind = y_exc THEN
      RETURN y.cname.ALL;
   END IF;
   IF name.LEN > 2 AND name(1 .. 2) = "X_" THEN
      RETURN "rt_exc(" & q & name & q & ")";
   END IF;
   fail(line, name & " is not an exception");
   RETURN "";
END FUNC exc_id;

PROC st_guard(CONST s : node) IMPORTS ALL;
   VAR h : node := s.b;
   VAR first : BOOL := TRUE;
   VAR hv : lines;
   frames := frames + 1;
   BEGIN
      CONST f := "xf" & itos(frames);
      CONST x := new_name("x");
      emit("{ rt_frame " & f & ";");
      emit("if (RT_TRY(" & f & ")) {");
      gen_body(s.a);
      emit("RT_POP(" & f & ");");
      emit("} else {");
      frames := frames - 1;
      emit("RT_POP(" & f & ");");
      emit("int " & x & " = rt_xcur;");
      ALLOC hv PTR;
      hv.s := mk(x);
      hv.next := handlers;
      handlers := hv;
      WHILE h /= NIL REPEAT
         VAR n : node := h.a;
         VAR conds : text := mk("0");
         WHILE n /= NIL REPEAT
            conds := mk(conds.ALL & " || " & x & " == " & exc_id(n.name.ALL, s.line));
            n := n.next;
         END REPEAT;
         IF first THEN
            emit("if (" & conds.ALL & ") {");
         ELSE
            emit("} else if (" & conds.ALL & ") {");
         END IF;
         first := FALSE;
         gen_body(h.b);
         h := h.next;
      END REPEAT;
      IF first THEN
         emit("{");
      ELSE
         emit("} else {");
      END IF;
      IF s.flag = 1 THEN
         gen_body(s.c);
      ELSE
         emit("rt_raise(" & x & ");");
      END IF;
      emit("}");
      handlers := handlers.next;
      emit("}");
      emit("}");
   END;
END PROC st_guard;

PROC st_alloc(CONST s : node) IMPORTS ALL;
   VAR lv : text;
   VAR t, target, vt : typ;
   VAR c, tc : cons;
   VAR ro : BOOL;
   VAR d, p, a : node;
   lvalue(s.a, lv, t, c, ro);
   IF t.kind /= t_ptr THEN
      fail(s.line, "ALLOC needs an indirect variable");
   END IF;
   finish_ptr(t);
   d := t.decl;
   target := t.target;
   IF list_len(s.b) /= list_len(d.b) THEN
      fail(s.line, "ALLOC needs " & itos(list_len(d.b)) & " actual parameters");
   END IF;
   BEGIN
      CONST tcn := ctype(target);
      CONST cell := new_name("cell");
      emit("{ " & tcn & " *" & cell & " = rt_alloc(sizeof(" & tcn & "));");
      open_scope;
      p := d.b;
      a := s.b;
      WHILE p /= NIL REPEAT
         CONST v := gexpr(a, ty_int, vt);
         CONST pv := new_name("pv");
         VAR y : sym := new_sym(y_const, p.name);
         emit("rt_int " & pv & " = " & v & ";");
         y.t := ty_int;
         y.access := mk(pv);
         define(y, s.line);
         p := p.next;
         a := a.next;
      END REPEAT;
      vt := resolve_subtype(d.a, tc);
      init_storage("(*" & cell & ")", target, tc);
      close_scope;
      IF s.c /= NIL THEN
         CONST v := gexpr(s.c, target, vt);
         check_type(vt, target, s.line);
         emit(assign_code("(*" & cell & ")", target, v, tc));
      END IF;
      emit(lv.ALL & " = " & cell & ";");
      emit("}");
   END;
END PROC st_alloc;
% ---- variables (lvalues) ---------------------------------------------------------

ABNORMAL FUNC deref(READONLY base : STRING[ASCII], CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   RETURN "(*(" & ctype(t) & ")rt_nil_check(" & base & "))";
END FUNC deref;

FUNC is_lvalue(CONST e : node) => BOOL IMPORTS ALL;
   IF e.kind = n_name THEN
      VAR y : sym := lookup(e.name.ALL);
      RETURN y /= NIL AND (y.kind = y_var OR y.kind = y_const);
   ELSEIF e.kind = n_paren THEN
      RETURN is_lvalue(e.a);
   ELSEIF e.kind = n_select THEN
      RETURN e.name.ALL /= "LEN" AND is_lvalue(e.a);
   ELSEIF e.kind = n_apply THEN
      IF e.b /= NIL AND e.b.kind = n_range THEN
         RETURN FALSE;
      END IF;
      RETURN is_lvalue(e.a);
   END IF;
   RETURN FALSE;
END FUNC is_lvalue;

PROC lvalue(CONST e : node, OUT code : text, OUT t : typ, OUT c : cons, OUT ro : BOOL) IMPORTS ALL;
   VAR base : text;
   VAR bt : typ;
   VAR bc : cons;
   IF e.kind = n_name THEN
      VAR y : sym := lookup(e.name.ALL);
      IF y = NIL THEN
         fail(e.line, e.name.ALL & " is not defined");
      END IF;
      IF y.kind /= y_var AND y.kind /= y_const THEN
         fail(e.line, e.name.ALL & " is not a variable");
      END IF;
      code := y.access;
      t := y.t;
      c := y.c;
      ro := y.ro_flag;
   ELSEIF e.kind = n_paren THEN
      lvalue(e.a, code, t, c, ro);
   ELSEIF e.kind = n_select THEN
      lvalue(e.a, base, bt, bc, ro);
      select_on(base.ALL, bt, e, ro, code, t, c);
   ELSEIF e.kind = n_apply THEN
      lvalue(e.a, base, bt, bc, ro);
      index_on(base.ALL, bt, e, ro, TRUE, code, t, c);
   ELSE
      fail(e.line, "not a variable");
   END IF;
END PROC lvalue;

PROC select_on(READONLY base : STRING[ASCII], CONST bt : typ, CONST e : node, VAR ro : BOOL,
               OUT code : text, OUT t : typ, OUT c : cons) IMPORTS ALL;
   c := no_cons;
   IF bt.kind = t_ptr THEN
      finish_ptr(bt);
      ro := FALSE;
      IF e.name.ALL = "ALL" THEN
         code := mk(deref(base, bt));
         t := bt.target;
         RETURN;
      END IF;
      select_on(deref(base, bt), bt.target, e, ro, code, t, c);
      RETURN;
   END IF;
   IF bt.kind = t_record THEN
      VAR f : field := bt.fields;
      WHILE f /= NIL REPEAT
         IF f.name.ALL = e.name.ALL THEN
            VAR ft : typ := resolve_subtype(f.st, c);
            code := mk(base & "." & lower_s(e.name.ALL));
            t := f.t;
            RETURN;
         END IF;
         f := f.next;
      END REPEAT;
      fail(e.line, "no component " & e.name.ALL);
   END IF;
   fail(e.line, "cannot select " & e.name.ALL & " here");
END PROC select_on;

PROC index_on(READONLY base : STRING[ASCII], CONST bt : typ, CONST e : node, VAR ro : BOOL,
              CONST lv : BOOL, OUT code : text, OUT t : typ, OUT c : cons) IMPORTS ALL;
   VAR a : node := e.b;
   VAR it : typ;
   c := no_cons;
   IF bt.kind = t_ptr THEN
      finish_ptr(bt);
      ro := FALSE;
      index_on(deref(base, bt), bt.target, e, ro, lv, code, t, c);
      RETURN;
   END IF;
   IF list_len(a) /= 1 THEN
      fail(e.line, "one subscript expected");
   END IF;
   IF bt.kind = t_string THEN
      IF a.kind = n_range THEN
         CONST lo := gexpr(a.a, ty_int, it);
         CONST hi := gexpr(a.b, ty_int, it);
         code := mk("rt_str_slice(" & base & ", " & lo & ", " & hi & ")");
         t := ty_string;
         ro := TRUE;
         RETURN;
      END IF;
      BEGIN
         CONST i := gexpr(a, ty_int, it);
         t := ty_ascii;
         IF lv THEN
            code := mk("(*rt_str_at(&" & base & ", " & i & "))");
         ELSE
            code := mk("rt_str_get(" & base & ", " & i & ")");
            ro := TRUE;
         END IF;
      END;
      RETURN;
   END IF;
   IF bt.kind = t_array THEN
      CONST i := gexpr(a, bt.idx, it);
      code := mk(base & ".p[rt_index(" & i & ", " & base & ".lo, " & base & ".hi) - " & base & ".lo]");
      t := bt.elem;
      c := bt.elemcons;
      RETURN;
   END IF;
   fail(e.line, "cannot subscript this");
END PROC index_on;

% ---- expressions (chapter 5): C code and the type ------------------------------------------

ABNORMAL FUNC gexpr(CONST e : node, CONST want : typ, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR k : INT := e.kind;
   VAR code : text;
   VAR c : cons;
   VAR ro : BOOL;
   VAR bt : typ;
   t := ty_int;
   IF k = n_int THEN
      IF want /= NIL AND want.kind = t_float THEN
         t := ty_float;
         RETURN e.name.ALL & ".0";
      END IF;
      RETURN "((rt_int)" & e.name.ALL & "LL)";
   ELSEIF k = n_float THEN
      t := ty_float;
      RETURN e.name.ALL;
   ELSEIF k = n_bool THEN
      t := ty_bool;
      RETURN itos(e.ival);
   ELSEIF k = n_str THEN
      t := ty_string;
      RETURN "rt_str(" & c_string(e.name.ALL) & ", " & itos(e.name.LEN) & ")";
   ELSEIF k = n_nil THEN
      t := ty_nil;
      RETURN "NULL";
   ELSEIF k = n_enum THEN
      IF want /= NIL AND want.kind = t_enum THEN
         t := want;
      ELSE
         t := enum_type_of(e.name.ALL, e.line);
      END IF;
      BEGIN
         VAR i : INT := lit_index(t.lits, e.name.ALL);
         IF i < 0 THEN
            fail(e.line, "'" & e.name.ALL & " is not a value of this type");
         END IF;
         RETURN itos(i);
      END;
   ELSEIF k = n_paren THEN
      RETURN gexpr(e.a, want, t);
   ELSEIF k = n_name THEN
      VAR y : sym := lookup(e.name.ALL);
      IF y = NIL THEN
         IF e.name.ALL = "SIZELN" OR e.name.ALL = "EOF" OR e.name.ALL = "SYS_IN"
               OR e.name.ALL = "SYS_OUT" THEN
            RETURN gcall(wrap_apply(e), FALSE, t);
         END IF;
         fail(e.line, e.name.ALL & " is not defined");
      END IF;
      IF y.kind = y_var OR y.kind = y_const THEN
         t := y.t;
         RETURN y.access.ALL;
      END IF;
      IF y.kind = y_func THEN
         RETURN gcall(wrap_apply(e), FALSE, t);
      END IF;
      fail(e.line, e.name.ALL & " cannot be used as a value");
   ELSEIF k = n_unop THEN
      IF e.name.ALL = "NOT" THEN
         CONST a := gexpr(e.a, ty_bool, t);
         check_type(t, ty_bool, e.line);
         RETURN "(!" & a & ")";
      END IF;
      BEGIN
         CONST a := gexpr(e.a, want, t);
         IF e.name.ALL = "+" THEN
            RETURN a;
         ELSEIF t.kind = t_float THEN
            RETURN "(-" & a & ")";
         END IF;
         check_type(t, ty_int, e.line);
         RETURN "rt_neg(" & a & ")";
      END;
   ELSEIF k = n_binop THEN
      RETURN gbinop(e, want, t);
   ELSEIF k = n_apply THEN
      IF e.a.kind = n_name OR e.a.kind = n_ttapply THEN
         VAR nm : node := e.a;
         VAR y : sym;
         IF nm.kind = n_ttapply THEN
            nm := nm.a;
         END IF;
         y := lookup(nm.name.ALL);
         IF y = NIL OR y.kind = y_func OR y.kind = y_proc THEN
            RETURN gcall(e, FALSE, t);
         END IF;
      END IF;
      BEGIN
         CONST base := gexpr(e.a, NIL, bt);
         ro := TRUE;
         index_on(base, bt, e, ro, FALSE, code, t, c);
         RETURN code.ALL;
      END;
   ELSEIF k = n_select THEN
      IF e.name.ALL = "LEN" OR e.name.ALL = "MIN" OR e.name.ALL = "MAX" THEN
         RETURN attribute(e, t);
      END IF;
      BEGIN
         CONST base := gexpr(e.a, NIL, bt);
         ro := TRUE;
         select_on(base, bt, e, ro, code, t, c);
         RETURN code.ALL;
      END;
   ELSEIF k = n_ttapply THEN
      RETURN gcall(wrap_apply(e), FALSE, t);
   ELSEIF k = n_cons THEN
      RETURN constructor(e, want, t);
   END IF;
   fail(e.line, "this expression is not handled yet");
   RETURN "";
END FUNC gexpr;

ABNORMAL FUNC wrap_apply(CONST e : node) => node;
   VAR x : node := nn(n_apply, e.line);
   x.a := e;
   RETURN x;
END FUNC wrap_apply;

% a RED string as a C string literal
FUNC c_string(READONLY s : STRING[ASCII]) => STRING[ASCII];
   VAR n : INT := 0;
   FOR i : INT(1 .. s.LEN) REPEAT
      IF s(i) = 'BSLASH OR s(i) = 'QUESTION THEN
         n := n + 1;
      END IF;
   END REPEAT;
   BEGIN
      VAR r : STRING[ASCII](s.LEN + n + 2);
      VAR j : INT := 1;
      r(1) := 'QUOTE;
      FOR i : INT(1 .. s.LEN) REPEAT
         j := j + 1;
         IF s(i) = 'BSLASH OR s(i) = 'QUESTION THEN
            r(j) := 'BSLASH;
            j := j + 1;
         END IF;
         r(j) := s(i);
      END REPEAT;
      r(j + 1) := 'QUOTE;
      RETURN r;
   END;
END FUNC c_string;

ABNORMAL FUNC enum_type_of(READONLY lit : STRING[ASCII], CONST line : INT) => typ IMPORTS ALL;
   VAR y : sym := scope_stack;
   VAR c : cons;
   IF lit_index(ty_ascii.lits, lit) >= 0 THEN
      RETURN ty_ascii;
   END IF;
   WHILE y /= NIL REPEAT
      IF (y.kind = y_abbrev OR y.kind = y_type) AND y.st /= NIL AND y.st.kind = s_enum THEN
         IF lit_index(y.st.a, lit) >= 0 THEN
            RETURN resolve_subtype(y.st, c);
         END IF;
      END IF;
      y := y.stack;
   END REPEAT;
   fail(line, "cannot tell the type of '" & lit);
   RETURN NIL;
END FUNC enum_type_of;

ABNORMAL FUNC attribute(CONST e : node, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR bt : typ;
   VAR c : cons;
   t := ty_int;
   IF e.name.ALL = "LEN" THEN
      VAR base : text := mk(gexpr(e.a, NIL, bt));
      IF bt.kind = t_ptr THEN
         finish_ptr(bt);
         base := mk(deref(base.ALL, bt));
         bt := bt.target;
      END IF;
      IF bt.kind /= t_string THEN
         fail(e.line, "LEN applies to strings");
      END IF;
      RETURN "(" & base.ALL & ").len";
   END IF;
   IF e.a.kind = n_name THEN
      VAR y : sym := lookup(e.a.name.ALL);
      IF y /= NIL AND (y.kind = y_abbrev OR y.kind = y_type) THEN
         VAR st : node := nn(s_name, e.line);
         st.name := e.a.name;
         t := resolve_subtype(st, c);
         IF t.kind = t_enum THEN
            IF e.name.ALL = "MIN" THEN
               RETURN "0";
            END IF;
            RETURN itos(list_len(t.lits) - 1);
         END IF;
         IF c.lo /= NIL THEN
            IF e.name.ALL = "MIN" THEN
               RETURN c.lo.ALL;
            END IF;
            RETURN c.hi.ALL;
         END IF;
      END IF;
   END IF;
   fail(e.line, "attribute " & e.name.ALL & " is not handled yet");
   RETURN "";
END FUNC attribute;

ABNORMAL FUNC gbinop(CONST e : node, CONST want : typ, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR op : text := e.name;
   VAR ta, tb, hint : typ;
   t := ty_bool;
   IF op.ALL = "AND" OR op.ALL = "OR" OR op.ALL = "XOR" THEN
      CONST a := gexpr(e.a, ty_bool, ta);
      CONST b := gexpr(e.b, ty_bool, tb);
      check_type(ta, ty_bool, e.line);
      check_type(tb, ty_bool, e.line);
      IF op.ALL = "AND" THEN
         RETURN "(" & a & " && " & b & ")";
      ELSEIF op.ALL = "OR" THEN
         RETURN "(" & a & " || " & b & ")";
      END IF;
      RETURN "(" & a & " != " & b & ")";
   END IF;
   IF op.ALL = "&" THEN
      VAR wa, wb : typ;
      IF e.a.kind = n_enum THEN
         wa := ty_ascii;
      END IF;
      IF e.b.kind = n_enum THEN
         wb := ty_ascii;
      END IF;
      BEGIN
         CONST a := gexpr(e.a, wa, ta);
         CONST b := gexpr(e.b, wb, tb);
         t := ty_string;
         IF ta.kind = t_string AND tb.kind = t_string THEN
            RETURN "rt_str_cat(" & a & ", " & b & ")";
         ELSEIF ta.kind = t_string AND tb.kind = t_enum THEN
            RETURN "rt_str_catc(" & a & ", " & b & ")";
         ELSEIF ta.kind = t_enum AND tb.kind = t_string THEN
            RETURN "rt_str_ccat(" & a & ", " & b & ")";
         ELSEIF ta.kind = t_enum AND tb.kind = t_enum THEN
            RETURN "rt_str_cc(" & a & ", " & b & ")";
         END IF;
         fail(e.line, "& needs strings or characters");
      END;
   END IF;
   IF is_rel(op.ALL) AND op.ALL /= "IN" THEN
      IF e.a.kind = n_enum OR e.a.kind = n_nil OR e.a.kind = n_int THEN
         CONST dummy := gexpr(e.b, NIL, hint);
      END IF;
      BEGIN
         CONST a := gexpr(e.a, hint, ta);
         CONST b := gexpr(e.b, ta, tb);
         VAR ct : typ := ta;
         t := ty_bool;
         IF ta.kind /= t_nil AND tb.kind /= t_nil THEN
            check_type(tb, ta, e.line);
         END IF;
         IF ta.kind = t_nil THEN
            ct := tb;
         END IF;
         IF ct.kind = t_string THEN
            IF op.ALL = "=" THEN
               RETURN "rt_str_eq(" & a & ", " & b & ")";
            ELSEIF op.ALL = "/=" THEN
               RETURN "(!rt_str_eq(" & a & ", " & b & "))";
            ELSEIF op.ALL = "<" THEN
               RETURN "rt_str_lt(" & a & ", " & b & ")";
            ELSEIF op.ALL = "<=" THEN
               RETURN "rt_str_le(" & a & ", " & b & ")";
            ELSEIF op.ALL = ">" THEN
               RETURN "rt_str_lt(" & b & ", " & a & ")";
            END IF;
            RETURN "rt_str_le(" & b & ", " & a & ")";
         END IF;
         IF ct.kind = t_array OR ct.kind = t_record THEN
            IF op.ALL = "=" THEN
               RETURN eq_code(ct, a, b);
            ELSEIF op.ALL = "/=" THEN
               RETURN "(!" & eq_code(ct, a, b) & ")";
            END IF;
            fail(e.line, "no ordering for composite values");
         END IF;
         IF op.ALL = "=" THEN
            RETURN "(" & a & " == " & b & ")";
         ELSEIF op.ALL = "/=" THEN
            RETURN "(" & a & " != " & b & ")";
         END IF;
         RETURN "(" & a & " " & op.ALL & " " & b & ")";
      END;
   END IF;
   BEGIN
      CONST a := gexpr(e.a, want, ta);
      CONST b := gexpr(e.b, ta, tb);
      IF ta.kind = t_float OR tb.kind = t_float THEN
         t := ty_float;
         IF op.ALL = "+" OR op.ALL = "-" OR op.ALL = "*" THEN
            RETURN "(" & a & " " & op.ALL & " " & b & ")";
         ELSEIF op.ALL = "/" THEN
            RETURN "rt_fdiv(" & a & ", " & b & ")";
         ELSEIF op.ALL = "**" THEN
            RETURN "rt_fpow(" & a & ", " & b & ")";
         END IF;
      END IF;
      check_type(ta, ty_int, e.line);
      check_type(tb, ty_int, e.line);
      t := ty_int;
      IF op.ALL = "+" THEN
         RETURN "rt_add(" & a & ", " & b & ")";
      ELSEIF op.ALL = "-" THEN
         RETURN "rt_sub(" & a & ", " & b & ")";
      ELSEIF op.ALL = "*" THEN
         RETURN "rt_mul(" & a & ", " & b & ")";
      ELSEIF op.ALL = "DIV" THEN
         RETURN "rt_div(" & a & ", " & b & ")";
      ELSEIF op.ALL = "MOD" THEN
         RETURN "rt_mod(" & a & ", " & b & ")";
      ELSEIF op.ALL = "**" THEN
         RETURN "rt_pow(" & a & ", " & b & ")";
      END IF;
      fail(e.line, "operator " & op.ALL & " is not defined for INT");
   END;
   RETURN "";
END FUNC gbinop;

ABNORMAL FUNC constructor(CONST e : node, CONST want : typ, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR it : node := e.a;
   VAR f : field;
   VAR vt : typ;
   IF want = NIL OR want.kind /= t_record THEN
      fail(e.line, "only record constructors are handled yet");
   END IF;
   t := want;
   f := want.fields;
   BEGIN
      CONST tmp := new_name("rc");
      VAR parts : text := mk("({ " & ctype(want) & " " & tmp & ";");
      IF list_len(it) /= 0 AND list_len(it) /= 0 THEN
         WHILE it /= NIL AND f /= NIL REPEAT
            IF it.a = NIL OR it.a.a.kind /= n_name OR it.a.a.name.ALL /= f.name.ALL THEN
               fail(e.line, "component " & f.name.ALL & " expected in the constructor");
            END IF;
            BEGIN
               CONST v := gexpr(it.b, f.t, vt);
               check_type(vt, f.t, e.line);
               parts := mk(parts.ALL & " " & tmp & "." & lower_s(f.name.ALL) & " = "
                           & copy_code(f.t, v) & ";");
            END;
            it := it.next;
            f := f.next;
         END REPEAT;
      END IF;
      IF it /= NIL OR f /= NIL THEN
         fail(e.line, "a record constructor needs every component");
      END IF;
      RETURN parts.ALL & " " & tmp & "; })";
   END;
END FUNC constructor;

% ---- invocations -------------------------------------------------------------------------

ABNORMAL FUNC gcall(CONST e : node, CONST is_stmt : BOOL, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR fn : node := e.a;
   VAR tt : node;
   VAR y : sym;
   VAR args : text := mk("");
   VAR a : node := e.b;
   VAR pm : parm;
   VAR lt, vt : typ;
   VAR lv : text;
   VAR lc : cons;
   VAR ro : BOOL;
   IF fn.kind = n_ttapply THEN
      tt := fn.b;
      fn := fn.a;
   END IF;
   y := lookup(fn.name.ALL);
   IF y = NIL THEN
      RETURN builtin(fn.name.ALL, tt, e.b, e.line, is_stmt, t);
   END IF;
   IF y.kind /= y_func AND y.kind /= y_proc THEN
      fail(e.line, fn.name.ALL & " cannot be invoked");
   END IF;
   IF is_stmt AND y.kind /= y_proc THEN
      fail(e.line, fn.name.ALL & " is a function, not a procedure");
   END IF;
   IF NOT is_stmt AND y.kind /= y_func THEN
      fail(e.line, fn.name.ALL & " is a procedure, not a function");
   END IF;
   pm := y.params;
   WHILE a /= NIL AND pm /= NIL REPEAT
      IF args.LEN > 0 THEN
         args := mk(args.ALL & ", ");
      END IF;
      IF pm.mode = m_var OR pm.mode = m_out THEN
         lvalue(a, lv, lt, lc, ro);
         IF ro THEN
            fail(e.line, pm.name.ALL & " needs a variable");
         END IF;
         check_type(lt, pm.t, e.line);
         args := mk(args.ALL & "&" & lv.ALL);
      ELSEIF pm.mode = m_readonly AND is_lvalue(a) THEN
         lvalue(a, lv, lt, lc, ro);
         check_type(lt, pm.t, e.line);
         args := mk(args.ALL & "&" & lv.ALL);
      ELSEIF pm.mode = m_readonly THEN
         CONST v := gexpr(a, pm.t, vt);
         CONST ct := ctype(pm.t);
         check_type(vt, pm.t, e.line);
         args := mk(args.ALL & "({ " & ct & " *b_ = rt_alloc(sizeof(" & ct & ")); *b_ = " & v & "; b_; })");
      ELSE
         CONST v := gexpr(a, pm.t, vt);
         check_type(vt, pm.t, e.line);
         IF pm.t.kind = t_int AND pm.c /= NIL AND pm.c.hasm THEN
            args := mk(args.ALL & "rt_range(" & v & ", " & itos(pm.c.mlo) & ", " & itos(pm.c.mhi) & ")");
         ELSE
            args := mk(args.ALL & v);
         END IF;
      END IF;
      a := a.next;
      pm := pm.next;
   END REPEAT;
   IF a /= NIL OR pm /= NIL THEN
      fail(e.line, fn.name.ALL & " needs " & itos(list_len(e.b) - list_len(a)) & " more or fewer actual parameters");
   END IF;
   t := y.result;
   RETURN y.cname.ALL & "(" & args.ALL & ")";
END FUNC gcall;

ABNORMAL FUNC builtin(READONLY name : STRING[ASCII], CONST tt : node, CONST args : node,
                      CONST line : INT, CONST is_stmt : BOOL, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR at : typ;
   VAR n : INT := list_len(args);
   t := ty_void;
   IF name = "POS" OR name = "SUCC" OR name = "PRED" THEN
      CONST a := gexpr(args, NIL, at);
      IF name = "POS" THEN
         IF at.kind /= t_enum THEN
            fail(line, "POS needs an enumeration value");
         END IF;
         t := ty_int;
         RETURN "((rt_int)(" & a & ") + 1)";
      END IF;
      t := at;
      IF at.kind = t_int THEN
         IF name = "SUCC" THEN
            RETURN "rt_add(" & a & ", 1)";
         END IF;
         RETURN "rt_sub(" & a & ", 1)";
      END IF;
      IF name = "SUCC" THEN
         RETURN "rt_range(" & a & " + 1, 0, " & itos(list_len(at.lits) - 1) & ")";
      END IF;
      RETURN "rt_range(" & a & " - 1, 0, " & itos(list_len(at.lits) - 1) & ")";
   ELSEIF name = "ABS" THEN
      CONST a := gexpr(args, NIL, at);
      t := at;
      IF at.kind = t_int THEN
         RETURN "rt_abs(" & a & ")";
      END IF;
      RETURN "fabs(" & a & ")";
   ELSEIF name = "CNVT" THEN
      IF tt = NIL THEN
         fail(line, "CNVT needs a target type in [ ]");
      END IF;
      BEGIN
         CONST a := gexpr(args, NIL, at);
         IF tt.kind = s_string AND at.kind = t_int THEN
            t := ty_string;
            RETURN "rt_str_of_int(" & a & ")";
         ELSEIF tt.kind = s_int AND at.kind = t_string THEN
            t := ty_int;
            RETURN "rt_int_of_str(" & a & ")";
         END IF;
         fail(line, "this conversion is not handled yet");
      END;
   ELSEIF name = "WRITELN" THEN
      IF n = 0 THEN
         RETURN "rt_newline()";
      END IF;
      BEGIN
         VAR last : node := args;
         WHILE last.next /= NIL REPEAT
            last := last.next;
         END REPEAT;
         BEGIN
            CONST a := gexpr(last, ty_string, at);
            check_type(at, ty_string, line);
            RETURN "rt_putln(" & a & ")";
         END;
      END;
   ELSEIF name = "WRITE" THEN
      CONST a := gexpr(args.next, NIL, at);
      IF at.kind = t_string THEN
         RETURN "rt_put(" & a & ")";
      ELSEIF at.kind = t_enum THEN
         RETURN "rt_putc(" & a & ")";
      END IF;
      fail(line, "WRITE writes a character or a string");
   ELSEIF name = "READLN" THEN
      VAR lv : text;
      VAR lc : cons;
      VAR ro : BOOL;
      VAR last : node := args;
      WHILE last.next /= NIL REPEAT
         last := last.next;
      END REPEAT;
      lvalue(last, lv, at, lc, ro);
      RETURN "rt_readln(&" & lv.ALL & ")";
   ELSEIF name = "SIZELN" THEN
      t := ty_int;
      RETURN "rt_sizeln()";
   ELSEIF name = "EOF" THEN
      t := ty_bool;
      RETURN "rt_eof()";
   ELSEIF name = "SYS_IN" OR name = "SYS_OUT" THEN
      t := ty_file;
      RETURN "0";
   ELSEIF name = "OPEN" OR name = "CLOSE" THEN
      RETURN "(void)0";
   ELSEIF name = "HALT" THEN
      CONST a := gexpr(args, ty_int, at);
      RETURN "rt_exit(" & a & ")";
   END IF;
   fail(line, name & " is not defined");
   RETURN "";
END FUNC builtin;
% ---- the main capsule: translate, then print the C program ----------------------

PROC translate(CONST cap : node) IMPORTS ALL;
   declare_body(cap.c);
   body_elements(cap.c);
END PROC translate;

PROC print_program IMPORTS ALL;
   emit_helpers;
   WRITELN("#include " & q & "paleo.h" & q);
   WRITELN("#include <math.h>");
   print_buffer(out_types);
   print_buffer(out_helpers);
   print_buffer(out_protos);
   print_buffer(out_globals);
   print_buffer(out_funcs);
   WRITELN("int main(int argc, char **argv) {");
   WRITELN("  rt_init(argc, argv);");
   WRITELN("  rt_set_lang(0);");
   print_buffer(out_excs);
   print_buffer(out_init);
   WRITELN("  rt_main_done();");
   WRITELN("  return 0;");
   WRITELN("}");
END PROC print_program;

% ---- start ---------------------------------------------------------------------

ALLOC toks PTR (1000000);
ALLOC table PTR (4093);
out_types := new_buffer;
out_helpers := new_buffer;
out_protos := new_buffer;
out_globals := new_buffer;
out_funcs := new_buffer;
out_init := new_buffer;
out_excs := new_buffer;
code := out_init;
no_cons := new_cons;
ty_int := new_typ(t_int);
ty_bool := new_typ(t_bool);
ty_float := new_typ(t_float);
ty_string := new_typ(t_string);
ty_void := new_typ(t_void);
ty_file := new_typ(t_file);
ty_nil := new_typ(t_nil);
GUARD
   init_ascii;
   read_source;
   translate(program);
   print_program;
BY
   WHEN compile_error =>
      HALT(1);
END GUARD;
END CAPSULE redc;
