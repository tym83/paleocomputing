# Fixes of the evaluators' function example (p.1895).
# 1. ":" for ";" in the declaration of TOTAL
s/^VAR TOTAL      ;    R2 ;/VAR TOTAL      :    R2 ;/
# 2. no ";" between the formals and the body (rule 12)
s/(CONST AA : ARRAY (1 DIMENSIONS OF R2)) ;$/(CONST AA : ARRAY (1 DIMENSIONS OF R2))/
# 3. ENDFUNCTION repeats the name (rule 12)
s/^ENDFUNCTION ;$/ENDFUNCTION ADD ;/
# not an error: data for the run
s/^TOTAL := ADD(A) ;/FOR K : R DO A[K] := 0.25 ENDFOR; (* added: data *)\
TOTAL := ADD(A) ;/
