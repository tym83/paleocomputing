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
CONST t_mbox := 12;
CONST t_lock := 13;
CONST t_act := 14;
CONST t_new := 15;
CONST t_set := 16;

% ---- symbol kinds -------------------------------------------------------------
CONST y_var := 1;
CONST y_const := 2;
CONST y_func := 3;
CONST y_proc := 4;
CONST y_type := 5;
CONST y_abbrev := 6;
CONST y_exc := 7;
CONST y_capsule := 8;
CONST y_task := 9;
CONST y_generic := 10;

% ---- the data ---------------------------------------------------------------
TYPE text : PTR (n : INT) STRING[ASCII](n);

TYPE token : PTR RECORD[kind : INT, line : INT, ival : INT, s : text];
TYPE tokens : PTR (n : INT) ARRAY INT(1 .. n) OF token;

TYPE node : PTR RECORD[kind : INT, line : INT, ival : INT, flag : INT,
                       name : text, tag : text,
                       a, b, c, d, e : node, next : node];

TYPE cons : PTR RECORD[lo, hi, lo2, hi2, slen : text, mlo, mhi : INT, hasm : BOOL, args : node];

TYPE typ : PTR RECORD[kind : INT, name : text, lits : node,
                      elem : typ, idx, idx2 : typ, elemcons : cons, elemst : node,
                      under : typ, tparams : node, ocap : node,
                      fields : field, target : typ, decl : node,
                      cname : text, forward, defined, helpers : BOOL,
                      initp, tpsyms : sym, gen, gbinds : sym, next : typ];

TYPE field : PTR RECORD[name : text, t : typ, c : cons, st : node, next : field];

TYPE parm : PTR RECORD[name : text, mode : INT, t : typ, c : cons, cfield : text, next : parm];

TYPE sym : PTR RECORD[kind : INT, name : text, t : typ, c : cons,
                      access, cname : text, ro_flag : BOOL,
                      mvalue : INT, hasmv : BOOL, st : node, decl : node,
                      params : parm, result : typ, depth : INT,
                      level : INT, byref : BOOL, members, mnext : sym,
                      binds : node, insts : sym, env : buckets,
                      chain, stack : sym];

TYPE lines : PTR RECORD[s : text, next : lines];
TYPE buffer : PTR RECORD[head, tail : lines];

TYPE buckets : PTR (n : INT) ARRAY INT(0 .. n) OF sym;

TYPE exitrec : PTR RECORD[match, label : text, depth : INT, next : exitrec];

% a closed scope being translated: subprogram or capsule (3.5, 3.7)
% the capsules being translated, innermost first
TYPE caprec : PTR RECORD[d : node, next : caprec];

% what leaving the scope of a capsule's declaration waits for (10.1, 8.1)
TYPE waitrec : PTR RECORD[d : node, w : text, next : waitrec];

TYPE fctxrec : PTR RECORD[depth : INT, imps : node, all_imp : BOOL, next : fctxrec];

EXCEPTION compile_error;

VAR toks : tokens;
VAR ntoks : INT := 0;
VAR tpos : INT := 1;
VAR src_line : INT := 0;

CONST nbuckets := 4093;
VAR table : buckets;
% while a generic is instantiated: the names visible where it was declared,
% for what the scope of the invocation does not know (11.3)
VAR genv : buckets;
% every instance of a generic, whichever copy of its symbol made it (11.3)
VAR all_insts : sym;
VAR depth : INT := 0;
VAR scope_stack : sym;

VAR all_types : typ;
VAR serial : INT := 0;

VAR out_types, out_helpers, out_protos, out_globals, out_funcs, out_init, out_excs : buffer;
VAR code : buffer;
VAR fields_buf : buffer;
VAR in_func : BOOL := FALSE;
VAR cur_level : INT := 0;
VAR fctx : fctxrec;
VAR caps : caprec;
VAR cap_waits : waitrec;
VAR psub : lines;          % parameter placeholders of the new type being created
VAR st_field : text;
VAR out_frames : buffer;
VAR func_sym : sym;
VAR exits : exitrec;
VAR frames : INT := 0;
VAR handlers : lines;
VAR cleanups : lines;
VAR trial : INT := 0;
VAR mcopies : lines;

VAR ty_int, ty_bool, ty_float, ty_ascii, ty_string, ty_void, ty_file, ty_nil : typ;
VAR ty_lock, ty_latch, ty_act : typ;
VAR no_cons : cons;
