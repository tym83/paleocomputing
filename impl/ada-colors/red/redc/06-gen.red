% ---- declarations ------------------------------------------------------------------

% first pass over a body: deferred declarations may be used before they appear (3.6)
PROC declare_body(CONST elems : node) IMPORTS ALL;
   VAR e : node := elems;
   WHILE e /= NIL REPEAT
      IF e.kind = n_const AND e.flag = 0 THEN
         manifest_const(e);
      ELSEIF e.kind = n_capsule THEN
         gen_capsule(e);
      ELSEIF e.kind = n_expose AND e.flag /= 1 AND e.flag /= 3 THEN
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
      ELSEIF e.kind = n_generic THEN
         VAR g : sym := new_sym(y_generic, e.name);
         g.decl := e;
         g.level := cur_level;
         define(g, e.line);
      END IF;
      e := e.next;
   END REPEAT;
   % the generics of this scope remember what is visible here (11.3)
   e := elems;
   BEGIN
      VAR snap : buckets;
      WHILE e /= NIL REPEAT
         IF e.kind = n_generic THEN
            IF snap = NIL THEN
               ALLOC snap PTR (nbuckets);
               FOR i : INT(0 .. nbuckets) REPEAT
                  snap(i) := table(i);
               END REPEAT;
            END IF;
            BEGIN
               VAR g : sym := lookup(e.name.ALL);
               g.env := snap;
            END;
         END IF;
         e := e.next;
      END REPEAT;
   END;
   % INITIALIZE with a single parameter of a new type of this scope (13.3)
   e := elems;
   WHILE e /= NIL REPEAT
      IF e.kind = n_proc AND (e.name.ALL = "INITIALIZE" OR e.name.ALL = "FINALIZE") THEN
         VAR y : sym := lookup_decl(e);
         IF y /= NIL AND y.params /= NIL AND y.params.next = NIL
               AND (y.params.t.kind = t_new OR y.params.t.kind = t_ptr) THEN
            IF e.name.ALL = "INITIALIZE" THEN
               y.params.t.initp := y;
            ELSE
               y.params.t.finalp := y;
            END IF;
         END IF;
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
   z.env := y.env;
   RETURN z;
END FUNC copy_sym;

% a capsule declaration (8.1); one with formal parameters is elaborated only
% where it is invoked as NEW
PROC gen_capsule(CONST d : node) IMPORTS ALL;
   VAR y : sym := new_sym(y_capsule, d.name);
   y.decl := d;
   IF d.b = NIL THEN
      elaborate_capsule(d, y, NIL, d);
   END IF;
   define(y, d.line);
END PROC gen_capsule;

% the formal parameters of a capsule invoked as NEW, bound to the actuals (7.3)
PROC capsule_params(CONST d : node, CONST args : node, CONST line : INT) IMPORTS ALL;
   VAR p : node := d.b;
   VAR a : node := args;
   VAR t, vt : typ;
   VAR c : cons;
   WHILE p /= NIL AND a /= NIL REPEAT
      t := resolve_subtype(p.a, c);
      IF p.ival = m_out THEN
         fail(line, "a capsule may not have OUT formal parameters");
      ELSEIF p.ival = m_var OR p.ival = m_readonly THEN
         VAR lv : text;
         VAR lc : cons;
         VAR ro : BOOL;
         VAR y : sym := new_sym(y_var, p.name);
         lvalue(a, lv, vt, lc, ro);
         check_type(vt, t, line);
         IF ro AND p.ival = m_var THEN
            fail(line, p.name.ALL & " needs a variable");
         END IF;
         % a local name for the actual (7.3): the capsule keeps its address
         IF in_func THEN
            CONST f := new_name(lower_s(p.name.ALL) & "_");
            put(fields_buf, " " & ctype(t) & " *" & f & ";");
            emit("F->" & f & " = &" & lv.ALL & ";");
            y.level := cur_level;
            y.access := mk(f);
            y.byref := TRUE;
         ELSE
            CONST g := new_name("g_" & lower_s(p.name.ALL) & "_");
            put(out_globals, "static " & ctype(t) & " *" & g & ";");
            put(out_roots, "  RT_ROOT(" & g & ");");
            emit(g & " = &" & lv.ALL & ";");
            y.level := 0;
            y.access := mk("(*" & g & ")");
         END IF;
         y.t := t;
         y.c := lc;
         y.ro_flag := p.ival = m_readonly;
         define(y, line);
      ELSE
         VAR y : sym := new_sym(y_const, p.name);
         CONST v := gexpr(a, t, vt);
         check_type(vt, t, line);
         BEGIN
            CONST access := storage(p.name.ALL, t);
            emit(access & " = " & copy_code(t, v) & ";");
            bind(y, access);
         END;
         y.t := t;
         y.c := c;
         y.ro_flag := TRUE;
         define(y, line);
      END IF;
      p := p.next;
      a := a.next;
   END REPEAT;
   IF p /= NIL OR a /= NIL THEN
      fail(line, "wrong number of actual parameters for capsule " & d.name.ALL);
   END IF;
END PROC capsule_params;

