% ---- declarations ------------------------------------------------------------------

% first pass over a body: deferred declarations may be used before they appear (3.6)
PROC declare_body(CONST elems : node) IMPORTS ALL;
   VAR e : node := elems;
   WHILE e /= NIL REPEAT
      IF e.kind = n_const AND e.flag = 0 THEN
         manifest_const(e);
      ELSEIF e.kind = n_capsule THEN
         gen_capsule(e);
      ELSEIF e.kind = n_expose THEN
         gen_expose(e);
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
         y.decl := e;
         define(y, e.line);
      END IF;
      e := e.next;
   END REPEAT;
   e := elems;
   WHILE e /= NIL REPEAT
      IF e.kind = n_proc OR e.kind = n_func OR e.kind = n_task THEN
         declare_subprogram(e);
      END IF;
      e := e.next;
   END REPEAT;
END PROC declare_body;

% a constant whose value is a manifest INT expression is known during
% translation (5.5), so it can be used before the body is elaborated
PROC manifest_const(CONST d : node) IMPORTS ALL;
   VAR ok : BOOL;
   VAR v : INT;
   VAR y : sym;
   VAR c : cons;
   IF d.a /= NIL THEN
      IF d.a.kind /= s_int OR d.a.a /= NIL THEN
         RETURN;
      END IF;
   END IF;
   v := manifest(d.b, ok);
   IF NOT ok THEN
      RETURN;
   END IF;
   d.flag := 1;
   y := new_sym(y_const, d.name);
   y.t := ty_int;
   y.c := new_cons;
   y.mvalue := v;
   y.hasmv := TRUE;
   y.ro_flag := TRUE;
   y.access := mk("((rt_int)" & itos(v) & "LL)");
   define(y, d.line);
END PROC manifest_const;

FUNC exported(CONST d : node, READONLY name : STRING[ASCII], OUT ro : BOOL) => BOOL;
   VAR p : node := d.a;
   ro := FALSE;
   IF d.ival = 1 THEN
      RETURN TRUE;
   END IF;
   WHILE p /= NIL REPEAT
      IF p.name.ALL = name THEN
         ro := p.ival = 1;
         RETURN TRUE;
      END IF;
      p := p.next;
   END REPEAT;
   RETURN FALSE;
END FUNC exported;

ABNORMAL FUNC copy_sym(CONST y : sym) => sym;
   VAR z : sym;
   ALLOC z PTR;
   z.kind := y.kind;
   z.name := y.name;
   z.t := y.t;
   z.c := y.c;
   z.access := y.access;
   z.cname := y.cname;
   z.ro_flag := y.ro_flag;
   z.mvalue := y.mvalue;
   z.hasmv := y.hasmv;
   z.st := y.st;
   z.decl := y.decl;
   z.params := y.params;
   z.result := y.result;
   z.level := y.level;
   z.byref := y.byref;
   z.members := y.members;
   RETURN z;
END FUNC copy_sym;

% a capsule invoked as old (8.1): its body is elaborated once, on entry to the
% scope where it is declared; the exported definitions are kept for EXPOSE
PROC gen_capsule(CONST d : node) IMPORTS ALL;
   VAR y : sym := new_sym(y_capsule, d.name);
   VAR ctx : fctxrec;
   VAR m : sym;
   VAR p : node := d.a;
   VAR ro : BOOL;
   y.decl := d;
   open_scope;
   ALLOC ctx PTR;
   ctx.depth := depth;
   ctx.imps := d.d;
   ctx.all_imp := d.flag >= 2;
   ctx.next := fctx;
   fctx := ctx;
   declare_body(d.c);
   body_elements(d.c);
   fctx := fctx.next;
   % fix the types while the capsule's own definitions are still known
   m := scope_stack;
   WHILE m /= NIL AND m.depth = depth REPEAT
      IF m.kind = y_type AND m.t = NIL AND m.decl /= NIL AND m.decl.kind = n_newtype
            AND m.decl.b /= NIL THEN
         m.t := new_type(m, nn(s_name, d.line), m.c);
      ELSEIF (m.kind = y_type OR m.kind = y_abbrev) AND m.t = NIL THEN
         m.t := resolve_subtype(m.st, m.c);
      ELSEIF m.kind = y_type AND m.t.kind = t_ptr THEN
         finish_ptr(m.t);
      END IF;
      m := m.stack;
   END REPEAT;
   m := scope_stack;
   WHILE m /= NIL AND m.depth = depth REPEAT
      IF exported(d, m.name.ALL, ro) THEN
         VAR z : sym := copy_sym(m);
         IF ro THEN
            z.ro_flag := TRUE;
         END IF;
         z.mnext := y.members;
         y.members := z;
      END IF;
      m := m.stack;
   END REPEAT;
   WHILE p /= NIL REPEAT
      IF lookup(p.name.ALL) = NIL OR lookup(p.name.ALL).depth /= depth THEN
         fail(d.line, p.name.ALL & " is exported but not defined in capsule " & d.name.ALL);
      END IF;
      p := p.next;
   END REPEAT;
   close_scope;
   define(y, d.line);
