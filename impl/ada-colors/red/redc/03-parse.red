% ---- parser: the flow diagrams of the Reference Manual -----------------------

ABNORMAL FUNC nn(CONST kind : INT, CONST line : INT) => node;
   VAR x : node;
   ALLOC x PTR;
   x.kind := kind;
   x.line := line;
   RETURN x;
END FUNC nn;

PROC append(VAR head : node, VAR tail : node, CONST x : node);
   IF head = NIL THEN
      head := x;
   ELSE
      tail.next := x;
   END IF;
   tail := x;
   WHILE tail.next /= NIL REPEAT
      tail := tail.next;
   END REPEAT;
END PROC append;

FUNC list_len(CONST l : node) => INT;
   VAR n : INT := 0;
   VAR p : node := l;
   WHILE p /= NIL REPEAT
      n := n + 1;
      p := p.next;
   END REPEAT;
   RETURN n;
END FUNC list_len;

ABNORMAL FUNC cur_line => INT IMPORTS toks, tpos;
   RETURN toks(tpos).line;
END FUNC cur_line;

ABNORMAL FUNC at_kw(READONLY w : STRING[ASCII]) => BOOL IMPORTS toks, tpos;
   RETURN toks(tpos).kind = k_kw AND toks(tpos).s.ALL = w;
END FUNC at_kw;

ABNORMAL FUNC at_op(READONLY w : STRING[ASCII]) => BOOL IMPORTS toks, tpos;
   RETURN toks(tpos).kind = k_op AND toks(tpos).s.ALL = w;
END FUNC at_op;

ABNORMAL FUNC at_kind(CONST k : INT) => BOOL IMPORTS toks, tpos;
   RETURN toks(tpos).kind = k;
END FUNC at_kind;

ABNORMAL FUNC kind_at(CONST k : INT) => INT IMPORTS toks, tpos, ntoks;
   IF tpos + k > ntoks THEN
      RETURN k_eof;
   END IF;
   RETURN toks(tpos + k).kind;
END FUNC kind_at;

ABNORMAL FUNC text_at(CONST k : INT) => text IMPORTS toks, tpos, ntoks;
   IF tpos + k > ntoks THEN
      RETURN toks(ntoks).s;
   END IF;
   RETURN toks(tpos + k).s;
END FUNC text_at;

PROC perror(READONLY msg : STRING[ASCII]) IMPORTS toks, tpos;
   fail(toks(tpos).line, msg & " (at " & toks(tpos).s.ALL & ")");
END PROC perror;

ABNORMAL FUNC accept_kw(READONLY w : STRING[ASCII]) => BOOL IMPORTS tpos;
   IF at_kw(w) THEN
      tpos := tpos + 1;
      RETURN TRUE;
   END IF;
   RETURN FALSE;
END FUNC accept_kw;

ABNORMAL FUNC accept_op(READONLY w : STRING[ASCII]) => BOOL IMPORTS tpos;
   IF at_op(w) THEN
      tpos := tpos + 1;
      RETURN TRUE;
   END IF;
   RETURN FALSE;
END FUNC accept_op;

PROC expect_kw(READONLY w : STRING[ASCII]) IMPORTS tpos;
   IF NOT at_kw(w) THEN
      perror("expected " & w);
   END IF;
   tpos := tpos + 1;
END PROC expect_kw;

PROC expect_op(READONLY w : STRING[ASCII]) IMPORTS tpos;
   IF NOT at_op(w) THEN
      perror("expected " & w);
   END IF;
   tpos := tpos + 1;
END PROC expect_op;

ABNORMAL FUNC expect_id => text IMPORTS toks, tpos;
   IF NOT at_kind(k_id) THEN
      perror("expected an identifier");
   END IF;
   tpos := tpos + 1;
   RETURN toks(tpos - 1).s;
END FUNC expect_id;

ABNORMAL FUNC name_node => node IMPORTS tpos;
   VAR x : node := nn(n_name, cur_line);
   x.name := expect_id;
   RETURN x;
END FUNC name_node;

% a list of names separated by commas, as n_name nodes
ABNORMAL FUNC id_list => node IMPORTS tpos;
   VAR head, tail : node;
   append(head, tail, name_node);
   WHILE accept_op(",") REPEAT
      append(head, tail, name_node);
   END REPEAT;
   RETURN head;
END FUNC id_list;

% ---- types and subtypes (diagrams 10, 12) --------------------------------------

