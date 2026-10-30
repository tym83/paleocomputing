% ---- the main capsule: translate, then print the C program ----------------------

% EXPOSE ... FROM EXTERNAL x where x is no unit of the program: x is taken
% from the library of translated units (3.1, 8.1), with what it needs in turn
ABNORMAL FUNC with_library(CONST units : node) => node IMPORTS ALL;
   VAR r : node := units;
   VAR more : BOOL := TRUE;
   WHILE more REPEAT
      VAR missing : text := external_missing(r, r);
      more := FALSE;
      IF missing /= NIL THEN
         VAR saved : INT := tpos;
         IF read_library(missing.ALL) THEN
            VAR lib : node;
            tpos := ntoks_before_library;
            lib := program;
            tpos := saved;
            % the library units come first: the program is declared after them
            IF lib /= NIL THEN
               VAR t : node := lib;
               WHILE t.next /= NIL REPEAT
                  t := t.next;
               END REPEAT;
               t.next := r;
               r := lib;
               more := TRUE;
            END IF;
         END IF;
      END IF;
      ntoks_before_library := ntoks + 1;
   END REPEAT;
   RETURN r;
END FUNC with_library;

% the name of a capsule exposed as EXTERNAL that no unit declares
ABNORMAL FUNC external_missing(CONST e : node, CONST units : node) => text IMPORTS ALL;
   VAR x : node := e;
   WHILE x /= NIL REPEAT
      IF x.kind = n_expose AND x.flag >= 2 AND NOT unit_named(units, x.name.ALL) AND NOT tried(x.name.ALL) THEN
         mark_tried(x.name.ALL);
         RETURN x.name;
      END IF;
      IF x.a /= NIL AND x.kind /= n_expose THEN
         VAR r : text := external_missing(x.a, units);
         IF r /= NIL THEN
            RETURN r;
         END IF;
      END IF;
      IF x.c /= NIL AND x.kind /= n_expose THEN
         VAR r : text := external_missing(x.c, units);
         IF r /= NIL THEN
            RETURN r;
         END IF;
      END IF;
      x := x.next;
   END REPEAT;
   RETURN NIL;
END FUNC external_missing;

FUNC unit_named(CONST units : node, READONLY name : STRING[ASCII]) => BOOL;
   VAR u : node := units;
   WHILE u /= NIL REPEAT
      IF u.name.ALL = name THEN
         RETURN TRUE;
      END IF;
      u := u.next;
   END REPEAT;
   RETURN FALSE;
END FUNC unit_named;

ABNORMAL FUNC tried(READONLY name : STRING[ASCII]) => BOOL IMPORTS library_tried;
   RETURN seen_name(library_tried, name);
END FUNC tried;

PROC mark_tried(READONLY name : STRING[ASCII]) IMPORTS library_tried;
   VAR l : lines;
   ALLOC l PTR;
   l.s := mk(name);
   l.next := library_tried;
   library_tried := l;
END PROC mark_tried;

PROC translate(CONST units : node) IMPORTS ALL;
   VAR u : node := units;
   WHILE u /= NIL REPEAT
      IF has_pragmat(u.prags, "LIBRARY") THEN
         % PRAG(LIBRARY): a unit translated for the library (3.1)
         write_library(u);
      END IF;
      IF u.next = NIL AND NOT has_pragmat(u.prags, "LIBRARY") THEN
         ALLOC caps PTR;
         caps.d := u;
         caps.depth := depth;
         declare_labels(u.c);
         declare_body(u.c);
         capsule_body(u.c);
         await_tasks(u.c);
         % the library capsules are declared in the scope of the program
         BEGIN
            VAR l : node := units;
            WHILE l /= u REPEAT
               BEGIN
                  CONST w := waits_of(l);
                  IF w.LEN > 0 THEN
                     emit(w);
                  END IF;
               END;
               l := l.next;
            END REPEAT;
         END;
         % the program ends: its declared data items, then its dynamic ones (13.3)
         close_fins(NIL);
         IF uses_findyn THEN
            emit("rt_finalize_all();");
         END IF;
      ELSE
         gen_capsule(u);
         elaborate_pending(lookup_decl(u));
      END IF;
      u := u.next;
   END REPEAT;
END PROC translate;

PROC print_program IMPORTS ALL;
   emit_helpers;
   IF uses_free THEN
      WRITELN("#define RT_SCAN 1");
   END IF;
   WRITELN("#include " & q & "paleo.h" & q);
   WRITELN("#include <math.h>");
   print_buffer(out_types);
   print_buffer(out_frames);
   print_buffer(out_helpers);
   print_buffer(out_protos);
   print_buffer(out_globals);
   print_buffer(out_funcs);
   WRITELN("int main(int argc, char **argv) {");
   WRITELN("  rt_init(argc, argv);");
   WRITELN("  rt_set_lang(0);");
   print_buffer(out_roots);
   print_buffer(out_excs);
   print_buffer(out_init);
   WRITELN("  rt_main_done();");
   WRITELN("  return 0;");
   WRITELN("}");
END PROC print_program;

% ---- start ---------------------------------------------------------------------

ALLOC toks PTR (1000000);
ALLOC table PTR (nbuckets);
out_types := new_buffer;
out_helpers := new_buffer;
out_protos := new_buffer;
out_globals := new_buffer;
out_funcs := new_buffer;
out_init := new_buffer;
out_excs := new_buffer;
out_frames := new_buffer;
out_roots := new_buffer;
code := out_init;
no_cons := new_cons;
ty_int := new_typ(t_int);
ty_bool := new_typ(t_bool);
ty_float := new_typ(t_float);
ty_string := new_typ(t_string);
ty_void := new_typ(t_void);
ty_file := new_typ(t_file);
ty_nil := new_typ(t_nil);
ty_lock := new_typ(t_lock);
ty_latch := new_typ(t_lock);
ty_act := new_typ(t_act);
GUARD
   init_ascii;
   read_source;
   ntoks_before_library := ntoks + 1;
   translate(with_library(program));
   print_program;
BY
   WHEN compile_error =>
      HALT(1);
END GUARD;
END CAPSULE redc;
