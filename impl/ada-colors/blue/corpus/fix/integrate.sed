# the arguments are in the order of the formals: FIRSTVAL, LASTVAL, F
s/INTEGRATE (P,1,100);/INTEGRATE (1,100,P);/
s/INTEGRATE (Q,10\\S14,20\\S14);/INTEGRATE (10\\S14,20\\S14,Q);/
# INTEGER has no arguments; FIXED (14,2,STD) is meant
s/INTEGER (14,2,STD)/FIXED (14,2,STD)/g
# the elided code: the results are printed; P doubles, Q adds a quarter; INTEGRATE
# takes the trapezoid between the two ends
s/^     \.\.\.$/     PUT_LINE ('A = ' !! TO_CHAR (A) !! ', B = ' !! TO_CHAR (B));/
/FUNCTION P (X/,/END FUNCTION P/s/^          \.\.\.$/          RETURN X * 2;/
/FUNCTION Q (X/,/END FUNCTION Q/s/^          \.\.\.$/          RETURN X + .25\\S2;/
/FUNCTION INTEGRATE/,/END FUNCTION INTEGRATE/s/^          \.\.\.$/          RETURN (F (FIRSTVAL) + F (LASTVAL)) !*S! (LASTVAL - FIRSTVAL) \/\/ 2;/
