# a misprint: the first product takes the first row of M2, not of M1
s/RESULT(I, J) := M1(I, 1) \* M1(1, J);/RESULT(I, J) := M1(I, 1) * M2(1, J);/