END PROC gen_capsule;

% EXPOSE visible-list FROM capsule (8.1, 8.2)
PROC gen_expose(CONST d : node) IMPORTS ALL;
   VAR y : sym := lookup(d.name.ALL);
   VAR m : sym;
   VAR p : node := d.a;
   IF y = NIL OR y.kind /= y_capsule THEN
      fail(d.line, d.name.ALL & " is not a capsule");
   END IF;
   IF d.ival = 1 THEN
      m := y.members;
      WHILE m /= NIL REPEAT
         define(copy_sym(m), d.line);
         m := m.mnext;
      END REPEAT;
      RETURN;
   END IF;
   WHILE p /= NIL REPEAT
      VAR found : BOOL := FALSE;
      m := y.members;
      WHILE m /= NIL REPEAT
         IF m.name.ALL = p.name.ALL THEN
            VAR z : sym := copy_sym(m);
            IF p.ival = 1 THEN
               z.ro_flag := TRUE;
            END IF;
            define(z, d.line);
            found := TRUE;
         END IF;
         m := m.mnext;
      END REPEAT;
      IF NOT found THEN
         fail(d.line, p.name.ALL & " is not exported by " & d.name.ALL);
      END IF;
      p := p.next;
   END REPEAT;
END PROC gen_expose;

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
   ELSEIF d.kind = n_task THEN
      y := new_sym(y_task, d.name);
   ELSE
      y := new_sym(y_proc, d.name);
   END IF;
   WHILE p /= NIL REPEAT
      VAR pm : parm;
      ALLOC pm PTR;
      pm.name := p.name;
      pm.mode := p.ival;
      pm.t := resolve_subtype(p.a, pm.c);
      pm.cfield := mk(new_name(lower_s(p.name.ALL) & "_"));
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
   y.cname := mk(new_name("f_" & c_ident(d.name.ALL) & "_"));
   y.decl := d;
   y.level := cur_level;
   IF d.kind = n_task THEN
      put(out_globals, "static rt_taskdecl " & y.cname.ALL & "decl;");
   END IF;
   define(y, d.line);
END PROC declare_subprogram;

PROC element(CONST e : node) IMPORTS ALL;
   VAR k : INT := e.kind;
   IF k = n_proc OR k = n_func OR k = n_task THEN
      subprogram(e);
   ELSEIF k = n_exception OR k = n_abbrev OR k = n_newtype OR k = n_capsule OR k = n_expose THEN
      RETURN;
   ELSEIF k = n_ptrtype THEN
      finish_ptr(lookup(e.name.ALL).t);
   ELSEIF k = n_var THEN
      var_decl(e);
   ELSEIF k = n_const AND e.flag = 0 THEN
      const_decl(e);
   ELSEIF k = n_const THEN
      RETURN;
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
      st_field := mk(g);
      RETURN g;
   END IF;
   BEGIN
      CONST f := new_name(lower_s(name) & "_");
      put(fields_buf, " " & ctype(t) & " " & f & ";");
      st_field := mk(f);
      RETURN "F->" & f;
   END;
END FUNC storage;

% remember where a declared object lives: a global, or a field of the frame
% of the subprogram at the current level
PROC bind(CONST y : sym, READONLY access : STRING[ASCII]) IMPORTS ALL;
   IF in_func THEN
      y.level := cur_level;
      y.access := st_field;
   ELSE
      y.level := 0;
      y.access := mk(access);
   END IF;
END PROC bind;

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
   bind(y, access);
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
         bind(y, access);
      END;
   END;
   y.t := t;
   y.c := c;
   y.ro_flag := TRUE;
   define(y, d.line);
END PROC const_decl;

% ---- subprograms ------------------------------------------------------------------------

