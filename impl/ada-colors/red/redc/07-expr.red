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
   IF s.LEN > 1 AND s(1) = 'PERIOD THEN
      RETURN "dot_" & lower_s(s(2 .. s.LEN));
   ELSEIF s.LEN > 1 AND s(1) = 'LPAREN THEN
      VAR r : text := mk("sel_");
      FOR i : INT(2 .. s.LEN - 1) REPEAT
         IF s(i) = 'STAR THEN
            r := mk(r.ALL & "s");
         ELSEIF s(i) = 'COMMA THEN
            r := mk(r.ALL & "_");
         ELSEIF s(i) = 'PERIOD THEN
            r := mk(r.ALL & "r");
         END IF;
      END REPEAT;
      RETURN r.ALL;
   ELSEIF s = "+" THEN
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

% the dynamic variable a non-NIL pointer refers to
ABNORMAL FUNC cell_deref(CONST t : typ, READONLY p : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   IF t.decl /= NIL AND t.decl.b /= NIL THEN
      RETURN "((" & p & ")->all)";
   END IF;
   RETURN "(*" & p & ")";
END FUNC cell_deref;

ABNORMAL FUNC deref(READONLY base : STRING[ASCII], CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   IF t.decl /= NIL AND t.decl.b /= NIL THEN
      IF suppressed("X_NIL") THEN
         RETURN "((" & base & ")->all)";
      END IF;
      RETURN "(((" & ctype(t) & ")rt_nil_check(" & base & "))->all)";
   END IF;
   IF suppressed("X_NIL") THEN
      RETURN "(*(" & ctype(t) & ")(" & base & "))";
   END IF;
   RETURN "(*(" & ctype(t) & ")rt_nil_check(" & base & "))";
END FUNC deref;

ABNORMAL FUNC is_lvalue(CONST e : node) => BOOL IMPORTS ALL;
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
      IF bt.decl /= NIL THEN
         % a formal parameter 2 is an attribute of the dynamic variable
         VAR p : node := bt.decl.b;
         WHILE p /= NIL REPEAT
            IF p.name.ALL = e.name.ALL THEN
               VAR pc : cons;
               code := mk("(((" & ctype(bt) & ")rt_nil_check(" & base & "))->p_" & lower_s(p.name.ALL) & ")");
               t := resolve_subtype(p.a, pc);
               ro := TRUE;
               RETURN;
            END IF;
            p := p.next;
         END REPEAT;
      END IF;
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
      % the parameters of an exported type are its attributes, known
      % wherever the type is (4.5.3)
      WHILE p /= NIL REPEAT
         IF p.name.ALL = e.name.ALL THEN
            code := mk(base & ".p_" & lower_s(p.name.ALL));
            t := tparam_type(bt, p.name.ALL);
            ro := TRUE;
            RETURN;
         END IF;
         p := p.next;
      END REPEAT;
      p := bt.tparams;
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
   IF bt.kind = t_union THEN
      VAR f : field := bt.fields;
      VAR i : INT := 0;
      IF e.name.ALL = "TAG" THEN
         % the name of the component present (C.6)
         code := mk("rt_r_tag((" & base & ").tag)");
         t := bt.elem;
         ro := TRUE;
         RETURN;
      END IF;
      WHILE f /= NIL REPEAT
         IF f.name.ALL = e.name.ALL THEN
            % X_TAG unless that component is present (C.6)
            CONST fn := "(" & base & ").u." & field_c(e.name.ALL);
            c := f.c;
            code := mk("(*((" & base & ").tag == " & itos(i) & " ? &" & fn & " : (rt_r_xtag(), &" & fn & ")))");
            t := f.t;
            RETURN;
         END IF;
         i := i + 1;
         f := f.next;
      END REPEAT;
      fail(e.line, "no component " & e.name.ALL);
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

FUNC has_call(READONLY s : STRING[ASCII]) => BOOL;
   FOR i : INT(1 .. s.LEN) REPEAT
      IF s(i) = 'LPAREN THEN
         RETURN TRUE;
      END IF;
   END REPEAT;
   RETURN FALSE;
END FUNC has_call;

% the helpers for slices and catenation of a one-dimensional array type
PROC need_slice(CONST t : typ) IMPORTS ALL;
   CONST c := ctype(t);
   CONST n := "rt_r_aslice_" & c;
   VAR l : lines;
   IF seen_name(mcopies, n) THEN
      RETURN;
   END IF;
   ALLOC l PTR;
   l.s := mk(n);
   l.next := mcopies;
   mcopies := l;
   put(out_protos, "static " & c & " " & n & "(" & c & " a, rt_int l, rt_int h);");
   put(out_funcs, "static " & c & " " & n & "(" & c & " a, rt_int l, rt_int h) {");
   put(out_funcs, "  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);");
   put(out_funcs, "  if (h >= l) a.p += l - a.lo;");
   put(out_funcs, "  a.lo = l; a.hi = h; return a;");
   put(out_funcs, "}");
   % & (C.7): the result has index subtype INT(1 .. m + n)
   put(out_protos, "static " & c & " rt_r_acat_" & c & "(" & c & " a, " & c & " b);");
   put(out_funcs, "static " & c & " rt_r_acat_" & c & "(" & c & " a, " & c & " b) {");
   put(out_funcs, "  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); " & c & " r;");
   put(out_funcs, "  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);");
   put(out_funcs, "  for (rt_int i = 0; i < m; i++) r.p[i] = " & copy_code(t.elem, "a.p[i]") & ";");
   put(out_funcs, "  for (rt_int i = 0; i < n; i++) r.p[m + i] = " & copy_code(t.elem, "b.p[i]") & ";");
   put(out_funcs, "  return r;");
   put(out_funcs, "}");
END PROC need_slice;

% a subscript, checked unless X_SUBSCRIPT is suppressed (B)
ABNORMAL FUNC ix(READONLY i : STRING[ASCII], READONLY lo : STRING[ASCII], READONLY hi : STRING[ASCII])
      => STRING[ASCII] IMPORTS suppress;
   IF suppressed("X_SUBSCRIPT") THEN
      RETURN "(" & i & ")";
   END IF;
   RETURN "rt_index(" & i & ", " & lo & ", " & hi & ")";
END FUNC ix;

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
   IF bt.kind = t_array AND a /= NIL AND a.kind = n_range THEN
      % a subarray (C.7) of a one-dimensional array: it shares the components
      IF bt.ndim /= 1 OR a.next /= NIL THEN
         fail(e.line, "only a one-dimensional array can be sliced");
      END IF;
      BEGIN
         CONST lo := gexpr(a.a, bt.idx, it);
         CONST hi := gexpr(a.b, bt.idx, it);
         code := mk("rt_r_aslice_" & ctype(bt) & "(" & base & ", " & lo & ", " & hi & ")");
         need_slice(bt);
         t := bt;
         ro := TRUE;
      END;
      RETURN;
   END IF;
   IF bt.kind = t_array THEN
      % the components are kept in row-major order (C.7)
      VAR off : text;
      VAR k : INT := 0;
      VAR b : text := mk(base);
      VAR pre : text := mk("");
      IF list_len(a) /= bt.ndim THEN
         fail(e.line, itos(bt.ndim) & " subscripts expected");
      END IF;
      IF NOT lv AND has_call(base) THEN
         % the array is computed once
         pre := mk("({ " & ctype(bt) & " b_ = " & base & "; ");
         b := mk("b_");
      END IF;
      WHILE a /= NIL REPEAT
         k := k + 1;
         BEGIN
            CONST i := gexpr(a, idx_type(bt, k), it);
            CONST l := b.ALL & "." & dim_lo(k);
            CONST h := b.ALL & "." & dim_hi(k);
            check_type(it, idx_type(bt, k), e.line);
            IF off = NIL THEN
               off := mk("(" & ix(i, l, h) & " - " & l & ")");
            ELSE
               off := mk("(" & off.ALL & " * RT_R_EXT(" & l & ", " & h & ") + " & ix(i, l, h) & " - " & l & ")");
            END IF;
         END;
         a := a.next;
      END REPEAT;
      IF pre.LEN > 0 THEN
         code := mk(pre.ALL & b.ALL & ".p[" & off.ALL & "]; })");
      ELSE
         code := mk(b.ALL & ".p[" & off.ALL & "]");
      END IF;
      t := bt.elem;
      c := bt.elemcons;
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
         t := bt;
         ro := TRUE;
         RETURN;
      END IF;
      BEGIN
         CONST i := gexpr(a, ty_int, it);
         t := str_elem(bt);
         c := bt.elemcons;
         IF lv THEN
            code := mk("(*rt_str_at(&" & base & ", " & i & "))");
         ELSE
            code := mk("rt_str_get(" & base & ", " & i & ")");
            ro := TRUE;
         END IF;
      END;
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
      WHILE bt /= NIL AND bt.kind = t_new AND bt.tparams = NIL REPEAT
         bt := bt.under;
      END REPEAT;
      IF bt /= NIL AND bt.kind = t_new THEN
         VAR p : node := bt.tparams;
         WHILE p /= NIL REPEAT
            IF p.name.ALL = e.name.ALL THEN
               ok := TRUE;
            END IF;
            p := p.next;
         END REPEAT;
         bt := bt.under;
      END IF;
      IF bt /= NIL AND (bt.kind = t_record OR bt.kind = t_union) THEN
         % a component of that name
         VAR f : field := bt.fields;
         WHILE f /= NIL REPEAT
            IF f.name.ALL = e.name.ALL THEN
               ok := TRUE;
            END IF;
            f := f.next;
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
   % the subtype the context resolves a constructor to (5.7), for this
   % expression only
   VAR ctx : cons := cons_ctx;
   cons_ctx := NIL;
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
   ELSEIF k = n_str AND want /= NIL AND want.kind = t_string AND NOT same(str_elem(want), ty_ascii) THEN
      % a string literal stands for its characters' enumeration literals (2.3.8)
      VAR r : text := mk(q);
      t := want;
      FOR i : INT(1 .. e.name.LEN) REPEAT
         VAR pos : INT := lit_index(base_of(str_elem(want)).lits, ascii_lit(e.name(i)));
         IF pos < 0 THEN
            fail(e.line, chs('APOS) & ascii_lit(e.name(i)) & " is not a value of the component type");
         END IF;
         r := mk(r.ALL & "\" & octal(pos));
      END REPEAT;
      RETURN "rt_str(" & r.ALL & q & ", " & itos(e.name.LEN) & ")";
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
            fail(e.line, chs('APOS) & e.name.ALL & " is not a value of this type");
         END IF;
         RETURN itos(i);
      END;
   ELSEIF k = n_paren THEN
      cons_ctx := ctx;
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
            RETURN init_chk(y.t, access_of(y));
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
      RETURN "y_set_compl(" & a & ")";
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
      IF user_subscript(e) /= NIL THEN
         RETURN gcall(user_subscript(e), FALSE, t);
      END IF;
      BEGIN
         CONST base := gexpr(e.a, NIL, bt);
         ro := TRUE;
         index_on(base, bt, e, ro, FALSE, code, t, c);
         IF NOT is_lvalue(e) OR t.kind = t_array OR t.kind = t_string THEN
            RETURN code.ALL;
         END IF;
         RETURN init_chk(t, code.ALL);
      END;
   ELSEIF k = n_select AND user_dot(e) /= NIL THEN
      RETURN gcall(user_dot(e), FALSE, t);
   ELSEIF k = n_select THEN
      IF (e.name.ALL = "LEN" OR e.name.ALL = "MIN" OR e.name.ALL = "MAX" OR e.name.ALL = "PREC"
            OR e.name.ALL = "ACCESS" OR e.name.ALL = "USE") AND NOT own_attribute(e) THEN
         RETURN attribute(e, t);
      ELSEIF as_subtype(e.a) /= NIL OR ptr_attribute(e) THEN
         % a parameter of a user-defined subtype (4.5.3)
         RETURN attribute(e, t);
      END IF;
      BEGIN
         CONST base := gexpr(e.a, NIL, bt);
         ro := TRUE;
         select_on(base, bt, e, ro, code, t, c);
         IF e.name.ALL = "TAG" OR NOT is_lvalue(e) THEN
            RETURN code.ALL;
         END IF;
         RETURN init_chk(t, code.ALL);
      END;
   ELSEIF k = n_ttapply THEN
      RETURN gcall(wrap_apply(e), FALSE, t);
   ELSEIF k = n_cons THEN
      RETURN constructor(e, want, ctx, t);
   ELSEIF k = n_resolve THEN
      RETURN resolved(e, t);
   END IF;
   fail(e.line, "this expression is not handled yet");
   RETURN "";
END FUNC gexpr;

% x # t (5.7): a user-defined # with property list [t] (13.5), or x resolved
% to the type or subtype t
ABNORMAL FUNC resolved(CONST e : node, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR c : cons;
   VAR vt : typ;
   VAR y : sym := lookup("#");
   VAR tt : node := copy_node(e.b);
   tt.next := NIL;
   IF y /= NIL AND (y.kind = y_generic OR resolve_overload("#", tt, copy_node(e.a), FALSE, e.line) /= NIL) THEN
      VAR call : node := nn(n_apply, e.line);
      VAR f : node := nn(n_ttapply, e.line);
      VAR fname : node := nn(n_name, e.line);
      fname.name := mk("#");
      f.a := fname;
      f.b := tt;
      call.a := f;
      call.b := copy_node(e.a);
      call.b.next := NIL;
      RETURN gcall(call, FALSE, t);
   END IF;
   t := resolve_subtype(e.b, c);
   BEGIN
      CONST v := gexpr_in(e.a, t, c, vt);
      check_type(vt, t, e.line);
      RETURN checked(t, c, v);
   END;
END FUNC resolved;

% an expression whose context gives the subtype c (5.7)
ABNORMAL FUNC gexpr_in(CONST e : node, CONST want : typ, CONST c : cons, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   cons_ctx := c;
   RETURN gexpr(e, want, t);
END FUNC gexpr_in;

% the enumeration literal of an ASCII character (C.15), without its apostrophe
ABNORMAL FUNC ascii_lit(CONST ch : ASCII) => STRING[ASCII] IMPORTS ty_ascii;
   VAR l : node := ty_ascii.lits;
   FOR i : INT(1 .. POS(ch) - 1) REPEAT
      l := l.next;
   END REPEAT;
   RETURN l.name.ALL;
END FUNC ascii_lit;

FUNC octal(CONST n : INT) => STRING[ASCII];
   CONST digits := "01234567";
   VAR r : STRING[ASCII](3) := "000";
   r(1) := digits(n DIV 64 MOD 8 + 1);
   r(2) := digits(n DIV 8 MOD 8 + 1);
   r(3) := digits(n MOD 8 + 1);
   RETURN r;
END FUNC octal;

% the type of the second operand of & with a string: a string or a character
FUNC str_cat_part(CONST t : typ) => typ;
   IF t.kind = t_string THEN
      RETURN str_elem(t);
   END IF;
   RETURN t;
END FUNC str_cat_part;

% the type of an expression, found without translating it for good
ABNORMAL FUNC peek_type(CONST e : node) => typ IMPORTS ALL;
   VAR saved : buffer := code;
   VAR t : typ;
   trial := trial + 1;
   code := new_buffer;
   GUARD
      CONST v := gexpr(e, NIL, t);
   BY
      WHEN compile_error =>
         t := NIL;
   END GUARD;
   trial := trial - 1;
   code := saved;
   RETURN t;
END FUNC peek_type;

% the set type of AND, OR or XOR on sets (C.9), NIL for BOOL
ABNORMAL FUNC set_operands(CONST e : node, CONST want : typ) => typ IMPORTS ALL;
   VAR t : typ;
   IF want /= NIL AND want.kind = t_set THEN
      RETURN want;
   ELSEIF want /= NIL THEN
      RETURN NIL;
   END IF;
   IF e.a.kind /= n_cons THEN
      t := peek_type(e.a);
   ELSEIF e.b.kind /= n_cons THEN
      t := peek_type(e.b);
   END IF;
   IF t /= NIL AND t.kind = t_set THEN
      RETURN t;
   END IF;
   RETURN NIL;
END FUNC set_operands;

% primary.id with a user-defined selector .id (13.4): its invocation
ABNORMAL FUNC user_dot(CONST e : node) => node IMPORTS ALL;
   VAR arg : node;
   IF lookup("." & e.name.ALL) = NIL THEN
      RETURN NIL;
   END IF;
   arg := copy_node(e.a);
   IF user_op("." & e.name.ALL, arg) = NIL THEN
      RETURN NIL;
   END IF;
   RETURN op_call("." & e.name.ALL, arg, e.line);
END FUNC user_dot;

% primary(exp, lo..hi, ...) with a user-defined selector (*, *..*, ...) (13.4)
ABNORMAL FUNC user_subscript(CONST e : node) => node IMPORTS ALL;
   VAR name : text := mk("(");
   VAR args, tail : node;
   VAR a : node := e.b;
   IF e.a.kind = n_name AND lookup(e.a.name.ALL) /= NIL AND lookup(e.a.name.ALL).kind /= y_var
         AND lookup(e.a.name.ALL).kind /= y_const THEN
      RETURN NIL;
   END IF;
   append(args, tail, copy_node(e.a));
   WHILE a /= NIL REPEAT
      IF name.LEN > 1 THEN
         name := mk(name.ALL & ",");
      END IF;
      IF a.kind = n_range THEN
         name := mk(name.ALL & "*..*");
         append(args, tail, copy_node(a.a));
         append(args, tail, copy_node(a.b));
      ELSE
         name := mk(name.ALL & "*");
         append(args, tail, copy_node(a));
      END IF;
      a := a.next;
   END REPEAT;
   name := mk(name.ALL & ")");
   IF lookup(name.ALL) = NIL OR user_op(name.ALL, args) = NIL THEN
      RETURN NIL;
   END IF;
   RETURN op_call(name.ALL, args, e.line);
END FUNC user_subscript;

ABNORMAL FUNC op_call(READONLY name : STRING[ASCII], CONST args : node, CONST line : INT) => node;
   VAR call : node := nn(n_apply, line);
   VAR f : node := nn(n_name, line);
   f.name := mk(name);
   call.a := f;
   call.b := args;
   RETURN call;
END FUNC op_call;

% /=, >, <= and >= follow from a user-defined = and < (13.2)
ABNORMAL FUNC derived_relation(CONST e : node) => node IMPORTS ALL;
   VAR l, r : node;
   VAR has_eq, has_lt : BOOL := FALSE;
   l := copy_node(e.a);
   r := copy_node(e.b);
   l.next := r;
   IF lookup("=") /= NIL THEN
      has_eq := user_op("=", l) /= NIL;
   END IF;
   IF lookup("<") /= NIL THEN
      l := copy_node(e.a);
      r := copy_node(e.b);
      l.next := r;
      has_lt := user_op("<", l) /= NIL;
   END IF;
   IF e.name.ALL = "/=" AND has_eq THEN
      RETURN rel_not(rel_node("=", e.a, e.b, e.line), e.line);
   ELSEIF e.name.ALL = ">" AND has_lt THEN
      RETURN rel_node("<", e.b, e.a, e.line);
   ELSEIF e.name.ALL = "<=" AND has_lt AND has_eq THEN
      RETURN binop(mk("OR"), rel_node("<", e.a, e.b, e.line), rel_node("=", e.a, e.b, e.line), e.line);
   ELSEIF e.name.ALL = ">=" AND has_lt AND has_eq THEN
      RETURN binop(mk("OR"), rel_node("<", e.b, e.a, e.line), rel_node("=", e.a, e.b, e.line), e.line);
   END IF;
   RETURN NIL;
END FUNC derived_relation;

ABNORMAL FUNC rel_node(READONLY op : STRING[ASCII], CONST a : node, CONST b : node, CONST line : INT) => node;
   RETURN binop(mk(op), copy_node(a), copy_node(b), line);
END FUNC rel_node;

ABNORMAL FUNC rel_not(CONST x : node, CONST line : INT) => node;
   VAR n : node := nn(n_unop, line);
   n.name := mk("NOT");
   n.a := x;
   RETURN n;
END FUNC rel_not;

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
   fail(line, "cannot tell the type of " & chs('APOS) & lit);
   RETURN NIL;
END FUNC enum_type_of;

% x.name where name is a formal parameter 1 of x's indirect type (4.5.3)
ABNORMAL FUNC ptr_attribute(CONST e : node) => BOOL IMPORTS ALL;
   VAR lv : text;
   VAR t : typ;
   VAR c : cons;
   VAR ro : BOOL;
   VAR p : node;
   VAR saved : buffer := code;
   IF NOT is_lvalue(e.a) THEN
      RETURN FALSE;
   END IF;
   code := new_buffer;
   lvalue(e.a, lv, t, c, ro);
   code := saved;
   IF t.kind /= t_ptr OR t.decl = NIL THEN
      RETURN FALSE;
   END IF;
   p := t.decl.d;
   WHILE p /= NIL REPEAT
      IF p.name.ALL = e.name.ALL THEN
         RETURN TRUE;
      END IF;
      p := p.next;
   END REPEAT;
   RETURN FALSE;
END FUNC ptr_attribute;

% attribute inquiry (4.5.3, diagram 25): of a subtype, or of the subtype of
% an expression; the attributes of the built-in types are those of App. C
ABNORMAL FUNC attribute(CONST e : node, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR bt : typ;
   VAR c : cons;
   VAR base : text;
   VAR sub : node := as_subtype(e.a);
   CONST name := e.name.ALL;
   IF sub /= NIL THEN
      bt := resolve_subtype(sub, c);
   ELSE
      bt := value_subtype(e.a, c, base);
   END IF;
   IF bt.kind = t_ptr AND c /= NIL AND c.args /= NIL AND bt.decl /= NIL THEN
      % a formal parameter 1 of an indirect type (4.5.3)
      VAR p : node := bt.decl.d;
      VAR a : node := c.args;
      WHILE p /= NIL AND a /= NIL REPEAT
         IF p.name.ALL = name THEN
            VAR pc : cons;
            CONST v := gexpr(a, resolve_subtype(p.a, pc), t);
            RETURN v;
         END IF;
         p := p.next;
         a := a.next;
      END REPEAT;
   END IF;
   WHILE bt.kind = t_ptr AND base /= NIL REPEAT
      finish_ptr(bt);
      base := mk(deref(base.ALL, bt));
      bt := bt.target;
      c := NIL;
      IF bt.kind = t_string THEN
         c := new_cons;
         c.slen := mk("(" & base.ALL & ").len");
      END IF;
   END REPEAT;
   IF bt.kind = t_new AND bt.tparams /= NIL AND c /= NIL AND c.args /= NIL THEN
      % a parameter of a user-defined type is an attribute (4.5.3)
      VAR p : node := bt.tparams;
      VAR a : node := c.args;
      WHILE p /= NIL AND a /= NIL REPEAT
         IF p.name.ALL = name THEN
            CONST pt := tparam_type(bt, name);
            CONST v := gexpr(a, pt, t);
            RETURN v;
         END IF;
         p := p.next;
         a := a.next;
      END REPEAT;
   END IF;
   IF bt.kind = t_new AND bt.tparams = NIL THEN
      c := base_cons(bt, c);
      bt := base_of(bt);
   END IF;
   t := ty_int;
   IF name = "LEN" AND bt.kind = t_string THEN
      IF c /= NIL AND c.slen /= NIL THEN
         RETURN "((rt_int)(" & c.slen.ALL & "))";
      END IF;
      fail(e.line, "the length of this string subtype is not known");
   ELSEIF name = "LEN" AND bt.kind = t_mbox THEN
      % MAILBOX[S](len).LEN (C.11)
      IF c /= NIL AND c.lo /= NIL THEN
         RETURN "((rt_int)(" & c.lo.ALL & "))";
      END IF;
      fail(e.line, "the size of this mailbox subtype is not known");
   ELSEIF (name = "MIN" OR name = "MAX") AND scalar_kind(bt) THEN
      t := bt;
      IF name = "MIN" THEN
         RETURN sub_lo(bt, c);
      END IF;
      RETURN sub_hi(bt, c);
   ELSEIF name = "PREC" AND bt.kind = t_float THEN
      % FLOAT(prec, min .. max).PREC (C.4); the declared precision of FLOAT
      IF c /= NIL AND c.prec /= NIL THEN
         RETURN "((rt_int)(" & c.prec.ALL & "))";
      END IF;
      RETURN "((rt_int)15)";
   ELSEIF (name = "ACCESS" OR name = "USE") AND bt.kind = t_file THEN
      RETURN file_attribute(e, bt, c, base, t);
   END IF;
   fail(e.line, name & " is not an attribute of this subtype");
   RETURN "";
END FUNC attribute;

% type comparison (diagram 11) when either side is a TYPEOF, otherwise
% subtype comparison (diagram 13): the same type and equal constraints (4.1.6)
ABNORMAL FUNC subtype_compare(CONST sa : node, CONST sb : node, READONLY op : STRING[ASCII], CONST line : INT)
      => STRING[ASCII] IMPORTS ALL;
   VAR ca, cb : cons;
   VAR ta : typ := resolve_subtype(sa, ca);
   VAR tb : typ := resolve_subtype(sb, cb);
   VAR r : text := mk("1");
   VAR yes : STRING[ASCII](1) := "1";
   VAR no : STRING[ASCII](1) := "0";
   IF op = "/=" THEN
      yes := "0";
      no := "1";
   END IF;
   IF NOT same(ta, tb) THEN
      RETURN no;
   ELSEIF (sa.kind = s_name AND sa.name.ALL = "TYPEOF") OR (sb.kind = s_name AND sb.name.ALL = "TYPEOF") THEN
      RETURN yes;
   END IF;
   IF scalar_kind(ta) THEN
      r := mk("(" & sub_lo(ta, ca) & ") == (" & sub_lo(tb, cb) & ") && (" & sub_hi(ta, ca) & ") == ("
              & sub_hi(tb, cb) & ")");
      IF ta.kind = t_float THEN
         r := mk(r.ALL & " && " & float_prec(ca) & " == " & float_prec(cb));
      END IF;
   ELSEIF ta.kind = t_string THEN
      IF ca /= NIL AND cb /= NIL AND ca.slen /= NIL AND cb.slen /= NIL THEN
         r := mk("(" & ca.slen.ALL & ") == (" & cb.slen.ALL & ")");
      ELSEIF NOT ((ca = NIL OR ca.slen = NIL) AND (cb = NIL OR cb.slen = NIL)) THEN
         r := mk("0");
      END IF;
   ELSEIF ta.kind = t_array THEN
      FOR k : INT(1 .. ta.ndim) REPEAT
         IF ca /= NIL AND cb /= NIL AND cons_lo(ca, k) /= NIL AND cons_lo(cb, k) /= NIL THEN
            r := mk(r.ALL & " && (" & cons_lo(ca, k).ALL & ") == (" & cons_lo(cb, k).ALL & ") && (" & cons_hi(ca, k).ALL
                    & ") == (" & cons_hi(cb, k).ALL & ")");
         END IF;
      END REPEAT;
   ELSEIF ta.kind = t_new AND ta.tparams /= NIL AND ca /= NIL AND cb /= NIL THEN
      VAR a : node := ca.args;
      VAR b : node := cb.args;
      VAR at, bt2 : typ;
      WHILE a /= NIL AND b /= NIL REPEAT
         CONST x := gexpr(a, NIL, at);
         CONST y := gexpr(b, at, bt2);
         r := mk(r.ALL & " && " & eq_code(at, x, y));
         a := a.next;
         b := b.next;
      END REPEAT;
   ELSEIF ta.kind = t_union AND ca /= NIL AND cb /= NIL THEN
      IF ca.lo /= NIL AND cb.lo /= NIL THEN
         r := mk("(" & ca.lo.ALL & ") == (" & cb.lo.ALL & ")");
      ELSEIF ca.lo /= NIL OR cb.lo /= NIL THEN
         r := mk("0");
      END IF;
   END IF;
   IF op = "/=" THEN
      RETURN "(!(" & r.ALL & "))";
   END IF;
   RETURN "(" & r.ALL & ")";
END FUNC subtype_compare;

FUNC float_prec(CONST c : cons) => STRING[ASCII];
   IF c /= NIL AND c.prec /= NIL THEN
      RETURN "(" & c.prec.ALL & ")";
   END IF;
   RETURN "15";
END FUNC float_prec;

% FILE[S](access, use) .ACCESS and .USE (C.14): ENUM['INPUT, 'OUTPUT, 'UPDATE]
ABNORMAL FUNC file_attribute(CONST e : node, CONST bt : typ, CONST c : cons, CONST base : text, OUT t : typ)
      => STRING[ASCII] IMPORTS ALL;
   t := file_mode_type;
   IF base /= NIL THEN
      IF e.name.ALL = "ACCESS" THEN
         RETURN "rt_r_file_access(" & base.ALL & ")";
      END IF;
      RETURN "rt_r_file_use(" & base.ALL & ")";
   ELSEIF c /= NIL AND c.args /= NIL THEN
      IF e.name.ALL = "ACCESS" THEN
         RETURN gexpr(c.args, t, t);
      ELSEIF c.args.next /= NIL THEN
         RETURN gexpr(c.args.next, t, t);
      END IF;
   END IF;
   fail(e.line, "the " & e.name.ALL & " of this file subtype is not known");
   RETURN "";
END FUNC file_attribute;

ABNORMAL FUNC gbinop(CONST e : node, CONST want : typ, OUT t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR op : text := e.name;
   VAR ta, tb, hint : typ;
   VAR uy : sym;
   t := ty_bool;
   IF (op.ALL = "/=" OR op.ALL = ">" OR op.ALL = "<=" OR op.ALL = ">=") AND derived_relation(e) /= NIL THEN
      RETURN gexpr(derived_relation(e), ty_bool, t);
   END IF;
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
         RETURN "y_set_in(" & a & ", " & s & ")";
      END;
   END IF;
   IF (op.ALL = "AND" OR op.ALL = "OR" OR op.ALL = "XOR") AND set_operands(e, want) /= NIL THEN
      CONST a := gexpr(e.a, set_operands(e, want), ta);
      CONST b := gexpr(e.b, ta, tb);
      check_type(tb, ta, e.line);
      t := ta;
      IF op.ALL = "AND" THEN
         RETURN "y_set_inter(" & a & ", " & b & ")";
      ELSEIF op.ALL = "OR" THEN
         RETURN "y_set_union(" & a & ", " & b & ")";
      END IF;
      RETURN "y_set_xor(" & a & ", " & b & ")";
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
   IF op.ALL = "&" AND want /= NIL AND base_of(want).kind = t_array THEN
      % catenation of one-dimensional arrays indexed by INT (C.7)
      VAR at : typ := base_of(want);
      CONST a := gexpr(e.a, at, ta);
      CONST b := gexpr(e.b, at, tb);
      check_type(ta, at, e.line);
      check_type(tb, at, e.line);
      IF at.ndim /= 1 OR base_of(at.idx).kind /= t_int THEN
         fail(e.line, "& catenates one-dimensional arrays indexed by INT");
      END IF;
      need_slice(at);
      t := at;
      RETURN "rt_r_acat_" & ctype(at) & "(" & a & ", " & b & ")";
   END IF;
   IF op.ALL = "&" THEN
      VAR wa, wb, ws : typ;
      VAR ce : typ := ty_ascii;
      IF want /= NIL AND want.kind = t_string THEN
         ws := want;
         ce := str_elem(want);
      END IF;
      IF e.a.kind = n_enum THEN
         wa := ce;
      ELSE
         wa := ws;
      END IF;
      IF e.b.kind = n_enum THEN
         wb := ce;
      ELSE
         wb := ws;
      END IF;
      BEGIN
         CONST a := gexpr(e.a, wa, ta);
         CONST b := gexpr(e.b, wb, tb);
         t := ty_string;
         IF ta.kind = t_string THEN
            t := ta;
         ELSEIF tb.kind = t_string THEN
            t := tb;
         ELSEIF NOT same(ta, ty_ascii) THEN
            % two characters of another character set (C.8)
            t := new_typ(t_string);
            t.elem := ta;
         END IF;
         IF ta.kind = t_array AND tb.kind = t_array THEN
            need_slice(ta);
            check_type(tb, ta, e.line);
            t := ta;
            RETURN "rt_r_acat_" & ctype(ta) & "(" & a & ", " & b & ")";
         END IF;
         IF ta.kind = t_string THEN
            check_type(str_cat_part(tb), str_elem(ta), e.line);
         ELSEIF tb.kind = t_string THEN
            check_type(ta, str_elem(tb), e.line);
         ELSE
            check_type(tb, ta, e.line);
         END IF;
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
   IF (op.ALL = "=" OR op.ALL = "/=") AND as_subtype(e.a) /= NIL AND as_subtype(e.b) /= NIL THEN
      t := ty_bool;
      RETURN subtype_compare(as_subtype(e.a), as_subtype(e.b), op.ALL, e.line);
   END IF;
   IF is_rel(op.ALL) AND op.ALL /= "IN" THEN
      IF e.a.kind = n_enum OR e.a.kind = n_nil OR e.a.kind = n_int THEN
         CONST dummy := gexpr(e.b, NIL, hint);
      ELSEIF e.a.kind = n_cons THEN
         hint := peek_type(e.b);
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
            % the relations are the subset relations (C.9)
            IF op.ALL = "=" THEN
               RETURN "y_set_eq(" & a & ", " & b & ")";
            ELSEIF op.ALL = "/=" THEN
               RETURN "(!y_set_eq(" & a & ", " & b & "))";
            ELSEIF op.ALL = "<=" THEN
               RETURN "rt_r_set_le(" & a & ", " & b & ")";
            ELSEIF op.ALL = ">=" THEN
               RETURN "rt_r_set_le(" & b & ", " & a & ")";
            ELSEIF op.ALL = "<" THEN
               RETURN "rt_r_set_lt(" & a & ", " & b & ")";
            END IF;
            RETURN "rt_r_set_lt(" & b & ", " & a & ")";
         END IF;
         IF (ct.kind = t_bool OR ct.kind = t_ptr OR ct.kind = t_nil OR ct.kind = t_act OR ct.kind = t_mbox)
               AND op.ALL /= "=" AND op.ALL /= "/=" THEN
            % only = and /= are defined for BOOL (C.1) and the reference types
            fail(e.line, "only = and /= compare values of this type");
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

% constructors (5.6): of the type and subtype the context resolves them to
% (5.7); ctx is the subtype when the context knows it
ABNORMAL FUNC constructor(CONST e : node, CONST want : typ, CONST ctx : cons, OUT t : typ) => STRING[ASCII]
      IMPORTS ALL;
   VAR it : node := e.a;
   VAR f : field;
   VAR vt : typ;
   IF want /= NIL AND want.kind = t_set THEN
      VAR s : text := mk(empty_set(want));
      t := want;
      WHILE it /= NIL REPEAT
         CONST v := gexpr(it.b, want.elem, vt);
         check_type(vt, want.elem, e.line);
         s := mk("y_set_add(" & s.ALL & ", " & v & ")");
         it := it.next;
      END REPEAT;
      RETURN s.ALL;
   END IF;
   IF want /= NIL AND want.kind = t_new THEN
      fail(e.line, "a constructor for " & want.name.ALL & " needs the underlying type");
   END IF;
   IF want /= NIL AND want.kind = t_array THEN
      RETURN array_cons(e, want, ctx, t);
   END IF;
   IF want /= NIL AND want.kind = t_union THEN
      % one component (5.6)
      IF it = NIL OR it.next /= NIL OR it.a = NIL OR it.a.next /= NIL OR it.a.a.kind /= n_name THEN
         fail(e.line, "a union constructor gives one named component");
      END IF;
      f := want.fields;
      BEGIN
         VAR i : INT := 0;
         CONST tmp := new_name("uc");
         WHILE f /= NIL AND f.name.ALL /= it.a.a.name.ALL REPEAT
            i := i + 1;
            f := f.next;
         END REPEAT;
         IF f = NIL THEN
            fail(e.line, "no component " & it.a.a.name.ALL);
         END IF;
         t := want;
         cons_ctx := f.c;
         BEGIN
            CONST v := gexpr(it.b, f.t, vt);
            check_type(vt, f.t, e.line);
            RETURN "({ " & ctype(want) & " " & tmp & "; " & tmp & ".tag = " & itos(i) & "; " & tmp & ".u."
                   & field_c(f.name.ALL) & " = " & comp_value(f.t, f.c, v) & "; " & tmp & "; })";
         END;
      END;
   END IF;
   IF want = NIL OR want.kind /= t_record THEN
      fail(e.line, "the type of this constructor is not known here");
   END IF;
   % a value for each component, in order; names may share a value (5.6)
   t := want;
   f := want.fields;
   BEGIN
      CONST tmp := new_name("rc");
      VAR parts : text := mk("({ " & ctype(want) & " " & tmp & ";");
      WHILE it /= NIL REPEAT
         VAR k : node := it.a;
         VAR shared : text;
         IF k = NIL THEN
            fail(e.line, "a record constructor names its components");
         END IF;
         WHILE k /= NIL REPEAT
            IF f = NIL OR k.a.kind /= n_name OR k.b /= NIL OR k.a.name.ALL /= f.name.ALL THEN
               IF f = NIL THEN
                  fail(e.line, "a record constructor has a value for each component, in order");
               END IF;
               fail(e.line, "component " & f.name.ALL & " expected in the constructor");
            END IF;
            IF it.a.next = NIL THEN
               cons_ctx := f.c;
               BEGIN
                  CONST v := gexpr(it.b, f.t, vt);
                  check_type(vt, f.t, e.line);
                  parts := mk(parts.ALL & " " & tmp & "." & field_c(f.name.ALL) & " = " & comp_value(f.t, f.c, v) & ";");
               END;
            ELSE
               IF shared = NIL THEN
                  CONST v := gexpr(it.b, f.t, vt);
                  shared := mk(new_name("sv"));
                  check_type(vt, f.t, e.line);
                  parts := mk(parts.ALL & " " & ctype(f.t) & " " & shared.ALL & " = " & v & ";");
               END IF;
               check_type(vt, f.t, e.line);
               parts := mk(parts.ALL & " " & tmp & "." & field_c(f.name.ALL) & " = "
                           & comp_value(f.t, f.c, copy_code(f.t, shared.ALL)) & ";");
            END IF;
            f := f.next;
            k := k.next;
         END REPEAT;
         it := it.next;
      END REPEAT;
      IF f /= NIL THEN
         fail(e.line, "a record constructor needs every component");
      END IF;
      RETURN parts.ALL & " " & tmp & "; })";
   END;
END FUNC constructor;

% a component value checked against the component's subtype
ABNORMAL FUNC comp_value(CONST t : typ, CONST c : cons, READONLY v : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   IF c = NIL OR (c.lo /= NIL AND has_at(c.lo.ALL)) THEN
      RETURN copy_code(t, v);
   ELSEIF t.kind = t_string AND c.slen /= NIL AND NOT has_at(c.slen.ALL) THEN
      RETURN copy_code(t, "rt_r_strsub(" & v & ", " & c.slen.ALL & ")");
   END IF;
   RETURN checked(t, c, copy_code(t, v));
END FUNC comp_value;

FUNC has_at(READONLY s : STRING[ASCII]) => BOOL;
   FOR i : INT(1 .. s.LEN) REPEAT
      IF s(i) = 'AT THEN
         RETURN TRUE;
      END IF;
   END REPEAT;
   RETURN FALSE;
END FUNC has_at;

% an element of a set (C.9): sets hold the values 0 .. 255
ABNORMAL FUNC set_elem(CONST st : typ, READONLY v : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   RETURN v;
END FUNC set_elem;

% an array constructor (5.6, diagram 33): a value for each component, given
% by position, or for keys: in n dimensions a key gives n indexes or ranges;
% a key may also give a row whose value is a constructor of the rest
ABNORMAL FUNC array_cons(CONST e : node, CONST at : typ, CONST ctx : cons, OUT t : typ) => STRING[ASCII]
      IMPORTS ALL;
   CONST tmp := new_name("ac");
   VAR parts : text := mk("({ " & ctype(at) & " " & tmp & ";");
   VAR it : node := e.a;
   VAR positional : BOOL := TRUE;
   t := at;
   WHILE it /= NIL REPEAT
      IF it.a /= NIL THEN
         positional := FALSE;
      END IF;
      it := it.next;
   END REPEAT;
   FOR k : INT(1 .. at.ndim) REPEAT
      VAR lo, hi : text;
      IF ctx /= NIL AND cons_lo(ctx, k) /= NIL AND NOT has_at(cons_lo(ctx, k).ALL) THEN
         lo := cons_lo(ctx, k);
         hi := cons_hi(ctx, k);
      ELSEIF at.ndim = 1 AND positional THEN
         % positions count from the first value of the index type
         IF base_of(at.idx).kind = t_enum THEN
            lo := mk("0");
         ELSE
            lo := mk("1");
         END IF;
         hi := mk("(" & lo.ALL & " + " & itos(list_len(e.a)) & " - 1)");
      ELSE
         fail(e.line, "the subtype of this array constructor is not known here (use #)");
      END IF;
      parts := mk(parts.ALL & " " & tmp & "." & dim_lo(k) & " = " & lo.ALL & "; " & tmp & "." & dim_hi(k) & " = "
                  & hi.ALL & ";");
   END REPEAT;
   IF at.ndim = 1 THEN
      parts := mk(parts.ALL & " " & tmp & ".lo2 = " & tmp & ".hi2 = 1;");
   END IF;
   parts := mk(parts.ALL & " rt_int n_" & tmp & " = " & acnt(at, tmp) & "; " & tmp & ".p = rt_alloc(sizeof("
               & ctype(at.elem) & ") * (size_t)n_" & tmp & " + 1); unsigned char *seen_" & tmp & " = rt_alloc((size_t)n_"
               & tmp & " + 1);");
   parts := mk(parts.ALL & fill_items(e.a, at, tmp, NIL, 1));
   % a single value for each component (5.6)
   parts := mk(parts.ALL & " for (rt_int i_ = 0; i_ < n_" & tmp & "; i_++) if (seen_" & tmp
               & "[i_] != 1) rt_raise_msg(rt_exc(" & q & "X_ARRAY" & q & "), " & q & "constructor" & q & "); "
               & tmp & "; })");
   RETURN parts.ALL;
END FUNC array_cons;

% the C that fills the components for constructor items, with the indexes of
% the dimensions before dim already chosen (prefix)
ABNORMAL FUNC fill_items(CONST items : node, CONST at : typ, READONLY tmp : STRING[ASCII], CONST prefix : lines,
                         CONST dim : INT) => STRING[ASCII] IMPORTS ALL;
   VAR it : node := items;
   VAR pos : INT := 0;
   VAR r : text := mk("");
   VAR vt : typ;
   WHILE it /= NIL REPEAT
      IF it.a = NIL THEN
         % by position
         IF dim < at.ndim AND it.b.kind = n_cons THEN
            r := mk(r.ALL & " { rt_int x_" & itos(dim) & " = " & tmp & "." & dim_lo(dim) & " + " & itos(pos) & "; "
                    & fill_items(it.b.a, at, tmp, add_line(prefix, "x_" & itos(dim)), dim + 1) & " }");
         ELSE
            CONST v := item_value(it.b, at, e_line(it), vt);
            IF dim = 1 AND at.ndim > 1 THEN
               % all the components, in row-major order
               r := mk(r.ALL & " { " & v & " if (" & itos(pos) & " >= n_" & tmp & ") rt_raise_msg(rt_exc(" & q
                       & "X_ARRAY" & q & "), " & q & "constructor" & q & "); " & tmp & ".p[" & itos(pos) & "] = "
                       & copy_code(at.elem, "v_") & "; seen_" & tmp & "[" & itos(pos) & "]++; }");
            ELSE
               r := mk(r.ALL & " { " & v & " rt_int x_" & itos(dim) & " = " & tmp & "." & dim_lo(dim) & " + " & itos(pos)
                       & "; " & store_at(at, tmp, add_line(prefix, "x_" & itos(dim)), dim) & " }");
            END IF;
         END IF;
         pos := pos + 1;
      ELSEIF dim + list_len(it.a) - 1 = at.ndim THEN
         % each key gives the indexes of the remaining dimensions
         VAR k : node := it.a;
         VAR d : INT := dim;
         VAR pre : lines := prefix;
         VAR loops, ends : text := mk("");
         CONST v := item_value(it.b, at, it.line, vt);
         WHILE k /= NIL REPEAT
            CONST xv := "x_" & itos(d);
            loops := mk(loops.ALL & key_loop(k, at, d, xv));
            ends := mk(ends.ALL & " }");
            pre := add_line(pre, xv);
            d := d + 1;
            k := k.next;
         END REPEAT;
         r := mk(r.ALL & " { " & v & loops.ALL & " " & store_at(at, tmp, pre, at.ndim) & ends.ALL & " }");
      ELSEIF dim = at.ndim OR it.b.kind = n_cons THEN
         % keys that are alternatives for this dimension
         VAR k : node := it.a;
         WHILE k /= NIL REPEAT
            CONST xv := "x_" & itos(dim);
            IF dim < at.ndim THEN
               r := mk(r.ALL & " {" & key_loop(k, at, dim, xv) & " "
                       & fill_items(it.b.a, at, tmp, add_line(prefix, xv), dim + 1) & " } }");
            ELSE
               CONST v := item_value(it.b, at, it.line, vt);
               r := mk(r.ALL & " { " & v & key_loop(k, at, dim, xv) & " " & store_at(at, tmp, add_line(prefix, xv), dim)
                       & " } }");
            END IF;
            k := k.next;
         END REPEAT;
      ELSE
         fail(it.line, "a key of this array constructor gives " & itos(at.ndim - dim + 1) & " indexes");
      END IF;
      it := it.next;
   END REPEAT;
   RETURN r.ALL;
END FUNC fill_items;

FUNC e_line(CONST e : node) => INT;
   RETURN e.line;
END FUNC e_line;

ABNORMAL FUNC add_line(CONST l : lines, READONLY s : STRING[ASCII]) => lines;
   VAR r, tail, x : lines;
   VAR p : lines := l;
   WHILE p /= NIL REPEAT
      ALLOC x PTR;
      x.s := p.s;
      IF tail = NIL THEN
         r := x;
      ELSE
         tail.next := x;
      END IF;
      tail := x;
      p := p.next;
   END REPEAT;
   ALLOC x PTR;
   x.s := mk(s);
   IF tail = NIL THEN
      r := x;
   ELSE
      tail.next := x;
   END IF;
   RETURN r;
END FUNC add_line;

% the value of a constructor item, held in v_, as C declaring it
ABNORMAL FUNC item_value(CONST e : node, CONST at : typ, CONST line : INT, OUT vt : typ) => STRING[ASCII]
      IMPORTS ALL;
   cons_ctx := at.elemcons;
   BEGIN
      CONST v := gexpr(e, at.elem, vt);
      check_type(vt, at.elem, line);
      RETURN ctype(at.elem) & " v_ = " & comp_value(at.elem, at.elemcons, v) & ";";
   END;
END FUNC item_value;

% a loop of xv over the values of a key (an index or a range) of dimension d
ABNORMAL FUNC key_loop(CONST k : node, CONST at : typ, CONST d : INT, READONLY xv : STRING[ASCII]) => STRING[ASCII]
      IMPORTS ALL;
   VAR it : typ;
   CONST lo := gexpr(k.a, idx_type(at, d), it);
   check_type(it, idx_type(at, d), k.line);
   IF k.b = NIL THEN
      RETURN " { rt_int " & xv & " = " & lo & ";";
   END IF;
   BEGIN
      CONST hi := gexpr(k.b, idx_type(at, d), it);
      check_type(it, idx_type(at, d), k.line);
      RETURN " for (rt_int " & xv & " = " & lo & ", h" & xv & " = " & hi & "; " & xv & " <= h" & xv & "; " & xv & "++) {";
   END;
END FUNC key_loop;

% v_ stored at the indexes in xs: X_SUBSCRIPT outside the bounds
ABNORMAL FUNC store_at(CONST at : typ, READONLY tmp : STRING[ASCII], CONST xs : lines, CONST n : INT) => STRING[ASCII]
      IMPORTS ALL;
   VAR off : text;
   VAR x : lines := xs;
   VAR k : INT := 0;
   WHILE x /= NIL REPEAT
      k := k + 1;
      BEGIN
         CONST l := tmp & "." & dim_lo(k);
         CONST h := tmp & "." & dim_hi(k);
         IF off = NIL THEN
            off := mk("(rt_index(" & x.s.ALL & ", " & l & ", " & h & ") - " & l & ")");
         ELSE
            off := mk("(" & off.ALL & " * RT_R_EXT(" & l & ", " & h & ") + rt_index(" & x.s.ALL & ", " & l & ", " & h
                      & ") - " & l & ")");
         END IF;
      END;
      x := x.next;
   END REPEAT;
   IF k /= at.ndim THEN
      fail(0, "a constructor component needs " & itos(at.ndim) & " indexes");
   END IF;
   RETURN "{ rt_int o_ = " & off.ALL & "; " & tmp & ".p[o_] = " & copy_code(at.elem, "v_") & "; seen_" & tmp
          & "[o_]++; }";
END FUNC store_at;

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
ABNORMAL FUNC resolve_overload(READONLY name : STRING[ASCII], CONST tt : node, CONST args : node,
                               CONST is_stmt : BOOL, CONST line : INT) => sym IMPORTS ALL;
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
            IF ((y.kind = y_proc) = is_stmt) AND tt_fits(y, tt) AND fits(y, args) THEN
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

% does the actual translation time property list tt fit the list of a
% (non-generic) subprogram, such as # [money] (13.5)? Each is a type
ABNORMAL FUNC tt_fits(CONST y : sym, CONST tt : node) => BOOL IMPORTS ALL;
   VAR f, a : node;
   VAR saved : buffer := code;
   VAR ok : BOOL := TRUE;
   IF y.decl = NIL OR y.decl.e = NIL THEN
      RETURN tt = NIL;
   ELSEIF tt = NIL THEN
      RETURN FALSE;
   END IF;
   f := y.decl.e;
   a := tt;
   trial := trial + 1;
   code := new_buffer;
   GUARD
      WHILE ok AND f /= NIL AND a /= NIL REPEAT
         VAR fc, ac : cons;
         VAR fst : node := nn(s_name, f.line);
         VAR ft, at : typ;
         fst.name := f.name;
         ft := resolve_subtype(fst, fc);
         IF a.kind >= s_int THEN
            at := resolve_subtype(a, ac);
         ELSE
            VAR ast : node := nn(s_name, a.line);
            ast.name := a.name;
            at := resolve_subtype(ast, ac);
         END IF;
         ok := same(ft, at);
         f := f.next;
         a := a.next;
      END REPEAT;
      ok := ok AND f = NIL AND a = NIL;
   BY
      WHEN compile_error =>
         ok := FALSE;
   END GUARD;
   trial := trial - 1;
   code := saved;
   RETURN ok;
END FUNC tt_fits;

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
   VAR gd : node;
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
      VAR alt : sym := resolve_overload(fn.name.ALL, tt, e.b, is_stmt, e.line);
      IF alt /= NIL THEN
         y := alt;
      ELSEIF is_builtin(fn.name.ALL) THEN
         RETURN builtin(fn.name.ALL, tt, e.b, e.line, is_stmt, t);
      END IF;
   END IF;
   IF y.kind = y_generic THEN
      gd := y.decl;
      y := instantiate(y, tt, e.b, e.line);
   ELSEIF y.kind = y_func OR y.kind = y_proc THEN
      y := resolve_overload(fn.name.ALL, tt, e.b, is_stmt, e.line);
      IF y = NIL THEN
         RETURN builtin(fn.name.ALL, tt, e.b, e.line, is_stmt, t);
      END IF;
   END IF;
   IF y.kind /= y_func AND y.kind /= y_proc THEN
      fail(e.line, fn.name.ALL & " cannot be invoked");
   END IF;
   check_requires(y, e.line);
   IF y.capn /= NIL THEN
      % a normal function with imports is not invoked inside its capsule (7.2.1)
      VAR cr : caprec := caps;
      WHILE cr /= NIL REPEAT
         IF cr.d = y.capn THEN
            fail(e.line, y.name.ALL & " is a normal function with an imports list: it may not be invoked inside its capsule");
         END IF;
         cr := cr.next;
      END REPEAT;
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
         CONST v := gexpr_in(a, pm.t, pm.c, vt);
         CONST ct := ctype(pm.t);
         check_type(vt, pm.t, e.line);
         args := mk(args.ALL & "({ " & ct & " *b_ = rt_alloc(sizeof(" & ct & ")); *b_ = " & v & "; b_; })");
         IF scalar_kind(pm.t) THEN
            % a value has no subtype to compare with the formal's
            args := mk(args.ALL & ", 1, 0");
         END IF;
      ELSE
         CONST v := gexpr_in(a, pm.t, pm.c, vt);
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
   IF gd /= NIL THEN
      % one SUBTYPE generic parameter stands for one subtype (11.3.2)
      CONST chk := same_subtypes(gd, e.b);
      IF chk /= "" THEN
         RETURN "({ if (" & chk & ") rt_raise_msg(RT_X_SUBTYPE, " & q & "generic subtype" & q & "); "
                & y.cname.ALL & "(" & args.ALL & "); })";
      END IF;
   END IF;
   RETURN y.cname.ALL & "(" & args.ALL & ")";
END FUNC gcall;

% the variables a deferred unit requires (3.6): those it imports and those
% required by the deferred units it invokes
ABNORMAL FUNC requires(CONST y : sym) => lines IMPORTS ALL;
   IF y.reqdone THEN
      RETURN y.reqs;
   END IF;
   y.reqdone := TRUE;
   IF y.decl /= NIL AND (y.decl.kind = n_proc OR y.decl.kind = n_func OR y.decl.kind = n_task) THEN
      VAR imp : node := y.decl.d;
      WHILE imp /= NIL REPEAT
         add_req(y, imp.name.ALL);
         imp := imp.next;
      END REPEAT;
      require_calls(y, y.decl.c);
   END IF;
   RETURN y.reqs;
END FUNC requires;

PROC add_req(CONST y : sym, READONLY name : STRING[ASCII]);
   VAR l : lines;
   IF NOT seen_name(y.reqs, name) THEN
      ALLOC l PTR;
      l.s := mk(name);
      l.next := y.reqs;
      y.reqs := l;
   END IF;
END PROC add_req;

PROC require_calls(CONST y : sym, CONST e : node) IMPORTS ALL;
   VAR x : node := e;
   WHILE x /= NIL REPEAT
      IF x.kind = n_proc OR x.kind = n_func OR x.kind = n_task OR x.kind = n_capsule OR x.kind = n_generic THEN
         % invoked only if something invokes it
         x := x.next;
      ELSE
         VAR callee : node;
         IF (x.kind = n_apply OR x.kind = n_call) AND x.a /= NIL AND x.a.kind = n_name THEN
            callee := x.a;
         END IF;
         IF callee /= NIL THEN
            VAR z : sym := lookup(callee.name.ALL);
            IF z /= NIL AND z /= y AND (z.kind = y_proc OR z.kind = y_func) THEN
               VAR l : lines := requires(z);
               WHILE l /= NIL REPEAT
                  add_req(y, l.s.ALL);
                  l := l.next;
               END REPEAT;
            END IF;
         END IF;
         IF x.a /= NIL THEN
            require_calls(y, x.a);
         END IF;
         IF x.b /= NIL THEN
            require_calls(y, x.b);
         END IF;
         IF x.c /= NIL THEN
            require_calls(y, x.c);
         END IF;
         x := x.next;
      END IF;
   END REPEAT;
END PROC require_calls;

FUNC declared_in(CONST elems : node, READONLY name : STRING[ASCII]) => BOOL;
   VAR e : node := elems;
   WHILE e /= NIL REPEAT
      IF (e.kind = n_var OR e.kind = n_const) AND e.name.ALL = name THEN
         RETURN TRUE;
      END IF;
      e := e.next;
   END REPEAT;
   RETURN FALSE;
END FUNC declared_in;

% no invocation of a deferred unit that requires a variable may appear before
% the definition of the variable (3.6)
PROC check_requires(CONST y : sym, CONST line : INT) IMPORTS ALL;
   VAR l : lines := requires(y);
   % invocations elaborated with the body that declares the unit; one inside
   % another deferred unit is elaborated when that unit is invoked
   IF y.home = NIL OR y.level /= cur_level THEN
      RETURN;
   END IF;
   WHILE l /= NIL REPEAT
      VAR z : sym := lookup(l.s.ALL);
      IF declared_in(y.home, l.s.ALL) AND (z = NIL OR z.depth < y.depth) THEN
         fail(line, y.name.ALL & " requires " & l.s.ALL & ", which is not yet defined here");
      END IF;
      l := l.next;
   END REPEAT;
END PROC check_requires;

% the time and the activation of DELAY_UNTIL(t, a) or DELAY_UNTIL(a, t), as C
ABNORMAL FUNC act_delay_args(CONST args : node) => STRING[ASCII] IMPORTS ALL;
   VAR at : typ;
   VAR t1 : typ := peek_type(args);
   IF t1 /= NIL AND t1.kind = t_act THEN
      CONST a := act_ref(args);
      CONST v := gexpr(args.next, ty_int, at);
      check_type(at, ty_int, args.line);
      RETURN v & ", " & a;
   END IF;
   BEGIN
      CONST v := gexpr(args, ty_int, at);
      check_type(at, ty_int, args.line);
      RETURN v & ", " & act_ref(args.next);
   END;
END FUNC act_delay_args;

% C that is true when actuals of formals declared by the same SUBTYPE generic
% parameter have different subtypes, "" when there is nothing to check
ABNORMAL FUNC same_subtypes(CONST gd : node, CONST args : node) => STRING[ASCII] IMPORTS ALL;
   VAR p : node := gd.a;
   VAR r : text := mk("");
   WHILE p /= NIL REPEAT
      IF p.ival = 2 THEN
         VAR fp : node := gd.b.a;
         VAR a : node := args;
         VAR flo, fhi : text;
         WHILE fp /= NIL AND a /= NIL REPEAT
            IF fp.a /= NIL AND fp.a.kind = s_name AND fp.a.name.ALL = p.name.ALL AND fp.a.b = NIL THEN
               VAR st : typ;
               VAR c : cons;
               VAR base : text;
               VAR lo, hi : text;
               st := value_subtype(a, c, base);
               IF scalar_kind(st) THEN
                  lo := mk(sub_lo(st, c));
                  hi := mk(sub_hi(st, c));
               ELSEIF st.kind = t_string AND c.slen /= NIL THEN
                  lo := c.slen;
                  hi := c.slen;
               END IF;
               IF lo /= NIL AND flo /= NIL THEN
                  IF r.LEN > 0 THEN
                     r := mk(r.ALL & " || ");
                  END IF;
                  r := mk(r.ALL & "(" & flo.ALL & ") != (" & lo.ALL & ") || (" & fhi.ALL & ") != (" & hi.ALL & ")");
               ELSEIF lo /= NIL THEN
                  flo := lo;
                  fhi := hi;
               END IF;
            END IF;
            fp := fp.next;
            a := a.next;
         END REPEAT;
      END IF;
      p := p.next;
   END REPEAT;
   RETURN r.ALL;
END FUNC same_subtypes;

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
   ELSEIF name = "DELAY_UNTIL" AND n = 2 THEN
      % the activation clock of a (10.4): DELAY_UNTIL(t, a), or (a, t) as in C.10
      RETURN "rt_r_delay_act(" & act_delay_args(args) & ")";
   ELSEIF name = "DELAY_UNTIL" THEN
      CONST v := gexpr(args, ty_int, at);
      RETURN "rt_delay_until(" & v & ")";
   ELSEIF name = "DELAY_UNTIL_INACTIVE" THEN
      RETURN "rt_delay_until_inactive(" & act_ref(args) & ")";
   ELSEIF name = "TIME" AND n = 1 THEN
      % the activation clock of an activation (10.4)
      t := ty_int;
      RETURN "rt_r_act_time(" & act_ref(args) & ")";
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
      IF suppressed("X_FREE") THEN
         % no look for other pointers to the variable (B)
         IF needs_fin(pt.target) THEN
            RETURN "({ if (" & pv.ALL & ") { " & fin_code(cell_deref(pt, pv.ALL), pt.target)
                   & " } rt_r_free_unchecked((void **)&" & pv.ALL & "); })";
         END IF;
         RETURN "rt_r_free_unchecked((void **)&" & pv.ALL & ")";
      ELSEIF needs_fin(pt.target) THEN
         % the variable ceases to exist: finalized once FREE may reclaim it (13.3)
         RETURN "({ rt_free_check((void **)&" & pv.ALL & "); if (" & pv.ALL & ") { "
                & fin_code(cell_deref(pt, pv.ALL), pt.target) & " } rt_free((void **)&" & pv.ALL & "); })";
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
