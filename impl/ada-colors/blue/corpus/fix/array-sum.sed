# BOUNDS is ARRAY [0:n] (3.8.1, example 1 there: A.BOUNDS(0)); a one-dimensional
# array has only BOUNDS(0), the example writes BOUNDS(1)
s/A\.BOUNDS(1)/A.BOUNDS(0)/g
# the elided code: A(I) = I / 4, so the sum is 5050 / 4
s/^     \.\.\.$/     LOOP FOR K IN [1:100] DO A(K) := TO_FLOAT (K, 8) \/ 4.0; END LOOP K;/
$a\
     PUT_LINE (TO_CHAR (SUM));
