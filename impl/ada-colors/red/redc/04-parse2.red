% ---- bodies, declarations and statements -----------------------------------

ABNORMAL FUNC at_body_end => BOOL IMPORTS ALL;
   RETURN at_kw("END") OR at_kw("ELSE") OR at_kw("ELSEIF") OR at_kw("WHEN")
       OR at_kw("BY") OR at_kind(k_eof);
END FUNC at_body_end;

% body (3.2, diagram 2): declarations, statements and assertions
ABNORMAL FUNC body => node IMPORTS ALL;
   VAR head, tail : node;
   WHILE NOT at_body_end REPEAT
      append(head, tail, body_element);
   END REPEAT;
   RETURN head;
END FUNC body;

ABNORMAL FUNC body_element => node IMPORTS ALL;
   VAR x : node;
   IF at_kw("VAR") OR at_kw("CONST") OR at_kw("ABBREV") OR at_kw("TYPE")
         OR at_kw("PROC") OR at_kw("FUNC") OR at_kw("ABNORMAL") OR at_kw("CAPSULE")
         OR at_kw("EXPOSE") OR at_kw("EXCEPTION") OR at_kw("TASK") OR at_kw("GENERIC") THEN
      x := declaration;
   ELSEIF at_kw("ASSERT") THEN
      x := nn(n_assert, cur_line);
      tpos := tpos + 1;
      x.a := expr;
   ELSE
      x := statement;
   END IF;
   expect_op(";");
   RETURN x;
END FUNC body_element;

ABNORMAL FUNC declaration => node IMPORTS ALL;
   VAR line : INT := cur_line;
   IF at_kw("VAR") OR at_kw("CONST") THEN
      RETURN object_decl;
   ELSEIF at_kw("ABBREV") THEN
      RETURN abbrev_decl;
   ELSEIF at_kw("TYPE") THEN
      RETURN type_decl;
   ELSEIF at_kw("PROC") OR at_kw("FUNC") OR at_kw("ABNORMAL") THEN
      RETURN subprogram_decl;
   ELSEIF at_kw("CAPSULE") THEN
      RETURN capsule_decl;
   ELSEIF at_kw("EXPOSE") THEN
      RETURN expose_decl;
   ELSEIF at_kw("EXCEPTION") THEN
      VAR head, tail : node;
      VAR names : node;
      tpos := tpos + 1;
      names := id_list;
      WHILE names /= NIL REPEAT
         VAR x : node := nn(n_exception, line);
         x.name := names.name;
         append(head, tail, x);
         names := names.next;
      END REPEAT;
      RETURN head;
   END IF;
   perror("this declaration is not handled yet");
   RETURN NIL;
END FUNC declaration;

% VAR and CONST (diagrams 15, 16): one node per declared name
ABNORMAL FUNC object_decl => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR is_var : BOOL := at_kw("VAR");
   VAR names, st, init : node;
   VAR head, tail : node;
   tpos := tpos + 1;
   names := id_list;
   IF is_var THEN
      expect_op(":");
      st := p_subtype;
      IF accept_op(":=") THEN
         init := expr;
      END IF;
   ELSE
      IF accept_op(":") THEN
         st := p_subtype;
      END IF;
      expect_op(":=");
      init := expr;
   END IF;
   WHILE names /= NIL REPEAT
      VAR x : node;
      IF is_var THEN
         x := nn(n_var, line);
      ELSE
         x := nn(n_const, line);
      END IF;
      x.name := names.name;
      x.a := st;
      x.b := init;
      append(head, tail, x);
      names := names.next;
   END REPEAT;
   RETURN head;
END FUNC object_decl;

ABNORMAL FUNC abbrev_decl => node IMPORTS ALL;
   VAR x : node := nn(n_abbrev, cur_line);
   tpos := tpos + 1;
   x.name := expect_id;
   IF at_op("(") THEN
      x.b := formal_params;
   END IF;
   expect_op(":");
   x.a := p_subtype;
   RETURN x;
