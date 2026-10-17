# the elided code: V(3) gets a value, first of the TRUE variant, then of the FALSE one
s/^     \.\.\.$/     LOOP FOR K IN [1:2] DO IF K = 1 THEN V(3) := [T(TRUE)]$$(X: 40); ELSE V(3) := [T(FALSE)]$$(Y: 0.0); END IF;/
$a\
     WITH Z NAMING V(3) SELECT Z.B FROM TRUE --> PUT_LINE ('X ' !! TO_CHAR (Z.X)); END;\
                                  FALSE --> PUT_LINE ('Y ' !! TO_CHAR (Z.Y)); END; END SELECT;\
     END LOOP K;
