# Changes that make RED Rationale C.1 (1979) translate. Each one is an error
# that any RED translator rejects; logic slips are kept and listed in the README.
# transcription noise
s/`//g
s/\xc2\xa0/ /g
s/subt_1oop/subt_loop/
s/1NT(/INT(/
s/realmultip1y/realmultiply/g
s/IF 1 \/= j THEN/IF i \/= j THEN/
# ':' printed for '=' in four assertions
s/ASSERT \([a-z.]*\) : /ASSERT \1 = /
# the capsule is closed under another name
s/END CAPSULE vector_matrix_package/END CAPSULE matrix_vector_package/
# lower-case INTEGER is not a RED type
s/CONST k : integer/CONST k : INT/
# trans, upperTriangle and backSubstitute use m and n that are not declared there
s/FOR i : INT(1 \.\. m) REPEAT/FOR i : INT(1 .. b.m) REPEAT/
s/FOR j : INT(1 \.\. n) REPEAT\(.*\)$/FOR j : INT(1 .. b.n) REPEAT\1/
s/FOR k : INT(i+1 \.\. m) REPEAT/FOR k : INT(i+1 .. n) REPEAT/
s/FOR r : INT(1 \.\. m) REPEAT/FOR r : INT(1 .. n) REPEAT/
# '.' printed for ','
s/a(p\.r)/a(p,r)/
s/x(k\.p) := x(k,p) - z \* x(i\.p)/x(k,p) := x(k,p) - z * x(i,p)/
