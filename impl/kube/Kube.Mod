MODULE Kube;  (*A minimal Kubernetes control plane in Oberon-07.
  Three controllers run as background Oberon.Task entries in the same ring
  as the system garbage collector:
    ctlDeploy - Deployment -> ReplicaSet (keeps one RS with the wanted replicas/image);
    ctlRS     - ReplicaSet -> Pod (keeps the number of pods equal to replicas);
    ctlNode   - scheduler: binds a pod to the least loaded Ready node, and
                unbinds the pods of a node that went NotReady, so they move.
  Ownership is the owner field (ownerReferences): pod.owner = rs, rs.owner = deploy.
  Nodes are objects too. A remote node (another Oberon machine on the radio,
  see KubeNet) is Ready while its kubelet reports, and its pods are Running
  once the kubelet says it runs them. A local node (Kube.Local) has no kubelet
  to wait for: the scheduler runs its pods at once; it keeps the demos without
  a radio working.
  The objects survive a restart of the machine, as etcd would keep them: a fourth
  task writes the store to the disk whenever it changes, and Kube.Start reads it
  back. Two files, Kube.Store0 and Kube.Store1, are written in turn, each with a
  generation and a checksum, so a write cut short leaves the other one whole.
  They are rewritten in place: the Oberon file system frees the sectors of a
  replaced file only at the next boot, and a new file per change would fill
  the disk.
  Commands, run with the middle button:
    Kube.Apply name N image,  Kube.Get,  Kube.DeletePod "name",  Kube.Save [file],
    Kube.Start [local] (install the controllers; local adds three local nodes),
    Kube.Local (the local nodes alone), Kube.Stop (remove the controllers),
    Kube.Reset (forget every object, on the disk too),
    Kube.Run N (run N ticks by hand, for the Norebo command line).
  Pod names contain hyphens, which end a name for Texts.Scan, so DeletePod
  also takes the name as a quoted string.*)

  IMPORT Files, Kernel, Texts, Oberon;

  CONST
    maxObj = 256;
    kDeploy = 0; kRS = 1; kPod = 2; kNode = 3;
    phPending = 0; phRunning = 1;   (*pods*)
    phNotReady = 0; phReady = 1;    (*nodes*)
    period = 50;  (*ms between ticks in the full system*)
    storePeriod = 500;  (*ms between checks whether the store changed*)
    magic = 4B554231H;  (*"KUB1"*)

  TYPE
    Name* = ARRAY 40 OF CHAR;
    Object = RECORD
      used, local: BOOLEAN;
      kind, replicas, phase, id, seen: INTEGER;
      name, owner, node, image: Name
    END;

  VAR
    store: ARRAY maxObj OF Object;
    W: Texts.Writer;
    tDeploy, tRS, tNode, tStore: Oberon.Task;
    seq: INTEGER;
    gen, savedSum, slot: INTEGER;   (*the store on disk*)
    running: BOOLEAN;

  PROCEDURE append(VAR s: Name; t: ARRAY OF CHAR);
    VAR i, j: INTEGER;
  BEGIN i := 0; WHILE s[i] # 0X DO INC(i) END;
    j := 0; WHILE (j < LEN(t)) & (t[j] # 0X) DO s[i] := t[j]; INC(i); INC(j) END; s[i] := 0X
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

  PROCEDURE ready(nm: ARRAY OF CHAR): BOOLEAN;
    VAR k: INTEGER;
  BEGIN k := find(kNode, nm);
    RETURN (k >= 0) & (store[k].phase = phReady)
  END ready;

  (*the Ready node with the fewest pods; -1 when no node is Ready*)
  PROCEDURE leastNode(): INTEGER;
    VAR i, j, best, bestLoad, load: INTEGER;
  BEGIN best := -1; bestLoad := maxObj + 1;
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kNode) & (store[i].phase = phReady) THEN
        load := 0;
        FOR j := 0 TO maxObj-1 DO
          IF store[j].used & (store[j].kind = kPod) & (store[j].node = store[i].name) THEN INC(load) END
        END;
        IF load < bestLoad THEN bestLoad := load; best := i END
      END
    END;
    RETURN best
  END leastNode;

  PROCEDURE newRS(deploy, image: ARRAY OF CHAR; rep: INTEGER);
    VAR k: INTEGER;
  BEGIN k := alloc();
    IF k >= 0 THEN
      store[k].used := TRUE; store[k].local := FALSE; store[k].kind := kRS;
      store[k].name[0] := 0X; append(store[k].name, deploy); append(store[k].name, "-rs");
      store[k].owner[0] := 0X; append(store[k].owner, deploy);
      store[k].image[0] := 0X; append(store[k].image, image);
      store[k].replicas := rep; store[k].phase := 0; store[k].node[0] := 0X
    END
  END newRS;

  (*the short id the radio carries: one byte, 1..255, not used by another pod*)
  PROCEDURE freeId(): INTEGER;
    VAR i, id: INTEGER; taken: BOOLEAN;
  BEGIN id := 0;
    REPEAT INC(id); taken := FALSE;
      FOR i := 0 TO maxObj-1 DO
        IF store[i].used & (store[i].kind = kPod) & (store[i].id = id) THEN taken := TRUE END
      END
    UNTIL ~taken OR (id = 255);
    RETURN id
  END freeId;

  PROCEDURE newPod(rs, image: ARRAY OF CHAR);
    VAR k: INTEGER;
  BEGIN k := alloc();
    IF k >= 0 THEN
      store[k].used := TRUE; store[k].local := FALSE; store[k].kind := kPod;
      store[k].name[0] := 0X; append(store[k].name, rs); append(store[k].name, "-");
      appendNum(store[k].name, seq);
      store[k].id := freeId(); INC(seq);
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

  (*scheduler: pods of a node that is gone or NotReady are unbound, unbound
    pods go to the least loaded Ready node; a local node runs its pods at once*)
  PROCEDURE ctlNode*;
    VAR i, n: INTEGER;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].node[0] # 0X) & ~ready(store[i].node) THEN
        store[i].node[0] := 0X; store[i].phase := phPending
      END
    END;
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].node[0] = 0X) THEN
        n := leastNode();
        IF n >= 0 THEN store[i].node := store[n].name END
      END
    END;
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].node[0] # 0X) & (store[i].phase = phPending) THEN
        n := find(kNode, store[i].node);
        IF (n >= 0) & store[n].local THEN store[i].phase := phRunning END
      END
    END
  END ctlNode;

  PROCEDURE Step*;
  BEGIN ctlDeploy; ctlRS; ctlNode
  END Step;

  (* ---- nodes: the interface KubeNet uses ---- *)

  PROCEDURE addNode(nm: ARRAY OF CHAR; local: BOOLEAN): INTEGER;
    VAR k: INTEGER;
  BEGIN k := find(kNode, nm);
    IF k < 0 THEN k := alloc();
      IF k >= 0 THEN
        store[k].used := TRUE; store[k].kind := kNode; store[k].local := local;
        store[k].name[0] := 0X; append(store[k].name, nm);
        store[k].owner[0] := 0X; store[k].node[0] := 0X; store[k].image[0] := 0X;
        store[k].phase := phNotReady; store[k].replicas := 0; store[k].id := 0
      END
    END;
    RETURN k
  END addNode;

  (*a kubelet was heard: the node exists and is Ready*)
  PROCEDURE NodeSeen*(nm: ARRAY OF CHAR; now: INTEGER);
    VAR k: INTEGER;
  BEGIN k := addNode(nm, FALSE);
    IF k >= 0 THEN
      IF store[k].phase # phReady THEN
        Texts.WriteString(W, "kube: node "); Texts.WriteString(W, nm);
        Texts.WriteString(W, " Ready"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
      END;
      store[k].phase := phReady; store[k].seen := now
    END
  END NodeSeen;

  (*remote nodes not heard for ttl ms go NotReady; the scheduler then moves their pods*)
  PROCEDURE Expire*(now, ttl: INTEGER);
    VAR i: INTEGER;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kNode) & ~store[i].local & (store[i].phase = phReady)
          & (now - store[i].seen > ttl) THEN
        store[i].phase := phNotReady;
        Texts.WriteString(W, "kube: node "); Texts.WriteString(W, store[i].name);
        Texts.WriteString(W, " NotReady"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
      END
    END
  END Expire;

  (*the grace after a restart starts when the control plane begins to listen:
    every remote node counts as just heard. Without it the time between
    Kube.Start and KubeNet.Serve ate the grace, all nodes went NotReady, and
    their pods were moved although they never stopped*)
  PROCEDURE Listening*(now: INTEGER);
    VAR i: INTEGER;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kNode) & ~store[i].local THEN store[i].seen := now END
    END
  END Listening;

  (*the i-th Ready remote node, for the control plane to send assignments to*)
  PROCEDURE ReadyNode*(i: INTEGER; VAR nm: ARRAY OF CHAR): BOOLEAN;
    VAR k, c, j: INTEGER; found: BOOLEAN;
  BEGIN k := 0; c := 0; found := FALSE;
    WHILE (k < maxObj) & ~found DO
      IF store[k].used & (store[k].kind = kNode) & ~store[k].local & (store[k].phase = phReady) THEN
        IF c = i THEN
          j := 0;
          WHILE (j < LEN(nm) - 1) & (store[k].name[j] # 0X) DO nm[j] := store[k].name[j]; INC(j) END;
          nm[j] := 0X; found := TRUE
        ELSE INC(c) END
      END;
      INC(k)
    END;
    RETURN found
  END ReadyNode;

  (*ids of the pods bound to a node*)
  PROCEDURE PodIds*(nm: ARRAY OF CHAR; VAR ids: ARRAY OF BYTE; VAR n: INTEGER);
    VAR i: INTEGER;
  BEGIN n := 0;
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].node = nm) & (n < LEN(ids)) THEN
        ids[n] := store[i].id; INC(n)
      END
    END
  END PodIds;

  (*a kubelet reported the pods it runs: those are Running, the others Pending*)
  PROCEDURE Report*(nm: ARRAY OF CHAR; ids: ARRAY OF BYTE; n: INTEGER);
    VAR i, j: INTEGER; on: BOOLEAN;
  BEGIN
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kPod) & (store[i].node = nm) THEN
        on := FALSE;
        FOR j := 0 TO n-1 DO IF ids[j] = store[i].id THEN on := TRUE END END;
        IF on THEN store[i].phase := phRunning ELSE store[i].phase := phPending END
      END
    END
  END Report;

  (*three nodes without a kubelet, for the demos that have no radio*)
  PROCEDURE Local*;
    VAR k: INTEGER;
  BEGIN
    k := addNode("node-a", TRUE); IF k >= 0 THEN store[k].phase := phReady END;
    k := addNode("node-b", TRUE); IF k >= 0 THEN store[k].phase := phReady END;
    k := addNode("node-c", TRUE); IF k >= 0 THEN store[k].phase := phReady END
  END Local;

  (* ---- commands ---- *)

  PROCEDURE applyDep(nm, img: ARRAY OF CHAR; rep: INTEGER);
    VAR k: INTEGER;
  BEGIN k := find(kDeploy, nm);
    IF k < 0 THEN k := alloc();
      IF k >= 0 THEN store[k].used := TRUE; store[k].local := FALSE; store[k].kind := kDeploy;
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

  PROCEDURE describe(VAR W: Texts.Writer);
    VAR i, j, k: INTEGER; first: BOOLEAN;
  BEGIN first := TRUE;
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used & (store[i].kind = kNode) THEN
        IF first THEN Texts.WriteString(W, "nodes: "); first := FALSE ELSE Texts.WriteString(W, ", ") END;
        Texts.WriteString(W, store[i].name);
        IF store[i].phase = phReady THEN Texts.WriteString(W, " Ready")
        ELSE Texts.WriteString(W, " NotReady") END
      END
    END;
    IF ~first THEN Texts.WriteLn(W) END;
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
                IF store[k].node[0] # 0X THEN
                  Texts.WriteString(W, " @"); Texts.WriteString(W, store[k].node)
                END;
                IF store[k].phase = phRunning THEN Texts.WriteString(W, " Running")
                ELSE Texts.WriteString(W, " Pending") END;
                Texts.WriteLn(W)
              END
            END
          END
        END
      END
    END
  END describe;

  PROCEDURE Get*;
  BEGIN describe(W); Texts.Append(Oberon.Log, W.buf)
  END Get;

  (*Texts in the 2016 system calls notify on every change, without a NIL check:
    a text that no viewer shows still needs one*)
  PROCEDURE quiet(T: Texts.Text; op, beg, end: INTEGER);
  END quiet;

  (*the same as Get, into a file (Kube.State unless named): what tests read back from the disk*)
  PROCEDURE Save*;
    VAR T: Texts.Text; V: Texts.Writer; S: Texts.Scanner; file: Name;
  BEGIN Texts.OpenScanner(S, Oberon.Par.text, Oberon.Par.pos); Texts.Scan(S);
    file[0] := 0X;
    IF S.class = Texts.Name THEN append(file, S.s) ELSE append(file, "Kube.State") END;
    Texts.OpenWriter(V); describe(V);
    NEW(T); Texts.Open(T, ""); T.notify := quiet; Texts.Append(T, V.buf); Texts.Close(T, file);
    Texts.WriteString(W, "kube: state saved to "); Texts.WriteString(W, file); Texts.WriteLn(W);
    Texts.Append(Oberon.Log, W.buf)
  END Save;

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

  (* ---- the store on disk ---- *)

  PROCEDURE mix(h, x: INTEGER): INTEGER;
  BEGIN RETURN (h * 31 + x) MOD 1000000007
  END mix;

  PROCEDURE mixName(h: INTEGER; s: Name): INTEGER;
    VAR i: INTEGER;
  BEGIN i := 0;
    WHILE (i < LEN(s)) & (s[i] # 0X) DO h := mix(h, ORD(s[i])); INC(i) END;
    RETURN mix(h, 0)
  END mixName;

  (*everything that is written to the disk; seen is left out: it changes on
    every heartbeat and is not restored*)
  PROCEDURE sum(): INTEGER;
    VAR i, h: INTEGER;
  BEGIN h := mix(1, seq);
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used THEN
        h := mix(mix(mix(mix(mix(h, store[i].kind), store[i].replicas), store[i].phase), store[i].id),
                 ORD(store[i].local));
        h := mixName(mixName(mixName(mixName(h, store[i].name), store[i].owner), store[i].node), store[i].image)
      END
    END;
    RETURN h
  END sum;

  PROCEDURE storeName(n: INTEGER; VAR name: ARRAY OF CHAR);
  BEGIN name := "Kube.Store0"; name[10] := CHR(ORD("0") + n)
  END storeName;

  (*writes the store into slot n, in place, with generation g*)
  PROCEDURE write(n, g, h: INTEGER);
    VAR f: Files.File; r: Files.Rider; name: ARRAY 16 OF CHAR; i, cnt: INTEGER; new: BOOLEAN;
  BEGIN storeName(n, name); f := Files.Old(name); new := f = NIL;
    IF new THEN f := Files.New(name) END;
    cnt := 0; FOR i := 0 TO maxObj-1 DO IF store[i].used THEN INC(cnt) END END;
    Files.Set(r, f, 0);
    Files.WriteInt(r, magic); Files.WriteInt(r, g); Files.WriteInt(r, seq); Files.WriteInt(r, cnt);
    FOR i := 0 TO maxObj-1 DO
      IF store[i].used THEN
        Files.WriteInt(r, store[i].kind); Files.WriteInt(r, store[i].replicas);
        Files.WriteInt(r, store[i].phase); Files.WriteInt(r, store[i].id);
        Files.WriteByte(r, ORD(store[i].local));
        Files.WriteString(r, store[i].name); Files.WriteString(r, store[i].owner);
        Files.WriteString(r, store[i].node); Files.WriteString(r, store[i].image)
      END
    END;
    Files.WriteInt(r, h); Files.WriteInt(r, g);   (*a whole snapshot ends with its sum and generation*)
    IF new THEN Files.Register(f) ELSE Files.Close(f) END
  END write;

  (*reads slot n into the store if it is whole; returns its generation, or -1*)
  PROCEDURE read(n: INTEGER): INTEGER;
    VAR f: Files.File; r: Files.Rider; name: ARRAY 16 OF CHAR;
      i, m, g, s, cnt, h, g2, k, now: INTEGER; b: BYTE;
  BEGIN storeName(n, name); f := Files.Old(name); g := -1;
    IF f # NIL THEN
      Files.Set(r, f, 0); Files.ReadInt(r, m);
      IF m = magic THEN
        Files.ReadInt(r, g); Files.ReadInt(r, s); Files.ReadInt(r, cnt);
        IF (cnt < 0) OR (cnt > maxObj) THEN g := -1 ELSE
          FOR i := 0 TO maxObj-1 DO store[i].used := FALSE END;
          seq := s; now := Kernel.Time();
          FOR k := 0 TO cnt-1 DO
            store[k].used := TRUE;
            Files.ReadInt(r, store[k].kind); Files.ReadInt(r, store[k].replicas);
            Files.ReadInt(r, store[k].phase); Files.ReadInt(r, store[k].id);
            Files.ReadByte(r, b); store[k].local := b # 0;
            Files.ReadString(r, store[k].name); Files.ReadString(r, store[k].owner);
            Files.ReadString(r, store[k].node); Files.ReadString(r, store[k].image);
            (*a remote node gets one heartbeat timeout to report again, as the
              node lifecycle controller gives nodes a grace period after a restart*)
            store[k].seen := now
          END;
          Files.ReadInt(r, h); Files.ReadInt(r, g2);
          IF r.eof OR (g2 # g) OR (h # sum()) THEN
            FOR i := 0 TO maxObj-1 DO store[i].used := FALSE END; seq := 0; g := -1
          END
        END
      ELSE g := -1
      END
    END;
    RETURN g
  END read;

  PROCEDURE ctlStore*;
    VAR h: INTEGER;
  BEGIN h := sum();
    IF h # savedSum THEN
      INC(gen); slot := 1 - slot; write(slot, gen, h); savedSum := h
    END
  END ctlStore;

  (*the newer whole snapshot of the two; the store stays empty if there is none*)
  PROCEDURE load(): INTEGER;
    VAR g0, g1, cnt, i: INTEGER;
  BEGIN g1 := read(1); g0 := read(0);   (*slot 0 is now in the store*)
    IF g1 > g0 THEN g1 := read(1); slot := 1; gen := g1 ELSE slot := 0; gen := g0 END;
    IF gen < 0 THEN gen := 0; slot := 0 END;
    savedSum := sum();
    cnt := 0; FOR i := 0 TO maxObj-1 DO IF store[i].used THEN INC(cnt) END END;
    RETURN cnt
  END load;

  (*Kube.Start reads the store back from the disk first. Kube.Start local also
    creates the three local nodes; without it the cluster waits for kubelets on
    the radio (KubeNet)*)
  PROCEDURE Start*;
    VAR S: Texts.Scanner; n: INTEGER;
  BEGIN Texts.OpenScanner(S, Oberon.Par.text, Oberon.Par.pos); Texts.Scan(S);
    IF ~running THEN
      n := load();
      IF n > 0 THEN
        Texts.WriteString(W, "kube: "); Texts.WriteInt(W, n, 0);
        Texts.WriteString(W, " objects restored from the disk"); Texts.WriteLn(W)
      END;
      IF (S.class = Texts.Name) & (S.s = "local") THEN Local END;
      tDeploy := Oberon.NewTask(ctlDeploy, period); Oberon.Install(tDeploy);
      tRS := Oberon.NewTask(ctlRS, period); Oberon.Install(tRS);
      tNode := Oberon.NewTask(ctlNode, period); Oberon.Install(tNode);
      tStore := Oberon.NewTask(ctlStore, storePeriod); Oberon.Install(tStore);
      running := TRUE;
      Texts.WriteString(W, "kube: 3 controllers installed (deploy, replicaset, node), store on disk");
      Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
    END
  END Start;

  PROCEDURE Stop*;
  BEGIN
    IF running THEN
      Oberon.Remove(tDeploy); Oberon.Remove(tRS); Oberon.Remove(tNode); Oberon.Remove(tStore);
      running := FALSE;
      Texts.WriteString(W, "kube: controllers removed"); Texts.WriteLn(W);
      Texts.Append(Oberon.Log, W.buf)
    END
  END Stop;

  PROCEDURE clear;
    VAR i: INTEGER;
  BEGIN FOR i := 0 TO maxObj-1 DO store[i].used := FALSE END; seq := 0
  END clear;

  PROCEDURE Reset*;
    VAR res: INTEGER;
  BEGIN clear; Files.Delete("Kube.Store0", res); Files.Delete("Kube.Store1", res);
    gen := 0; slot := 0; savedSum := sum();
    Texts.WriteString(W, "kube: store cleared"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
  END Reset;

  (*self-contained demo for the Norebo command line (one process, local nodes)*)
  PROCEDURE Demo*;
    VAR ignore: BOOLEAN;
  BEGIN clear; Local;
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
  clear; gen := 0; slot := 0; savedSum := sum()
END Kube.
