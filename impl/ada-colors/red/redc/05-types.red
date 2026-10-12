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

% the symbol a declaration made: overloads share the name
ABNORMAL FUNC lookup_decl(CONST d : node) => sym IMPORTS table;
   VAR y : sym := table(hash(d.name.ALL));
   WHILE y /= NIL REPEAT
      IF y.decl = d THEN
         RETURN y;
      END IF;
      y := y.chain;
   END REPEAT;
   RETURN NIL;
END FUNC lookup_decl;

PROC define(CONST y : sym, CONST line : INT) IMPORTS table, depth, scope_stack;
   VAR h : INT := hash(y.name.ALL);
   VAR z : sym := table(h);
   WHILE z /= NIL REPEAT
      IF z.depth = depth AND z.name.ALL = y.name.ALL AND NOT (overloadable(y) AND overloadable(z)
            AND z.kind = y.kind AND NOT same_signature(y.params, z.params)) THEN
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

FUNC overloadable(CONST y : sym) => BOOL;
   RETURN y.kind = y_func OR y.kind = y_proc OR y.kind = y_task;
END FUNC overloadable;

% signatures match when they have the same length and the same types (11.1.1)
FUNC same_signature(CONST a : parm, CONST b : parm) => BOOL;
   VAR x : parm := a;
   VAR y : parm := b;
   WHILE x /= NIL AND y /= NIL REPEAT
      IF NOT same(x.t, y.t) THEN
         RETURN FALSE;
      END IF;
      x := x.next;
      y := y.next;
   END REPEAT;
   RETURN x = NIL AND y = NIL;
END FUNC same_signature;

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
      IF (a.idx2 = NIL) /= (b.idx2 = NIL) THEN
         RETURN FALSE;
      END IF;
      RETURN same(a.elem, b.elem) AND same(a.idx, b.idx);
   END IF;
   IF a.kind = t_set THEN
      RETURN same(a.elem, b.elem);
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
      WHEN t_mbox => RETURN "rt_mbox";
      WHEN t_lock => RETURN "rt_lock";
      WHEN t_act => RETURN "rt_act";
      WHEN t_set => RETURN "rset";
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
   IF t.kind = t_new AND t.tparams = NIL THEN
      t.cname := mk(ctype(t.under));
      RETURN;
   END IF;
   IF t.kind = t_array THEN
      t.cname := mk(new_name("A"));
   ELSEIF t.kind = t_new THEN
      t.cname := mk(new_name("N"));
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
      put(out_types, "struct " & t.cname.ALL & " { rt_int lo, hi, lo2, hi2; " & ctype(t.elem) & " *p; };");
   ELSEIF t.kind = t_new THEN
      % a new type with parameters keeps them: they are its attributes (4.5.3)
      VAR p : node := t.tparams;
      VAR fs : text := mk(" ");
      WHILE p /= NIL REPEAT
         fs := mk(fs.ALL & "rt_int p_" & lower_s(p.name.ALL) & "; ");
         p := p.next;
      END REPEAT;
      put(out_types, "typedef struct " & t.cname.ALL & " " & t.cname.ALL & ";");
      put(out_types, "struct " & t.cname.ALL & " {" & fs.ALL & ctype(t.under) & " all; };");
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
         IF list_len(st.a) > 2 THEN
            fail(st.line, "arrays of more than two dimensions are not handled");
         END IF;
         BEGIN
            VAR ic, ic2, ec : cons;
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
            c.lo2 := mk("1");
            c.hi2 := mk("1");
            IF st.a.next /= NIL THEN
               t.idx2 := resolve_subtype(st.a.next, ic2);
               IF ic2.lo /= NIL THEN
                  c.lo2 := ic2.lo;
                  c.hi2 := ic2.hi;
               ELSEIF t.idx2.kind = t_enum THEN
                  c.lo2 := mk("0");
                  c.hi2 := mk(itos(list_len(t.idx2.lits) - 1));
               END IF;
            END IF;
         END;
         RETURN t;
      WHEN s_set =>
         t := new_typ(t_set);
         BEGIN
            VAR ec : cons;
            t.elem := resolve_subtype(st.a, ec);
            t.elemcons := ec;
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
               f.c := cc;
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
      WHEN s_mailbox =>
         % MAILBOX[message subtype](size) (10.3)
         BEGIN
            VAR ec : cons;
            t := new_typ(t_mbox);
            t.elem := resolve_subtype(st.a, ec);
            t.elemcons := ec;
            IF st.b /= NIL THEN
               c.lo := mk(gexpr(st.b, ty_int, dummy));
            END IF;
         END;
         RETURN t;
      WHEN s_name =>
         IF st.name.ALL = "BOOL" THEN
            RETURN ty_bool;
         ELSEIF st.name.ALL = "ASCII" THEN
            RETURN ty_ascii;
         ELSEIF st.name.ALL = "DATA_LOCK" THEN
            RETURN ty_lock;
         ELSEIF st.name.ALL = "ACT" THEN
            RETURN ty_act;
         END IF;
         BEGIN
            VAR y : sym := lookup(st.name.ALL);
            IF y = NIL THEN
               fail(st.line, "unknown type " & st.name.ALL);
            END IF;
            IF y.kind = y_type AND y.t /= NIL AND y.t.kind = t_new THEN
               RETURN new_type(y, st, c);
            END IF;
            IF (y.kind = y_abbrev OR y.kind = y_type) AND y.t /= NIL THEN
               IF y.c /= NIL THEN
                  c := y.c;
               END IF;
               RETURN y.t;
            END IF;
            IF y.kind = y_type AND y.decl /= NIL AND y.decl.kind = n_newtype THEN
               RETURN new_type(y, st, c);
            END IF;
            IF y.kind = y_abbrev OR y.kind = y_type THEN
               RETURN resolve_subtype(y.st, c);
            END IF;
            fail(st.line, st.name.ALL & " is not a type");
         END;
      ELSE =>
         fail(st.line, "this subtype form is not handled yet");
   END CASE;
   RETURN NIL;
