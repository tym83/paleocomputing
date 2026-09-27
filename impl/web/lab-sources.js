/*
 * Исходники, которые человек набирает в лабораторных 10–12. Одна копия на
 * текст задания и на прогон labs-test.mjs: набранное в прогоне обязано
 * совпадать с показанным на странице, иначе проверяется не то задание.
 *
 * Отдельным файлом, потому что нужны и русскому тексту (labs.js), и
 * английскому (labs.en.js), а labs.js сам импортирует labs.en.js.
 */
export const SOURCES = {
  Junk: `MODULE Junk;
  TYPE Block = POINTER TO BlockDesc;
    BlockDesc = RECORD a: ARRAY 60 OF INTEGER END;
  VAR lost*: INTEGER;
  PROCEDURE Make*;
    VAR p: Block; i: INTEGER;
  BEGIN FOR i := 1 TO 1000 DO
      NEW(p); IF p = NIL THEN INC(lost) END
    END
  END Make;
END Junk.
`,
};
export const pre = s => `<pre>${s.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;')}</pre>`;