END FUNC abbrev_decl;

ABNORMAL FUNC type_decl => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR name : text;
   VAR params, x : node;
   tpos := tpos + 1;
   name := expect_id;
   IF at_op("(") THEN
      params := formal_params;
   END IF;
   expect_op(":");
   IF at_kind(k_id) AND toks(tpos).s.ALL = "PTR" THEN
      tpos := tpos + 1;
      x := nn(n_ptrtype, line);
      IF at_op("(") THEN
         x.b := formal_params;
      END IF;
   ELSE
      x := nn(n_newtype, line);
      x.b := params;
   END IF;
   x.name := name;
   x.a := p_subtype;
   RETURN x;
END FUNC type_decl;

FUNC mode_of(READONLY w : STRING[ASCII]) => INT;
   IF w = "VAR" THEN
      RETURN m_var;
   ELSEIF w = "OUT" THEN
      RETURN m_out;
   ELSEIF w = "READONLY" THEN
      RETURN m_readonly;
   END IF;
   RETURN m_const;
END FUNC mode_of;

% formal parameters (diagram 52)
ABNORMAL FUNC formal_params => node IMPORTS ALL;
   VAR head, tail : node;
   VAR more : BOOL := TRUE;
   expect_op("(");
   WHILE more REPEAT
      VAR mode : INT := m_const;
      VAR names, ntail, st : node;
      IF at_kw("CONST") OR at_kw("READONLY") OR at_kw("VAR") OR at_kw("OUT") THEN
         mode := mode_of(toks(tpos).s.ALL);
         tpos := tpos + 1;
      END IF;
      append(names, ntail, name_node);
      WHILE at_op(",") AND kind_at(1) = k_id AND kind_at(2) = k_op
            AND (text_at(2).ALL = "," OR text_at(2).ALL = ":") REPEAT
         tpos := tpos + 1;
         append(names, ntail, name_node);
      END REPEAT;
      expect_op(":");
      st := p_subtype;
      WHILE names /= NIL REPEAT
         VAR p : node := nn(n_param, names.line);
         p.name := names.name;
         p.ival := mode;
         p.a := st;
         append(head, tail, p);
         names := names.next;
      END REPEAT;
      more := accept_op(",");
   END REPEAT;
   expect_op(")");
   RETURN head;
END FUNC formal_params;

% IMPORTS (diagram 9): the list is kept as names; ALL sets flag
ABNORMAL FUNC imports_list(CONST owner : node) => BOOL IMPORTS ALL;
   VAR head, tail : node;
   VAR more : BOOL := TRUE;
   IF NOT accept_kw("IMPORTS") THEN
      RETURN FALSE;
   END IF;
   IF accept_kw("ALL") THEN
      owner.flag := owner.flag + 2;
      RETURN TRUE;
   END IF;
   WHILE more REPEAT
      VAR ro : BOOL := accept_kw("READONLY");
      VAR x : node := name_node;
      IF ro THEN
         x.ival := 1;
      END IF;
      append(head, tail, x);
      more := accept_op(",");
   END REPEAT;
   owner.d := head;
   RETURN TRUE;
END FUNC imports_list;

FUNC is_definable(READONLY w : STRING[ASCII]) => BOOL;
   RETURN w = "+" OR w = "-" OR w = "*" OR w = "/" OR w = "**" OR w = "&"
       OR w = "=" OR w = "<" OR w = "<=" OR w = ">" OR w = ">=" OR w = "/="
       OR w = "DIV" OR w = "MOD" OR w = "AND" OR w = "OR" OR w = "XOR"
       OR w = "NOT" OR w = "IN" OR w = ":=" OR w = "#";
END FUNC is_definable;

ABNORMAL FUNC definable_name => text IMPORTS ALL;
   IF at_kind(k_id) OR (at_kind(k_op) AND is_definable(toks(tpos).s.ALL)) THEN
      tpos := tpos + 1;
      RETURN toks(tpos - 1).s;
   END IF;
   perror("expected a name");
   RETURN NIL;
