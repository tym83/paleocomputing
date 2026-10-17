# record fields are declared with VAR (3.9)
s/^                  CUR_LENGTH: INTEGER/                  VAR CUR_LENGTH: INTEGER/
s/^                  STRING: CHAR_STR/                  VAR STRING: CHAR_STR/
# MAX (not defined by the document; the driver supplies it) takes two values; the
# second, 0, is the one SUBSTRING_ uses
s/IF MAX(U-L+1)<>/IF MAX(U-L+1,0)<>/
# misprints: VAR_CHAR_SET for VAR_CHAR_STR, FIXED_STRING for FIXED_STR, : for ;
s/RETURNS (VAR_CHAR_SET(/RETURNS (VAR_CHAR_STR(/
s/TEMP.STRING := FIXED_STRING;/TEMP.STRING := FIXED_STR;/
s/END FUNCTION VAR_CHAR_STR\$BLANKS:/END FUNCTION VAR_CHAR_STR$BLANKS;/
# a block and a return-stmt end with ; before the exceptions-clause (4.5.1, 4.5.3)
s/^             END BLOCK$/             END BLOCK;/
s/^\( *RETURN (NOT VAR_CHAR_STR\$EQUAL_(S1,S2))\)$/\1;/
s/^\( *RETURN (VAR_CHAR_STR\$DUP(BLANK_OF_CHAR_SET,NUM_BLANKS))\)$/\1;/
# a string assignment needs equal lengths (3.7.5, SIZE); the shorter values go into
# the leading part of the STRING field
s/SUBV.STRING := V.STRING\[L:U\];/SUBV.STRING[0:U-L] := V.STRING[L:U];/
s/S1S2.STRING := S1.STRING/S1S2.STRING[0:S1S2.CUR_LENGTH-1] := S1.STRING/
