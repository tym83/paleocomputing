% ---- variables (lvalues) ---------------------------------------------------------

% C for a data object seen from the current subprogram: frames are reached
% through the static link, one ->up per level
ABNORMAL FUNC access_of(CONST y : sym) => STRING[ASCII] IMPORTS cur_level;
   VAR p : text := mk("F");
   IF y.level <= 0 THEN
      RETURN y.access.ALL;
   END IF;
   FOR i : INT(1 .. cur_level - y.level) REPEAT
      p := mk(p.ALL & "->up");
   END REPEAT;
   IF y.byref THEN
      RETURN "(*" & p.ALL & "->" & y.access.ALL & ")";
   END IF;
   RETURN p.ALL & "->" & y.access.ALL;
END FUNC access_of;

FUNC import_of(CONST l : node, READONLY name : STRING[ASCII]) => node;
   VAR p : node := l;
   WHILE p /= NIL REPEAT
      IF p.name.ALL = name THEN
         RETURN p;
      END IF;
      p := p.next;
   END REPEAT;
   RETURN NIL;
END FUNC import_of;

% a variable of an enclosing scope is known in a closed scope only when it is
% imported (3.5, 3.7); the result tells whether it was imported READONLY
ABNORMAL FUNC check_import(CONST y : sym, CONST line : INT) => BOOL IMPORTS fctx;
   VAR c : fctxrec := fctx;
   VAR ro : BOOL := FALSE;
   WHILE c /= NIL AND y.depth < c.depth REPEAT
      IF NOT c.all_imp THEN
         VAR imp : node := import_of(c.imps, y.name.ALL);
         IF imp = NIL THEN
            fail(line, y.name.ALL & " is a variable of an enclosing scope and is not imported");
         END IF;
         IF imp.ival = 1 THEN
            ro := TRUE;
         END IF;
      END IF;
      c := c.next;
   END REPEAT;
   RETURN ro;
END FUNC check_import;

% a C identifier for a name that may be an operator symbol (13.2)
FUNC c_ident(READONLY s : STRING[ASCII]) => STRING[ASCII];
   IF s = "+" THEN
      RETURN "op_plus";
   ELSEIF s = "-" THEN
      RETURN "op_minus";
   ELSEIF s = "*" THEN
      RETURN "op_times";
   ELSEIF s = "/" THEN
      RETURN "op_slash";
   ELSEIF s = "**" THEN
      RETURN "op_power";
   ELSEIF s = "&" THEN
      RETURN "op_cat";
   ELSEIF s = "=" THEN
      RETURN "op_eq";
   ELSEIF s = "/=" THEN
      RETURN "op_ne";
   ELSEIF s = "<" THEN
      RETURN "op_lt";
   ELSEIF s = "<=" THEN
      RETURN "op_le";
   ELSEIF s = ">" THEN
      RETURN "op_gt";
   ELSEIF s = ">=" THEN
      RETURN "op_ge";
   ELSEIF s = ":=" THEN
      RETURN "op_assign";
   ELSEIF s = "#" THEN
      RETURN "op_resolve";
   END IF;
   RETURN lower_s(s);
END FUNC c_ident;