END FUNC definable_name;

% procedures and functions (diagrams 48, 50); flag 1 = ABNORMAL
ABNORMAL FUNC subprogram_decl => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   VAR is_abn : BOOL := accept_kw("ABNORMAL");
   VAR is_func : BOOL := at_kw("FUNC");
   VAR dummy : BOOL;
   IF is_func THEN
      x := nn(n_func, line);
   ELSEIF at_kw("PROC") THEN
      x := nn(n_proc, line);
   ELSE
      perror("expected PROC or FUNC");
   END IF;
   tpos := tpos + 1;
   IF is_abn THEN
      x.flag := 1;
   END IF;
   x.name := definable_name;
   IF at_op("(") THEN
      x.a := formal_params;
   END IF;
   IF is_func THEN
      expect_op("=>");
      x.b := p_subtype;
   END IF;
   dummy := imports_list(x);
   expect_op(";");
   x.c := body;
   expect_kw("END");
   IF is_func THEN
      expect_kw("FUNC");
   ELSE
      expect_kw("PROC");
   END IF;
   IF definable_name.ALL /= x.name.ALL THEN
      fail(cur_line, "END name does not match " & x.name.ALL);
   END IF;
   RETURN x;
END FUNC subprogram_decl;

ABNORMAL FUNC capsule_decl => node IMPORTS ALL;
   VAR x : node := nn(n_capsule, cur_line);
   VAR dummy : BOOL;
   tpos := tpos + 1;
   x.name := expect_id;
   dummy := imports_list(x);
   expect_kw("EXPORTS");
   IF accept_kw("ALL") THEN
      x.ival := 1;
   ELSEIF accept_kw("NONE") THEN
      x.ival := 0;
   ELSE
      VAR head, tail : node;
      VAR more : BOOL := TRUE;
      WHILE more REPEAT
         VAR n : node := nn(n_name, cur_line);
         IF accept_kw("READONLY") THEN
            n.ival := 1;
         END IF;
         n.name := definable_name;
         append(head, tail, n);
         more := accept_op(",");
      END REPEAT;
      x.a := head;
      x.ival := 2;
   END IF;
   expect_op(";");
   x.c := body;
   expect_kw("END");
   expect_kw("CAPSULE");
   IF expect_id.ALL /= x.name.ALL THEN
      fail(cur_line, "END CAPSULE name does not match");
   END IF;
   RETURN x;
END FUNC capsule_decl;

% EXPOSE (diagram 55): ival 1 = ALL, a = names; flag 1 = NEW, 2 = EXTERNAL
ABNORMAL FUNC expose_decl => node IMPORTS ALL;
   VAR x : node := nn(n_expose, cur_line);
   tpos := tpos + 1;
   IF accept_kw("ALL") THEN
      x.ival := 1;
   ELSEIF NOT accept_kw("NONE") THEN
      VAR head, tail : node;
      VAR more : BOOL := TRUE;
      WHILE more REPEAT
         VAR n : node := nn(n_name, cur_line);
         IF accept_kw("READONLY") THEN
            n.ival := 1;
         END IF;
         n.name := definable_name;
         append(head, tail, n);
         more := accept_op(",");
      END REPEAT;
      x.a := head;
   END IF;
   expect_kw("FROM");
   IF accept_kw("NEW") THEN
      x.flag := 1;
   END IF;
   IF accept_kw("EXTERNAL") THEN
      x.flag := x.flag + 2;
   END IF;
   x.name := expect_id;
   IF at_op("(") THEN
      x.b := actual_params;
   END IF;
   IF at_kw("RENAMING") THEN
      perror("RENAMING is not handled yet");
   END IF;
   IF x.flag = 1 OR x.flag = 3 THEN
      perror("capsules invoked as NEW are not handled yet");
   END IF;
   RETURN x;
END FUNC expose_decl;

