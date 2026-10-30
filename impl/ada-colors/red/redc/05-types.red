% ---- symbols: one hash table, scopes as a stack ------------------------------

FUNC hash(READONLY s : STRING[ASCII]) => INT;
   VAR h : INT := 0;
   FOR i : INT(1 .. s.LEN) REPEAT
      h := (h * 31 + POS(s(i))) MOD nbuckets;
   END REPEAT;
   RETURN h;
END FUNC hash;

ABNORMAL FUNC lookup(READONLY name : STRING[ASCII]) => sym IMPORTS table, genv, gdepth;
   VAR y : sym := table(hash(name));
   IF genv /= NIL THEN
      % in an instance: its own names, then those of the generic's definition
      % environment (11.3), then the rest
      WHILE y /= NIL REPEAT
         IF y.depth >= gdepth AND y.name.ALL = name THEN
            RETURN y;
         END IF;
         y := y.chain;
      END REPEAT;
      y := genv(hash(name));
      WHILE y /= NIL REPEAT
         IF y.name.ALL = name THEN
            RETURN y;
         END IF;
         y := y.chain;
      END REPEAT;
      y := table(hash(name));
   END IF;
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
            AND z.kind = y.kind AND NOT (same_signature(y.params, z.params) AND same_tt(y.decl, z.decl))) THEN
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
   RETURN y.kind = y_func OR y.kind = y_proc OR y.kind = y_task OR y.kind = y_capsule;
END FUNC overloadable;

% signatures match when they have the same length and the same types (11.1.1)
% and the same translation time property lists (11.1, 13.5)
FUNC same_tt(CONST a : node, CONST b : node) => BOOL;
   VAR x, y : node;
   IF a = NIL OR b = NIL THEN
      RETURN TRUE;
   END IF;
   x := a.e;
   y := b.e;
   WHILE x /= NIL AND y /= NIL REPEAT
      IF x.name.ALL /= y.name.ALL THEN
         RETURN FALSE;
      END IF;
      x := x.next;
      y := y.next;
   END REPEAT;
   RETURN x = NIL AND y = NIL;
END FUNC same_tt;

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

% ---- bounds of scalar subtypes (4.1.4, C.3 - C.5) ------------------------------

FUNC scalar_kind(CONST t : typ) => BOOL;
   RETURN t /= NIL AND (t.kind = t_int OR t.kind = t_float OR t.kind = t_enum);
END FUNC scalar_kind;

FUNC bound_ctype(CONST t : typ) => STRING[ASCII];
   IF t.kind = t_float THEN
      RETURN "double";
   END IF;
   RETURN "rt_int";
END FUNC bound_ctype;

% a bound kept in storage is reached from the current subprogram like a variable
ABNORMAL FUNC cbound(CONST c : cons, READONLY b : STRING[ASCII]) => STRING[ASCII] IMPORTS cur_level;
   VAR p : text := mk("F");
   IF NOT c.dyn OR c.lvl <= 0 THEN
      RETURN b;
   END IF;
   FOR i : INT(1 .. cur_level - c.lvl) REPEAT
      p := mk(p.ALL & "->up");
   END REPEAT;
   RETURN p.ALL & "->" & b;
END FUNC cbound;

ABNORMAL FUNC clo(CONST c : cons) => STRING[ASCII] IMPORTS cur_level;
   RETURN cbound(c, c.lo.ALL);
END FUNC clo;

ABNORMAL FUNC chi(CONST c : cons) => STRING[ASCII] IMPORTS cur_level;
   RETURN cbound(c, c.hi.ALL);
END FUNC chi;

% the bounds of a scalar subtype: its constraint, or the whole type
ABNORMAL FUNC sub_lo(CONST t : typ, CONST c : cons) => STRING[ASCII] IMPORTS cur_level;
   IF c /= NIL AND c.lo /= NIL THEN
      RETURN clo(c);
   ELSEIF t.kind = t_float THEN
      RETURN "(-RT_FMAX)";
   ELSEIF t.kind = t_enum THEN
      RETURN "0";
   END IF;
   RETURN "RT_IMIN";
END FUNC sub_lo;

ABNORMAL FUNC sub_hi(CONST t : typ, CONST c : cons) => STRING[ASCII] IMPORTS cur_level;
   IF c /= NIL AND c.lo /= NIL THEN
      RETURN chi(c);
   ELSEIF t.kind = t_float THEN
      RETURN "RT_FMAX";
   ELSEIF t.kind = t_enum THEN
      RETURN itos(list_len(t.lits) - 1);
   END IF;
   RETURN "RT_IMAX";
END FUNC sub_hi;

