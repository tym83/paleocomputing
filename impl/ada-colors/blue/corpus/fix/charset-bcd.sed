# a colon is missing in the declaration of INT_REP
s/CONST INT_REP INTEGER \[0:63\]/CONST INT_REP: INTEGER [0:63]/
# each case element ends with END; (4.5.5.2)
s/^\(              \[[0-9:]*\] --> RETURN (INT_REP[-0-9]*);\)/\1 END;/
# TO_BIT of an integer and [BCD]$$ of a bitstring are machine-dependent (3.6.6.1,
# 3.1.4.1): the ELSE elements become machine-dependent parts
s/ELSE --> CONST NEXT/ELSE --> SELECT OBJECT_MACHINE FROM PDP_11 --> CONST NEXT/
/remember that bitstrings are indexed from zero/{
n
s/^                       END;/                       END; END SELECT; END;/
}
