# Fixes of the evaluators' variant record (p.1900).
# 1. REAL is not a type of the language: a FLOATING representation
s/^REPRESENTATION SHAPE = UNORDERED (CIRCLE,RECT) ;/REPRESENTATION REAL = FLOATING [-1.0E6..1.0E6] PRECISION 6 ; (* added *)\
REPRESENTATION SHAPE = UNORDERED (CIRCLE,RECT) ;/
# 2. "Z.LENGTH ;" is an expression, not a statement; Z is declared nowhere;
#    and a variant component is reached inside a SELECT on its case (VIII.B):
#    Z is declared and the reference written as such a SELECT
s/^Z.LENGTH ; (\* EXAMPLE OF STRUCTURE REFERENCE \*)/VAR Z : FIGURE := FIGURE(POSITION(0.0, 0.0), RECT, 3.0, 4.0) ;\
SELECT Z.S CASE RECT => WriteFloat(Z.LENGTH, 1) ENDSELECT ; (* EXAMPLE OF STRUCTURE REFERENCE *)/
