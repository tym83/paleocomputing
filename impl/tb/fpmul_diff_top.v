// Обёртка для дифференциальной проверки: исходный FPMultiplier Вирта и
// быстрый вариант получают одни и те же операнды. Такты и run у каждого свои:
// блоки заканчивают в разное время, и лишний такт после конца изменил бы
// состояние счётчика, а с ним и поведение следующей операции подряд.
// См. tb/fpmul_diff.cpp.
module fpmul_diff_top(
  input clk_a, clk_b, run_a, run_b,
  input [31:0] x, y,
  output stall_a, stall_b,
  output [31:0] za, zb);
FPMultiplier     orig (.clk(clk_a), .run(run_a), .x(x), .y(y), .stall(stall_a), .z(za));
FPMultiplierFast fast (.clk(clk_b), .run(run_b), .x(x), .y(y), .stall(stall_b), .z(zb));
endmodule
