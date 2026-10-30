% strings of character sets other than ASCII (C.8)
CAPSULE main EXPORTS NONE;
   TYPE base4 : ENUM['A, 'C, 'G, 'T];
   ABBREV dna : STRING[ENUM['A, 'C, 'G, 'T]];
   VAR s : dna(4) := "GATC";
   VAR t : STRING[ENUM['A, 'C, 'G, 'T]](5);
   VAR u : STRING[ASCII('A .. 'Z)](2) := "OK";
   t := s & 'A;
   IF s(1) = 'G AND t(5) = 'A AND s < t THEN
      WRITELN("strings of another character set");
   END IF;
   GUARD
      u(1) := 'L_A;
   BY
      WHEN X_RANGE => WRITELN("component subtype checked");
   END GUARD;
END CAPSULE main;