ABNORMAL FUNC p_subtype => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   IF at_kw("SUBTYPE") THEN
      tpos := tpos + 1;
      x := nn(s_of, line);
      expect_op("(");
      x.a := expr;
      expect_op(")");
      RETURN x;
   END IF;
   IF NOT at_kind(k_id) THEN
      perror("expected a type or p_subtype");
   END IF;
   BEGIN
      CONST w := toks(tpos).s.ALL;
      tpos := tpos + 1;
      IF w = "ARRAY" THEN
         x := nn(s_array, line);
         BEGIN
            VAR head, tail : node;
            append(head, tail, p_subtype);
            WHILE accept_op(",") REPEAT
               append(head, tail, p_subtype);
            END REPEAT;
            x.a := head;
         END;
         expect_kw("OF");
         x.b := p_subtype;
      ELSEIF w = "RECORD" OR w = "UNION" THEN
         IF w = "RECORD" THEN
            x := nn(s_record, line);
         ELSE
            x := nn(s_union, line);
         END IF;
         expect_op("[");
         BEGIN
            VAR head, tail : node;
            VAR more : BOOL := TRUE;
            WHILE more REPEAT
               VAR names : node := id_list;
               VAR st : node;
               expect_op(":");
               st := p_subtype;
               WHILE names /= NIL REPEAT
                  VAR cmp : node := nn(n_comp, names.line);
                  cmp.name := names.name;
                  cmp.a := st;
                  append(head, tail, cmp);
                  names := names.next;
               END REPEAT;
               more := accept_op(",");
            END REPEAT;
            x.a := head;
         END;
         expect_op("]");
         IF w = "UNION" AND at_op("(") THEN
            tpos := tpos + 1;
            x.b := expr;
            expect_op(")");
         END IF;
      ELSEIF w = "ENUM" THEN
         x := nn(s_enum, line);
         expect_op("[");
         BEGIN
            VAR head, tail : node;
            VAR more : BOOL := TRUE;
            WHILE more REPEAT
               VAR lit : node := nn(n_enum, line);
               IF NOT at_kind(k_enum) THEN
                  perror("expected an enumeration literal");
               END IF;
               lit.name := toks(tpos).s;
               tpos := tpos + 1;
               append(head, tail, lit);
               more := accept_op(",");
            END REPEAT;
            x.a := head;
         END;
         expect_op("]");
         IF at_op("(") THEN
            tpos := tpos + 1;
            x.b := expr;
            expect_op("..");
            x.c := expr;
            expect_op(")");
         END IF;
      ELSEIF w = "STRING" OR w = "SET" OR w = "MAILBOX" OR w = "FILE" THEN
         IF w = "STRING" THEN
            x := nn(s_string, line);
         ELSEIF w = "SET" THEN
            x := nn(s_set, line);
         ELSEIF w = "MAILBOX" THEN
            x := nn(s_mailbox, line);
         ELSE
            x := nn(s_file, line);
         END IF;
         expect_op("[");
         x.a := p_subtype;
         expect_op("]");
         IF at_op("(") THEN
            x.b := actual_params;
         END IF;
      ELSEIF w = "INT" THEN
         x := nn(s_int, line);
         IF at_op("(") THEN
            tpos := tpos + 1;
            x.a := expr;
            expect_op("..");
            x.b := expr;
            expect_op(")");
         END IF;
      ELSEIF w = "FLOAT" THEN
         x := nn(s_float, line);
         IF accept_op("(") THEN
            x.a := expr;
            IF accept_op(",") THEN
               x.b := expr;
               expect_op("..");
               x.c := expr;
            END IF;
            expect_op(")");
         END IF;
      ELSE
         x := nn(s_name, line);
         x.name := mk(w);
         IF at_op("[") THEN
            x.a := actual_tt;
         END IF;
         IF at_op("(") THEN
            x.b := constraint_list;
            x.flag := 1;
         END IF;
      END IF;
   END;
   RETURN x;
END FUNC p_subtype;

% a constraint property list (diagram 12): expressions and ranges
ABNORMAL FUNC constraint_list => node IMPORTS ALL;
   VAR head, tail : node;
   VAR more : BOOL := TRUE;
   expect_op("(");
   WHILE more REPEAT
      VAR line : INT := cur_line;
      VAR lo : node := expr;
      IF accept_op("..") THEN
         VAR r : node := nn(n_range, line);
         r.a := lo;
         r.b := expr;
         append(head, tail, r);
      ELSE
         append(head, tail, lo);
      END IF;
      more := accept_op(",");
   END REPEAT;
   expect_op(")");
   RETURN head;
END FUNC constraint_list;

ABNORMAL FUNC actual_params => node IMPORTS tpos;
   VAR head, tail : node;
   expect_op("(");
   IF NOT at_op(")") THEN
      append(head, tail, expr);
      WHILE accept_op(",") REPEAT
         append(head, tail, expr);
      END REPEAT;
   END IF;
   expect_op(")");
   RETURN head;
