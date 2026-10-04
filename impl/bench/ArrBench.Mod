MODULE ArrBench;
(* Compute workload with DENSE array indexing.
   All limits are below 4096, so configuration C uses CHK on every indexing.
   Purpose: an upper bound on what a hardware bounds check can deliver at all.
   Not a single pointer, not a single NIL, unlike the compiler workload. *)
  IMPORT Norebo;

  CONST N = 1000; M = 60; R = M*M;   (* R -- size of the result matrix *)

  VAR a, b: ARRAY N OF INTEGER;
      r: ARRAY R OF INTEGER;   (* there was a bug: it wrote b[i*M+j] up to 3599 with N=1000 *)
      m: ARRAY M, M OF INTEGER;

  PROCEDURE Fill;
    VAR i, j: INTEGER;
  BEGIN i := 0;
    WHILE i < N DO a[i] := i * 7 MOD 1021; b[i] := 0; INC(i) END ;
    i := 0;
    WHILE i < M DO j := 0;
      WHILE j < M DO m[i, j] := i + j; INC(j) END ;
      INC(i)
    END
  END Fill;

  (* Bubble sort: two indexings per comparison, four per swap *)
  PROCEDURE Sort;
    VAR i, j, t: INTEGER;
  BEGIN i := 0;
    WHILE i < N DO j := 0;
      WHILE j < N - 1 - i DO
        IF a[j] > a[j+1] THEN t := a[j]; a[j] := a[j+1]; a[j+1] := t END ;
        INC(j)
      END ;
      INC(i)
    END
  END Sort;

  (* Matrix multiplication: three indexings per inner-loop iteration *)
  PROCEDURE MatMul;
    VAR i, j, k, s: INTEGER;
  BEGIN i := 0;
    WHILE i < M DO j := 0;
      WHILE j < M DO s := 0; k := 0;
        WHILE k < M DO s := s + m[i, k] * m[k, j]; INC(k) END ;
        r[i * M + j] := s MOD 30011; INC(j)
      END ;
      INC(i)
    END
  END MatMul;

  PROCEDURE Run*;
  BEGIN Fill; Sort; MatMul
  END Run;

END ArrBench.