% elaborate a capsule body into y's members; owner is the node whose scope
% waits for the capsule's tasks
PROC elaborate_capsule(CONST d : node, CONST y : sym, CONST args : node, CONST owner : node) IMPORTS ALL;
   VAR cr : caprec;
   VAR ctx : fctxrec;
   VAR m : sym;
   VAR p : node := d.a;
   VAR ro : BOOL;
   ALLOC cr PTR;
   cr.d := d;
   cr.next := caps;
   caps := cr;
   open_scope;
   IF d.b /= NIL THEN
      capsule_params(d, args, owner.line);
   END IF;
   ALLOC ctx PTR;
   ctx.depth := depth;
   ctx.imps := d.d;
   ctx.all_imp := d.flag >= 2;
   ctx.next := fctx;
   fctx := ctx;
   declare_body(d.c);
   capsule_elements(d.c);
   BEGIN
      VAR w : waitrec;
      ALLOC w PTR;
      w.d := owner;
      w.w := mk(task_waits(d.c));
      w.next := cap_waits;
      cap_waits := w;
   END;
   fctx := fctx.next;
   % fix the types while the capsule's own definitions are still known
   m := scope_stack;
   WHILE m /= NIL AND m.depth = depth REPEAT
      IF m.kind = y_type AND m.t = NIL AND m.decl /= NIL AND m.decl.kind = n_newtype THEN
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
      % := and = of the capsule's new types are defined automatically (13.2)
      IF p.name.ALL /= ":=" AND p.name.ALL /= "="
            AND (lookup(p.name.ALL) = NIL OR lookup(p.name.ALL).depth /= depth) THEN
         fail(d.line, p.name.ALL & " is exported but not defined in capsule " & d.name.ALL);
      END IF;
      p := p.next;
   END REPEAT;
   close_scope;
   caps := caps.next;
END PROC elaborate_capsule;

% EXPOSE visible-list FROM capsule (8.1, 8.2)
% does the capsule export this operator symbol? (8.1)
FUNC exports_op(CONST d : node, READONLY op : STRING[ASCII]) => BOOL;
   VAR p : node;
   IF d = NIL THEN
      RETURN FALSE;
   END IF;
   p := d.a;
   WHILE p /= NIL REPEAT
      IF p.name.ALL = op THEN
         RETURN TRUE;
      END IF;
      p := p.next;
   END REPEAT;
   RETURN FALSE;
END FUNC exports_op;

% the name a definition is known by after RENAMING (8.1)
FUNC renamed(CONST d : node, CONST z : sym) => text;
   VAR r : node := d.c;
   WHILE r /= NIL REPEAT
      IF r.name.ALL = z.name.ALL THEN
         RETURN r.a.name;
      END IF;
      r := r.next;
   END REPEAT;
   RETURN z.name;
END FUNC renamed;

PROC gen_expose(CONST d : node) IMPORTS ALL;
   VAR y : sym := lookup(d.name.ALL);
   VAR m : sym;
   VAR p : node := d.a;
   VAR r : node := d.c;
   IF y = NIL OR y.kind /= y_capsule THEN
      fail(d.line, d.name.ALL & " is not a capsule");
   END IF;
   IF d.flag = 1 OR d.flag = 3 THEN
      % a new invocation elaborates the capsule again, here (8.1)
      VAR inst : sym := new_sym(y_capsule, y.name);
      inst.decl := y.decl;
      elaborate_capsule(y.decl, inst, d.b, d);
      y := inst;
   ELSEIF y.decl /= NIL AND y.decl.b /= NIL THEN
      fail(d.line, "capsule " & d.name.ALL & " has formal parameters and can only be invoked as NEW");
   ELSEIF d.b /= NIL THEN
      fail(d.line, "only a capsule invoked as NEW takes actual parameters");
   END IF;
   WHILE r /= NIL REPEAT
      VAR found : BOOL := FALSE;
      m := y.members;
      WHILE m /= NIL REPEAT
         IF m.name.ALL = r.name.ALL THEN
            found := TRUE;
         END IF;
         m := m.mnext;
      END REPEAT;
      IF NOT found THEN
         fail(d.line, r.name.ALL & " is renamed but not made known by " & d.name.ALL);
      END IF;
      r := r.next;
   END REPEAT;
   IF d.ival = 1 THEN
      m := y.members;
      WHILE m /= NIL REPEAT
         VAR z : sym := copy_sym(m);
         z.name := renamed(d, m);
         define(z, d.line);
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
            z.name := renamed(d, m);
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
   define(build_subprogram(d), d.line);
END PROC declare_subprogram;

ABNORMAL FUNC build_subprogram(CONST d : node) => sym IMPORTS ALL;
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
   RETURN y;
END FUNC build_subprogram;

PROC element(CONST e : node) IMPORTS ALL;
   VAR k : INT := e.kind;
   IF k = n_expose AND (e.flag = 1 OR e.flag = 3) THEN
      % a new invocation is elaborated in order with the declarations (8.1)
      gen_expose(e);
   ELSEIF k = n_proc OR k = n_func OR k = n_task THEN
      subprogram(e);
   ELSEIF k = n_exception OR k = n_abbrev OR k = n_newtype OR k = n_capsule OR k = n_expose
         OR k = n_generic THEN
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
      put(out_roots, "  RT_ROOT(" & g & ");");
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
   IF d.ival = 1 THEN
      VAR it : typ;
      CONST n := gexpr(d.c, ty_int, it);
      IF t.kind /= t_mbox THEN
         fail(d.line, "only a mailbox can be located at an interrupt");
      END IF;
      IF same(t.elem, ty_ascii) THEN
         emit("rt_interrupt_bind(" & access & ", " & n & ", 1);");
      ELSE
         emit("rt_interrupt_bind(" & access & ", " & n & ", 0);");
      END IF;
   ELSEIF d.ival = 2 THEN
      fail(d.line, "the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only");
   END IF;
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
   IF needs_fin(t) THEN
      open_fin(fin_code(access, t));
   END IF;
END PROC var_decl;