END FUNC actual_params;

FUNC is_type_word(READONLY w : STRING[ASCII]) => BOOL;
   RETURN w = "INT" OR w = "BOOL" OR w = "FLOAT" OR w = "ENUM" OR w = "RECORD"
       OR w = "UNION" OR w = "ARRAY" OR w = "STRING" OR w = "SET" OR w = "MAILBOX"
       OR w = "FILE" OR w = "ASCII" OR w = "ACT" OR w = "DATA_LOCK" OR w = "LATCH";
END FUNC is_type_word;

% actual translation time properties (diagram 67): types or manifest values
ABNORMAL FUNC actual_tt => node IMPORTS ALL;
   VAR head, tail : node;
   VAR more : BOOL := TRUE;
   expect_op("[");
   WHILE more REPEAT
      IF at_kind(k_id) AND is_type_word(toks(tpos).s.ALL) THEN
         append(head, tail, p_subtype);
      ELSE
         append(head, tail, expr);
      END IF;
      more := accept_op(",");
   END REPEAT;
   expect_op("]");
   RETURN head;
END FUNC actual_tt;

% ---- expressions (chapter 5) ----------------------------------------------------

ABNORMAL FUNC binop(CONST op : text, CONST l : node, CONST r : node, CONST line : INT) => node;
   VAR x : node := nn(n_binop, line);
   x.name := op;
   x.a := l;
   x.b := r;
   RETURN x;
END FUNC binop;

ABNORMAL FUNC expr => node IMPORTS ALL;
   VAR l : node := expr_and;
   WHILE at_op("OR") OR at_op("XOR") REPEAT
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_and, line);
   END REPEAT;
   RETURN l;
END FUNC expr;

ABNORMAL FUNC expr_and => node IMPORTS ALL;
   VAR l : node := expr_not;
   WHILE at_op("AND") REPEAT
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(mk("AND"), l, expr_not, line);
   END REPEAT;
   RETURN l;
END FUNC expr_and;

% 5.2: prefix NOT binds less tightly than the relations
ABNORMAL FUNC expr_not => node IMPORTS ALL;
   IF at_op("NOT") THEN
      VAR x : node := nn(n_unop, cur_line);
      tpos := tpos + 1;
      x.name := mk("NOT");
      x.a := expr_not;
      RETURN x;
   END IF;
   RETURN expr_rel;
END FUNC expr_not;

FUNC is_rel(READONLY s : STRING[ASCII]) => BOOL;
   RETURN s = "=" OR s = "/=" OR s = "<" OR s = "<=" OR s = ">" OR s = ">=" OR s = "IN";
END FUNC is_rel;

ABNORMAL FUNC expr_rel => node IMPORTS ALL;
   VAR l : node := expr_add;
   % relations associate left to right like the other levels (5.2)
   WHILE at_kind(k_op) AND is_rel(toks(tpos).s.ALL) REPEAT
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_add, line);
   END REPEAT;
   RETURN l;
END FUNC expr_rel;

ABNORMAL FUNC expr_add => node IMPORTS ALL;
   VAR l : node := expr_mul;
   WHILE at_op("+") OR at_op("-") REPEAT
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_mul, line);
   END REPEAT;
   RETURN l;
END FUNC expr_add;

ABNORMAL FUNC expr_mul => node IMPORTS ALL;
   VAR l : node := expr_pow;
   WHILE at_op("*") OR at_op("/") OR at_op("MOD") OR at_op("DIV") OR at_op("&") REPEAT
      VAR op : text := toks(tpos).s;
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(op, l, expr_pow, line);
   END REPEAT;
   RETURN l;
END FUNC expr_mul;

ABNORMAL FUNC expr_pow => node IMPORTS ALL;
   VAR l : node := expr_prefix;
   WHILE at_op("**") REPEAT
      VAR line : INT := cur_line;
      tpos := tpos + 1;
      l := binop(mk("**"), l, expr_prefix, line);
   END REPEAT;
   RETURN l;
END FUNC expr_pow;

ABNORMAL FUNC expr_prefix => node IMPORTS ALL;
   IF at_op("+") OR at_op("-") THEN
      VAR x : node := nn(n_unop, cur_line);
      x.name := toks(tpos).s;
      tpos := tpos + 1;
      x.a := expr_prefix;
      RETURN x;
   END IF;
   RETURN postfix;
END FUNC expr_prefix;

