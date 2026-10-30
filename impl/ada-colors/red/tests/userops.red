% user-defined operators, assignment, selectors, CASE and FOR (13.2 - 13.7)
CAPSULE main EXPORTS NONE;
   TYPE money : INT;
   TYPE m : INT;
   TYPE vec : ARRAY INT(1 .. 3) OF INT;
   TYPE even(lo, hi : INT) : INT(lo .. hi);
   CONST mode := 2;
   PROC :=(VAR a : money, b : money);
      a.ALL := b.ALL + 1;
   END PROC :=;
   FUNC =(a, b : m) => BOOL;
      RETURN (a.ALL MOD 10) = (b.ALL MOD 10);
   END FUNC =;
   FUNC <(a, b : m) => BOOL;
      RETURN (a.ALL MOD 10) < (b.ALL MOD 10);
   END FUNC <;
   FUNC .first(v : vec) => INT;
      RETURN v.ALL(1);
   END FUNC .first;
   FUNC (*)(v : vec, i : INT) => INT;
      RETURN v.ALL(i) * 100;
   END FUNC (*);
   FUNC (*..*)(v : vec, i, j : INT) => INT;
      RETURN v.ALL(i) + v.ALL(j);
   END FUNC (*..*);
   FUNC SUCC(x : even) => even;
      VAR r : even(0, 100);
      r.ALL := x.ALL + 2;
      RETURN r;
   END FUNC SUCC;
   VAR x, y : money;
   VAR mb : MAILBOX[money](1);
   VAR p, q : m;
   VAR r1, r2 : RECORD[f : m];
   VAR v : vec;
   y.ALL := 5;
   x := y;
   WRITELN("user := in assignment: " & CNVT[STRING[ASCII]](x.ALL));
   SEND(mb, x);
   RECEIVE(mb, y);
   WRITELN("user := in message passing: " & CNVT[STRING[ASCII]](y.ALL));
   p.ALL := 13;
   q.ALL := 23;
   IF p = q AND NOT (p /= q) AND p <= q AND p >= q AND NOT (p > q) THEN
      WRITELN("/=, <=, >= and > follow from the user = and <");
   END IF;
   r1.f := p;
   r2.f := q;
   IF r1 = r2 THEN
      WRITELN("record = uses the user = of its components");
   END IF;
   CASE p
      WHEN q => WRITELN("CASE uses the user =");
      ELSE => WRITELN("no");
   END CASE;
   v.ALL := [7, 8, 9];
   WRITELN("selectors: " & CNVT[STRING[ASCII]](v.first) & " " & CNVT[STRING[ASCII]](v(2)) & " "
           & CNVT[STRING[ASCII]](v(1 .. 3)));
   FOR i : even(0, 6) REPEAT
      WRITELN("even " & CNVT[STRING[ASCII]](i.ALL));
   END REPEAT;
   CASE mode
      WHEN 1 => undefined_here;
      WHEN 2 => WRITELN("a manifest CASE translates one body");
   END CASE;
END CAPSULE main;
