MODULE OpenBench;
(* Compute workload on OPEN arrays (episode 14, descriptors).
   The same kernels as ArrBench (sorting, reduction), but the array is passed to the
   procedure as an ARRAY OF T parameter. Its length is known only at run time, and
   CHK (limit in the instruction) cannot cover it: in E the check stays in software,
   in F it is done by IDX through the descriptor. Plus ARRAY OF CHAR: strings, the
   main source of open arrays in the system.
   The result is checked with ASSERT: wrong code must not produce plausible cycle counts. *)
  IMPORT Norebo;

  CONST N = 1000; L = 1000;

  VAR a: ARRAY N OF INTEGER; s: ARRAY L OF CHAR; total: INTEGER;

  PROCEDURE Fill(VAR x: ARRAY OF INTEGER; VAR t: ARRAY OF CHAR);
    VAR i: INTEGER;
  BEGIN
    FOR i := 0 TO LEN(x) - 1 DO x[i] := i * 7 MOD 1021 END ;
    FOR i := 0 TO LEN(t) - 2 DO t[i] := CHR(ORD("a") + i MOD 26) END ;
    t[LEN(t) - 1] := 0X
  END Fill;

  (* Bubble sort: two indexings per comparison, four per swap *)
  PROCEDURE Sort(VAR x: ARRAY OF INTEGER);
    VAR i, j, t, n: INTEGER;
  BEGIN n := LEN(x); i := 0;
    WHILE i < n DO j := 0;
      WHILE j < n - 1 - i DO
        IF x[j] > x[j+1] THEN t := x[j]; x[j] := x[j+1]; x[j+1] := t END ;
        INC(j)
      END ;
      INC(i)
    END
  END Sort;

  PROCEDURE Sum(VAR x: ARRAY OF INTEGER): INTEGER;
    VAR i, r: INTEGER;
  BEGIN r := 0; FOR i := 0 TO LEN(x) - 1 DO r := r + x[i] END ;
    RETURN r
  END Sum;

  (* String: count a character up to 0X, the way Texts/ORS walk names *)
  PROCEDURE Count(t: ARRAY OF CHAR; c: CHAR): INTEGER;
    VAR i, k: INTEGER;
  BEGIN i := 0; k := 0;
    WHILE t[i] # 0X DO IF t[i] = c THEN INC(k) END ; INC(i) END ;
    RETURN k
  END Count;

  PROCEDURE Run*;
    VAR i, k, r: INTEGER;
  BEGIN Fill(a, s); r := Sum(a); Sort(a);
    FOR i := 0 TO N - 2 DO ASSERT(a[i] <= a[i+1]) END ;
    ASSERT(Sum(a) = r);
    k := 0; FOR i := 1 TO 200 DO k := k + Count(s, "e") END ;
    ASSERT(k = 200 * 39);   (* 999 characters, "e" at positions 4, 30, ...: 39 times *)
    total := r + k
  END Run;

END OpenBench.