% from here to the end of the scope, a data item will be finalized however
% the scope is left (13.3): normally, by EXIT or RETURN, or by an exception
PROC open_fin(READONLY fc : STRING[ASCII]) IMPORTS ALL;
   CONST f := new_name("ff");
   VAR l : lines;
   emit("rt_frame " & f & "; if (RT_TRY(" & f & ")) {");
   push_cleanup("RT_POP(" & f & "); " & fc);
   ALLOC l PTR;
   l.s := mk("RT_POP(" & f & "); " & fc & " } else { RT_POP(" & f & "); " & fc & " rt_raise(rt_xcur); }");
   l.next := fins;
   fins := l;
END PROC open_fin;

% the end of a scope: close what open_fin opened since saved
PROC close_fins(CONST saved : lines) IMPORTS ALL;
   WHILE fins /= saved AND fins /= NIL REPEAT
      emit(fins.s.ALL);
      pop_cleanup;
      fins := fins.next;
   END REPEAT;
END PROC close_fins;

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
         IF t.initp /= NIL THEN
            emit(init_call(t.initp, access));
         END IF;
         emit(access & " = " & copy_code(t, v) & ";");
         bind(y, access);
         IF needs_fin(t) THEN
            open_fin(fin_code(access, t));
         END IF;
      END;
   END;
   y.t := t;
   y.c := c;
   y.ro_flag := TRUE;
   define(y, d.line);
END PROC const_decl;

% ---- subprograms ------------------------------------------------------------------------

PROC subprogram(CONST d : node) IMPORTS ALL;
   gen_subprogram(d, lookup_decl(d));
END PROC subprogram;

PROC gen_subprogram(CONST d : node, CONST y : sym) IMPORTS ALL;
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
   VAR copy_back : text := mk("");
   VAR pfin : text := mk("");
   VAR saved_fins : lines := fins;
   IF in_func THEN
      parent := mk(func_sym.cname.ALL & "fr");
   END IF;
   fins := NIL;
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
            % a CONST formal is a new data item (13.3)
            IF pm.t.initp /= NIL THEN
               emit(init_call(pm.t.initp, "F->" & f));
            END IF;
            emit("F->" & f & " = " & copy_code(pm.t, f) & ";");
            IF needs_fin(pm.t) THEN
               pfin := mk(pfin.ALL & fin_code("F->" & f, pm.t) & " ");
            END IF;
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
         % an OUT formal is a local variable assigned (via :=) to the actual on
         % normal completion only (7.3), so an unhandled exception leaves the
         % actual as it was. The local starts as a copy of the actual, which
         % gives it the actual's subtype; its value is not meant to be read
         IF pm.mode = m_out AND y.kind /= y_task THEN
            put(fields_buf, " " & ct & " " & f & "v;");
            emit("F->" & f & "v = " & copy_code(pm.t, "*F->" & f) & ";");
            % so is an OUT formal (13.3)
            IF pm.t.initp /= NIL THEN
               emit(init_call(pm.t.initp, "F->" & f & "v"));
            END IF;
            copy_back := mk(copy_back.ALL & "  " & assign_code("(*F->" & f & ")", pm.t, "F->" & f & "v", pm.c));
            IF needs_fin(pm.t) THEN
               pfin := mk(pfin.ALL & fin_code("F->" & f & "v", pm.t) & " ");
            END IF;
            p.access := mk(f & "v");
            p.byref := FALSE;
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
      % and so is the result of a function (13.3)
      IF y.result.initp /= NIL THEN
         emit(init_call(y.result.initp, "F->result_"));
      END IF;
   END IF;
   % the formals are finalized when the invocation ends, however it ends
   IF pfin.LEN > 0 THEN
      emit("rt_frame pf_; if (RT_TRY(pf_)) {");
      push_cleanup("RT_POP(pf_);");
   END IF;
   declare_body(d.c);
   body_elements(d.c);
   close_fins(NIL);
   IF pfin.LEN > 0 THEN
      emit("RT_POP(pf_); } else { RT_POP(pf_); " & pfin.ALL & " rt_raise(rt_xcur); }");
      pop_cleanup;
      copy_back := mk(copy_back.ALL & "  " & pfin.ALL);
   END IF;
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
   put(out_funcs, "  RT_FPUSH(F);");
   splice(out_funcs, code);
   IF y.result.kind /= t_void THEN
      put(out_funcs, "  rt_raise_msg(RT_X_ASSERT, " & q & "function ended without RETURN" & q & ");");
      put(out_funcs, "ret_:");
      IF copy_back.LEN > 0 THEN
         put(out_funcs, copy_back.ALL);
      END IF;
      put(out_funcs, "  RT_FPOP();");
      put(out_funcs, "  return F->result_;");
   ELSE
      put(out_funcs, "ret_:");
      IF copy_back.LEN > 0 THEN
         put(out_funcs, copy_back.ALL);
      END IF;
      put(out_funcs, "  RT_FPOP();");
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
   fins := saved_fins;
END PROC gen_subprogram;

% ---- statements --------------------------------------------------------------------------

% leaving a scope waits for the activations of its tasks (10.1); the tasks of
% a capsule live as long as the capsule's declaration (8.1), so they are
% waited for where the scope that declares the capsule ends
FUNC waits_of(CONST d : node) => STRING[ASCII] IMPORTS cap_waits;
   VAR w : waitrec := cap_waits;
   WHILE w /= NIL REPEAT
      IF w.d = d THEN
         RETURN w.w.ALL;
      END IF;
      w := w.next;
   END REPEAT;
   RETURN "";
END FUNC waits_of;