END FUNC resolve_subtype;

% outside the capsule that declares a new type, its components, .ALL and :=
% are known only if the capsule exports them, i.e. exports ALL (8.2)
ABNORMAL FUNC opened(CONST t : typ) => BOOL IMPORTS caps;
   VAR c : caprec := caps;
   IF t.kind /= t_new OR t.ocap = NIL OR t.ocap.ival = 1 THEN
      RETURN TRUE;
   END IF;
   WHILE c /= NIL REPEAT
      IF c.d = t.ocap THEN
         RETURN TRUE;
      END IF;
      c := c.next;
   END REPEAT;
   RETURN FALSE;
END FUNC opened;

% every occurrence of pat in s replaced by r
FUNC replace_all(READONLY s : STRING[ASCII], READONLY pat : STRING[ASCII], READONLY r : STRING[ASCII])
      => STRING[ASCII];
   VAR i : INT := 1;
   IF pat.LEN = 0 OR s.LEN < pat.LEN THEN
      RETURN s;
   END IF;
   WHILE i + pat.LEN - 1 <= s.LEN REPEAT
      IF s(i .. i + pat.LEN - 1) = pat THEN
         RETURN s(1 .. i - 1) & r & replace_all(s(i + pat.LEN .. s.LEN), pat, r);
      END IF;
      i := i + 1;
   END REPEAT;
   RETURN s;
END FUNC replace_all;

ABNORMAL FUNC subst(READONLY s : STRING[ASCII]) => STRING[ASCII] IMPORTS psub;
   VAR l : lines := psub;
   VAR r : text := mk(s);
   WHILE l /= NIL REPEAT
      r := mk(replace_all(r.ALL, l.s.ALL, l.next.s.ALL));
      l := l.next.next;
   END REPEAT;
   RETURN r.ALL;
END FUNC subst;

% a new type with parameters (4.4.2): one typ per declaration; an invocation
% such as matrix(b.m, c.n) supplies the constraint, kept as the actual list
ABNORMAL FUNC new_type(CONST y : sym, CONST st : node, OUT c : cons) => typ IMPORTS ALL;
   VAR d : node := y.decl;
   VAR p : node;
   VAR uc : cons;
   c := new_cons;
   IF y.t = NIL THEN
      y.t := new_typ(t_new);
      y.t.name := y.name;
      y.t.decl := d;
      y.t.tparams := d.b;
      IF caps /= NIL THEN
         y.t.ocap := caps.d;
      END IF;
      open_scope;
      p := d.b;
      WHILE p /= NIL REPEAT
         VAR z : sym := new_sym(y_const, p.name);
         z.t := ty_int;
         z.access := mk("@P_" & lower_s(p.name.ALL) & "@");
         define(z, d.line);
         p := p.next;
      END REPEAT;
      y.t.under := resolve_subtype(d.a, uc);
      y.t.elemcons := uc;
      close_scope;
   END IF;
   c.args := st.b;
   RETURN y.t;