% storage for a value made by the translator, of C type ct
ABNORMAL FUNC raw_storage(READONLY name : STRING[ASCII], READONLY ct : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   IF NOT in_func THEN
      CONST g := new_name("g_" & name & "_");
      put(out_globals, "static " & ct & " " & g & ";");
      st_field := mk(g);
      RETURN g;
   END IF;
   BEGIN
      CONST f := new_name(name & "_");
      put(fields_buf, " " & ct & " " & f & ";");
      st_field := mk(f);
      RETURN "F->" & f;
   END;
END FUNC raw_storage;

ABNORMAL FUNC copy_cons(CONST c : cons) => cons;
   VAR r : cons;
   ALLOC r PTR;
   r.lo := c.lo;
   r.hi := c.hi;
   r.lo2 := c.lo2;
   r.hi2 := c.hi2;
   r.slen := c.slen;
   r.mlo := c.mlo;
   r.mhi := c.mhi;
   r.hasm := c.hasm;
   r.args := c.args;
   r.dyn := c.dyn;
   r.lvl := c.lvl;
   r.prec := c.prec;
   RETURN r;
END FUNC copy_cons;

% a constraint whose bounds are not manifest is evaluated once, when the
% subtype is elaborated (4.1.4), and kept: later changes to the variables in
% its expressions do not change it
ABNORMAL FUNC freeze(CONST c : cons, CONST t : typ) => cons IMPORTS ALL;
   VAR r : cons;
   VAR saved_field : text := st_field;
   IF c = NIL OR c.lo = NIL OR c.hasm OR c.dyn OR NOT scalar_kind(t) THEN
      RETURN c;
   END IF;
   r := copy_cons(c);
   BEGIN
      CONST ct := bound_ctype(t);
      CONST la := raw_storage("blo", ct);
      CONST lf := st_field.ALL;
      CONST ha := raw_storage("bhi", ct);
      CONST hf := st_field.ALL;
      emit(la & " = " & clo(c) & "; " & ha & " = " & chi(c) & ";");
      IF in_func THEN
         r.lo := mk(lf);
         r.hi := mk(hf);
         r.dyn := TRUE;
         r.lvl := cur_level;
      ELSE
         r.lo := mk(la);
         r.hi := mk(ha);
         r.dyn := FALSE;
      END IF;
   END;
   st_field := saved_field;
   RETURN r;
END FUNC freeze;

% a scalar value checked against the subtype it is assigned to (4.1.4)
ABNORMAL FUNC checked(CONST t : typ, CONST c : cons, READONLY v : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   IF c = NIL OR NOT scalar_kind(t) OR suppressed("X_RANGE") THEN
      RETURN v;
   ELSEIF t.kind /= t_float AND c.hasm THEN
      RETURN "rt_range(" & v & ", " & itos(c.mlo) & ", " & itos(c.mhi) & ")";
   ELSEIF c.lo = NIL THEN
      RETURN v;
   ELSEIF t.kind = t_float THEN
      RETURN "rt_frange(" & v & ", " & clo(c) & ", " & chi(c) & ")";
   END IF;
   RETURN "rt_range(" & v & ", " & clo(c) & ", " & chi(c) & ")";
END FUNC checked;

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

% the component type of a string type
ABNORMAL FUNC str_elem(CONST t : typ) => typ IMPORTS ty_ascii;
   IF t.elem = NIL THEN
      RETURN ty_ascii;
   END IF;
   RETURN t.elem;
END FUNC str_elem;

% type equivalence (4.1.5): built-in types by extended name, new types by identity
FUNC same(CONST a : typ, CONST b : typ) => BOOL;
   IF a = b THEN
      RETURN TRUE;
   END IF;
   IF a = NIL OR b = NIL OR a.kind /= b.kind THEN
      RETURN FALSE;
   END IF;
   IF a.kind = t_string THEN
      RETURN same(str_elem(a), str_elem(b));
   END IF;
   IF a.kind = t_int OR a.kind = t_bool OR a.kind = t_float
         OR a.kind = t_void OR a.kind = t_file THEN
      RETURN TRUE;
   END IF;
   IF a.kind = t_enum THEN
      RETURN same_lits(a.lits, b.lits);
   END IF;
   IF a.kind = t_array THEN
      VAR x : tlist := a.idxs;
      VAR y : tlist := b.idxs;
      WHILE x /= NIL AND y /= NIL REPEAT
         IF NOT same(x.t, y.t) THEN
            RETURN FALSE;
         END IF;
         x := x.next;
         y := y.next;
      END REPEAT;
      RETURN x = NIL AND y = NIL AND same(a.elem, b.elem);
   END IF;
   IF a.kind = t_set OR a.kind = t_mbox THEN
      RETURN same(a.elem, b.elem);
   END IF;
   IF a.kind = t_record OR a.kind = t_union THEN
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

% a new type without parameters has the values of its underlying type (4.4.2)
FUNC base_of(CONST t : typ) => typ;
   IF t /= NIL AND t.kind = t_new AND t.tparams = NIL THEN
      RETURN base_of(t.under);
   END IF;
   RETURN t;
END FUNC base_of;

% the constraint of a subtype, looking through a new type without parameters
FUNC base_cons(CONST t : typ, CONST c : cons) => cons;
   IF t /= NIL AND t.kind = t_new AND t.tparams = NIL AND t.elemcons /= NIL THEN
      RETURN base_cons(t.under, t.elemcons);
   END IF;
   RETURN c;
END FUNC base_cons;

FUNC kind_name(CONST t : typ) => STRING[ASCII];
   CASE t.kind
      WHEN t_int => RETURN "INT";
      WHEN t_bool => RETURN "BOOL";
      WHEN t_float => RETURN "FLOAT";
      WHEN t_enum => RETURN "ENUM";
      WHEN t_string => RETURN "STRING";
      WHEN t_array => RETURN "ARRAY";
      WHEN t_record => RETURN "RECORD";
      WHEN t_union => RETURN "UNION";
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
      WHEN t_mbox => RETURN "rt_mbox *";
      WHEN t_lock => RETURN "rt_lock";
      WHEN t_act => RETURN "rt_act *";
      WHEN t_set => RETURN "yset";
      ELSE =>
         IF t.cname = NIL THEN
            declare_ctype(t);
         ELSEIF (t.kind = t_record OR t.kind = t_union) AND t.forward AND NOT t.defined THEN
            t.defined := TRUE;
            put(out_types, "struct " & t.cname.ALL & " " & struct_body(t) & ";");
         END IF;
         RETURN t.cname.ALL;
   END CASE;
END FUNC ctype;

% a union holds its tag, the position of the component present (-1: none),
% and the components overlaid (C.6)
ABNORMAL FUNC struct_body(CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   IF t.kind = t_union THEN
      RETURN "{ int tag; union { " & field_decls(t) & " } u; }";
   END IF;
   RETURN "{ " & field_decls(t) & " }";
END FUNC struct_body;

ABNORMAL FUNC field_decls(CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR f : field := t.fields;
   VAR s : text := mk(" ");
   WHILE f /= NIL REPEAT
      s := mk(s.ALL & ctype(f.t) & " " & field_c(f.name.ALL) & "; ");
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
   ELSEIF t.kind = t_record OR t.kind = t_union THEN
      t.cname := mk(new_name("R"));
   ELSE
      t.cname := mk(new_name("P"));
   END IF;
   t.next := all_types;
   all_types := t;
   IF t.kind = t_ptr AND t.decl /= NIL AND t.decl.b /= NIL THEN
      % the dynamic variables keep their formal parameters 2 (4.4.3)
      VAR p : node := t.decl.b;
      VAR fs : text := mk("");
      CONST sn := new_name("Pc");
      WHILE p /= NIL REPEAT
         VAR pc : cons;
         fs := mk(fs.ALL & " " & ctype(resolve_subtype(p.a, pc)) & " p_" & lower_s(p.name.ALL) & ";");
         p := p.next;
      END REPEAT;
      put(out_types, "typedef struct " & sn & " *" & t.cname.ALL & ";");
      put(out_helpers, "struct " & sn & " {" & fs.ALL & " " & ctype(t.target) & " all; };");
   ELSEIF t.kind = t_ptr THEN
      VAR target : typ := t.target;
      IF target.kind = t_record OR target.kind = t_union THEN
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
      put(out_types, "struct " & t.cname.ALL & " { rt_int lo, hi, lo2, hi2; " & ctype(t.elem) & " *p;"
          & more_dims(t) & " };");
   ELSEIF t.kind = t_new THEN
      % a new type with parameters keeps them: they are its attributes (4.5.3)
      VAR p : node := t.tparams;
      VAR fs : text := mk(" ");
      WHILE p /= NIL REPEAT
         fs := mk(fs.ALL & ctype(tparam_type(t, p.name.ALL)) & " p_" & lower_s(p.name.ALL) & "; ");
         p := p.next;
      END REPEAT;
      put(out_types, "typedef struct " & t.cname.ALL & " " & t.cname.ALL & ";");
      put(out_types, "struct " & t.cname.ALL & " {" & fs.ALL & ctype(t.under) & " all; };");
   ELSE
      put(out_types, "typedef struct " & t.cname.ALL & " " & t.cname.ALL & ";");
      t.defined := TRUE;
      put(out_types, "struct " & t.cname.ALL & " " & struct_body(t) & ";");
   END IF;
END PROC declare_ctype;

% ---- arrays of any number of dimensions (C.7) ------------------------------------
% a descriptor holds lo, hi (dimension 1), lo2, hi2 (dimension 2, 1 .. 1 for
% one dimension), the components in row-major order, then lo3, hi3, ...

FUNC dim_lo(CONST k : INT) => STRING[ASCII];
   IF k = 1 THEN
      RETURN "lo";
   END IF;
   RETURN "lo" & itos(k);
END FUNC dim_lo;

FUNC dim_hi(CONST k : INT) => STRING[ASCII];
   IF k = 1 THEN
      RETURN "hi";
   END IF;
   RETURN "hi" & itos(k);
END FUNC dim_hi;

FUNC more_dims(CONST t : typ) => STRING[ASCII];
   VAR r : text := mk("");
   FOR k : INT(3 .. t.ndim) REPEAT
      r := mk(r.ALL & " rt_int " & dim_lo(k) & ", " & dim_hi(k) & ";");
   END REPEAT;
   RETURN r.ALL;
END FUNC more_dims;

% the number of components of the array base of type t
FUNC acnt(CONST t : typ, READONLY base : STRING[ASCII]) => STRING[ASCII];
   VAR r : text := mk("RT_CNT(" & base & ")");
   FOR k : INT(3 .. t.ndim) REPEAT
      r := mk(r.ALL & " * RT_R_EXT(" & base & "." & dim_lo(k) & ", " & base & "." & dim_hi(k) & ")");
   END REPEAT;
   RETURN "(" & r.ALL & ")";
END FUNC acnt;

% the bounds of dimension k of an array constraint, NIL when not known
FUNC cons_lo(CONST c : cons, CONST k : INT) => text;
   VAR l : lines;
   IF k = 1 THEN
      RETURN c.lo;
   ELSEIF k = 2 THEN
      RETURN c.lo2;
   END IF;
   l := c.bnds;
   FOR i : INT(1 .. k + k - 6) REPEAT
      IF l /= NIL THEN
         l := l.next;
      END IF;
   END REPEAT;
   IF l = NIL THEN
      RETURN NIL;
   END IF;
   RETURN l.s;
END FUNC cons_lo;

FUNC cons_hi(CONST c : cons, CONST k : INT) => text;
   VAR l : lines;
   IF k = 1 THEN
      RETURN c.hi;
   ELSEIF k = 2 THEN
      RETURN c.hi2;
   END IF;
   l := c.bnds;
   FOR i : INT(1 .. k + k - 5) REPEAT
      IF l /= NIL THEN
         l := l.next;
      END IF;
   END REPEAT;
   IF l = NIL THEN
      RETURN NIL;
   END IF;
   RETURN l.s;
END FUNC cons_hi;

FUNC idx_type(CONST t : typ, CONST k : INT) => typ;
   VAR l : tlist := t.idxs;
   FOR i : INT(2 .. k) REPEAT
      l := l.next;
   END REPEAT;
   RETURN l.t;
END FUNC idx_type;

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
   BEGIN
      VAR h2, t2 : node;
      VAR l1 : node := nn(n_enum, 0);
      VAR l2 : node := nn(n_enum, 0);
      VAR l3 : node := nn(n_enum, 0);
      l1.name := mk("INPUT");
      l2.name := mk("OUTPUT");
      l3.name := mk("UPDATE");
      append(h2, t2, l1);
      append(h2, t2, l2);
      append(h2, t2, l3);
      file_mode_type := new_typ(t_enum);
      file_mode_type.lits := h2;
   END;
   % SEND_ST and RECEIVE_ST (C.11): the state of a low-level request
   ty_send_st := new_typ(t_int);
   ty_send_st.name := mk("SEND_ST");
   ty_receive_st := new_typ(t_int);
   ty_receive_st.name := mk("RECEIVE_ST");
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
         % FLOAT(precision, lo .. hi) (C.4)
         IF st.a /= NIL THEN
            c.prec := mk(gexpr(st.a, ty_int, dummy));
         END IF;
         IF st.b /= NIL THEN
            c.lo := mk(gexpr(st.b, ty_float, dummy));
            c.hi := mk(gexpr(st.c, ty_float, dummy));
            c.hasm := float_lit(st.b) AND float_lit(st.c);
         END IF;
         RETURN ty_float;
      WHEN s_enum =>
         t := new_typ(t_enum);
         t.lits := st.a;
         IF st.b /= NIL THEN
            c.lo := mk(gexpr(st.b, t, dummy));
            c.hi := mk(gexpr(st.c, t, dummy));
            IF st.b.kind = n_enum AND st.c.kind = n_enum THEN
               c.mlo := lit_index(t.lits, st.b.name.ALL);
               c.mhi := lit_index(t.lits, st.c.name.ALL);
               c.hasm := TRUE;
            END IF;
         END IF;
         RETURN t;
      WHEN s_string =>
         % STRING[S](len) (C.8): the characters are values of the subtype S
         t := resolve_subtype(st.a, c);
         IF base_of(t).kind /= t_enum THEN
            fail(st.line, "the component type of a string is an enumeration type");
         END IF;
         IF same(t, ty_ascii) AND (c = NIL OR c.lo = NIL) THEN
            t := ty_string;
         ELSE
            VAR et : typ := t;
            t := new_typ(t_string);
            t.elem := et;
            t.elemcons := c;
         END IF;
         c := new_cons;
         IF st.b /= NIL THEN
            c.slen := mk(gexpr(st.b, ty_int, dummy));
         END IF;
         RETURN t;
      WHEN s_array =>
         % ARRAY index1, ..., indexn OF comp (C.7)
         BEGIN
            VAR ec : cons;
            VAR et : typ := resolve_subtype(st.b, ec);
            VAR ix : node := st.a;
            VAR k : INT := 0;
            VAR tail : tlist;
            VAR btail : lines;
            t := new_typ(t_array);
            t.elem := et;
            t.elemcons := ec;
            t.elemst := st.b;
            c.lo2 := mk("1");
            c.hi2 := mk("1");
            WHILE ix /= NIL REPEAT
               VAR ic : cons;
               VAR it : typ := resolve_subtype(ix, ic);
               VAR lo, hi : text;
               VAR tl : tlist;
               IF base_of(it).kind /= t_int AND base_of(it).kind /= t_enum THEN
                  fail(st.line, "an index subtype is an INT or ENUM subtype");
               END IF;
               ic := base_cons(it, ic);
               k := k + 1;
               ALLOC tl PTR;
               tl.t := it;
               IF tail = NIL THEN
                  t.idxs := tl;
               ELSE
                  tail.next := tl;
               END IF;
               tail := tl;
               IF ic /= NIL AND ic.lo /= NIL THEN
                  lo := mk(clo(ic));
                  hi := mk(chi(ic));
               ELSEIF base_of(it).kind = t_enum THEN
                  lo := mk("0");
                  hi := mk(itos(list_len(base_of(it).lits) - 1));
               END IF;
               IF k = 1 THEN
                  t.idx := it;
                  c.lo := lo;
                  c.hi := hi;
               ELSEIF k = 2 THEN
                  t.idx2 := it;
                  c.lo2 := lo;
                  c.hi2 := hi;
               ELSEIF lo /= NIL THEN
                  VAR l1, l2 : lines;
                  ALLOC l1 PTR;
                  ALLOC l2 PTR;
                  l1.s := lo;
                  l2.s := hi;
                  l1.next := l2;
                  IF btail = NIL THEN
                     c.bnds := l1;
                  ELSE
                     btail.next := l1;
                  END IF;
                  btail := l2;
               END IF;
               ix := ix.next;
            END REPEAT;
            t.ndim := k;
         END;
         RETURN t;
      WHEN s_set =>
         t := new_typ(t_set);
         BEGIN
            VAR ec : cons;
            t.elem := resolve_subtype(st.a, ec);
            t.elemcons := ec;
            IF base_of(t.elem).kind /= t_int AND base_of(t.elem).kind /= t_enum THEN
               fail(st.line, "the component subtype of a set is an INT or ENUM subtype");
            END IF;
            IF base_of(t.elem).kind = t_int AND (ec = NIL OR ec.lo = NIL) THEN
               fail(st.line, "SET[INT] needs a range here: a set of every INT cannot be represented");
            END IF;
         END;
         RETURN t;
      WHEN s_record, s_union =>
         IF st.kind = s_union THEN
            t := new_typ(t_union);
         ELSE
            t := new_typ(t_record);
         END IF;
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
         IF t.kind = t_union THEN
            % .TAG has subtype ENUM['id1, ..., 'idn] (C.6)
            VAR lits, ltail : node;
            VAR f : field := t.fields;
            WHILE f /= NIL REPEAT
               VAR l : node := nn(n_enum, st.line);
               IF f.name.ALL = "TAG" THEN
                  fail(st.line, "no component of a union may be named TAG");
               END IF;
               l.name := f.name;
               append(lits, ltail, l);
               f := f.next;
            END REPEAT;
            t.elem := new_typ(t_enum);
            t.elem.lits := lits;
            IF st.b /= NIL THEN
               tag_constraint(t, st.b, c);
            END IF;
         END IF;
         RETURN t;
      WHEN s_file =>
         RETURN ty_file;
      WHEN s_mailbox =>
         % MAILBOX[message subtype](size) (10.3), unless the program defines
         % its own generic MAILBOX type, as in 14.3.1
         IF lookup("MAILBOX") /= NIL AND lookup("MAILBOX").kind = y_generic THEN
            VAR gt : node := copy_node(st.a);
            gt.next := NIL;
            RETURN instantiate_type(lookup("MAILBOX"), gt, st.b, c, st.line);
         END IF;
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
         RETURN named_subtype(st, c);
      WHEN s_of =>
         % SUBTYPE(exp), the subtype of an expression (4.5.1)
         BEGIN
            VAR base : text;
            RETURN value_subtype(st.a, c, base);
         END;
      ELSE =>
         fail(st.line, "this subtype form is not handled yet");
   END CASE;
   RETURN NIL;
END FUNC resolve_subtype;

FUNC float_lit(CONST e : node) => BOOL;
   IF e.kind = n_unop AND (e.name.ALL = "-" OR e.name.ALL = "+") THEN
      RETURN float_lit(e.a);
   END IF;
   RETURN e.kind = n_float OR e.kind = n_int;
END FUNC float_lit;

% UNION[...](exp): only the component named by exp may be present (C.6)
PROC tag_constraint(CONST t : typ, CONST e : node, CONST c : cons) IMPORTS ALL;
   VAR dummy : typ;
   c.lo := mk(gexpr(e, t.elem, dummy));
   check_type(dummy, t.elem, e.line);
   c.hi := c.lo;
   IF e.kind = n_enum THEN
      c.mlo := lit_index(t.elem.lits, e.name.ALL);
      c.mhi := c.mlo;
      c.hasm := TRUE;
   END IF;
END PROC tag_constraint;

% a subtype named by an identifier (diagram 12), with its constraint list
ABNORMAL FUNC named_subtype(CONST st : node, OUT c : cons) => typ IMPORTS ALL;
   VAR t : typ;
   VAR y : sym := lookup(st.name.ALL);
   CONST name := st.name.ALL;
   c := new_cons;
   IF y = NIL AND (name = "SUBTYPEOF" OR name = "INDEXOF" OR name = "TYPEOF") THEN
      RETURN inquiry(st, c);
   END IF;
   IF y = NIL THEN
      IF name = "BOOL" THEN
         t := ty_bool;
      ELSEIF name = "ASCII" THEN
         t := ty_ascii;
      ELSEIF name = "DATA_LOCK" THEN
         t := ty_lock;
      ELSEIF name = "LATCH" THEN
         t := ty_latch;
      ELSEIF name = "ACT" THEN
         t := ty_act;
      ELSEIF name = "INT" THEN
         t := ty_int;
      ELSEIF name = "SEND_ST" THEN
         t := ty_send_st;
      ELSEIF name = "RECEIVE_ST" THEN
         t := ty_receive_st;
      ELSEIF name = "FLOAT" THEN
         t := ty_float;
      ELSE
         fail(st.line, "unknown type " & name);
      END IF;
      IF st.b /= NIL THEN
         apply_constraint(t, st.b, c, st.line);
      END IF;
      RETURN t;
   END IF;
   IF y.kind = y_generic AND (y.decl.b.kind = n_newtype OR y.decl.b.kind = n_ptrtype) THEN
      RETURN instantiate_type(y, st.a, st.b, c, st.line);
   END IF;
   IF y.kind = y_generic AND y.decl.b.kind = n_abbrev THEN
      % a generic abbreviation (11.3): its subtype with the properties bound
      VAR binds : sym := tt_binds(y.decl, y.decl.b.e, st.a, st.line);
      VAR saved_env : buckets := genv;
      VAR saved_gdepth : INT := gdepth;
      open_scope;
      WHILE binds /= NIL REPEAT
         VAR nb : sym := binds.mnext;
         define(binds, st.line);
         binds := nb;
      END REPEAT;
      genv := y.env;
      gdepth := depth;
      t := resolve_subtype(y.decl.b.a, c);
      genv := saved_env;
      gdepth := saved_gdepth;
      close_scope;
      IF st.b /= NIL THEN
         c := copy_cons(c);
         apply_constraint(t, st.b, c, st.line);
      END IF;
      RETURN t;
   END IF;
   IF y.kind = y_type AND y.t /= NIL AND y.t.kind = t_new THEN
      RETURN new_type(y, st, c);
   END IF;
   IF y.kind = y_type AND y.t /= NIL AND y.t.kind = t_ptr THEN
      % an indirect subtype: its constraint is the actual parameter list
      c.args := st.b;
      RETURN y.t;
   END IF;
   IF y.kind = y_abbrev AND y.decl /= NIL AND y.decl.b /= NIL THEN
      RETURN invoke_abbrev(y, st, c);
   END IF;
   IF (y.kind = y_abbrev OR y.kind = y_type) AND y.t /= NIL THEN
      IF y.c /= NIL THEN
         c := y.c;
      END IF;
      t := y.t;
   ELSEIF y.kind = y_type AND y.decl /= NIL AND y.decl.kind = n_newtype THEN
      RETURN new_type(y, st, c);
   ELSEIF y.kind = y_abbrev OR y.kind = y_type THEN
      t := resolve_subtype(y.st, c);
   ELSE
      fail(st.line, name & " is not a type");
   END IF;
   IF st.b /= NIL THEN
      % a constraint list after an abbreviation (diagram 12)
      c := copy_cons(c);
      apply_constraint(t, st.b, c, st.line);
   END IF;
   RETURN t;
END FUNC named_subtype;

% an abbreviation with formal parameters (4.4.1): its subtype elaborated with
% the actuals bound to the formals
ABNORMAL FUNC invoke_abbrev(CONST y : sym, CONST st : node, OUT c : cons) => typ IMPORTS ALL;
   VAR p : node := y.decl.b;
   VAR a : node := st.b;
   VAR t : typ;
   IF list_len(p) /= list_len(a) THEN
      fail(st.line, y.name.ALL & " needs " & itos(list_len(p)) & " actual parameters");
   END IF;
   open_scope;
   WHILE p /= NIL REPEAT
      VAR z : sym := new_sym(y_const, p.name);
      VAR pc : cons;
      VAR at : typ;
      VAR ok : BOOL;
      IF p.ival /= m_const THEN
         fail(st.line, "an abbreviation has only CONST formal parameters");
      END IF;
      z.t := resolve_subtype(p.a, pc);
      z.access := mk("(" & gexpr(a, z.t, at) & ")");
      check_type(at, z.t, st.line);
      z.mvalue := manifest(a, ok);
      z.hasmv := ok;
      z.mv := meval(a, ok);
      IF NOT ok THEN
         z.mv := NIL;
      END IF;
      z.ro_flag := TRUE;
      define(z, st.line);
      p := p.next;
      a := a.next;
   END REPEAT;
   t := resolve_subtype(y.st, c);
   close_scope;
   RETURN t;
END FUNC invoke_abbrev;

% a constraint list applied to a subtype that takes one (C.2 - C.11)
PROC apply_constraint(CONST t : typ, CONST args : node, CONST c : cons, CONST line : INT) IMPORTS ALL;
   VAR dummy : typ;
   VAR ok : BOOL;
   IF t.kind = t_int OR t.kind = t_enum THEN
      IF args.kind /= n_range OR args.next /= NIL THEN
         fail(line, "this subtype takes a range");
      END IF;
      c.lo := mk(gexpr(args.a, t, dummy));
      check_type(dummy, t, line);
      c.hi := mk(gexpr(args.b, t, dummy));
      check_type(dummy, t, line);
      c.hasm := FALSE;
      IF t.kind = t_int THEN
         c.mlo := manifest(args.a, ok);
         c.hasm := ok;
         c.mhi := manifest(args.b, ok);
         c.hasm := c.hasm AND ok;
      ELSEIF args.a.kind = n_enum AND args.b.kind = n_enum THEN
         c.mlo := lit_index(base_of(t).lits, args.a.name.ALL);
         c.mhi := lit_index(base_of(t).lits, args.b.name.ALL);
         c.hasm := TRUE;
      END IF;
   ELSEIF t.kind = t_float THEN
      c.prec := mk(gexpr(args, ty_int, dummy));
      IF args.next /= NIL THEN
         IF args.next.kind /= n_range THEN
            fail(line, "FLOAT takes (precision, min .. max)");
         END IF;
         c.lo := mk(gexpr(args.next.a, ty_float, dummy));
         c.hi := mk(gexpr(args.next.b, ty_float, dummy));
         c.hasm := float_lit(args.next.a) AND float_lit(args.next.b);
      END IF;
   ELSEIF t.kind = t_string THEN
      c.slen := mk(gexpr(args, ty_int, dummy));
   ELSEIF t.kind = t_mbox THEN
      c.lo := mk(gexpr(args, ty_int, dummy));
   ELSEIF t.kind = t_union THEN
      tag_constraint(t, args, c);
   ELSE
      fail(line, "this subtype takes no constraint list");
   END IF;
END PROC apply_constraint;

% the subtype of an expression: the declared one, with the bounds an array
% or a string actually has (4.5.1)
ABNORMAL FUNC value_subtype(CONST e : node, OUT c : cons, OUT base : text) => typ IMPORTS ALL;
   VAR t : typ;
   VAR c0 : cons;
   VAR ro : BOOL;
   IF is_lvalue(e) THEN
      lvalue(e, base, t, c0, ro);
   ELSE
      base := mk(gexpr(e, NIL, t));
   END IF;
   IF c0 = NIL THEN
      c := new_cons;
   ELSE
      c := copy_cons(c0);
   END IF;
   IF t.kind = t_string THEN
      c.slen := mk("(" & base.ALL & ").len");
   ELSEIF t.kind = t_array THEN
      c.bnds := NIL;
      FOR k : INT(1 .. t.ndim) REPEAT
         CONST lo := "(" & base.ALL & ")." & dim_lo(k);
         CONST hi := "(" & base.ALL & ")." & dim_hi(k);
         IF k = 1 THEN
            c.lo := mk(lo);
            c.hi := mk(hi);
         ELSEIF k = 2 THEN
            c.lo2 := mk(lo);
            c.hi2 := mk(hi);
         ELSE
            VAR l1, l2 : lines;
            ALLOC l1 PTR;
            ALLOC l2 PTR;
            l1.s := mk(lo);
            l2.s := mk(hi);
            l1.next := l2;
            l2.next := c.bnds;
            c.bnds := l1;
         END IF;
      END REPEAT;
      c.bnds := reverse_pairs(c.bnds);
   ELSEIF t.kind = t_mbox THEN
      c.lo := mk("(" & base.ALL & ")->cap");
   ELSEIF t.kind = t_new AND t.tparams /= NIL THEN
      VAR p : node := t.tparams;
      VAR head, tail : node;
      WHILE p /= NIL REPEAT
         VAR sel : node := nn(n_select, e.line);
         sel.a := e;
         sel.name := p.name;
         append(head, tail, sel);
         p := p.next;
      END REPEAT;
      c.args := head;
   END IF;
   RETURN t;
END FUNC value_subtype;

ABNORMAL FUNC reverse_pairs(CONST l : lines) => lines;
   VAR r : lines;
   VAR p : lines := l;
   WHILE p /= NIL REPEAT
      VAR a : lines := p;
      VAR b : lines := p.next;
      p := b.next;
      b.next := r;
      r := a;
   END REPEAT;
   RETURN r;
END FUNC reverse_pairs;

% SUBTYPEOF(exp), INDEXOF(exp, i), TYPEOF(subtype or exp) (4.5.1, 4.5.2)
ABNORMAL FUNC inquiry(CONST st : node, OUT c : cons) => typ IMPORTS ALL;
   VAR base : text;
   VAR t : typ;
   CONST name := st.name.ALL;
   IF st.b = NIL THEN
      fail(st.line, name & " needs an expression");
   END IF;
   IF name = "TYPEOF" THEN
      VAR sub : node := as_subtype(st.b);
      VAR c2 : cons;
      IF sub /= NIL THEN
         t := resolve_subtype(sub, c2);
      ELSE
         t := value_subtype(st.b, c2, base);
      END IF;
      c := new_cons;
      RETURN t;
   END IF;
   t := value_subtype(st.b, c, base);
   IF name = "SUBTYPEOF" THEN
      RETURN t;
   END IF;
   BEGIN
      VAR k : INT := 1;
      VAR ok : BOOL := TRUE;
      VAR ac : cons := c;
      IF st.b.next /= NIL THEN
         k := manifest(st.b.next, ok);
      END IF;
      WHILE t.kind = t_new AND t.tparams = NIL REPEAT
         t := t.under;
      END REPEAT;
      IF t.kind /= t_array OR NOT ok OR k < 1 OR k > t.ndim THEN
         fail(st.line, "INDEXOF needs an array and the manifest number of one of its dimensions");
      END IF;
      c := new_cons;
      c.lo := cons_lo(ac, k);
      c.hi := cons_hi(ac, k);
      RETURN idx_type(t, k);
   END;
END FUNC inquiry;

% an expression that stands for a subtype (diagrams 12, 25): a type name, a
% built-in type with its properties and constraints, or an inquiry
ABNORMAL FUNC as_subtype(CONST e : node) => node IMPORTS ALL;
   VAR st : node;
   IF e = NIL THEN
      RETURN NIL;
   ELSEIF e.kind = n_paren THEN
      RETURN as_subtype(e.a);
   ELSEIF e.kind = n_name THEN
      IF NOT type_name(e.name.ALL) THEN
         RETURN NIL;
      END IF;
      st := nn(s_name, e.line);
      st.name := e.name;
      RETURN st;
   ELSEIF e.kind = n_ttapply AND e.a.kind = n_name THEN
      RETURN tt_subtype(e.a.name, e.b, NIL, e.line);
   ELSEIF e.kind /= n_apply THEN
      RETURN NIL;
   ELSEIF e.a.kind = n_ttapply AND e.a.a.kind = n_name THEN
      RETURN tt_subtype(e.a.a.name, e.a.b, e.b, e.line);
   ELSEIF e.a.kind /= n_name THEN
      RETURN NIL;
   END IF;
   BEGIN
      CONST name := e.a.name.ALL;
      VAR y : sym := lookup(name);
      IF name = "INT" AND y = NIL THEN
         IF e.b = NIL OR e.b.kind /= n_range OR e.b.next /= NIL THEN
            RETURN NIL;
         END IF;
         st := nn(s_int, e.line);
         st.a := e.b.a;
         st.b := e.b.b;
         RETURN st;
      ELSEIF name = "FLOAT" AND y = NIL THEN
         st := nn(s_float, e.line);
         st.a := e.b;
         IF e.b.next /= NIL AND e.b.next.kind = n_range THEN
            st.b := e.b.next.a;
            st.c := e.b.next.b;
         END IF;
         RETURN st;
      ELSEIF NOT type_name(name) AND NOT (y = NIL AND (name = "SUBTYPEOF" OR name = "INDEXOF" OR name = "TYPEOF")) THEN
         RETURN NIL;
      END IF;
      st := nn(s_name, e.line);
      st.name := e.a.name;
      st.b := e.b;
      st.flag := 1;
      RETURN st;
   END;
END FUNC as_subtype;

ABNORMAL FUNC tt_subtype(CONST name : text, CONST tt : node, CONST args : node, CONST line : INT) => node
      IMPORTS ALL;
   VAR st : node;
   IF name.ALL = "STRING" THEN
      st := nn(s_string, line);
   ELSEIF name.ALL = "SET" THEN
      st := nn(s_set, line);
   ELSEIF name.ALL = "MAILBOX" AND (lookup("MAILBOX") = NIL OR lookup("MAILBOX").kind /= y_generic) THEN
      st := nn(s_mailbox, line);
   ELSEIF name.ALL = "FILE" THEN
      st := nn(s_file, line);
   ELSEIF type_name(name.ALL) THEN
      st := nn(s_name, line);
      st.name := name;
      st.a := tt;
      st.b := args;
      RETURN st;
   ELSE
      RETURN NIL;
   END IF;
   st.a := tt;
   st.b := args;
   RETURN st;
END FUNC tt_subtype;

ABNORMAL FUNC type_name(READONLY name : STRING[ASCII]) => BOOL IMPORTS ALL;
   VAR y : sym := lookup(name);
   IF y = NIL THEN
      RETURN name = "INT" OR name = "BOOL" OR name = "FLOAT" OR name = "ASCII" OR name = "ACT"
          OR name = "DATA_LOCK" OR name = "LATCH" OR name = "SEND_ST" OR name = "RECEIVE_ST";
   END IF;
   RETURN y.kind = y_type OR y.kind = y_abbrev
       OR (y.kind = y_generic AND (y.decl.b.kind = n_newtype OR y.decl.b.kind = n_ptrtype
                                   OR y.decl.b.kind = n_abbrev));
END FUNC type_name;

% sets (C.9) hold the values of their component subtype, any range of them
ABNORMAL FUNC empty_set(CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   RETURN "y_set_new(" & sub_lo(base_of(t.elem), base_cons(t.elem, t.elemcons)) & ", "
          & sub_hi(base_of(t.elem), base_cons(t.elem, t.elemcons)) & ")";
END FUNC empty_set;

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
         VAR zc : cons;
         z.t := resolve_subtype(p.a, zc);
         z.mnext := y.t.tpsyms;
         y.t.tpsyms := z;
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
% a fresh data item: its storage, then its type's INITIALIZE (13.3)
PROC init_storage(READONLY lval : STRING[ASCII], CONST t : typ, CONST c : cons) IMPORTS ALL;
   make_storage(lval, t, c);
   IF t.initp /= NIL THEN
      emit(init_call(t.initp, lval));
   END IF;
END PROC init_storage;

ABNORMAL FUNC init_call(CONST y : sym, READONLY lval : STRING[ASCII]) => STRING[ASCII] IMPORTS cur_level;
   VAR link : text := mk("");
   IF y.level > 0 THEN
      link := mk("F");
      FOR i : INT(1 .. cur_level - y.level) REPEAT
         link := mk(link.ALL & "->up");
      END REPEAT;
      link := mk(link.ALL & ", ");
   END IF;
   RETURN y.cname.ALL & "(" & link.ALL & "&" & lval & ");";
END FUNC init_call;

% does a data item of type t need FINALIZE, for itself or a component? (13.3)
FUNC needs_fin(CONST t : typ) => BOOL;
   IF t = NIL THEN
      RETURN FALSE;
   END IF;
   IF t.finalp /= NIL THEN
      RETURN TRUE;
   END IF;
   IF t.kind = t_new THEN
      RETURN needs_fin(t.under);
   ELSEIF t.kind = t_array THEN
      RETURN needs_fin(t.elem);
   ELSEIF t.kind = t_record OR t.kind = t_union THEN
      VAR f : field := t.fields;
      WHILE f /= NIL REPEAT
         IF needs_fin(f.t) THEN
            RETURN TRUE;
         END IF;
         f := f.next;
      END REPEAT;
   END IF;
   RETURN FALSE;
END FUNC needs_fin;

% the C that finalizes the data item lval of type t: its FINALIZE, then its
% components
ABNORMAL FUNC fin_code(READONLY lval : STRING[ASCII], CONST t : typ) => STRING[ASCII] IMPORTS ALL;
   VAR r : text := mk("");
   IF t.finalp /= NIL THEN
      r := mk(init_call(t.finalp, lval) & " ");
   END IF;
   IF t.kind = t_new AND t.tparams = NIL THEN
      RETURN r.ALL & fin_code(lval, t.under);
   ELSEIF t.kind = t_new THEN
      RETURN r.ALL & fin_code(lval & ".all", t.under);
   ELSEIF t.kind = t_array AND needs_fin(t.elem) THEN
      CONST i := new_name("fi");
      RETURN r.ALL & "for (rt_int " & i & " = 0; " & i & " < " & acnt(t, lval) & "; " & i & "++) { "
             & fin_code(lval & ".p[" & i & "]", t.elem) & " }";
   ELSEIF t.kind = t_record THEN
      VAR f : field := t.fields;
      WHILE f /= NIL REPEAT
         IF needs_fin(f.t) THEN
            r := mk(r.ALL & fin_code(lval & "." & field_c(f.name.ALL), f.t) & " ");
         END IF;
         f := f.next;
      END REPEAT;
   ELSEIF t.kind = t_union THEN
      % only the component present
      VAR f : field := t.fields;
      VAR i : INT := 0;
      r := mk(r.ALL & "switch (" & lval & ".tag) {");
      WHILE f /= NIL REPEAT
         IF needs_fin(f.t) THEN
            r := mk(r.ALL & " case " & itos(i) & ": " & fin_code(lval & ".u." & field_c(f.name.ALL), f.t) & " break;");
         END IF;
         i := i + 1;
         f := f.next;
      END REPEAT;
      r := mk(r.ALL & " }");
   END IF;
   RETURN r.ALL;
END FUNC fin_code;

% the type of a type parameter (4.5.3)
ABNORMAL FUNC tparam_type(CONST t : typ, READONLY name : STRING[ASCII]) => typ IMPORTS ty_int;
   VAR z : sym := t.tpsyms;
   WHILE z /= NIL REPEAT
      IF z.name.ALL = name THEN
         RETURN z.t;
      END IF;
      z := z.mnext;
   END REPEAT;
   RETURN ty_int;
END FUNC tparam_type;

PROC make_storage(READONLY lval : STRING[ASCII], CONST t : typ, CONST c : cons) IMPORTS ALL;
   IF t.kind = t_new THEN
      VAR p : node := t.tparams;
      VAR a : node := c.args;
      VAR uc : cons;
      VAR ut, at : typ;
      IF list_len(a) /= list_len(p) THEN
         fail(0, "a variable of type " & t.name.ALL & " needs " & itos(list_len(p)) & " constraint values");
      END IF;
      WHILE p /= NIL REPEAT
         CONST pt := tparam_type(t, p.name.ALL);
         CONST v := gexpr(a, pt, at);
         check_type(at, pt, a.line);
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
      % a mailbox is an indirect type (14.1.3): the variable refers to it
      emit(lval & " = rt_alloc(sizeof(rt_mbox));");
      emit("rt_mbox_init(" & lval & ", " & subst(c.lo.ALL) & ", sizeof(" & ctype(t.elem) & "), "
           & mcopy(t.elem) & ");");
   ELSEIF t.kind = t_lock THEN
      emit("rt_lock_init(&" & lval & ");");
   ELSEIF t.kind = t_set THEN
      emit(lval & " = " & empty_set(t) & ";");
   ELSEIF t.kind = t_act THEN
      % an ACT value is shared by assignment and compared by identity (C.10),
      % so a variable holds a reference to its activation record
      emit(lval & " = rt_alloc(sizeof(rt_act));");
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
      FOR k : INT(1 .. t.ndim) REPEAT
         IF cons_lo(c, k) = NIL THEN
            fail(0, "an array variable needs index bounds");
         END IF;
         emit(lval & "." & dim_lo(k) & " = " & subst(cons_lo(c, k).ALL) & "; " & lval & "." & dim_hi(k) & " = "
              & subst(cons_hi(c, k).ALL) & ";");
      END REPEAT;
      IF t.ndim = 1 THEN
         emit(lval & ".lo2 = " & lval & ".hi2 = 1;");
      END IF;
      emit(lval & ".p = rt_alloc(sizeof(" & ctype(t.elem) & ") * (size_t)" & acnt(t, lval) & " + 1);");
      IF t.elem.kind = t_string OR t.elem.kind = t_array OR t.elem.kind = t_record
            OR t.elem.kind = t_new OR t.elem.kind = t_ptr OR t.elem.kind = t_mbox
            OR t.elem.kind = t_lock OR t.elem.kind = t_act OR t.elem.kind = t_union
            OR (mark_uninit AND uninit_value(t.elem) /= "") THEN
         CONST i := new_name("i");
         emit("for (rt_int " & i & " = 0; " & i & " < " & acnt(t, lval) & "; " & i & "++) {");
         init_storage(lval & ".p[" & i & "]", t.elem, t.elemcons);
         emit("}");
      END IF;
   ELSEIF t.kind = t_record THEN
      VAR f : field := t.fields;
      WHILE f /= NIL REPEAT
         init_storage(lval & "." & field_c(f.name.ALL), f.t, f.c);
         f := f.next;
      END REPEAT;
   ELSEIF t.kind = t_union THEN
      % no component yet, unless the subtype names the only one possible
      IF c /= NIL AND c.hasm THEN
         VAR f : field := t.fields;
         FOR i : INT(1 .. c.mlo) REPEAT
            f := f.next;
         END REPEAT;
         emit(lval & ".tag = " & itos(c.mlo) & ";");
         init_storage(lval & ".u." & field_c(f.name.ALL), f.t, f.c);
      ELSE
         emit(lval & ".tag = -1;");
      END IF;
   ELSEIF mark_uninit AND uninit_value(t) /= "" THEN
      emit(lval & " = " & uninit_value(t) & ";");
   END IF;
END PROC make_storage;

% the value an uninitialized scalar holds, which no value of its type has (5.1)
FUNC uninit_value(CONST t : typ) => STRING[ASCII];
   IF t.kind = t_int THEN
      RETURN "RT_R_IUNDEF";
   ELSEIF t.kind = t_enum OR t.kind = t_bool THEN
      RETURN "RT_R_EUNDEF";
   ELSEIF t.kind = t_float THEN
      RETURN "rt_r_fundef()";
   END IF;
   RETURN "";
END FUNC uninit_value;

% reading a scalar raises X_INIT if it was never given a value (5.1)
ABNORMAL FUNC init_chk(CONST t : typ, READONLY v : STRING[ASCII]) => STRING[ASCII] IMPORTS ALL;
   VAR b : typ := base_of(t);
   IF suppressed("X_INIT") THEN
      RETURN v;
   ELSEIF b.kind = t_int THEN
      RETURN "rt_r_ichk(" & v & ")";
   ELSEIF b.kind = t_enum OR b.kind = t_bool THEN
      RETURN "rt_r_echk(" & v & ")";
   ELSEIF b.kind = t_float THEN
      RETURN "rt_r_fchk(" & v & ")";
   END IF;
   RETURN v;
END FUNC init_chk;

% manifest expressions (5.5)
ABNORMAL FUNC manifest(CONST e : node, OUT ok : BOOL) => INT IMPORTS ALL;
   VAR v : mval := meval(e, ok);
   IF ok AND v.kind = t_int THEN
      RETURN v.i;
   END IF;
   ok := FALSE;
   RETURN 0;
END FUNC manifest;

ABNORMAL FUNC mk_mval(CONST kind : INT, CONST i : INT) => mval;
   VAR v : mval;
   ALLOC v PTR;
   v.kind := kind;
   v.i := i;
   RETURN v;
END FUNC mk_mval;

FUNC ipow(CONST a : INT, CONST b : INT) => INT;
   VAR r : INT := 1;
   FOR i : INT(1 .. b) REPEAT
      r := r * a;
   END REPEAT;
   RETURN r;
END FUNC ipow;

% the value of a manifest expression: literals, constants defined with
% manifest values, and the built-in operations of 5.5 on them; ok is FALSE
% for any other expression
ABNORMAL FUNC meval(CONST e : node, OUT ok : BOOL) => mval IMPORTS ALL;
   VAR a, b : mval;
   VAR ok2 : BOOL;
   VAR op : text;
   ok := FALSE;
   IF e = NIL THEN
      RETURN NIL;
   ELSEIF e.kind = n_int THEN
      ok := TRUE;
      RETURN mk_mval(t_int, e.ival);
   ELSEIF e.kind = n_bool THEN
      ok := TRUE;
      RETURN mk_mval(t_bool, e.ival);
   ELSEIF e.kind = n_float THEN
      % a FLOAT is computed by the C translator from the same expression
      ok := TRUE;
      RETURN mk_mval(t_float, 0);
   ELSEIF e.kind = n_str THEN
      ok := TRUE;
      a := mk_mval(t_string, 0);
      a.s := e.name;
      RETURN a;
   ELSEIF e.kind = n_enum THEN
      IF lit_index(ty_ascii.lits, e.name.ALL) >= 0 THEN
         ok := TRUE;
         a := mk_mval(t_enum, lit_index(ty_ascii.lits, e.name.ALL));
         a.t := ty_ascii;
         a.s := e.name;
         RETURN a;
      END IF;
      a := mk_mval(t_enum, -1);
      a.s := e.name;
      ok := TRUE;
      RETURN a;
   ELSEIF e.kind = n_paren THEN
      RETURN meval(e.a, ok);
   ELSEIF e.kind = n_name THEN
      VAR y : sym := lookup(e.name.ALL);
      IF y /= NIL AND y.kind = y_const AND y.mv /= NIL THEN
         ok := TRUE;
         RETURN y.mv;
      ELSEIF y /= NIL AND y.kind = y_const AND y.hasmv THEN
         ok := TRUE;
         RETURN mk_mval(t_int, y.mvalue);
      END IF;
      RETURN NIL;
   ELSEIF e.kind = n_unop THEN
      a := meval(e.a, ok);
      IF NOT ok THEN
         RETURN NIL;
      ELSEIF e.name.ALL = "NOT" AND a.kind = t_bool THEN
         RETURN mk_mval(t_bool, 1 - a.i);
      ELSEIF e.name.ALL = "-" AND a.kind = t_int THEN
         RETURN mk_mval(t_int, -a.i);
      ELSEIF (e.name.ALL = "+" OR e.name.ALL = "-") AND (a.kind = t_int OR a.kind = t_float) THEN
         RETURN a;
      END IF;
      ok := FALSE;
      RETURN NIL;
   ELSEIF e.kind /= n_binop OR user_defined(e.name.ALL) THEN
      RETURN NIL;
   END IF;
   op := e.name;
   a := meval(e.a, ok);
   b := meval(e.b, ok2);
   ok := ok AND ok2;
   IF NOT ok THEN
      RETURN NIL;
   END IF;
   ok := FALSE;
   IF a.kind = t_int AND b.kind = t_int THEN
      ok := TRUE;
      IF op.ALL = "+" THEN
         RETURN mk_mval(t_int, a.i + b.i);
      ELSEIF op.ALL = "-" THEN
         RETURN mk_mval(t_int, a.i - b.i);
      ELSEIF op.ALL = "*" THEN
         RETURN mk_mval(t_int, a.i * b.i);
      ELSEIF op.ALL = "DIV" AND b.i /= 0 THEN
         RETURN mk_mval(t_int, a.i DIV b.i);
      ELSEIF op.ALL = "MOD" AND b.i /= 0 THEN
         RETURN mk_mval(t_int, a.i MOD b.i);
      ELSEIF op.ALL = "**" AND b.i >= 0 THEN
         RETURN mk_mval(t_int, ipow(a.i, b.i));
      ELSEIF op.ALL = "=" THEN
         RETURN mk_mval(t_bool, bool_i(a.i = b.i));
      ELSEIF op.ALL = "/=" THEN
         RETURN mk_mval(t_bool, bool_i(a.i /= b.i));
      ELSEIF op.ALL = "<" THEN
         RETURN mk_mval(t_bool, bool_i(a.i < b.i));
      ELSEIF op.ALL = "<=" THEN
         RETURN mk_mval(t_bool, bool_i(a.i <= b.i));
      ELSEIF op.ALL = ">" THEN
         RETURN mk_mval(t_bool, bool_i(a.i > b.i));
      ELSEIF op.ALL = ">=" THEN
         RETURN mk_mval(t_bool, bool_i(a.i >= b.i));
      END IF;
   ELSEIF a.kind = t_float AND b.kind = t_float AND (op.ALL = "+" OR op.ALL = "-" OR op.ALL = "*"
         OR op.ALL = "/") THEN
      ok := TRUE;
      RETURN a;
   ELSEIF a.kind = t_float AND b.kind = t_int AND op.ALL = "**" THEN
      ok := TRUE;
      RETURN a;
   ELSEIF a.kind = t_bool AND b.kind = t_bool THEN
      ok := TRUE;
      IF op.ALL = "AND" THEN
         RETURN mk_mval(t_bool, a.i * b.i);
      ELSEIF op.ALL = "OR" THEN
         RETURN mk_mval(t_bool, bool_i(a.i + b.i > 0));
      ELSEIF op.ALL = "XOR" OR op.ALL = "/=" THEN
         RETURN mk_mval(t_bool, bool_i(a.i /= b.i));
      ELSEIF op.ALL = "=" THEN
         RETURN mk_mval(t_bool, bool_i(a.i = b.i));
      END IF;
   ELSEIF a.kind = t_enum AND b.kind = t_enum AND (op.ALL = "=" OR op.ALL = "/=") THEN
      ok := TRUE;
      IF op.ALL = "=" THEN
         RETURN mk_mval(t_bool, bool_i(a.s.ALL = b.s.ALL));
      END IF;
      RETURN mk_mval(t_bool, bool_i(a.s.ALL /= b.s.ALL));
   ELSEIF a.kind = t_string AND b.kind = t_string AND (op.ALL = "=" OR op.ALL = "/=") THEN
      ok := TRUE;
      IF op.ALL = "=" THEN
         RETURN mk_mval(t_bool, bool_i(a.s.ALL = b.s.ALL));
      END IF;
      RETURN mk_mval(t_bool, bool_i(a.s.ALL /= b.s.ALL));
   ELSEIF op.ALL = "&" AND (a.kind = t_string OR a.t = ty_ascii) AND (b.kind = t_string OR b.t = ty_ascii) THEN
      VAR r : mval := mk_mval(t_string, 0);
      ok := TRUE;
      r.s := mk(mstr(a) & mstr(b));
      RETURN r;
   END IF;
   ok := FALSE;
   RETURN NIL;
END FUNC meval;

FUNC bool_text(CONST b : BOOL) => STRING[ASCII];
   IF b THEN
      RETURN "1";
   END IF;
   RETURN "0";
END FUNC bool_text;

FUNC bool_i(CONST b : BOOL) => INT;
   IF b THEN
      RETURN 1;
   END IF;
   RETURN 0;
END FUNC bool_i;

% a manifest string, or a manifest ASCII character as a string
FUNC mstr(CONST v : mval) => STRING[ASCII];
   IF v.kind = t_string THEN
      RETURN v.s.ALL;
   END IF;
   RETURN chs(ascii_char(v.i));
END FUNC mstr;

FUNC ascii_char(CONST i : INT) => ASCII;
   CONST printable := " !" & chs('QUOTE) & "#$%&" & chs('APOS) & "()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
   IF i >= 32 AND i <= 126 THEN
      RETURN printable(i - 31);
   END IF;
   RETURN 'SP;
END FUNC ascii_char;

% is there a user definition of this operator symbol? (13.2)
ABNORMAL FUNC user_defined(READONLY op : STRING[ASCII]) => BOOL IMPORTS ALL;
   VAR y : sym := lookup(op);
   RETURN y /= NIL AND (y.kind = y_func OR y.kind = y_proc);
END FUNC user_defined;

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
      IF t.kind = t_new AND top_level(t.assignp) THEN
         % message passing assigns with the user's := (13.2)
         put(out_funcs, "static void " & name & "(void *d, const void *s) { " & user_call2(t.assignp, "*(" & ct
             & " *)d", TRUE, "*(const " & ct & " *)s", FALSE) & "; }");
      ELSE
         put(out_funcs, "static void " & name & "(void *d, const void *s) { *(" & ct & " *)d = "
             & copy_code(t, "*(const " & ct & " *)s") & "; }");
      END IF;
   END IF;
   RETURN name;
END FUNC mcopy;

FUNC composite(CONST t : typ) => BOOL;
   RETURN t.kind = t_array OR t.kind = t_record OR t.kind = t_union OR (t.kind = t_new AND t.tparams /= NIL);
END FUNC composite;

% an invocation of a user-defined := , = or < (13.2) on C operands; a and b
% are variables when lv_a, lv_b
ABNORMAL FUNC user_call2(CONST y : sym, READONLY a : STRING[ASCII], CONST lv_a : BOOL, READONLY b : STRING[ASCII],
                         CONST lv_b : BOOL) => STRING[ASCII] IMPORTS ALL;
   VAR args : text := mk("");
   IF y.level > 0 THEN
      args := mk("F");
      FOR i : INT(1 .. cur_level - y.level) REPEAT
         args := mk(args.ALL & "->up");
      END REPEAT;
      args := mk(args.ALL & ", ");
   END IF;
   RETURN y.cname.ALL & "(" & args.ALL & user_arg(y.params, a, lv_a) & ", " & user_arg(y.params.next, b, lv_b) & ")";
END FUNC user_call2;

ABNORMAL FUNC user_arg(CONST pm : parm, READONLY v : STRING[ASCII], CONST lv : BOOL) => STRING[ASCII] IMPORTS ALL;
   IF pm.mode = m_const THEN
      RETURN copy_code(pm.t, v);
   ELSEIF lv THEN
      RETURN "&(" & v & ")";
   END IF;
   BEGIN
      CONST ct := ctype(pm.t);
      RETURN "({ " & ct & " *b_ = rt_alloc(sizeof(" & ct & ")); *b_ = " & v & "; b_; })";
   END;
END FUNC user_arg;

% can generated helpers, which have no frame, invoke y?
FUNC top_level(CONST y : sym) => BOOL;
   RETURN y /= NIL AND y.level = 0;
END FUNC top_level;

ABNORMAL FUNC assign_code(READONLY lval : STRING[ASCII], CONST t : typ, READONLY v : STRING[ASCII],
                          CONST c : cons) => STRING[ASCII] IMPORTS ALL;
   IF t.kind = t_new AND t.assignp /= NIL AND (in_func OR top_level(t.assignp)) THEN
      RETURN user_call2(t.assignp, lval, TRUE, v, FALSE) & ";";
   END IF;
   IF t.kind = t_new AND t.tparams = NIL THEN
      RETURN assign_code(lval, t.under, v, c);
   END IF;
   IF t.kind = t_union AND c /= NIL AND c.lo /= NIL THEN
      % X_RANGE unless the value has the one component the subtype allows (C.6)
      RETURN "{ " & ctype(t) & " u_ = " & v & "; if (u_.tag != (" & c.lo.ALL & ")) rt_raise(RT_X_RANGE); as_"
             & ctype(t) & "(&" & lval & ", u_); }";
   END IF;
   IF composite(t) THEN
      RETURN "as_" & ctype(t) & "(&" & lval & ", " & v & ");";
   END IF;
   IF t.kind = t_string THEN
      RETURN "rt_str_assign(&" & lval & ", " & v & ");";
   ELSEIF t.kind = t_array OR t.kind = t_record THEN
      RETURN "as_" & ctype(t) & "(&" & lval & ", " & v & ");";
   END IF;
   RETURN lval & " = " & checked(t, c, v) & ";";
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
   IF t.kind = t_new AND t.eqp /= NIL AND (in_func OR top_level(t.eqp)) THEN
      RETURN user_call2(t.eqp, a, FALSE, b, FALSE);
   END IF;
   IF t.kind = t_new AND t.tparams = NIL THEN
      RETURN eq_code(t.under, a, b);
   END IF;
   IF composite(t) THEN
      RETURN "eq_" & ctype(t) & "(" & a & ", " & b & ")";
   END IF;
   IF t.kind = t_set THEN
      RETURN "y_set_eq(" & a & ", " & b & ")";
   END IF;
   IF t.kind = t_act THEN
      % two ACT values are equal when they are the same activation variable (C.10)
      RETURN "(" & a & " == " & b & ")";
   END IF;
   IF t.kind = t_mbox THEN
      % two mailboxes are equal when they are the same mailbox (14.1.3)
      RETURN "(" & a & " == " & b & ")";
   END IF;
   IF t.kind = t_lock THEN
      % not comparable (C.12); only the generated helpers ask
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
      VAR sizes, bounds : text := mk("0");
      FOR k : INT(1 .. t.ndim) REPEAT
         CONST l := dim_lo(k);
         CONST h := dim_hi(k);
         sizes := mk(sizes.ALL & " || RT_R_EXT(d->" & l & ", d->" & h & ") != RT_R_EXT(s." & l & ", s." & h & ")");
         bounds := mk(bounds.ALL & " || a." & l & " != b." & l & " || a." & h & " != b." & h);
      END REPEAT;
      % X_ARRAY unless each index subtype has as many values in both; a
      % source overlapping its target is read before it is written (C.7)
      put(b, "static void as_" & c & "(" & c & " *d, " & c & " s) {");
      put(b, "  if (" & sizes.ALL & ") rt_raise_msg(rt_exc(" & q & "X_ARRAY" & q & "), " & q & "array length" & q & ");");
      put(b, "  rt_int n_ = " & acnt(t, "s") & ";");
      put(b, "  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { " & elem_assign("d->p[i]", e, "s.p[i]") & " } return; }");
      put(b, "  for (rt_int i = 0; i < n_; i++) { " & elem_assign("d->p[i]", e, "s.p[i]") & " }");
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) {");
      put(b, "  " & c & " d = s; d.p = rt_alloc(sizeof(" & ctype(e) & ") * (size_t)" & acnt(t, "s") & " + 1);");
      put(b, "  for (rt_int i = 0; i < " & acnt(t, "s") & "; i++) d.p[i] = " & copy_code(e, "s.p[i]") & ";");
      put(b, "  return d;");
      put(b, "}");
      % equal when the index subtypes are equal and so are the components
      put(b, "static int eq_" & c & "(" & c & " a, " & c & " b) {");
      put(b, "  if (" & bounds.ALL & ") return 0;");
      put(b, "  for (rt_int i = 0; i < " & acnt(t, "a") & "; i++) if (!(" & eq_code(e, "a.p[i]", "b.p[i]") & ")) return 0;");
      put(b, "  return 1;");
      put(b, "}");
   ELSEIF t.kind = t_new THEN
      % assignment of the underlying variable (4.4.2): the target keeps its
      % subtype, whose constraints are in terms of its own parameters
      put(b, "static void as_" & c & "(" & c & " *d, " & c & " s) {");
      IF scalar_kind(t.under) AND t.elemcons /= NIL AND t.elemcons.lo /= NIL THEN
         VAR saved : lines := psub;
         VAR p : node := t.tparams;
         WHILE p /= NIL REPEAT
            VAR l1, l2 : lines;
            ALLOC l1 PTR;
            ALLOC l2 PTR;
            l1.s := mk("@P_" & lower_s(p.name.ALL) & "@");
            l2.s := mk("d->p_" & lower_s(p.name.ALL));
            l1.next := l2;
            l2.next := psub;
            psub := l1;
            p := p.next;
         END REPEAT;
         IF t.under.kind = t_float THEN
            put(b, "  d->all = rt_frange(s.all, " & subst(t.elemcons.lo.ALL) & ", " & subst(t.elemcons.hi.ALL) & ");");
         ELSE
            put(b, "  d->all = rt_range(s.all, " & subst(t.elemcons.lo.ALL) & ", " & subst(t.elemcons.hi.ALL) & ");");
         END IF;
         psub := saved;
      ELSE
         put(b, "  " & elem_assign("d->all", t.under, "s.all"));
      END IF;
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) { s.all = " & copy_code(t.under, "s.all") & "; return s; }");
      put(b, "static int eq_" & c & "(" & c & " a, " & c & " b) { return " & eq_code(t.under, "a.all", "b.all") & "; }");
   ELSEIF t.kind = t_union THEN
      VAR f : field := t.fields;
      VAR i : INT := 0;
      VAR cases_as, cases_cp, cases_eq : text := mk("");
      WHILE f /= NIL REPEAT
         CONST fn := "u." & field_c(f.name.ALL);
         cases_as := mk(cases_as.ALL & " case " & itos(i) & ": d->" & fn & " = " & copy_code(f.t, "s." & fn) & "; break;");
         cases_cp := mk(cases_cp.ALL & " case " & itos(i) & ": d." & fn & " = " & copy_code(f.t, "s." & fn) & "; break;");
         cases_eq := mk(cases_eq.ALL & " case " & itos(i) & ": return " & eq_code(f.t, "a." & fn, "b." & fn) & ";");
         i := i + 1;
         f := f.next;
      END REPEAT;
      % the component present is the one assigned, of whatever tag (C.6)
      put(b, "static void as_" & c & "(" & c & " *d, " & c & " s) {");
      put(b, "  if (s.tag < 0) rt_raise(RT_X_INIT);");
      put(b, "  d->tag = s.tag; switch (s.tag) {" & cases_as.ALL & " }");
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) {");
      put(b, "  " & c & " d = s; switch (s.tag) {" & cases_cp.ALL & " } return d;");
      put(b, "}");
      put(b, "static int eq_" & c & "(" & c & " a, " & c & " b) {");
      put(b, "  if (a.tag != b.tag) return 0; switch (a.tag) {" & cases_eq.ALL & " } return 1;");
      put(b, "}");
   ELSE
      VAR f : field := t.fields;
      VAR conds : text := mk("1");
      put(b, "static void as_" & c & "(" & c & " *d, " & c & " s) {");
      WHILE f /= NIL REPEAT
         CONST fn := field_c(f.name.ALL);
         put(b, "  " & elem_assign("d->" & fn, f.t, "s." & fn));
         f := f.next;
      END REPEAT;
      put(b, "}");
      put(b, "static " & c & " cp_" & c & "(" & c & " s) {");
      put(b, "  " & c & " d = s;");
      f := t.fields;
      WHILE f /= NIL REPEAT
         CONST fn := field_c(f.name.ALL);
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