FUNC task_waits(CONST elems : node) => STRING[ASCII] IMPORTS ALL;
   VAR e : node := elems;
   VAR r : text := mk("");
   WHILE e /= NIL REPEAT
      IF e.kind = n_task THEN
         r := mk(r.ALL & " rt_await_decl(&" & lookup(e.name.ALL).cname.ALL & "decl);");
      ELSEIF e.kind = n_capsule OR (e.kind = n_expose AND (e.flag = 1 OR e.flag = 3)) THEN
         r := mk(r.ALL & waits_of(e));
      END IF;
      e := e.next;
   END REPEAT;
   RETURN r.ALL;
END FUNC task_waits;

PROC await_tasks(CONST elems : node) IMPORTS ALL;
   CONST w := task_waits(elems);
   IF w.LEN > 0 THEN
      emit(w);
   END IF;
END PROC await_tasks;

PROC capsule_elements(CONST elems : node) IMPORTS ALL;
   VAR e : node := elems;
   WHILE e /= NIL REPEAT
      element(e);
      e := e.next;
   END REPEAT;
END PROC capsule_elements;

PROC body_elements(CONST elems : node) IMPORTS ALL;
   capsule_elements(elems);
   await_tasks(elems);
END PROC body_elements;

% a body is an open scope (3.2)
PROC gen_body(CONST elems : node) IMPORTS ALL;
   VAR saved : lines := fins;
   open_scope;
   declare_body(elems);
   body_elements(elems);
   close_fins(saved);
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
   IF NOT opened(t) AND NOT exports_op(t.ocap, ":=") THEN
      fail(s.line, ":= for " & t.name.ALL & " is not exported by its capsule");
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
   c := base_cons(t, c);
   IF base_of(t).kind = t_enum AND c.lo = NIL THEN
      c := new_cons;
      c.lo := mk("0");
      c.hi := mk(itos(list_len(base_of(t).lits) - 1));
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
      IF needs_fin(target) THEN
         % a dynamic variable to finalize: collect the unreachable ones first (13.3)
         CONST fn := new_name("fin");
         uses_free := TRUE;
         uses_findyn := TRUE;
         put(out_protos, "static void " & fn & "(void *cell_, void *env_);");
         put(out_funcs, "static void " & fn & "(void *cell_, void *env_) {");
         IF in_func THEN
            put(out_funcs, "  struct " & func_sym.cname.ALL & "fr *F = env_;");
         ELSE
            put(out_funcs, "  (void)env_;");
         END IF;
         put(out_funcs, "  " & fin_code("(*(" & tcn & " *)cell_)", target));
         put(out_funcs, "}");
         IF in_func THEN
            emit("rt_collect(); { " & tcn & " *" & cell & " = rt_salloc_fin(sizeof(" & tcn & "), " & fn & ", F);");
         ELSE
            emit("rt_collect(); { " & tcn & " *" & cell & " = rt_salloc_fin(sizeof(" & tcn & "), " & fn & ", NULL);");
         END IF;
      ELSE
         emit("{ " & tcn & " *" & cell & " = rt_alloc(sizeof(" & tcn & "));");
      END IF;
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

% an activation variable as an rt_act pointer (the variable holds one); ME
% names the running activation
ABNORMAL FUNC act_ref(CONST e : node) => STRING[ASCII] IMPORTS ALL;
   VAR lv : text;
   VAR t : typ;
   VAR c : cons;
   VAR ro : BOOL;
   IF e.kind = n_name AND e.name.ALL = "ME" AND lookup("ME") = NIL THEN
      RETURN "rt_me()";
   END IF;
   IF NOT is_lvalue(e) THEN
      % an ACT value computed by an expression, such as FIRST(queue)
      CONST v := gexpr(e, ty_act, t);
      IF t.kind /= t_act THEN
         fail(e.line, "an activation variable (ACT) is required");
      END IF;
      RETURN v;
   END IF;
   lvalue(e, lv, t, c, ro);
   IF t.kind /= t_act THEN
      fail(e.line, "an activation variable (ACT) is required");
   END IF;
   RETURN lv.ALL;
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
   IF y /= NIL AND y.kind = y_generic THEN
      y := instantiate(y, s.e, s.b, s.line);
   END IF;
   IF y = NIL OR y.kind /= y_task THEN
      fail(s.line, s.name.ALL & " is not a task");
   END IF;
   pm := y.params;
   BEGIN
      VAR at : typ;
      VAR ac : cons;
      VAR aro : BOOL;
      VAR act : text;
      CONST nf := new_name("nf");
      lvalue(s.a, lv, at, ac, aro);
      IF at.kind = t_act THEN
         act := mk(act_ref(s.a));
      END IF;
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
      IF act /= NIL THEN
         emit("rt_create(" & act.ALL & ", &" & y.cname.ALL & "decl, " & y.cname.ALL & ", " & nf & "); }");
      ELSE
         user_create(s, y, lv.ALL, at, nf);
         emit("}");
      END IF;
   END;
END PROC st_create;

% a translator-made variable at a C place (a local or an expression)
PROC hidden_var(READONLY name : STRING[ASCII], CONST t : typ, READONLY place : STRING[ASCII]) IMPORTS ALL;
   VAR y : sym := new_sym(y_var, mk(name));
   y.t := t;
   y.level := 0;
   y.access := mk(place);
   define(y, 0);
END PROC hidden_var;

