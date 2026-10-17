# Fixes of the distance example (pp.1100-1102) forced by the translator.
# 1. the variant part of Coordinate has no ENDSELECT (rule 78)
s/^  ENDRECORD$/  ENDSELECT ENDRECORD/
# 2. "MODULE ComputeDistance;" -- no semicolon after the name (rule 2)
s/^MODULE ComputeDistance;/MODULE ComputeDistance/
