% sets (C.9) and relations (5.2)
CAPSULE main EXPORTS NONE;
   VAR s, t : SET[INT(0 .. 9)];
   VAR n : SET[INT(-5 .. 300)];
   VAR e : SET[ENUM['a, 'b, 'c]];
   VAR big, other : SET[INT];
   VAR b : BOOL := 1 = 1 = TRUE;
   s := [1, 2];
   t := [1, 2, 3];
   IF s < t AND NOT (t < t) AND t <= t AND t > s THEN
      WRITELN("subset relations");
   END IF;
   s := NOT s;
   IF 5 IN s AND NOT (1 IN s) THEN
      WRITELN("complement of SET[INT(0 .. 9)]");
   END IF;
   n := [-3, 300];
   IF -3 IN n AND 300 IN n AND NOT (0 IN n) THEN
      WRITELN("elements outside 0 .. 255");
   END IF;
   GUARD
      n := [301];
   BY
      WHEN X_RANGE => WRITELN("X_RANGE: 301 is not in INT(-5 .. 300)");
   END GUARD;
   e := NOT ['a];
   IF 'b IN e AND (e AND ['c]) = ['c] AND (e XOR ['b]) = ['c] THEN
      WRITELN("enumeration sets");
   END IF;
   big := [-1000000000000, 7, 1000000000000];
   other := NOT [7];
   IF 1000000000000 IN big AND NOT (8 IN big) AND 8 IN other AND NOT (7 IN other) THEN
      WRITELN("SET[INT] of any INT values, complement included");
   END IF;
   IF (big AND other) = [-1000000000000, 1000000000000] AND (big OR other) = (NOT []) AND [7] < big
         AND NOT (other <= big) AND (big XOR [7, 9]) = [-1000000000000, 9, 1000000000000] THEN
      WRITELN("SET[INT] operations");
   END IF;
   IF b THEN
      WRITELN("1 = 1 = TRUE is (1 = 1) = TRUE");
   END IF;
END CAPSULE main;
