# Fixes of the evaluators' case example (p.1898).
# 1. the months elided with "....." written out
s/ORDERED (JAN,FEB,.....)/ORDERED (JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC)/
# 2. a stray comma after FEB
s/CASE FEB, =>/CASE FEB =>/
# 3. YEAR is not declared: declared, with the month, for the run
s/^VAR DAYS       :  INTEGER \[1..31\] ;/VAR DAYS       :  INTEGER [1..31] ;\
VAR YEAR : INTEGER [1..3000] := 1976; (* added *)/
s/^SELECT MONTH$/FOR MONTH: M DO (* added: every month *)\
SELECT MONTH/
s/^ENDSELECT ;$/ENDSELECT ; Write(DAYS); Write(" ") ENDFOR; (* added *)/
# 4. ELSE takes no arrow (rule 28)
s/ELSE => DAYS := 31/ELSE DAYS := 31/