% ---- statements (chapter 6) --------------------------------------------------------

FUNC is_compound_kw(READONLY w : STRING[ASCII]) => BOOL;
   RETURN w = "IF" OR w = "CASE" OR w = "FOR" OR w = "WHILE" OR w = "BEGIN"
       OR w = "GUARD" OR w = "WAIT" OR w = "REGION";
END FUNC is_compound_kw;

ABNORMAL FUNC statement => node IMPORTS ALL;
   VAR labels, ltail : node;
   VAR match : text;
   VAR s : node;
   % goto labels: identifier ':' (6.8)
   WHILE at_kind(k_id) AND kind_at(1) = k_op AND text_at(1).ALL = ":" REPEAT
      append(labels, ltail, name_node);
      tpos := tpos + 1;
   END REPEAT;
   IF at_kind(k_id) AND kind_at(1) = k_kw AND is_compound_kw(text_at(1).ALL) THEN
      match := expect_id;
   END IF;
   s := unlabeled_statement;
   IF match /= NIL THEN
      IF s.kind /= n_if AND s.kind /= n_case AND s.kind /= n_repeat AND s.kind /= n_begin
            AND s.kind /= n_guard AND s.kind /= n_wait AND s.kind /= n_region THEN
         fail(s.line, "a matching identifier must bracket a compound statement");
      END IF;
      IF expect_id.ALL /= match.ALL THEN
         fail(s.line, "matching identifier does not match " & match.ALL);
      END IF;
      s.tag := match;
   END IF;
   IF labels /= NIL THEN
      fail(s.line, "goto labels are not handled yet");
   END IF;
   RETURN s;
END FUNC statement;

ABNORMAL FUNC unlabeled_statement => node IMPORTS ALL;
   VAR line : INT := cur_line;
   VAR x : node;
   IF at_kw("IF") THEN
      RETURN if_stmt;
   ELSEIF at_kw("CASE") THEN
      RETURN case_stmt;
   ELSEIF at_kw("FOR") OR at_kw("WHILE") THEN
      RETURN repeat_stmt;
   ELSEIF at_kw("BEGIN") THEN
      x := nn(n_begin, line);
      tpos := tpos + 1;
      x.a := body;
      expect_kw("END");
      RETURN x;
   ELSEIF at_kw("GUARD") THEN
      RETURN guard_stmt;
   ELSEIF at_kw("EXIT") THEN
      x := nn(n_exit, line);
      tpos := tpos + 1;
      x.name := expect_id;
      RETURN x;
   ELSEIF at_kw("RETURN") THEN
      x := nn(n_return, line);
      tpos := tpos + 1;
      IF NOT at_op(";") THEN
         x.a := expr;
      END IF;
      RETURN x;
   ELSEIF at_kw("RAISE") THEN
      x := nn(n_raise, line);
      tpos := tpos + 1;
      x.name := expect_id;
      RETURN x;
   ELSEIF at_kw("RERAISE") THEN
      tpos := tpos + 1;
      RETURN nn(n_reraise, line);
   ELSEIF at_kw("ALLOC") THEN
      x := nn(n_alloc, line);
      tpos := tpos + 1;
      x.a := postfix;
      IF NOT (at_kind(k_id) AND toks(tpos).s.ALL = "PTR") THEN
         perror("expected PTR");
      END IF;
      tpos := tpos + 1;
      IF at_op("(") THEN
         x.b := actual_params;
      END IF;
      IF accept_op(":=") THEN
         x.c := expr;
      END IF;
      RETURN x;
   END IF;
   BEGIN
      VAR target : node := postfix;
      IF accept_op(":=") THEN
         x := nn(n_assign, line);
         x.a := target;
         x.b := expr;
      ELSE
         x := nn(n_call, line);
         x.a := target;
      END IF;
   END;
   RETURN x;
END FUNC unlabeled_statement;

