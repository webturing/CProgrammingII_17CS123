#include <stdio.h>
int foo(double a, double b, double c, double* x1, double* x2) {
  if (b * b < 4 * a * c) return 0;
  double dt = b * b - 4 * a * c;
  *x1 = (-b + sqrt(dt)) / (2 * a);
  *x2 = (-b - sqrt(dt)) / (2 * a);
  return 1;
}
int main() {
  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  double x1, x2;

  if (foo(a, b, c, &x1, &x2))
    printf("%.2f %.2f\n", x1, x2);
  else
    puts("No solutions!");
}