END FUNC new_type;

% give a fresh variable its storage (strings, arrays and records own buffers)
PROC init_storage(READONLY lval : STRING[ASCII], CONST t : typ, CONST c : cons) IMPORTS ALL;
   IF t.kind = t_new THEN
      VAR p : node := t.tparams;
      VAR a : node := c.args;
      VAR uc : cons;
      VAR ut, at : typ;
      IF list_len(a) /= list_len(p) THEN
         fail(0, "a variable of type " & t.name.ALL & " needs " & itos(list_len(p)) & " constraint values");
      END IF;
      WHILE p /= NIL REPEAT
         CONST v := gexpr(a, ty_int, at);
         emit(lval & ".p_" & lower_s(p.name.ALL) & " = " & v & ";");
         p := p.next;
         a := a.next;
      END REPEAT;
      % the constraints were worked out where the type is declared, with the
      % parameters as placeholders; here they become this object's fields
      BEGIN
         VAR saved : lines := psub;
         p := t.tparams;
         WHILE p /= NIL REPEAT
            VAR l1, l2 : lines;
            ALLOC l1 PTR;
            ALLOC l2 PTR;
            l1.s := mk("@P_" & lower_s(p.name.ALL) & "@");
            l2.s := mk(lval & ".p_" & lower_s(p.name.ALL));
            l1.next := l2;
            l2.next := psub;
            psub := l1;
            p := p.next;
         END REPEAT;
         IF t.tparams = NIL THEN
            init_storage(lval, t.under, t.elemcons);
         ELSE
            init_storage(lval & ".all", t.under, t.elemcons);
         END IF;
         psub := saved;
      END;
   ELSEIF t.kind = t_mbox THEN
      IF c.lo = NIL THEN
         fail(0, "a mailbox variable needs a size");
      END IF;
      emit("rt_mbox_init(&" & lval & ", " & subst(c.lo.ALL) & ", sizeof(" & ctype(t.elem) & "), "
           & mcopy(t.elem) & ");");
   ELSEIF t.kind = t_lock THEN
      emit("rt_lock_init(&" & lval & ");");
   ELSEIF t.kind = t_act THEN
      emit(lval & ".active = 0; " & lval & ".t = NULL; " & lval & ".waiters = NULL;");
   ELSEIF t.kind = t_ptr THEN
      % indirect variables start as NIL (4.4.3), at every elaboration
      emit(lval & " = NULL;");
   ELSEIF t.kind = t_string THEN
      IF c.slen = NIL THEN
         fail(0, "a string variable needs a length");
      END IF;
      emit(lval & " = rt_str_new(" & subst(c.slen.ALL) & ");");
   ELSEIF t.kind = t_array THEN
      IF c.lo = NIL THEN
         fail(0, "an array variable needs index bounds");
      END IF;
      emit(lval & ".lo = " & subst(c.lo.ALL) & "; " & lval & ".hi = " & subst(c.hi.ALL) & "; "
           & lval & ".lo2 = " & subst(c.lo2.ALL) & "; " & lval & ".hi2 = " & subst(c.hi2.ALL) & ";");
      emit(lval & ".p = rt_alloc(sizeof(" & ctype(t.elem) & ") * (size_t)RT_CNT(" & lval & "));");
      IF t.elem.kind = t_string OR t.elem.kind = t_array OR t.elem.kind = t_record
            OR t.elem.kind = t_new OR t.elem.kind = t_ptr OR t.elem.kind = t_mbox
            OR t.elem.kind = t_lock OR t.elem.kind = t_act THEN
         CONST i := new_name("i");
         emit("for (rt_int " & i & " = 0; " & i & " < RT_CNT(" & lval & "); " & i & "++) {");
         init_storage(lval & ".p[" & i & "]", t.elem, t.elemcons);
         emit("}");
      END IF;
   ELSEIF t.kind = t_record THEN
      VAR f : field := t.fields;
      WHILE f /= NIL REPEAT
         init_storage(lval & "." & lower_s(f.name.ALL), f.t, f.c);
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

