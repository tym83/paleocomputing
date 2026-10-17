# the elided code: RC goes through values on both sides of each breakpoint
s/^     \.\.\.$/     LOOP FOR K IN [0:7] DO RC := TO_FLOAT (K * 500, 8) - 1.0;/
$a\
     PUT_LINE ('RC = ' !! TO_CHAR (RC) !! ', X = ' !! TO_CHAR (X));\
     END LOOP K;
