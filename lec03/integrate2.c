#include <stdio.h>
#include <math.h>
#define N 100

double f(double x) { return x; }
double g(double x) { return x * x; }
double h(double x) { return x + sin(cos(x * x)); }
double integerate(double (*f)(double), double a, double b) {
  double dx = (b - a) / N;
  double s = 0;
  int i;
  for (i = 0; i < N; i++) {
    double up = f(a + dx * i);
    double down = f(a + dx * (i + 1));
    double h = dx;
    s += (up + down) * h / 2;
  }
  return s;
}

int main() {
  printf("%.3f\n", integerate(f, 0, 1));  // sin x [0,1]
  printf("%.3f\n", integerate(g, 0, 1));
  printf("%.3f\n", integerate(h, 0, 1));
  printf("%.3f\n", integerate(sin, 0, 1));
  printf("%.3f\n", integerate(cos, 0, 1));
  printf("%.3f\n", integerate(exp, 0, 1));
  return 0;
}
