# Fixes of the SIFT scheduler (pp.1113-1114). The program cannot be run:
# "it does not include the mechanism for initializing the various data
# structures", which are local to the module; it is translated only.
# 1. a CONST declaration gives a value (rule 7); period is set by the
#    initialization the example leaves out, so it is a variable
s/^  CONST$/  VAR/
# 2. relational operators bind loosest (VIII): "ept > 0 AND enabled[pri]" is
#    ept > (0 AND enabled[pri])
s/IF ept > 0 AND enabled\[pri\]/IF (ept > 0) AND enabled[pri]/
# 3. the IF inside the loop has no ENDIF of its own: the one printed
#    closes the ELSE of the outer IF, and the loop is never closed
s/^            RETURN ept$/            RETURN ept ENDIF/
