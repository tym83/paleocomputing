MODULE Kube;  (*A minimal Kubernetes control plane in Oberon-07.
  Three controllers run as background Oberon.Task entries in the same ring
  as the system garbage collector:
    ctlDeploy - Deployment -> ReplicaSet (keeps one RS with the wanted replicas/image);
    ctlRS     - ReplicaSet -> Pod (keeps the number of pods equal to replicas);
    ctlNode   - scheduler (puts a pod on the least loaded node) + kubelet
                (moves a scheduled pod to Running).
  Ownership is the owner field (ownerReferences): pod.owner = rs, rs.owner = deploy.
  Objects live in the store array. Commands, run with the middle button:
    Kube.Apply name N image,  Kube.Get,  Kube.DeletePod "name",
    Kube.Start/Stop (install/remove the controllers),
    Kube.Run N (run N ticks by hand, for the Norebo command line).
  Pod names contain hyphens, which end a name for Texts.Scan, so DeletePod
  also takes the name as a quoted string.*)

  IMPORT Texts, Oberon;

  CONST
    maxObj = 256;
    kDeploy = 0; kRS = 1; kPod = 2;
    phPending = 0; phRunning = 1;
    period = 50;  (*ms between ticks in the full system*)

  TYPE
    Name = ARRAY 40 OF CHAR;
    Object = RECORD
      used: BOOLEAN;
      kind, replicas, phase: INTEGER;
      name, owner, node, image: Name
    END;

  VAR
    store: ARRAY maxObj OF Object;
    nodes: ARRAY 3 OF Name;
    W: Texts.Writer;
    tDeploy, tRS, tNode: Oberon.Task;
    seq: INTEGER;
    running: BOOLEAN;

  PROCEDURE append(VAR s: Name; t: ARRAY OF CHAR);
    VAR i, j: INTEGER;
  BEGIN i := 0; WHILE s[i] # 0X DO INC(i) END;
    j := 0; WHILE t[j] # 0X DO s[i] := t[j]; INC(i); INC(j) END; s[i] := 0X
  END append;

  PROCEDURE appendNum(VAR s: Name; n: INTEGER);
    VAR i, j: INTEGER; tmp: ARRAY 12 OF CHAR;
  BEGIN i := 0; WHILE s[i] # 0X DO INC(i) END;
    j := 0;
    IF n = 0 THEN tmp[0] := "0"; j := 1
    ELSE WHILE n > 0 DO tmp[j] := CHR(n MOD 10 + ORD("0")); INC(j); n := n DIV 10 END
    END;
    WHILE j > 0 DO DEC(j); s[i] := tmp[j]; INC(i) END;
    s[i] := 0X
  END appendNum;

  PROCEDURE alloc(): INTEGER;
    VAR i, r: INTEGER;
  BEGIN i := 0; r := -1;
    WHILE (i < maxObj) & (r < 0) DO IF ~store[i].used THEN r := i END; INC(i) END;
    RETURN r
  END alloc;

  PROCEDURE find(kind: INTEGER; nm: ARRAY OF CHAR): INTEGER;
    VAR i, r: INTEGER;
  BEGIN i := 0; r := -1;
    WHILE (i < maxObj) & (r < 0) DO
      IF store[i].used & (store[i].kind = kind) & (store[i].name = nm) THEN r := i END; INC(i)
    END;
    RETURN r
  END find;

  PROCEDURE findOwned(kind: INTEGER; owner: ARRAY OF CHAR): INTEGER;
    VAR i, r: INTEGER;
  BEGIN i := 0; r := -1;
    WHILE (i < maxObj) & (r < 0) DO
      IF store[i].used & (store[i].kind = kind) & (store[i].owner = owner) THEN r := i END; INC(i)
    END;
    RETURN r
  END findOwned;

  PROCEDURE countOwned(kind: INTEGER; owner: ARRAY OF CHAR): INTEGER;
    VAR i, c: INTEGER;
  BEGIN c := 0;
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kind) & (store[i].owner = owner) THEN INC(c) END
    END;
    RETURN c
  END countOwned;

  PROCEDURE leastNode(): INTEGER;
    VAR i, j, best, bestLoad, load: INTEGER;
  BEGIN best := 0; bestLoad := maxObj + 1;
    FOR i := 0 TO 2 DO
      load := 0;
      FOR j := 0 TO maxObj-1 DO
        IF store[j].used & (store[j].kind = kPod) & (store[j].node = nodes[i]) THEN INC(load) END
      END;
      IF load < bestLoad THEN bestLoad := load; best := i END
    END;
    RETURN best
  END leastNode;

  PROCEDURE newRS(deploy, image: ARRAY OF CHAR; rep: INTEGER);
    VAR k: INTEGER;
  BEGIN k := alloc();
    IF k >= 0 THEN
      store[k].used := TRUE; store[k].kind := kRS;
      store[k].name[0] := 0X; append(store[k].name, deploy); append(store[k].name, "-rs");
      store[k].owner[0] := 0X; append(store[k].owner, deploy);
      store[k].image[0] := 0X; append(store[k].image, image);
      store[k].replicas := rep; store[k].phase := 0; store[k].node[0] := 0X
    END
  END newRS;

  PROCEDURE newPod(rs, image: ARRAY OF CHAR);
    VAR k: INTEGER;
  BEGIN k := alloc();
    IF k >= 0 THEN
      store[k].used := TRUE; store[k].kind := kPod;
      store[k].name[0] := 0X; append(store[k].name, rs); append(store[k].name, "-");
      appendNum(store[k].name, seq); INC(seq);
      store[k].owner[0] := 0X; append(store[k].owner, rs);
      store[k].image[0] := 0X; append(store[k].image, image);
      store[k].node[0] := 0X; store[k].phase := phPending; store[k].replicas := 0
    END
  END newPod;

  PROCEDURE delOneOwned(kind: INTEGER; owner: ARRAY OF CHAR);
    VAR i: INTEGER; done: BOOLEAN;
  BEGIN done := FALSE; i := 0;
    WHILE (i < maxObj) & ~done DO
      IF store[i].used & (store[i].kind = kind) & (store[i].owner = owner) THEN
        store[i].used := FALSE; done := TRUE
      END; INC(i)
    END
  END delOneOwned;

  (*Deployment controller: one RS per deployment, replicas/image kept in sync*)
  PROCEDURE ctlDeploy*;
    VAR i, rs: INTEGER;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kDeploy) THEN
        rs := findOwned(kRS, store[i].name);
        IF rs < 0 THEN newRS(store[i].name, store[i].image, store[i].replicas)
        ELSE store[rs].replicas := store[i].replicas; store[rs].image := store[i].image
        END
      END
    END
  END ctlDeploy;

  (*ReplicaSet controller: number of pods = replicas*)
  PROCEDURE ctlRS*;
    VAR i, have: INTEGER;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kRS) THEN
        have := countOwned(kPod, store[i].name);
        WHILE have < store[i].replicas DO newPod(store[i].name, store[i].image); INC(have) END;
        WHILE have > store[i].replicas DO delOneOwned(kPod, store[i].name); DEC(have) END
      END
    END
  END ctlRS;

  (*scheduler + kubelet*)
  PROCEDURE ctlNode*;
    VAR i: INTEGER;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].node[0] = 0X) THEN
        store[i].node := nodes[leastNode()]
      END
    END;
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].node[0] # 0X) & (store[i].phase = phPending) THEN
        store[i].phase := phRunning
      END
    END
  END ctlNode;

  PROCEDURE Step*;
  BEGIN ctlDeploy; ctlRS; ctlNode
  END Step;

  PROCEDURE applyDep(nm, img: ARRAY OF CHAR; rep: INTEGER);
    VAR k: INTEGER;
  BEGIN k := find(kDeploy, nm);
    IF k < 0 THEN k := alloc();
      IF k >= 0 THEN store[k].used := TRUE; store[k].kind := kDeploy;
        store[k].name[0] := 0X; append(store[k].name, nm);
        store[k].owner[0] := 0X; store[k].node[0] := 0X; store[k].phase := 0
      END
    END;
    IF k >= 0 THEN store[k].replicas := rep;
      store[k].image[0] := 0X; append(store[k].image, img)
    END
  END applyDep;

  PROCEDURE delPod(nm: ARRAY OF CHAR): BOOLEAN;
    VAR i: INTEGER; done: BOOLEAN;
  BEGIN done := FALSE; i := 0;
    WHILE (i < maxObj) & ~done DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].name = nm) THEN
        store[i].used := FALSE; done := TRUE
      END; INC(i)
    END;
    RETURN done
  END delPod;

  PROCEDURE Get*;
    VAR i, j, k: INTEGER;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kDeploy) THEN
        Texts.WriteString(W, "deployment "); Texts.WriteString(W, store[i].name);
        Texts.WriteString(W, "  replicas="); Texts.WriteInt(W, store[i].replicas, 0);
        Texts.WriteString(W, "  image="); Texts.WriteString(W, store[i].image); Texts.WriteLn(W);
        FOR j := 0 TO maxObj-1 DO
          IF store[j].used & (store[j].kind = kRS) & (store[j].owner = store[i].name) THEN
            Texts.WriteString(W, "  replicaset "); Texts.WriteString(W, store[j].name);
            Texts.WriteString(W, "  desired="); Texts.WriteInt(W, store[j].replicas, 0); Texts.WriteLn(W);
            FOR k := 0 TO maxObj-1 DO
              IF store[k].used & (store[k].kind = kPod) & (store[k].owner = store[j].name) THEN
                Texts.WriteString(W, "    pod "); Texts.WriteString(W, store[k].name);
                Texts.WriteString(W, " @"); Texts.WriteString(W, store[k].node);
                IF store[k].phase = phRunning THEN Texts.WriteString(W, " Running")
                ELSE Texts.WriteString(W, " Pending") END;
                Texts.WriteLn(W)
              END
            END
          END
        END
      END
    END;
    Texts.Append(Oberon.Log, W.buf)
  END Get;

  PROCEDURE Apply*;
    VAR S: Texts.Scanner; nm, img: Name; rep: INTEGER;
  BEGIN Texts.OpenScanner(S, Oberon.Par.text, Oberon.Par.pos); Texts.Scan(S);
    IF S.class = Texts.Name THEN nm[0] := 0X; append(nm, S.s); Texts.Scan(S);
      IF S.class = Texts.Int THEN rep := S.i; Texts.Scan(S);
        img[0] := 0X;
        IF S.class = Texts.Name THEN append(img, S.s) ELSE append(img, "scratch") END;
        applyDep(nm, img, rep);
        Texts.WriteString(W, "deployment "); Texts.WriteString(W, nm);
        Texts.WriteString(W, " applied, replicas="); Texts.WriteInt(W, rep, 0); Texts.WriteLn(W);
        Texts.Append(Oberon.Log, W.buf)
      END
    END
  END Apply;

  PROCEDURE DeletePod*;
    VAR S: Texts.Scanner;
  BEGIN Texts.OpenScanner(S, Oberon.Par.text, Oberon.Par.pos); Texts.Scan(S);
    IF (S.class = Texts.Name) OR (S.class = Texts.String) THEN
      IF delPod(S.s) THEN
        Texts.WriteString(W, "pod "); Texts.WriteString(W, S.s);
        Texts.WriteString(W, " deleted (replicaset will recreate)"); Texts.WriteLn(W);
        Texts.Append(Oberon.Log, W.buf)
      END
    END
  END DeletePod;

  PROCEDURE Run*;
    VAR S: Texts.Scanner; i, n: INTEGER;
  BEGIN Texts.OpenScanner(S, Oberon.Par.text, Oberon.Par.pos); Texts.Scan(S);
    IF S.class = Texts.Int THEN n := S.i ELSE n := 1 END;
    FOR i := 0 TO n-1 DO Step END;
    Get
  END Run;

  PROCEDURE Start*;
  BEGIN
    IF ~running THEN
      tDeploy := Oberon.NewTask(ctlDeploy, period); Oberon.Install(tDeploy);
      tRS := Oberon.NewTask(ctlRS, period); Oberon.Install(tRS);
      tNode := Oberon.NewTask(ctlNode, period); Oberon.Install(tNode);
      running := TRUE;
      Texts.WriteString(W, "kube: 3 controllers installed (deploy, replicaset, node)");
      Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
    END
  END Start;

  PROCEDURE Stop*;
  BEGIN
    IF running THEN
      Oberon.Remove(tDeploy); Oberon.Remove(tRS); Oberon.Remove(tNode); running := FALSE;
      Texts.WriteString(W, "kube: controllers removed"); Texts.WriteLn(W);
      Texts.Append(Oberon.Log, W.buf)
    END
  END Stop;

  PROCEDURE Reset*;
    VAR i: INTEGER;
  BEGIN FOR i := 0 TO maxObj-1 DO store[i].used := FALSE END; seq := 0
  END Reset;

  (*self-contained demo for the Norebo command line (one process)*)
  PROCEDURE Demo*;
    VAR ignore: BOOLEAN;
  BEGIN Reset;
    Texts.WriteString(W, "== apply deployment web, replicas=3 =="); Texts.WriteLn(W);
    Texts.Append(Oberon.Log, W.buf);
    applyDep("web", "nginx", 3); Step; Step; Get;
    Texts.WriteString(W, "== delete pod web-rs-0, reconcile =="); Texts.WriteLn(W);
    Texts.Append(Oberon.Log, W.buf);
    ignore := delPod("web-rs-0"); Step; Step; Get;
    Texts.WriteString(W, "== scale deployment web to 1, reconcile =="); Texts.WriteLn(W);
    Texts.Append(Oberon.Log, W.buf);
    applyDep("web", "nginx", 1); Step; Step; Get
  END Demo;

BEGIN Texts.OpenWriter(W); running := FALSE;
  nodes[0] := "node-a"; nodes[1] := "node-b"; nodes[2] := "node-c";
  Reset
END Kube.