% CREATE t NAMED ua where ua belongs to a user-defined scheduler (14.5.3): a
% fresh ACT variable aa gets the activation, held until the scheduler's
% TASK_START(ua, aa) starts it, and the procedures SYNC_RESET, SYNC_WAIT,
% SYNC_SIGNAL and TASK_END of ua, which the ACT scheduler reaches from aa
PROC user_create(CONST s : node, CONST y : sym, READONLY uv : STRING[ASCII], CONST ut : typ,
                 READONLY nf : STRING[ASCII]) IMPORTS ALL;
   VAR t : typ;
   VAR saved : buffer := code;
   VAR hook : buffer := new_buffer;
   VAR un : node := nn(n_name, s.line);
   CONST hn := new_name("sched_hook");
   CONST aa := new_name("aa");
   CONST uname := new_name("SCHED_UA");
   CONST aname := new_name("SCHED_AA");
   open_scope;
   hidden_var(uname, ut, "(*(" & ctype(ut) & " *)aa_->ua)");
   un.name := mk(uname);
   code := hook;
   emit("switch (op) {");
   emit("case RT_HOOK_RESET: " & gcall(call_node("SYNC_RESET", un, s.line), TRUE, t) & "; break;");
   emit("case RT_HOOK_WAIT: " & gcall(call_node("SYNC_WAIT", un, s.line), TRUE, t) & "; break;");
   emit("case RT_HOOK_SIGNAL: " & gcall(call_node("SYNC_SIGNAL", un, s.line), TRUE, t) & "; break;");
   emit("case RT_HOOK_END: " & gcall(call_node("TASK_END", un, s.line), TRUE, t) & "; break;");
   emit("}");
   code := saved;
   put(out_protos, "static void " & hn & "(int op, rt_act *aa_);");
   put(out_funcs, "static void " & hn & "(int op, rt_act *aa_) {");
   IF in_func THEN
      put(out_funcs, "  struct " & func_sym.cname.ALL & "fr *F = aa_->env;");
   END IF;
   splice(out_funcs, hook);
   put(out_funcs, "}");
   put(out_funcs, "");
   emit("rt_act *" & aa & " = rt_alloc(sizeof(rt_act));");
   emit(aa & "->hook = " & hn & "; " & aa & "->ua = &" & uv & "; " & aa & "->utype = " & q & type_tag(ut) & q & ";");
   IF in_func THEN
      emit(aa & "->env = F;");
   END IF;
   emit("rt_create_held(" & aa & ", &" & y.cname.ALL & "decl, " & y.cname.ALL & ", " & nf & ");");
   hidden_var(aname, ty_act, aa);
   BEGIN
      VAR start : node := call_node("TASK_START", s.a, s.line);
      VAR an : node := nn(n_name, s.line);
      an.name := mk(aname);
      start.b.next := an;
      emit(gcall(start, TRUE, t) & ";");
   END;
   close_scope;
END PROC user_create;

% one waiting invocation of a WAIT statement (10.5) as an rt_alt initializer;
% a SEND gets a temporary holding its message
ABNORMAL FUNC wait_alt(CONST inv : node, READONLY arr : STRING[ASCII], CONST i : INT, CONST mixed : BOOL)
      => STRING[ASCII] IMPORTS ALL;
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
         RETURN slot & " = (rt_alt){RT_ALT_RECEIVE, 1, " & lv.ALL & ", &" & dv.ALL & ", 0};";
      END IF;
      BEGIN
         CONST tmp := new_name("msg");
         CONST v := gexpr(args.next, t.elem, vt);
         check_type(vt, t.elem, inv.line);
         emit(ctype(t.elem) & " " & tmp & " = " & v & ";");
         RETURN slot & " = (rt_alt){RT_ALT_SEND, 1, " & lv.ALL & ", &" & tmp & ", 0};";
      END;
   ELSEIF fn.name.ALL = "DELAY" OR fn.name.ALL = "DELAY_UNTIL" THEN
      CONST v := gexpr(args, ty_int, vt);
      IF fn.name.ALL = "DELAY" AND mixed THEN
         % the WAIT may go round its loop several times: the deadline is fixed once
         RETURN slot & " = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + " & v & "};";
      ELSEIF fn.name.ALL = "DELAY" THEN
         RETURN slot & " = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, " & v & "};";
      END IF;
      RETURN slot & " = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, " & v & "};";
   ELSEIF fn.name.ALL = "DELAY_UNTIL_INACTIVE" THEN
      RETURN slot & " = (rt_alt){RT_ALT_INACTIVE, 1, " & act_ref(args) & ", NULL, 0};";
   END IF;
   fail(inv.line, fn.name.ALL & " cannot be a waiting invocation");
   RETURN "";
END FUNC wait_alt;

% is this waiting invocation one of the built-in ones (10.5), rather than one
% defined by the program with name_ST, name_REQUEST, name_TEST, name_COMPLETE
% and name_REVOKE (14.3.1)?
ABNORMAL FUNC builtin_wait(CONST inv : node) => BOOL IMPORTS ALL;
   VAR lv : text;
   VAR t : typ;
   VAR c : cons;
   VAR ro : BOOL;
   VAR saved : buffer := code;
   VAR ok : BOOL := FALSE;
   IF inv.kind /= n_apply OR inv.a.kind /= n_name THEN
      RETURN TRUE;
   END IF;
   IF inv.a.name.ALL = "DELAY" OR inv.a.name.ALL = "DELAY_UNTIL" OR inv.a.name.ALL = "DELAY_UNTIL_INACTIVE" THEN
      RETURN TRUE;
   END IF;
   IF inv.a.name.ALL /= "SEND" AND inv.a.name.ALL /= "RECEIVE" THEN
      RETURN FALSE;
   END IF;
   trial := trial + 1;
   code := new_buffer;
   GUARD
      lvalue(inv.b, lv, t, c, ro);
      ok := t.kind = t_mbox;
   BY
      WHEN compile_error =>
         ok := FALSE;
   END GUARD;
   trial := trial - 1;
   code := saved;
   RETURN ok;
END FUNC builtin_wait;