ABNORMAL FUNC deref(READONLY base : STRING[ASCII], CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   RETURN "(*(" & ctype(t) & ")rt_nil_check(" & base & "))";
END FUNC deref;

FUNC is_lvalue(CONST e : node) => BOOL IMPORTS ALL;
   IF e.kind = n_name THEN
      VAR y : sym := lookup(e.name.ALL);
      % a manifest constant is a value, not a data item with an address
      RETURN y /= NIL AND (y.kind = y_var OR (y.kind = y_const AND y.mv = NIL AND NOT y.hasmv));
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
      code := mk(access_of(y));
      t := y.t;
      c := y.c;
      ro := y.ro_flag;
      IF y.kind = y_var AND check_import(y, e.line) THEN
         ro := TRUE;
      END IF;
   ELSEIF e.kind = n_paren THEN
      lvalue(e.a, code, t, c, ro);
   ELSEIF e.kind = n_ttapply AND e.a.kind = n_name AND e.a.name.ALL = "ME" AND lookup("ME") = NIL THEN
      % ME[T], the high-level activation variable (14.5.2)
      code := mk(me_high(e.b, e.line, t));
      c := no_cons;
      ro := FALSE;
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
   IF bt.kind = t_new THEN
      VAR p : node := bt.tparams;
      IF NOT opened(bt) THEN
         fail(e.line, "the components of " & bt.name.ALL & " are not exported by its capsule");
      END IF;
      IF bt.tparams = NIL THEN
         IF e.name.ALL = "ALL" THEN
            code := mk(base);
            t := bt.under;
            RETURN;
         END IF;
         select_on(base, bt.under, e, ro, code, t, c);
         RETURN;
      END IF;
      IF e.name.ALL = "ALL" THEN
         code := mk(base & ".all");
         t := bt.under;
         RETURN;
      END IF;
      WHILE p /= NIL REPEAT
         IF p.name.ALL = e.name.ALL THEN
            code := mk(base & ".p_" & lower_s(p.name.ALL));
            t := tparam_type(bt, p.name.ALL);
            ro := TRUE;
            RETURN;
         END IF;
         p := p.next;
      END REPEAT;
      select_on(base & ".all", bt.under, e, ro, code, t, c);
      RETURN;
   END IF;
   IF bt.kind = t_record THEN
      VAR f : field := bt.fields;
      WHILE f /= NIL REPEAT
         IF f.name.ALL = e.name.ALL THEN
            c := f.c;
            code := mk(base & "." & field_c(e.name.ALL));
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
   IF bt.kind = t_new THEN
      IF NOT opened(bt) THEN
         fail(e.line, "the components of " & bt.name.ALL & " are not exported by its capsule");
      END IF;
      IF bt.tparams = NIL THEN
         index_on(base, bt.under, e, ro, lv, code, t, c);
      ELSE
         index_on(base & ".all", bt.under, e, ro, lv, code, t, c);
      END IF;
      RETURN;
   END IF;
   IF bt.kind = t_array AND bt.idx2 /= NIL THEN
      IF list_len(a) /= 2 THEN
         fail(e.line, "two subscripts expected");
      END IF;
      BEGIN
         CONST i := gexpr(a, bt.idx, it);
         CONST j := gexpr(a.next, bt.idx2, it);
         code := mk(base & ".p[(rt_index(" & i & ", " & base & ".lo, " & base & ".hi) - " & base
                    & ".lo) * (" & base & ".hi2 - " & base & ".lo2 + 1) + rt_index(" & j & ", "
                    & base & ".lo2, " & base & ".hi2) - " & base & ".lo2]");
         t := bt.elem;
         c := bt.elemcons;
      END;
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

% x.name where x's type has a parameter of that name (4.5.3), not one of the
% attributes of the built-in types
ABNORMAL FUNC own_attribute(CONST e : node) => BOOL IMPORTS ALL;
   VAR saved : buffer := code;
   VAR bt : typ;
   VAR ok : BOOL := FALSE;
   trial := trial + 1;
   code := new_buffer;
   GUARD
      CONST base := gexpr(e.a, NIL, bt);
      WHILE bt /= NIL AND bt.kind = t_ptr REPEAT
         finish_ptr(bt);
         bt := bt.target;
      END REPEAT;
      IF bt /= NIL AND bt.kind = t_new THEN
         VAR p : node := bt.tparams;
         WHILE p /= NIL REPEAT
            IF p.name.ALL = e.name.ALL THEN
               ok := TRUE;
            END IF;
            p := p.next;
         END REPEAT;
      END IF;
   BY
      WHEN compile_error =>
         ok := FALSE;
   END GUARD;
   trial := trial - 1;
   code := saved;
   RETURN ok;
END FUNC own_attribute;

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
      IF want /= NIL AND base_of(want).kind = t_enum THEN
         t := want;
      ELSE
         t := enum_type_of(e.name.ALL, e.line);
      END IF;
      BEGIN
         VAR i : INT := lit_index(base_of(t).lits, e.name.ALL);
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
         IF e.name.ALL = "ME" THEN
            t := ty_act;
            RETURN "rt_me()";
         END IF;
         IF e.name.ALL = "NIL_ACT" THEN
            t := ty_act;
            RETURN "((rt_act *)NULL)";
         END IF;
         IF e.name.ALL = "CRITICAL" OR e.name.ALL = "NONCRITICAL" OR e.name.ALL = "SYNC_RESET"
               OR e.name.ALL = "SYNC_WAIT" OR e.name.ALL = "LOW_SYNC_RESET"
               OR e.name.ALL = "LOW_SYNC_WAIT" THEN
            RETURN gcall(wrap_apply(e), FALSE, t);
         END IF;
         IF e.name.ALL = "SIZELN" OR e.name.ALL = "EOF" OR e.name.ALL = "SYS_IN"
               OR e.name.ALL = "SYS_OUT" OR e.name.ALL = "TIME" OR e.name.ALL = "MILLISECONDS"
               OR e.name.ALL = "SECONDS" OR e.name.ALL = "MINUTES" OR e.name.ALL = "HOURS" THEN
            RETURN gcall(wrap_apply(e), FALSE, t);
         END IF;
         fail(e.line, e.name.ALL & " is not defined");
      END IF;
      IF y.kind = y_var OR y.kind = y_const THEN
         VAR ro : BOOL;
         t := y.t;
         IF y.kind = y_var THEN
            ro := check_import(y, e.line);
         END IF;
         RETURN access_of(y);
      END IF;
      IF y.kind = y_func THEN
         RETURN gcall(wrap_apply(e), FALSE, t);
      END IF;
      fail(e.line, e.name.ALL & " cannot be used as a value");
   ELSEIF k = n_unop AND lookup(e.name.ALL) /= NIL AND user_op(e.name.ALL, copy_node(e.a)) /= NIL THEN
      VAR call : node := nn(n_apply, e.line);
      VAR fname : node := nn(n_name, e.line);
      fname.name := e.name;
      call.a := fname;
      call.b := copy_node(e.a);
      RETURN gcall(call, FALSE, t);
   ELSEIF k = n_unop AND e.name.ALL = "NOT" AND want /= NIL AND want.kind = t_set THEN
      CONST a := gexpr(e.a, want, t);
      RETURN "rt_set_not(" & a & ", 0, " & itos(list_len(want.elem.lits) - 1) & ")";
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
         IF y = NIL OR y.kind = y_func OR y.kind = y_proc OR y.kind = y_generic THEN
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
      IF (e.name.ALL = "LEN" OR e.name.ALL = "MIN" OR e.name.ALL = "MAX") AND NOT own_attribute(e) THEN
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

% a node used in an argument list needs its own next link
ABNORMAL FUNC copy_node(CONST e : node) => node;
   VAR x : node;
   ALLOC x PTR;
   x.kind := e.kind;
   x.line := e.line;
   x.ival := e.ival;
   x.flag := e.flag;
   x.name := e.name;
   x.tag := e.tag;
   x.a := e.a;
   x.b := e.b;
   x.c := e.c;
   x.d := e.d;
   RETURN x;
END FUNC copy_node;

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
            IF y.kind = y_type THEN
               VAR st : node := nn(s_name, line);
               st.name := y.name;
               RETURN resolve_subtype(st, c);
            END IF;
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
   VAR uy : sym;
   t := ty_bool;
   IF lookup(op.ALL) /= NIL THEN
      VAR l, r : node;
      l := copy_node(e.a);
      r := copy_node(e.b);
      l.next := r;
      uy := user_op(op.ALL, l);
      IF uy /= NIL THEN
         VAR call : node := nn(n_apply, e.line);
         VAR fname : node := nn(n_name, e.line);
         fname.name := op;
         call.a := fname;
         call.b := l;
         RETURN gcall(call, FALSE, t);
      END IF;
   END IF;
   IF op.ALL = "IN" THEN
      % membership (C.9)
      CONST s := gexpr(e.b, NIL, tb);
      IF tb.kind /= t_set THEN
         fail(e.line, "IN needs a set");
      END IF;
      BEGIN
         CONST a := gexpr(e.a, tb.elem, ta);
         check_type(ta, tb.elem, e.line);
         t := ty_bool;
         RETURN "rt_set_in(" & a & ", " & s & ")";
      END;
   END IF;
   IF (op.ALL = "AND" OR op.ALL = "OR" OR op.ALL = "XOR") AND want /= NIL AND want.kind = t_set THEN
      CONST a := gexpr(e.a, want, ta);
      CONST b := gexpr(e.b, want, tb);
      check_type(tb, ta, e.line);
      t := ta;
      IF op.ALL = "AND" THEN
         RETURN "rt_set_and(" & a & ", " & b & ")";
      ELSEIF op.ALL = "OR" THEN
         RETURN "rt_set_or(" & a & ", " & b & ")";
      END IF;
      RETURN "rt_set_xor(" & a & ", " & b & ")";
   END IF;
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
         VAR ct : typ := base_of(ta);
         t := ty_bool;
         IF ta.kind /= t_nil AND tb.kind /= t_nil THEN
            check_type(tb, ta, e.line);
         END IF;
         IF ta.kind = t_nil THEN
            ct := base_of(tb);
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
         IF ct.kind = t_set THEN
            IF op.ALL = "=" THEN
               RETURN "rt_set_eq(" & a & ", " & b & ")";
            ELSEIF op.ALL = "/=" THEN
               RETURN "(!rt_set_eq(" & a & ", " & b & "))";
            ELSEIF op.ALL = "<=" THEN
               RETURN "rt_set_le(" & a & ", " & b & ")";
            ELSEIF op.ALL = ">=" THEN
               RETURN "rt_set_le(" & b & ", " & a & ")";
            END IF;
            fail(e.line, "sets are ordered by <= and >=");
         END IF;
         IF composite(ct) THEN
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
   IF want /= NIL AND want.kind = t_set THEN
      VAR s : text := mk("rt_set_empty()");
      t := want;
      WHILE it /= NIL REPEAT
         CONST v := gexpr(it.b, want.elem, vt);
         check_type(vt, want.elem, e.line);
         s := mk("rt_set_add(" & s.ALL & ", " & v & ")");
         it := it.next;
      END REPEAT;
      RETURN s.ALL;
   END IF;
   IF want /= NIL AND want.kind = t_new THEN
      fail(e.line, "a constructor for " & want.name.ALL & " needs the underlying type");
   END IF;
   IF want /= NIL AND want.kind = t_array AND want.idx2 = NIL THEN
      CONST tmp := new_name("ac");
      CONST ct := ctype(want);
      CONST et := ctype(want.elem);
      VAR parts : text;
      t := want;
      IF it /= NIL AND it.a /= NIL AND it.a.b /= NIL AND it.next = NIL THEN
         % [lo .. hi : value]
         CONST lo := gexpr(it.a.a, want.idx, vt);
         CONST hi := gexpr(it.a.b, want.idx, vt);
         CONST v := gexpr(it.b, want.elem, vt);
         check_type(vt, want.elem, e.line);
         RETURN "({ " & ct & " " & tmp & "; " & tmp & ".lo = " & lo & "; " & tmp & ".hi = " & hi
                & "; " & tmp & ".lo2 = " & tmp & ".hi2 = 1; " & tmp & ".p = rt_alloc(sizeof(" & et
                & ") * (size_t)RT_CNT(" & tmp & ")); for (rt_int i_ = 0; i_ < RT_CNT(" & tmp
                & "); i_++) " & tmp & ".p[i_] = " & copy_code(want.elem, v) & "; " & tmp & "; })";
      END IF;
      parts := mk("({ " & ct & " " & tmp & "; " & tmp & ".lo = 1; " & tmp & ".hi = " & itos(list_len(it))
                  & "; " & tmp & ".lo2 = " & tmp & ".hi2 = 1; " & tmp & ".p = rt_alloc(sizeof(" & et & ") * "
                  & itos(list_len(it) + 1) & ");");
      FOR i : INT(0 .. list_len(e.a) - 1) REPEAT
         IF it.a /= NIL THEN
            fail(e.line, "only positional array constructors are handled");
         END IF;
         BEGIN
            CONST v := gexpr(it.b, want.elem, vt);
            check_type(vt, want.elem, e.line);
            parts := mk(parts.ALL & " " & tmp & ".p[" & itos(i) & "] = " & copy_code(want.elem, v) & ";");
         END;
         it := it.next;
      END REPEAT;
      RETURN parts.ALL & " " & tmp & "; })";
   END IF;
   IF want = NIL OR want.kind /= t_record THEN
      fail(e.line, "the type of this constructor is not known here");
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
               parts := mk(parts.ALL & " " & tmp & "." & field_c(f.name.ALL) & " = "
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

% does the actual parameter list fit this deferred unit? (11.1) Each actual is
% typed against the formal's type with errors turned into "no"
ABNORMAL FUNC fits(CONST y : sym, CONST args : node) => BOOL IMPORTS ALL;
   VAR a : node := args;
   VAR pm : parm := y.params;
   VAR t : typ;
   VAR saved : buffer := code;
   VAR ok : BOOL := TRUE;
   VAR lv : text;
   VAR lc : cons;
   VAR ro : BOOL;
   trial := trial + 1;
   code := new_buffer;
   GUARD
      WHILE ok AND a /= NIL AND pm /= NIL REPEAT
         IF pm.mode = m_var OR pm.mode = m_out THEN
            lvalue(a, lv, t, lc, ro);
         ELSE
            CONST v := gexpr(a, pm.t, t);
         END IF;
         IF NOT (same(t, pm.t) OR (t.kind = t_nil AND pm.t.kind = t_ptr)) THEN
            ok := FALSE;
         END IF;
         a := a.next;
         pm := pm.next;
      END REPEAT;
      IF a /= NIL OR pm /= NIL THEN
         ok := FALSE;
      END IF;
   BY
      WHEN compile_error =>
         ok := FALSE;
   END GUARD;
   trial := trial - 1;
   code := saved;
   RETURN ok;
END FUNC fits;

% the visible deferred unit of this name whose interface matches the actuals
ABNORMAL FUNC resolve_overload(READONLY name : STRING[ASCII], CONST args : node, CONST is_stmt : BOOL,
                               CONST line : INT) => sym IMPORTS ALL;
   VAR y : sym;
   VAR first : sym;
   VAR n : INT := 0;
   FOR pass : INT(1 .. 3) REPEAT
      y := overload_chain(name, pass);
      WHILE y /= NIL REPEAT
         IF y.name.ALL = name AND (y.kind = y_func OR y.kind = y_proc)
               AND (pass /= 1 OR y.depth >= gdepth) THEN
            n := n + 1;
            IF first = NIL THEN
               first := y;
            END IF;
            IF ((y.kind = y_proc) = is_stmt) AND fits(y, args) THEN
               RETURN y;
            END IF;
         END IF;
         y := y.chain;
      END REPEAT;
   END REPEAT;
   IF is_builtin(name) THEN
      RETURN NIL;
   END IF;
   IF n > 1 THEN
      fail(line, "no definition of " & name & " matches these actual parameters");
   END IF;
   RETURN first;
END FUNC resolve_overload;

% the definitions of a name to try, in order (11.3): in an instance, its own
% (pass 1), those of the generic's definition environment (2), then the rest
% (3); elsewhere just the scope's (3)
ABNORMAL FUNC overload_chain(READONLY name : STRING[ASCII], CONST pass : INT) => sym IMPORTS table, genv;
   IF genv = NIL AND pass < 3 THEN
      RETURN NIL;
   ELSEIF pass = 2 THEN
      RETURN genv(hash(name));
   END IF;
   RETURN table(hash(name));
END FUNC overload_chain;

FUNC is_builtin(READONLY n : STRING[ASCII]) => BOOL;
   RETURN n = "ABS" OR n = "POS" OR n = "SUCC" OR n = "PRED" OR n = "SQRT" OR n = "FLOOR"
       OR n = "WRITELN" OR n = "WRITE" OR n = "READLN" OR n = "SEND" OR n = "RECEIVE"
       OR n = "DELAY" OR n = "TIME" OR n = "CNVT" OR n = "FORMAT" OR is_low_level(n);
END FUNC is_builtin;

% the operations of chapter 14, which a user-defined scheduler or
% synchronization type may overload for its own types
FUNC is_low_level(READONLY n : STRING[ASCII]) => BOOL;
   RETURN n = "SYNC_RESET" OR n = "SYNC_WAIT" OR n = "SYNC_SIGNAL" OR n = "TASK_START"
       OR n = "TASK_END" OR n = "LOCK" OR n = "UNLOCK" OR n = "COND_LOCK" OR n = "SUSPEND"
       OR n = "UNSUSPEND" OR n = "WAITING" OR n = "SUSPENDED" OR n = "ACTIVE"
       OR n = "EMPTY_SLOTS" OR n = "FULL_SLOTS" OR n = "COND_SEND" OR n = "COND_RECEIVE"
       OR n = "EXCESS_LOCKS" OR n = "OWNER";
END FUNC is_low_level;

% ME[T] (14.5.2): the activation variable of type T that the running
% activation was created with; X_SCHED if it was created with another
ABNORMAL FUNC me_high(CONST tt : node, CONST line : INT, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR c : cons;
   IF tt = NIL THEN
      fail(line, "ME[...] needs the type of an activation variable");
   END IF;
   t := resolve_subtype(tt, c);
   RETURN "(*(" & ctype(t) & " *)rt_me_high(" & q & type_tag(t) & q & "))";
END FUNC me_high;

FUNC type_tag(CONST t : typ) => STRING[ASCII];
   IF t.name /= NIL THEN
      RETURN t.name.ALL;
   END IF;
   RETURN "?";
END FUNC type_tag;

% a DATA_LOCK or a LATCH (14.4)
ABNORMAL FUNC lock_ref(CONST e : node, READONLY name : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   VAR lv : text;
   VAR t : typ;
   VAR c : cons;
   VAR ro : BOOL;
   lvalue(e, lv, t, c, ro);
   IF t.kind /= t_lock THEN
      fail(e.line, name & " needs a DATA_LOCK or a LATCH");
   END IF;
   RETURN "&" & lv.ALL;
END FUNC lock_ref;

% is there a user definition of this operator symbol that fits? (13.2)
ABNORMAL FUNC user_op(READONLY op : STRING[ASCII], CONST args : node) => sym IMPORTS ALL;
   VAR y : sym;
   FOR pass : INT(1 .. 3) REPEAT
      y := overload_chain(op, pass);
      WHILE y /= NIL REPEAT
         IF y.name.ALL = op AND y.kind = y_func AND (pass /= 1 OR y.depth >= gdepth) AND fits(y, args) THEN
            RETURN y;
         END IF;
         y := y.chain;
      END REPEAT;
   END REPEAT;
   RETURN NIL;
END FUNC user_op;

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
   IF y.kind /= y_func AND y.kind /= y_proc AND y.kind /= y_generic THEN
      % a data item may share its name with visible deferred units (11.1)
      VAR alt : sym := resolve_overload(fn.name.ALL, e.b, is_stmt, e.line);
      IF alt /= NIL THEN
         y := alt;
      ELSEIF is_builtin(fn.name.ALL) THEN
         RETURN builtin(fn.name.ALL, tt, e.b, e.line, is_stmt, t);
      END IF;
   END IF;
   IF y.kind = y_generic THEN
      y := instantiate(y, tt, e.b, e.line);
   ELSEIF y.kind = y_func OR y.kind = y_proc THEN
      y := resolve_overload(fn.name.ALL, e.b, is_stmt, e.line);
      IF y = NIL THEN
         RETURN builtin(fn.name.ALL, tt, e.b, e.line, is_stmt, t);
      END IF;
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
   IF y.level > 0 THEN
      args := mk("F");
      FOR i : INT(1 .. cur_level - y.level) REPEAT
         args := mk(args.ALL & "->up");
      END REPEAT;
   END IF;
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
         args := mk(args.ALL & "&" & lv.ALL & actual_bounds(pm.t, lt, lc));
      ELSEIF pm.mode = m_readonly AND is_lvalue(a) THEN
         lvalue(a, lv, lt, lc, ro);
         check_type(lt, pm.t, e.line);
         args := mk(args.ALL & "&" & lv.ALL & actual_bounds(pm.t, lt, lc));
      ELSEIF pm.mode = m_readonly THEN
         CONST v := gexpr(a, pm.t, vt);
         CONST ct := ctype(pm.t);
         check_type(vt, pm.t, e.line);
         args := mk(args.ALL & "({ " & ct & " *b_ = rt_alloc(sizeof(" & ct & ")); *b_ = " & v & "; b_; })");
         IF scalar_kind(pm.t) THEN
            % a value has no subtype to compare with the formal's
            args := mk(args.ALL & ", 1, 0");
         END IF;
      ELSE
         CONST v := gexpr(a, pm.t, vt);
         check_type(vt, pm.t, e.line);
         args := mk(args.ALL & v);
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

% the subtype of an actual bound to a VAR, OUT or READONLY scalar formal (7.3)
ABNORMAL FUNC actual_bounds(CONST ft : typ, CONST t : typ, CONST c : cons) => STRING[ASCII] IMPORTS ALL;
   IF NOT scalar_kind(ft) THEN
      RETURN "";
   END IF;
   RETURN ", " & sub_lo(t, c) & ", " & sub_hi(t, c);
END FUNC actual_bounds;

ABNORMAL FUNC builtin(READONLY name : STRING[ASCII], CONST tt : node, CONST args : node,
                      CONST line : INT, CONST is_stmt : BOOL, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR at : typ;
   VAR n : INT := list_len(args);
   t := ty_void;
   IF name = "POS" OR name = "SUCC" OR name = "PRED" THEN
      CONST a := gexpr(args, NIL, at);
      IF name = "POS" THEN
         IF base_of(at).kind /= t_enum THEN
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
         RETURN "rt_range(" & a & " + 1, 0, " & itos(list_len(base_of(at).lits) - 1) & ")";
      END IF;
      RETURN "rt_range(" & a & " - 1, 0, " & itos(list_len(base_of(at).lits) - 1) & ")";
   ELSEIF name = "SQRT" OR name = "SIN" OR name = "COS" OR name = "EXP" OR name = "LN"
         OR name = "FLOOR" THEN
      % FLOOR is in C.4; the others stand for a mathematical library capsule
      CONST a := gexpr(args, ty_float, at);
      t := ty_float;
      IF name = "LN" THEN
         RETURN "log(" & a & ")";
      END IF;
      RETURN lower_s(name) & "(" & a & ")";
   ELSEIF name = "IFLOAT" THEN
      CONST a := gexpr(args.next, ty_int, at);
      t := ty_float;
      RETURN "((double)(" & a & "))";
   ELSEIF name = "IFIX" THEN
      CONST a := gexpr(args, ty_float, at);
      t := ty_int;
      RETURN "((rt_int)(" & a & "))";
   ELSEIF name = "FORMAT" THEN
      CONST a := gexpr(args, ty_float, at);
      CONST n1 := gexpr(args.next, ty_int, at);
      CONST m1 := gexpr(args.next.next, ty_int, at);
      t := ty_string;
      RETURN "rt_format(" & a & ", " & n1 & ", " & m1 & ")";
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
         ELSEIF tt.kind = s_string AND at.kind = t_float THEN
            t := ty_string;
            RETURN "rt_str_of_float(" & a & ", 6)";
         ELSEIF tt.kind = s_string AND at.kind = t_bool THEN
            t := ty_string;
            RETURN "((" & a & ") ? rt_str(" & q & "TRUE" & q & ", 4) : rt_str(" & q & "FALSE" & q & ", 5))";
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
   ELSEIF name = "SEND" OR name = "RECEIVE" THEN
      VAR lv, dv : text;
      VAR lc : cons;
      VAR ro : BOOL;
      VAR mt, dt : typ;
      lvalue(args, lv, mt, lc, ro);
      IF mt.kind /= t_mbox THEN
         fail(line, name & " needs a mailbox");
      END IF;
      IF name = "RECEIVE" THEN
         lvalue(args.next, dv, dt, lc, ro);
         check_type(dt, mt.elem, line);
         RETURN "rt_receive(" & lv.ALL & ", &" & dv.ALL & ")";
      END IF;
      BEGIN
         CONST v := gexpr(args.next, mt.elem, at);
         check_type(at, mt.elem, line);
         RETURN "({ " & ctype(mt.elem) & " m_ = " & v & "; rt_send(" & lv.ALL & ", &m_); })";
      END;
   ELSEIF name = "FULL_SLOTS" OR name = "EMPTY_SLOTS" THEN
      VAR lv : text;
      VAR lc : cons;
      VAR ro : BOOL;
      VAR mt : typ;
      lvalue(args, lv, mt, lc, ro);
      IF mt.kind /= t_mbox THEN
         fail(line, name & " needs a mailbox");
      END IF;
      t := ty_int;
      RETURN "rt_" & lower_s(name) & "(" & lv.ALL & ")";
   ELSEIF name = "COND_SEND" OR name = "COND_RECEIVE" THEN
      VAR lv, dv, bv : text;
      VAR lc : cons;
      VAR ro : BOOL;
      VAR mt, dt, bt : typ;
      lvalue(args, lv, mt, lc, ro);
      IF mt.kind /= t_mbox THEN
         fail(line, name & " needs a mailbox");
      END IF;
      lvalue(args.next.next, bv, bt, lc, ro);
      check_type(bt, ty_bool, line);
      IF name = "COND_RECEIVE" THEN
         lvalue(args.next, dv, dt, lc, ro);
         check_type(dt, mt.elem, line);
         RETURN bv.ALL & " = rt_cond_receive(" & lv.ALL & ", &" & dv.ALL & ")";
      END IF;
      BEGIN
         CONST v := gexpr(args.next, mt.elem, at);
         check_type(at, mt.elem, line);
         RETURN "({ " & ctype(mt.elem) & " m_ = " & v & "; " & bv.ALL & " = rt_cond_send(" & lv.ALL & ", &m_); })";
      END;
   ELSEIF name = "PRIORITY" THEN
      t := ty_int;
      RETURN "rt_priority(" & act_ref(args) & ")";
   ELSEIF name = "SET_PRIORITY" THEN
      CONST v := gexpr(args.next, ty_int, at);
      RETURN "rt_set_priority(" & act_ref(args) & ", " & v & ")";
   ELSEIF name = "EXTERMINATE" THEN
      RETURN "rt_exterminate(" & act_ref(args) & ")";
   ELSEIF name = "ACTIVE" THEN
      % NIL_ACT is always active (C.10)
      t := ty_bool;
      RETURN "rt_r_active(" & act_ref(args) & ")";
   ELSEIF name = "DELAY" THEN
      CONST v := gexpr(args, ty_int, at);
      RETURN "rt_delay(" & v & ")";
   ELSEIF name = "DELAY_UNTIL" THEN
      CONST v := gexpr(args, ty_int, at);
      RETURN "rt_delay_until(" & v & ")";
   ELSEIF name = "DELAY_UNTIL_INACTIVE" THEN
      RETURN "rt_delay_until_inactive(" & act_ref(args) & ")";
   ELSEIF name = "TIME" THEN
      t := ty_int;
      RETURN "rt_time()";
   ELSEIF name = "MILLISECONDS" OR name = "SECONDS" OR name = "MINUTES" OR name = "HOURS" THEN
      t := ty_int;
      RETURN "RT_" & name;
   ELSEIF name = "HALT" THEN
      CONST a := gexpr(args, ty_int, at);
      RETURN "rt_exit(" & a & ")";
   ELSEIF name = "ME" AND tt /= NIL THEN
      RETURN me_high(tt, line, t);
   ELSEIF name = "WAITING" OR name = "SUSPENDED" THEN
      t := ty_bool;
      RETURN "rt_is_" & lower_s(name) & "(" & act_ref(args) & ")";
   ELSEIF name = "SUSPEND" OR name = "UNSUSPEND" OR name = "LOW_SYNC_SIGNAL" OR name = "LOW_TASK_END"
         OR name = "SYNC_SIGNAL" OR name = "TASK_END" THEN
      RETURN "rt_" & lower_s(name) & "(" & act_ref(args) & ")";
   ELSEIF name = "TASK_START" THEN
      IF n /= 2 THEN
         fail(line, "TASK_START needs two activation variables");
      END IF;
      RETURN "rt_task_start(" & act_ref(args) & ", " & act_ref(args.next) & ")";
   ELSEIF name = "CRITICAL" OR name = "NONCRITICAL" OR name = "SYNC_RESET" OR name = "SYNC_WAIT"
         OR name = "LOW_SYNC_RESET" OR name = "LOW_SYNC_WAIT" THEN
      IF n /= 0 THEN
         fail(line, name & " takes no actual parameters here");
      END IF;
      RETURN "rt_" & lower_s(name) & "()";
   ELSEIF name = "LOCK" THEN
      RETURN "rt_region_enter(" & lock_ref(args, name) & ")";
   ELSEIF name = "UNLOCK" THEN
      RETURN "rt_region_leave(" & lock_ref(args, name) & ")";
   ELSEIF name = "COND_LOCK" THEN
      VAR bv : text;
      VAR bc : cons;
      VAR ro : BOOL;
      VAR bt : typ;
      CONST l := lock_ref(args, name);
      lvalue(args.next, bv, bt, bc, ro);
      check_type(bt, ty_bool, line);
      RETURN bv.ALL & " = rt_cond_lock(" & l & ")";
   ELSEIF name = "EXCESS_LOCKS" THEN
      t := ty_int;
      RETURN "rt_excess_locks(" & lock_ref(args, name) & ")";
   ELSEIF name = "OWNER" THEN
      t := ty_act;
      RETURN "rt_lock_owner(" & lock_ref(args, name) & ")";
   ELSEIF name = "FREE" THEN
      % FREE(v) (4.4.3): X_FREE if another pointer refers to the variable
      VAR pv : text;
      VAR pc : cons;
      VAR ro : BOOL;
      VAR pt : typ;
      lvalue(args, pv, pt, pc, ro);
      IF pt.kind /= t_ptr OR ro THEN
         fail(line, "FREE needs a variable of an indirect type");
      END IF;
      uses_free := TRUE;
      finish_ptr(pt);
      IF needs_fin(pt.target) THEN
         % the variable ceases to exist: finalized once FREE may reclaim it (13.3)
         RETURN "({ rt_free_check((void **)&" & pv.ALL & "); if (" & pv.ALL & ") { "
                & fin_code("(*" & pv.ALL & ")", pt.target) & " } rt_free((void **)&" & pv.ALL & "); })";
      END IF;
      RETURN "rt_free((void **)&" & pv.ALL & ")";
   ELSEIF name = "LOW_IO" THEN
      CONST dev := gexpr(args, ty_int, at);
      CONST cmd := gexpr(args.next, ty_int, at);
      IF n = 2 THEN
         RETURN "({ rt_int d_ = 0; rt_low_io(" & dev & ", " & cmd & ", &d_); })";
      END IF;
      BEGIN
         VAR dv : text;
         VAR dc : cons;
         VAR ro : BOOL;
         VAR dt : typ;
         lvalue(args.next.next, dv, dt, dc, ro);
         check_type(dt, ty_int, line);
         RETURN "rt_low_io(" & dev & ", " & cmd & ", &" & dv.ALL & ")";
      END;
   END IF;
   fail(line, name & " is not defined");
   RETURN "";
END FUNC builtin;
