# the elided code: I goes through its range
s/^     \.\.\.$/     LOOP FOR K IN [1:10] DO I := K;/
$a\
     PUT_LINE (TO_CHAR (I) !! ' ' !! TO_CHAR (C));\
     END LOOP K;
