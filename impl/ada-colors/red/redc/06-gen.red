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
