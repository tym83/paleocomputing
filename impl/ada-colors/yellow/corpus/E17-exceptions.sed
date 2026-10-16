# Fixes of the exception-handling fragment (p.1110).
# 1. a label is declared by LABEL and labels only a top-level statement of
#    a block (IX.A.4); here it labels a BEGIN inside a WHILE, and END takes
#    no name (rule 32)
/^      overflowscope:$/d
s/^      END overflowscope$/      END/
# 2. the traps are named by the implementation (XIV.X.3); in this one
#    overflow is OVERFLOW and zerodivide (printed "zerodevide") ZERO_DIVIDE
s/EXCEPTION CASE overflow =>/EXCEPTION CASE OVERFLOW =>/
s/EXCEPTION CASE overflow,zerodevide =>/EXCEPTION CASE OVERFLOW, ZERO_DIVIDE =>/
