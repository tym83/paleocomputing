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
