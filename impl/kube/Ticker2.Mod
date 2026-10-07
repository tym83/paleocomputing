MODULE Ticker2;  (*A workload for Kube pods, version 2: each pod counts seconds.
  The image of a pod names its module: KubeNet's kubelet loads Ticker2 and calls
  Ticker2.Start for a new pod, Ticker2.Stop when the pod is gone, with the pod in
  Pods. Ticker2.Show prints the pods this machine runs and how long.*)

  IMPORT Texts, Oberon, Pods;

  CONST max = 16;

  VAR
    W: Texts.Writer;
    pod, ticks: ARRAY max OF INTEGER;
    n: INTEGER;
    task: Oberon.Task;

  PROCEDURE tick;
    VAR i: INTEGER;
  BEGIN FOR i := 0 TO n-1 DO INC(ticks[i]) END
  END tick;

  PROCEDURE log(s: ARRAY OF CHAR; id: INTEGER);
  BEGIN Texts.WriteString(W, "Ticker2 v2: "); Texts.WriteString(W, s); Texts.Write(W, " ");
    Texts.WriteInt(W, id, 0); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
  END log;

  PROCEDURE Start*;
  BEGIN
    IF n < max THEN pod[n] := Pods.id; ticks[n] := 0; INC(n); log("started pod", Pods.id) END
  END Start;

  PROCEDURE Stop*;
    VAR i: INTEGER;
  BEGIN i := 0;
    WHILE (i < n) & (pod[i] # Pods.id) DO INC(i) END;
    IF i < n THEN DEC(n); pod[i] := pod[n]; ticks[i] := ticks[n]; log("stopped pod", Pods.id) END
  END Stop;

  PROCEDURE Show*;
    VAR i: INTEGER;
  BEGIN
    FOR i := 0 TO n-1 DO
      Texts.WriteString(W, "Ticker2 v2 pod "); Texts.WriteInt(W, pod[i], 0);
      Texts.WriteString(W, ": "); Texts.WriteInt(W, ticks[i], 0); Texts.WriteString(W, " s"); Texts.WriteLn(W)
    END;
    Texts.Append(Oberon.Log, W.buf)
  END Show;

BEGIN Texts.OpenWriter(W); n := 0;
  task := Oberon.NewTask(tick, 1000); Oberon.Install(task)
END Ticker2.