% the function a mailbox uses to copy one message of type t
ABNORMAL FUNC mcopy(CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   CONST ct := ctype(t);
   VAR name : STRING[ASCII](ct.LEN + 3) := "mc_" & ct;
   VAR l : lines;
   IF NOT seen_name(mcopies, name) THEN
      ALLOC l PTR;
      l.s := mk(name);
      l.next := mcopies;
      mcopies := l;
      put(out_protos, "static void " & name & "(void *d, const void *s);");
      put(out_funcs, "static void " & name & "(void *d, const void *s) { *(" & ct & " *)d = "
          & copy_code(t, "*(const " & ct & " *)s") & "; }");
   END IF;
   RETURN name;
END FUNC mcopy;

FUNC composite(CONST t : typ) => BOOL;
   RETURN t.kind = t_array OR t.kind = t_record OR (t.kind = t_new AND t.tparams /= NIL);
END FUNC composite;

ABNORMAL FUNC assign_code(READONLY lval : STRING[ASCII], CONST t : typ, READONLY v : STRING[ASCII],
                          CONST c : cons) => STRING[ASCII] IMPORTS ALL;
   IF t.kind = t_new AND t.tparams = NIL THEN
      RETURN assign_code(lval, t.under, v, c);
   END IF;
   IF composite(t) THEN
      RETURN "as_" & ctype(t) & "(&" & lval & ", " & v & ");";
   END IF;
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
   IF t.kind = t_new AND t.tparams = NIL THEN
      RETURN copy_code(t.under, v);
   END IF;
   IF composite(t) THEN
      RETURN "cp_" & ctype(t) & "(" & v & ")";
   END IF;
   IF t.kind = t_string THEN
      RETURN "rt_str_copy(" & v & ")";
   ELSEIF t.kind = t_array OR t.kind = t_record THEN
      RETURN "cp_" & ctype(t) & "(" & v & ")";
   END IF;
   RETURN v;
END FUNC copy_code;

ABNORMAL FUNC eq_code(CONST t : typ, READONLY a : STRING[ASCII], READONLY b : STRING[ASCII])
      => STRING[ASCII] IMPORTS ALL;
   IF t.kind = t_new AND t.tparams = NIL THEN
      RETURN eq_code(t.under, a, b);
   END IF;
   IF composite(t) THEN
      RETURN "eq_" & ctype(t) & "(" & a & ", " & b & ")";
   END IF;
   IF t.kind = t_set THEN
      RETURN "rt_set_eq(" & a & ", " & b & ")";
   END IF;
   IF t.kind = t_mbox OR t.kind = t_lock OR t.kind = t_act THEN
      % not comparable (C.10-C.12); only the generated helpers ask
      RETURN "0";
   END IF;
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
      IF composite(t) AND NOT seen_name(done, t.cname.ALL) THEN
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
      put(b, "  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, " & q & "array length" & q & ");");
      put(b, "  for (rt_int i = 0; i < RT_CNT(s); i++) { " & elem_assign("d->p[i]", e, "s.p[i]") & " }");
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) {");
      put(b, "  " & c & " d = s; d.p = rt_alloc(sizeof(" & ctype(e) & ") * (size_t)RT_CNT(s));");
      put(b, "  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = " & copy_code(e, "s.p[i]") & ";");
      put(b, "  return d;");
      put(b, "}");
      put(b, "static int eq_" & c & "(" & c & " a, " & c & " b) {");
      put(b, "  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;");
      put(b, "  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(" & eq_code(e, "a.p[i]", "b.p[i]") & ")) return 0;");
      put(b, "  return 1;");
      put(b, "}");
   ELSEIF t.kind = t_new THEN
      VAR p : node := t.tparams;
      VAR pc : text := mk("0");
      WHILE p /= NIL REPEAT
         pc := mk(pc.ALL & " || d->p_" & lower_s(p.name.ALL) & " != s.p_" & lower_s(p.name.ALL));
         p := p.next;
      END REPEAT;
      put(b, "static void as_" & c & "(" & c & " *d, " & c & " s) {");
      put(b, "  if (" & pc.ALL & ") rt_raise_msg(RT_X_SUBTYPE, " & q & "constraint" & q & ");");
      put(b, "  " & elem_assign("d->all", t.under, "s.all"));
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) { s.all = " & copy_code(t.under, "s.all") & "; return s; }");
      put(b, "static int eq_" & c & "(" & c & " a, " & c & " b) { return " & eq_code(t.under, "a.all", "b.all") & "; }");
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
