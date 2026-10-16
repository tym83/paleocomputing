# Fixes of the track reservation example (p.1112).
# 1. returntrack falls out of its bottom: "It is an error to fall out the
#    bottom of a routine" (IX.A.6); as printed the first call ends with the
#    trap NO_RETURN
s/^    reserved\[k DIV w\]\[k MOD w\] := FALSE;$/    reserved[k DIV w][k MOD w] := FALSE; RETURN/