PROC subprogram(CONST d : node) IMPORTS ALL;
   VAR y : sym := lookup_decl(d);
   VAR saved_code : buffer := code;
   VAR saved_fields : buffer := fields_buf;
   VAR saved_in : BOOL := in_func;
   VAR saved_sym : sym := func_sym;
   VAR saved_exits : exitrec := exits;
   VAR saved_frames : INT := frames;
   VAR args : text := mk("");
   VAR pm : parm := y.params;
   VAR saved_handlers : lines := handlers;
   VAR saved_cleanups : lines := cleanups;
   VAR ctx : fctxrec;
   VAR head : text;
   VAR frame : text := mk(y.cname.ALL & "fr");
   VAR parent : text;
   IF in_func THEN
      parent := mk(func_sym.cname.ALL & "fr");
   END IF;
   code := new_buffer;
   fields_buf := new_buffer;
   in_func := TRUE;
   func_sym := y;
   exits := NIL;
   frames := 0;
   handlers := NIL;
   cleanups := NIL;
   cur_level := cur_level + 1;
   open_scope;
   ALLOC ctx PTR;
   ctx.depth := depth;
   ctx.imps := d.d;
   ctx.all_imp := d.flag >= 2;
   ctx.next := fctx;
   fctx := ctx;
   IF parent /= NIL THEN
      put(fields_buf, " struct " & parent.ALL & " *up;");
      IF y.kind /= y_task THEN
         args := mk("struct " & parent.ALL & " *up_");
         emit("F->up = up_;");
      END IF;
   END IF;
   WHILE pm /= NIL REPEAT
      CONST ct := ctype(pm.t);
      CONST f := pm.cfield.ALL;
      VAR p : sym;
      IF args.LEN > 0 THEN
         args := mk(args.ALL & ", ");
      END IF;
      IF pm.mode = m_const THEN
         p := new_sym(y_const, pm.name);
         put(fields_buf, " " & ct & " " & f & ";");
         args := mk(args.ALL & ct & " " & f);
         p.access := mk(f);
         IF y.kind /= y_task THEN
            emit("F->" & f & " = " & copy_code(pm.t, f) & ";");
         END IF;
      ELSE
         p := new_sym(y_var, pm.name);
         put(fields_buf, " " & ct & " *" & f & ";");
         args := mk(args.ALL & ct & " *" & f);
         p.access := mk(f);
         p.byref := TRUE;
         IF y.kind /= y_task THEN
            emit("F->" & f & " = " & f & ";");
         END IF;
      END IF;
      p.t := pm.t;
      p.c := pm.c;
      p.level := cur_level;
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
   fctx := fctx.next;
   cur_level := cur_level - 1;
   IF args.LEN = 0 OR y.kind = y_task THEN
      args := mk("void");
   END IF;
   IF y.kind = y_task THEN
      args := mk("void *fv_");
   END IF;
   head := mk("static " & ctype(y.result) & " " & y.cname.ALL & "(" & args.ALL & ")");
   put(out_protos, head.ALL & ";");
   put(out_funcs, head.ALL & " {");
   put(out_frames, "struct " & frame.ALL & " { int dummy;");
   splice(out_frames, fields_buf);
   put(out_frames, "};");
   IF y.kind = y_task THEN
      put(out_funcs, "  struct " & frame.ALL & " *F = fv_;");
   ELSE
      put(out_funcs, "  struct " & frame.ALL & " *F = rt_alloc(sizeof *F);");
   END IF;
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
   handlers := saved_handlers;
   cleanups := saved_cleanups;
END PROC subprogram;

% ---- statements --------------------------------------------------------------------------

PROC body_elements(CONST elems : node) IMPORTS ALL;
   VAR e : node := elems;
   WHILE e /= NIL REPEAT
      element(e);
      e := e.next;
   END REPEAT;
   e := elems;
   WHILE e /= NIL REPEAT
      IF e.kind = n_task THEN
         emit("rt_await_decl(&" & lookup(e.name.ALL).cname.ALL & "decl);");
      END IF;
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

% leaving open frames by EXIT or RETURN: pop guards, unlock regions (10.7)
PROC pop_frames(CONST upto : INT) IMPORTS frames, cleanups;
   VAR i : INT := frames;
   VAR c : lines := cleanups;
   WHILE i > upto REPEAT
      emit(c.s.ALL);
      c := c.next;
      i := i - 1;
   END REPEAT;
END PROC pop_frames;

PROC push_cleanup(READONLY s : STRING[ASCII]) IMPORTS frames, cleanups;
   VAR c : lines;
   ALLOC c PTR;
   c.s := mk(s);
   c.next := cleanups;
   cleanups := c;
   frames := frames + 1;
END PROC push_cleanup;

PROC pop_cleanup IMPORTS frames, cleanups;
   cleanups := cleanups.next;
   frames := frames - 1;