% name(q, args) for a user-defined waiting invocation
ABNORMAL FUNC wait_op(CONST inv : node, READONLY op : STRING[ASCII], READONLY q : STRING[ASCII],
                      CONST is_stmt : BOOL) => STRING[ASCII] IMPORTS ALL;
   VAR x : node := nn(n_apply, inv.line);
   VAR f : node := nn(n_name, inv.line);
   VAR qn : node := nn(n_name, inv.line);
   VAR t : typ;
   f.name := mk(inv.a.name.ALL & "_" & op);
   qn.name := mk(q);
   qn.next := inv.b;
   x.a := f;
   x.b := qn;
   BEGIN
      CONST r := gcall(x, is_stmt, t);
      IF NOT is_stmt THEN
         check_type(t, ty_bool, inv.line);
      END IF;
      RETURN r;
   END;
END FUNC wait_op;

% a WAIT with user-defined waiting invocations, expanded as in 14.3.3
PROC user_wait(CONST s : node, READONLY arr : STRING[ASCII], READONLY w : STRING[ASCII], CONST n : INT)
      IMPORTS ALL;
   VAR a : node := s.a;
   VAR i : INT := 0;
   VAR tests : text := mk("");
   VAR revokes : text := mk("");
   open_scope;
   WHILE a /= NIL REPEAT
      VAR inv : node := a.a;
      WHILE inv /= NIL REPEAT
         IF builtin_wait(inv) THEN
            emit(wait_alt(inv, arr, i, TRUE));
         ELSE
            VAR st : node := nn(s_name, inv.line);
            VAR c : cons;
            VAR qt : typ;
            CONST qname := new_name("WAIT_Q");
            VAR y : sym := new_sym(y_var, mk(qname));
            emit(arr & "[" & itos(i) & "] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};");
            st.name := mk(inv.a.name.ALL & "_ST");
            qt := resolve_subtype(st, c);
            BEGIN
               CONST access := storage(qname, qt);
               init_storage(access, qt, c);
               y.t := qt;
               y.c := c;
               bind(y, access);
               define(y, inv.line);
            END;
            emit(wait_op(inv, "REQUEST", qname, TRUE) & ";");
            tests := mk(tests.ALL & "if (" & wait_op(inv, "TEST", qname, FALSE) & ") { "
                        & wait_op(inv, "COMPLETE", qname, TRUE) & "; " & w & " = " & itos(i) & "; break; } ");
            revokes := mk(revokes.ALL & wait_op(inv, "REVOKE", qname, TRUE) & "; ");
         END IF;
         i := i + 1;
         inv := inv.next;
      END REPEAT;
      a := a.next;
   END REPEAT;
   close_scope;
   emit("int " & w & " = -1;");
   emit("for (;;) { rt_sync_reset(); " & tests.ALL);
   emit(w & " = rt_wait_poll(" & itos(n) & ", " & arr & "); if (" & w & " >= 0) break;");
   emit("rt_wait_arm(" & itos(n) & ", " & arr & "); rt_sync_wait(); " & w & " = rt_wait_disarm(); if (" & w
        & " >= 0) break; }");
   emit(revokes.ALL);
END PROC user_wait;

PROC st_wait(CONST s : node) IMPORTS ALL;
   VAR a : node := s.a;
   VAR n : INT := 0;
   VAR first : BOOL := TRUE;
   VAR inits : buffer := new_buffer;
   VAR user : BOOL := FALSE;
   CONST arr := new_name("alts");
   CONST w := new_name("w");
   WHILE a /= NIL REPEAT
      VAR inv : node := a.a;
      n := n + list_len(a.a);
      WHILE inv /= NIL REPEAT
         IF NOT builtin_wait(inv) THEN
            user := TRUE;
         END IF;
         inv := inv.next;
      END REPEAT;
      a := a.next;
   END REPEAT;
   emit("{ rt_alt " & arr & "[" & itos(n) & "];");
   IF user THEN
      user_wait(s, arr, w, n);
   ELSE
      a := s.a;
      n := 0;
      WHILE a /= NIL REPEAT
         VAR inv : node := a.a;
         WHILE inv /= NIL REPEAT
            put(inits, wait_alt(inv, arr, n, FALSE));
            n := n + 1;
            inv := inv.next;
         END REPEAT;
         a := a.next;
      END REPEAT;
      splice(code, inits);
      emit("int " & w & " = rt_wait(" & itos(n) & ", " & arr & ");");
   END IF;
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

% an invocation name(arg) made by the translator
ABNORMAL FUNC call_node(READONLY name : STRING[ASCII], CONST arg : node, CONST line : INT) => node;
   VAR x : node := nn(n_apply, line);
   VAR f : node := nn(n_name, line);
   f.name := mk(name);
   x.a := f;
   x.b := copy_node(arg);
   x.b.next := NIL;
   RETURN x;
END FUNC call_node;

% REGION over a variable of any type with LOCK and UNLOCK (14.4.1): LOCK at
% entry and UNLOCK however the body is left, both run as critical
PROC user_region(CONST s : node) IMPORTS ALL;
   VAR t : typ;
   CONST f := new_name("xf");
   CONST lock := gcall(call_node("LOCK", s.a, s.line), TRUE, t);
   CONST unlock := "{ int cr_ = rt_critical_save(); " & gcall(call_node("UNLOCK", s.a, s.line), TRUE, t)
                   & "; rt_critical_restore(cr_); }";
   emit("{ { int cr_ = rt_critical_save(); " & lock & "; rt_critical_restore(cr_); }");
   emit("rt_frame " & f & ";");
   emit("if (RT_TRY(" & f & ")) {");
   push_cleanup("RT_POP(" & f & "); " & unlock);
   gen_body(s.b);
   pop_cleanup;
   emit("RT_POP(" & f & "); " & unlock);
   emit("} else {");
   emit("RT_POP(" & f & "); " & unlock & " rt_raise(rt_xcur);");
   emit("}");
   emit("}");
