MODULE Pods;  (*The pod a workload is started or stopped for.
  KubeNet's kubelet sets the pod here and calls the workload module's Start or
  Stop command; Oberon commands take no parameters, so the workload reads the
  pod from these variables.*)

  VAR
    id*: INTEGER;                 (*the pod's id on the air*)
    image*: ARRAY 16 OF CHAR;     (*the module that runs it*)

  PROCEDURE Set*(i: INTEGER; img: ARRAY OF CHAR);
    VAR k: INTEGER;
  BEGIN id := i; k := 0;
    WHILE (k < LEN(image)-1) & (k < LEN(img)) & (img[k] # 0X) DO image[k] := img[k]; INC(k) END;
    image[k] := 0X
  END Set;

BEGIN id := 0; image[0] := 0X
END Pods.