ABNORMAL FUNC postfix => node IMPORTS ALL;
   VAR p : node := primary;
   WHILE TRUE REPEAT
      VAR line : INT := cur_line;
      IF at_op("(") THEN
         VAR x : node := nn(n_apply, line);
         VAR head, tail : node;
         tpos := tpos + 1;
         IF NOT at_op(")") THEN
            VAR more : BOOL := TRUE;
            WHILE more REPEAT
               VAR lo : node := expr;
               IF accept_op("..") THEN
                  VAR r : node := nn(n_range, line);
                  r.a := lo;
                  r.b := expr;
                  append(head, tail, r);
               ELSE
                  append(head, tail, lo);
               END IF;
               more := accept_op(",");
            END REPEAT;
         END IF;
         expect_op(")");
         x.a := p;
         x.b := head;
         p := x;
      ELSEIF at_op(".") AND (kind_at(1) = k_id OR kind_at(1) = k_kw) THEN
         VAR x : node := nn(n_select, line);
         tpos := tpos + 1;
         x.a := p;
         x.name := toks(tpos).s;
         tpos := tpos + 1;
         p := x;
      ELSEIF at_op("[") AND p.kind = n_name THEN
         VAR x : node := nn(n_ttapply, line);
         x.a := p;
         x.b := actual_tt;
         p := x;
      ELSEIF at_op("#") THEN
         VAR x : node := nn(n_resolve, line);
         tpos := tpos + 1;
         x.a := p;
         x.b := p_subtype;
         p := x;
      ELSE
         RETURN p;
      END IF;
   END REPEAT;
END FUNC postfix;

ABNORMAL FUNC primary => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   VAR k : INT := toks(tpos).kind;
   IF k = k_int THEN
      x := nn(n_int, line);
      x.ival := toks(tpos).ival;
      x.name := toks(tpos).s;
      tpos := tpos + 1;
      RETURN x;
   END IF;
   IF k = k_float OR k = k_str OR k = k_enum THEN
      IF k = k_float THEN
         x := nn(n_float, line);
      ELSEIF k = k_str THEN
         x := nn(n_str, line);
      ELSE
         x := nn(n_enum, line);
      END IF;
      x.name := toks(tpos).s;
      tpos := tpos + 1;
      RETURN x;
   END IF;
   IF k = k_id THEN
      CONST w := toks(tpos).s.ALL;
      IF w = "TRUE" OR w = "FALSE" THEN
         x := nn(n_bool, line);
         IF w = "TRUE" THEN
            x.ival := 1;
         END IF;
         tpos := tpos + 1;
         RETURN x;
      END IF;
      IF w = "NIL" THEN
         tpos := tpos + 1;
         RETURN nn(n_nil, line);
      END IF;
      RETURN name_node;
   END IF;
   IF accept_op("(") THEN
      x := nn(n_paren, line);
      x.a := expr;
      expect_op(")");
      RETURN x;
   END IF;
   IF accept_op("[") THEN
      VAR head, tail : node;
      x := nn(n_cons, line);
      IF NOT at_op("]") THEN
         VAR more : BOOL := TRUE;
         WHILE more REPEAT
            append(head, tail, constructor_item);
            more := accept_op(",");
         END REPEAT;
      END IF;
      expect_op("]");
      x.a := head;
      RETURN x;
   END IF;
   perror("expected an expression");
   RETURN NIL;
END FUNC primary;

% constructor items (diagrams 32-34): value, or keys ':' value
ABNORMAL FUNC constructor_item => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR it : node := nn(n_citem, line);
   VAR first : node := expr;
   VAR keys, ktail : node;
   VAR lab : node := nn(n_label, line);
   lab.a := first;
   IF accept_op("..") THEN
      lab.b := expr;
   END IF;
   IF at_op(":") THEN
      append(keys, ktail, lab);
   ELSEIF at_op(",") THEN
      % maybe a list of keys followed by ':'
      VAR save : INT := tpos;
      VAR more, tail2 : node;
      VAR ok : BOOL := FALSE;
      VAR go : BOOL := TRUE;
      WHILE go AND accept_op(",") REPEAT
         VAR l2 : node := nn(n_label, line);
         l2.a := expr;
         IF accept_op("..") THEN
            l2.b := expr;
         END IF;
         append(more, tail2, l2);
         IF at_op(":") THEN
            ok := TRUE;
            go := FALSE;
         ELSEIF NOT at_op(",") THEN
            go := FALSE;
         END IF;
      END REPEAT;
      IF ok THEN
         append(keys, ktail, lab);
         append(keys, ktail, more);
      ELSE
         tpos := save;
      END IF;
   END IF;
   IF keys = NIL AND lab.b /= NIL THEN
      perror("a range in a constructor is followed by :");
   END IF;
   IF keys /= NIL THEN
      expect_op(":");
      it.a := keys;
      it.b := expr;
   ELSE
      it.b := first;
   END IF;
   RETURN it;
END FUNC constructor_item;
