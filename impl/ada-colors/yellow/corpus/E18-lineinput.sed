# Fixes of the line input module (p.1111).
# 1. the blank is a character of ASCII and of pdp11chars: in a scope with
#    both it is qualified by its alphabet (VI.A.3)
s/IF ch >= ' ' THEN/IF ch >= pdp11chars ' ' THEN/
s/THEN x := ' '; eoln := TRUE;/THEN x := pdp11chars ' '; eoln := TRUE;/
s/^          x := ' ';$/          x := pdp11chars ' ';/
# 2. the three procedures fall out of their bottom (IX.A.6)
s/^    eof := FALSE; lno := 0;$/    eof := FALSE; lno := 0; RETURN/
s/^    eoln := FALSE; lno := lno + 1;$/    eoln := FALSE; lno := lno + 1; RETURN/
s/^    ENDLOOP nibble;$/    ENDLOOP nibble; RETURN/