END PROC pop_cleanup;

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
      WHEN n_create => st_create(s);
      WHEN n_wait => st_wait(s);
      WHEN n_region => st_region(s);
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
   IF s.a.kind = n_apply AND s.a.b /= NIL AND s.a.b.kind = n_range THEN
      % assignment to a substring (C.8): the lengths must agree
      lvalue(s.a.a, lv, t, c, ro);
      IF ro OR t.kind /= t_string THEN
         fail(s.line, "slice assignment needs a string variable");
      END IF;
      BEGIN
         CONST lo := gexpr(s.a.b.a, ty_int, vt);
         CONST hi := gexpr(s.a.b.b, ty_int, vt);
         CONST v := gexpr(s.b, ty_string, vt);
         check_type(vt, ty_string, s.line);
         emit("rt_str_slice_assign(&" & lv.ALL & ", " & lo & ", " & hi & ", " & v & ");");
      END;
      RETURN;
   END IF;
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
      bind(y, access);
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
   BEGIN
      CONST f := new_name("xf");
      CONST x := new_name("x");
      push_cleanup("RT_POP(" & f & ");");
      emit("{ rt_frame " & f & ";");
      emit("if (RT_TRY(" & f & ")) {");
      gen_body(s.a);
      emit("RT_POP(" & f & ");");
      emit("} else {");
      pop_cleanup;
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

% ---- multitasking (chapter 10) ------------------------------------------------------------

% an activation variable as an rt_act pointer; ME names the running activation
ABNORMAL FUNC act_ref(CONST e : node) => STRING[ASCII] IMPORTS ALL;
   VAR lv : text;
   VAR t : typ;
   VAR c : cons;
   VAR ro : BOOL;
   IF e.kind = n_name AND e.name.ALL = "ME" AND lookup("ME") = NIL THEN
      RETURN "rt_me()";
   END IF;
   lvalue(e, lv, t, c, ro);
   IF t.kind /= t_act THEN
      fail(e.line, "an activation variable (ACT) is required");
   END IF;
   RETURN "&" & lv.ALL;
END FUNC act_ref;

% CREATE task(args) NAMED actvar (10.1): a fresh frame holds the parameters
PROC st_create(CONST s : node) IMPORTS ALL;
   VAR y : sym := lookup(s.name.ALL);
   VAR pm : parm;
   VAR a : node := s.b;
   VAR lv : text;
   VAR lt, vt : typ;
   VAR lc : cons;
   VAR ro : BOOL;
   IF y = NIL OR y.kind /= y_task THEN
      fail(s.line, s.name.ALL & " is not a task");
   END IF;
   pm := y.params;
   BEGIN
      CONST nf := new_name("nf");
      CONST act := act_ref(s.a);
      emit("{ struct " & y.cname.ALL & "fr *" & nf & " = rt_alloc(sizeof *" & nf & ");");
      IF y.level > 0 THEN
         VAR link : text := mk("F");
         FOR i : INT(1 .. cur_level - y.level) REPEAT
            link := mk(link.ALL & "->up");
         END REPEAT;
         emit(nf & "->up = " & link.ALL & ";");
      END IF;
      WHILE a /= NIL AND pm /= NIL REPEAT
         IF pm.mode = m_const THEN
            CONST v := gexpr(a, pm.t, vt);
            check_type(vt, pm.t, s.line);
            emit(nf & "->" & pm.cfield.ALL & " = " & copy_code(pm.t, v) & ";");
         ELSE
            lvalue(a, lv, lt, lc, ro);
            check_type(lt, pm.t, s.line);
            emit(nf & "->" & pm.cfield.ALL & " = &" & lv.ALL & ";");
         END IF;
         a := a.next;
         pm := pm.next;
      END REPEAT;
      IF a /= NIL OR pm /= NIL THEN
         fail(s.line, "wrong number of actual parameters for task " & s.name.ALL);
      END IF;
      emit("rt_create(" & act & ", &" & y.cname.ALL & "decl, " & y.cname.ALL & ", " & nf & "); }");
   END;
END PROC st_create;

