# the program prints, so it uses the implementation's TERMINAL segment
s/^MAIN SEGMENT Z;/MAIN SEGMENT Z USES (TERMINAL);/
# the elided code: A must have a value before 2 * X.A (3.1.1.3), and is printed
/^          PROCEDURE T\$P/{n;s/^               \.\.\.$/               X.A := 1;/;}
/^          PROCEDURE T\$Q/{n;s/^               \.\.\.$/               Y.A := 1;/;}
s/^               Y\.A := 5 \* Y\.A;$/&\
               PUT_LINE ('Q: Y.A = ' !! TO_CHAR (Y.A) !! ', Q_COUNT = ' !! TO_CHAR (Q_COUNT));/
/^               \.\.\.$/c\
               PUT_LINE ('P: X.A = ' !! TO_CHAR (X.A) !! ', P_COUNT = ' !! TO_CHAR (P_COUNT));
# the counts start at 0, outside the range [1:1000] the example gives them
s/INTEGER \[1:1000\] := 0;/INTEGER [0:1000] := 0;/
/^     \.\.\.$/d