END PROC user_region;

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
      user_region(s);
      RETURN;
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

% ---- generics (11.3): instances are made where the generic is invoked -------------------

FUNC gparam(CONST g : node, READONLY name : STRING[ASCII]) => node;
   VAR p : node := g.a;
   WHILE p /= NIL REPEAT
      IF p.name.ALL = name THEN
         RETURN p;
      END IF;
      p := p.next;
   END REPEAT;
   RETURN NIL;
END FUNC gparam;

% a binding of a generic parameter to its replacement element: a type, a
% subprogram or task (a copy of its symbol under the parameter's name), or a value
ABNORMAL FUNC bind_sym(CONST p : node) => sym;
   VAR y : sym;
   IF p.ival <= 2 THEN
      y := new_sym(y_type, p.name);
   ELSE
      y := new_sym(y_const, p.name);
   END IF;
   RETURN y;
END FUNC bind_sym;

FUNC same_binds(CONST a : sym, CONST b : sym) => BOOL;
   VAR x : sym := a;
   VAR y : sym := b;
   WHILE x /= NIL AND y /= NIL REPEAT
      IF x.name.ALL /= y.name.ALL OR NOT same_binding(x, y) THEN
         RETURN FALSE;
      END IF;
      x := x.mnext;
      y := y.mnext;
   END REPEAT;
   RETURN x = NIL AND y = NIL;
END FUNC same_binds;

FUNC same_binding(CONST a : sym, CONST b : sym) => BOOL;
   IF a.kind = y_type THEN
      RETURN b.kind = y_type AND same(a.t, b.t);
   END IF;
   IF a.kind = y_const AND a.hasmv THEN
      RETURN b.hasmv AND a.mvalue = b.mvalue;
   END IF;
   RETURN a.cname /= NIL AND b.cname /= NIL AND a.cname.ALL = b.cname.ALL;
END FUNC same_binding;

% the bindings of a generic's parameters to the actual translation time
% properties f (formal names, or NIL for positional) and a
ABNORMAL FUNC tt_binds(CONST gd : node, CONST formals : node, CONST actuals : node, CONST line : INT) => sym
      IMPORTS ALL;
   VAR f : node := formals;
   VAR a : node := actuals;
   VAR binds : sym;
   VAR c : cons;
   VAR at : typ;
   WHILE f /= NIL AND a /= NIL REPEAT
      VAR p : node := gparam(gd, f.name.ALL);
      VAR b : sym;
      IF p = NIL THEN
         fail(line, f.name.ALL & " is not a generic parameter");
      END IF;
      b := bind_sym(p);
      IF p.ival <= 2 THEN
         IF a.kind >= s_int THEN
            b.t := resolve_subtype(a, c);
         ELSE
            VAR st : node := nn(s_name, line);
            st.name := a.name;
            b.t := resolve_subtype(st, c);
         END IF;
         b.c := c;
      ELSEIF p.ival <= 5 THEN
         IF a.kind /= n_name OR lookup(a.name.ALL) = NIL THEN
            fail(line, "a procedure, function or task is required for " & p.name.ALL);
         END IF;
         b := copy_sym(lookup(a.name.ALL));
         b.name := p.name;
      ELSE
         VAR ok : BOOL;
         b.t := resolve_subtype(p.a, c);
         b.access := mk(gexpr(a, b.t, at));
         b.mvalue := manifest(a, ok);
         b.hasmv := ok;
      END IF;
      b.mnext := binds;
      binds := b;
      f := f.next;
      a := a.next;
   END REPEAT;
   RETURN binds;
END FUNC tt_binds;

% is this subtype a use of a generic type, X[...]?
FUNC generic_use(CONST st : node) => BOOL IMPORTS ALL;
   IF st.kind = s_mailbox THEN
      RETURN lookup("MAILBOX") /= NIL AND lookup("MAILBOX").kind = y_generic;
   END IF;
   RETURN st.kind = s_name AND st.a /= NIL AND lookup(st.name.ALL) /= NIL
          AND lookup(st.name.ALL).kind = y_generic;
END FUNC generic_use;

% bind the generic parameters named in pattern X[p1, ...] to the properties
% that the instance type t of X was made with
ABNORMAL FUNC infer_from(CONST gd : node, CONST pat : node, CONST t : typ, CONST known : sym) => sym IMPORTS ALL;
   VAR binds : sym := known;
   VAR e : node := pat.a;
   VAR tp : node;
   IF t = NIL OR t.gen = NIL THEN
      RETURN binds;
   END IF;
   tp := t.gen.decl.a;
   IF pat.kind = s_mailbox THEN
      e := copy_node(pat.a);
      e.next := NIL;
   END IF;
   WHILE e /= NIL AND tp /= NIL REPEAT
      VAR nm : text;
      IF e.kind = n_name OR e.kind = s_name THEN
         nm := e.name;
      END IF;
      IF nm /= NIL AND gparam(gd, nm.ALL) /= NIL AND gparam(gd, nm.ALL).ival <= 2 THEN
         VAR q : sym := binds;
         VAR have : BOOL := FALSE;
         WHILE q /= NIL REPEAT
            IF q.name.ALL = nm.ALL THEN
               have := TRUE;
            END IF;
            q := q.mnext;
         END REPEAT;
         IF NOT have THEN
            VAR g : sym := t.gbinds;
            WHILE g /= NIL REPEAT
               IF g.name.ALL = tp.name.ALL THEN
                  VAR b : sym := bind_sym(gparam(gd, nm.ALL));
                  b.t := g.t;
                  b.c := g.c;
                  b.mnext := binds;
                  binds := b;
               END IF;
               g := g.mnext;
            END REPEAT;
         END IF;
      END IF;
      e := e.next;
      tp := tp.next;
   END REPEAT;
   RETURN binds;
END FUNC infer_from;

% the instance of a generic type for the actual properties tt (11.3), the
% same type for the same properties; args are the constraint's actuals
ABNORMAL FUNC instantiate_type(CONST g : sym, CONST tt : node, CONST args : node, OUT c : cons,
                               CONST line : INT) => typ IMPORTS ALL;
   VAR gd : node := g.decl;
   VAR pat : node := gd.b;
   VAR binds : sym := tt_binds(gd, pat.e, tt, line);
   VAR inst : sym := all_insts;
   VAR t : typ;
   VAR saved_caps : caprec := caps;
   VAR saved_env : buckets := genv;
   c := new_cons;
   c.args := args;
   WHILE inst /= NIL REPEAT
      IF inst.decl = pat AND same_binds(inst.members, binds) THEN
         RETURN inst.t;
      END IF;
      inst := inst.insts;
   END REPEAT;
   open_scope;
   BEGIN
      VAR b : sym := binds;
      WHILE b /= NIL REPEAT
         define(b, line);
         b := b.mnext;
      END REPEAT;
   END;
   % an instance belongs to no capsule: its components are known where it is
   caps := NIL;
   genv := g.env;
   BEGIN
      VAR y : sym := new_sym(y_type, pat.name);
      VAR yc : cons;
      y.decl := pat;
      IF pat.kind = n_ptrtype THEN
         t := new_typ(t_ptr);
         t.name := pat.name;
         t.decl := pat;
         y.t := t;
         define(y, line);
         finish_ptr(t);
      ELSE
         define(y, line);
         t := new_type(y, nn(s_name, line), yc);
      END IF;
   END;
   caps := saved_caps;
   genv := saved_env;
   t.gen := g;
   t.gbinds := binds;
   close_scope;
   ALLOC inst PTR;
   inst.kind := y_type;
   inst.name := g.name;
   inst.decl := pat;
   inst.t := t;
   inst.members := binds;
   inst.insts := all_insts;
   all_insts := inst;
   RETURN t;
END FUNC instantiate_type;

% the instance of generic g for the actual properties tt and actual parameters
% args; replacement elements come from [..] and from the types of the actuals
ABNORMAL FUNC instantiate(CONST g : sym, CONST tt : node, CONST args : node, CONST line : INT) => sym
      IMPORTS ALL;
   VAR gd : node := g.decl;
   VAR pat : node := gd.b;
   VAR binds : sym;
   VAR f : node := pat.e;
   VAR a : node := tt;
   VAR fp : node := pat.a;
   VAR inst : sym;
   VAR at : typ;
   VAR c : cons;
   VAR saved_fctx : fctxrec := fctx;
   VAR saved_in : BOOL := in_func;
   VAR saved_level : INT := cur_level;
   VAR saved_sym : sym := func_sym;
   VAR saved_code : buffer := code;
   VAR saved_env : buckets := genv;
   % from the actual translation time property list
   binds := tt_binds(gd, f, a, line);
   % from the types of the actual parameters
   a := args;
   WHILE fp /= NIL AND a /= NIL REPEAT
      IF generic_use(fp.a) THEN
         % a formal of a generic type, MAILBOX[t]: t is the property the
         % actual's type was made with
         CONST v := gexpr(a, NIL, at);
         binds := infer_from(gd, fp.a, at, binds);
      ELSEIF fp.a.kind = s_name AND gparam(gd, fp.a.name.ALL) /= NIL AND gparam(gd, fp.a.name.ALL).ival <= 2 THEN
         VAR known : BOOL := FALSE;
         VAR q : sym := binds;
         WHILE q /= NIL REPEAT
            IF q.name.ALL = fp.a.name.ALL THEN
               known := TRUE;
            END IF;
            q := q.mnext;
         END REPEAT;
         IF NOT known THEN
            VAR b : sym := bind_sym(gparam(gd, fp.a.name.ALL));
            CONST v := gexpr(a, NIL, at);
            b.t := at;
            b.c := no_cons;
            b.mnext := binds;
            binds := b;
         END IF;
      END IF;
      fp := fp.next;
      a := a.next;
   END REPEAT;
   % an earlier instance with the same replacement elements?
   inst := all_insts;
   WHILE inst /= NIL REPEAT
      IF inst.decl = pat AND same_binds(inst.members, binds) THEN
         RETURN inst;
      END IF;
      inst := inst.insts;
   END REPEAT;
   % a new instance, translated at the outermost level so any invoker can call it
   fctx := NIL;
   in_func := FALSE;
   cur_level := 0;
   func_sym := NIL;
   code := new_buffer;
   open_scope;
   BEGIN
      VAR b : sym := binds;
      WHILE b /= NIL REPEAT
         define(b, line);
         b := b.mnext;
      END REPEAT;
   END;
   genv := g.env;
   inst := build_subprogram(pat);
   inst.members := binds;
   inst.insts := all_insts;
   all_insts := inst;
   define(inst, line);
   gen_subprogram(pat, inst);
   close_scope;
   fctx := saved_fctx;
   in_func := saved_in;
   cur_level := saved_level;
   func_sym := saved_sym;
   code := saved_code;
   genv := saved_env;
   RETURN inst;
END FUNC instantiate;
