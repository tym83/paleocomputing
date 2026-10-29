% ---- the main capsule: translate, then print the C program ----------------------

PROC translate(CONST units : node) IMPORTS ALL;
   VAR u : node := units;
   WHILE u /= NIL REPEAT
      IF u.next = NIL THEN
         ALLOC caps PTR;
         caps.d := u;
         declare_body(u.c);
         body_elements(u.c);
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
      ELSE
         gen_capsule(u);
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
   translate(program);
   print_program;
BY
   WHEN compile_error =>
      HALT(1);
END GUARD;
END CAPSULE redc;
