# Not an error: data for the run, put before the loop
s/^FOR I : A_ARRAYBOUNDS DO$/FOR K : R DO A[K] := 1.5 ENDFOR; (* added: data *)\
FOR I : A_ARRAYBOUNDS DO/
