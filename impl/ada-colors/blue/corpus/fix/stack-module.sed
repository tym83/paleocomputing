# a semicolon is missing after the assignment before ELSE
s/S\.TOP := S\.TOP - 1$/S.TOP := S.TOP - 1;/
# the definite loop needs DO (4.5.6.3); the example writes ;
s/LOOP FOR I IN \[1:S1\.TOP\];/LOOP FOR I IN [1:S1.TOP] DO/
