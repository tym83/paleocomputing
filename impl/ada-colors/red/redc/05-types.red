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