% one waiting invocation of a WAIT statement (10.5) as an rt_alt initializer;
% a SEND gets a temporary holding its message
ABNORMAL FUNC wait_alt(CONST inv : node, READONLY arr : STRING[ASCII], CONST i : INT) => STRING[ASCII] IMPORTS ALL;
   VAR lv : text;
   VAR t, vt : typ;
   VAR c : cons;
   VAR ro : BOOL;
   VAR fn : node;
   VAR args : node;
   CONST slot := arr & "[" & itos(i) & "]";
   IF inv.kind /= n_apply OR inv.a.kind /= n_name THEN
      fail(inv.line, "a waiting invocation is SEND, RECEIVE or a DELAY");
   END IF;
   fn := inv.a;
   args := inv.b;
   IF fn.name.ALL = "SEND" OR fn.name.ALL = "RECEIVE" THEN
      lvalue(args, lv, t, c, ro);
      IF t.kind /= t_mbox THEN
         fail(inv.line, "a mailbox is required");
      END IF;
      IF fn.name.ALL = "RECEIVE" THEN
         VAR dv : text;
         VAR dt : typ;
         lvalue(args.next, dv, dt, c, ro);
         check_type(dt, t.elem, inv.line);
         RETURN slot & " = (rt_alt){RT_ALT_RECEIVE, 1, &" & lv.ALL & ", &" & dv.ALL & ", 0};";
      END IF;
      BEGIN
         CONST tmp := new_name("msg");
         CONST v := gexpr(args.next, t.elem, vt);
         check_type(vt, t.elem, inv.line);
         emit(ctype(t.elem) & " " & tmp & " = " & v & ";");
         RETURN slot & " = (rt_alt){RT_ALT_SEND, 1, &" & lv.ALL & ", &" & tmp & ", 0};";
      END;
   ELSEIF fn.name.ALL = "DELAY" OR fn.name.ALL = "DELAY_UNTIL" THEN
      CONST v := gexpr(args, ty_int, vt);
      IF fn.name.ALL = "DELAY" THEN
         RETURN slot & " = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, " & v & "};";
      END IF;
      RETURN slot & " = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, " & v & "};";
   ELSEIF fn.name.ALL = "DELAY_UNTIL_INACTIVE" THEN
      RETURN slot & " = (rt_alt){RT_ALT_INACTIVE, 1, " & act_ref(args) & ", NULL, 0};";
   END IF;
   fail(inv.line, fn.name.ALL & " cannot be a waiting invocation");
   RETURN "";
END FUNC wait_alt;

PROC st_wait(CONST s : node) IMPORTS ALL;
   VAR a : node := s.a;
   VAR n : INT := 0;
   VAR first : BOOL := TRUE;
   VAR inits : buffer := new_buffer;
   CONST arr := new_name("alts");
   CONST w := new_name("w");
   WHILE a /= NIL REPEAT
      n := n + list_len(a.a);
      a := a.next;
   END REPEAT;
   emit("{ rt_alt " & arr & "[" & itos(n) & "];");
   a := s.a;
   n := 0;
   WHILE a /= NIL REPEAT
      VAR inv : node := a.a;
      WHILE inv /= NIL REPEAT
         put(inits, wait_alt(inv, arr, n));
         n := n + 1;
         inv := inv.next;
      END REPEAT;
      a := a.next;
   END REPEAT;
   splice(code, inits);
   emit("int " & w & " = rt_wait(" & itos(n) & ", " & arr & ");");
   a := s.a;
   n := 0;
   WHILE a /= NIL REPEAT
      VAR conds : text := mk("0");
      FOR i : INT(1 .. list_len(a.a)) REPEAT
         conds := mk(conds.ALL & " || " & w & " == " & itos(n));
         n := n + 1;
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
   emit("}");
   emit("}");
END PROC st_wait;

% REGION lock DO body END REGION (10.7): the lock is released however the body ends
PROC st_region(CONST s : node) IMPORTS ALL;
   VAR lv : text;
   VAR t : typ;
   VAR c : cons;
   VAR ro : BOOL;
   CONST lk := new_name("lk");
   CONST f := new_name("xf");
   lvalue(s.a, lv, t, c, ro);
   IF t.kind /= t_lock THEN
      fail(s.line, "REGION needs a DATA_LOCK variable");
   END IF;
   emit("{ rt_lock *" & lk & " = &" & lv.ALL & "; rt_region_enter(" & lk & ");");
   emit("rt_frame " & f & ";");
   emit("if (RT_TRY(" & f & ")) {");
   push_cleanup("RT_POP(" & f & "); rt_region_leave(" & lk & ");");
   gen_body(s.b);
   pop_cleanup;
   emit("RT_POP(" & f & "); rt_region_leave(" & lk & ");");
   emit("} else {");
   emit("RT_POP(" & f & "); rt_region_leave(" & lk & "); rt_raise(rt_xcur);");
   emit("}");
   emit("}");
END PROC st_region;