ABNORMAL FUNC arm(CONST cond : node, CONST b : node, CONST line : INT) => node;
   VAR x : node := nn(n_arm, line);
   x.a := cond;
   x.b := b;
   RETURN x;
END FUNC arm;

% IF (diagram 42); flag 1 = has ELSE
ABNORMAL FUNC if_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_if, cur_line);
   VAR head, tail, cond : node;
   VAR go : BOOL := TRUE;
   tpos := tpos + 1;
   cond := expr;
   expect_kw("THEN");
   append(head, tail, arm(cond, body, x.line));
   WHILE go REPEAT
      IF accept_kw("ELSEIF") THEN
         cond := expr;
         expect_kw("THEN");
         append(head, tail, arm(cond, body, x.line));
      ELSEIF accept_kw("ELSE") THEN
         x.flag := 1;
         x.b := body;
      ELSE
         go := FALSE;
      END IF;
   END REPEAT;
   expect_kw("END");
   expect_kw("IF");
   x.a := head;
   RETURN x;
END FUNC if_stmt;

% CASE (diagram 43): arms hold n_label lists
ABNORMAL FUNC case_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_case, cur_line);
   VAR head, tail : node;
   tpos := tpos + 1;
   x.a := expr;
   WHILE accept_kw("WHEN") REPEAT
      VAR labs, ltail : node;
      VAR more : BOOL := TRUE;
      WHILE more REPEAT
         VAR l : node := nn(n_label, cur_line);
         l.a := expr;
         IF accept_op("..") THEN
            l.b := expr;
         END IF;
         append(labs, ltail, l);
         more := accept_op(",");
      END REPEAT;
      expect_op("=>");
      append(head, tail, arm(labs, body, x.line));
   END REPEAT;
   IF accept_kw("ELSE") THEN
      expect_op("=>");
      x.flag := 1;
      x.c := body;
   END IF;
   expect_kw("END");
   expect_kw("CASE");
   x.b := head;
   RETURN x;
END FUNC case_stmt;

% REPEAT (diagram 44): flag 1 = FOR, ival 1 = REVERSE
ABNORMAL FUNC repeat_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_repeat, cur_line);
   IF accept_kw("FOR") THEN
      x.flag := 1;
      x.name := expect_id;
      expect_op(":");
      IF accept_kw("REVERSE") THEN
         x.ival := 1;
      END IF;
      x.a := p_subtype;
   ELSE
      expect_kw("WHILE");
      x.a := expr;
   END IF;
   expect_kw("REPEAT");
   x.b := body;
   expect_kw("END");
   expect_kw("REPEAT");
   RETURN x;
END FUNC repeat_stmt;

% GUARD (diagram 58): handlers are n_handler with a name list; flag 1 = ELSE
ABNORMAL FUNC guard_stmt => node IMPORTS ALL;
   VAR x : node := nn(n_guard, cur_line);
   VAR head, tail : node;
   tpos := tpos + 1;
   x.a := body;
   expect_kw("BY");
   WHILE accept_kw("WHEN") REPEAT
      VAR h : node := nn(n_handler, cur_line);
      h.a := id_list;
      expect_op("=>");
      h.b := body;
      append(head, tail, h);
   END REPEAT;
   IF accept_kw("ELSE") THEN
      expect_op("=>");
      x.flag := 1;
      x.c := body;
   END IF;
   expect_kw("END");
   expect_kw("GUARD");
   x.b := head;
   RETURN x;
END FUNC guard_stmt;

% the program: translation units, each a capsule declaration (3.1); the last
% one is the main capsule, the others are libraries it can EXPOSE EXTERNAL
ABNORMAL FUNC program => node IMPORTS ALL;
   VAR head, tail : node;
   WHILE NOT at_kind(k_eof) REPEAT
      IF NOT at_kw("CAPSULE") THEN
         perror("a translation unit is a capsule declaration");
      END IF;
      append(head, tail, capsule_decl);
      expect_op(";");
   END REPEAT;
   RETURN head;
END FUNC program;
