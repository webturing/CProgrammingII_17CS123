#include <stdio.h>
#define N 100
double f(double x) { return x + sin(cos(x * x)); }
double integerate(double a, double b) {
  double dx = (b - a) / N;
  double s = 0;
  int i;
  for (i = 0; i < N; i++) {
    double up = sin(a + dx * i);
    double down = sin(a + dx * (i + 1));
    double h = dx;
    s += (up + down) * h / 2;
  }
  return s;
}
double integerate2(double a, double b) {
  double dx = (b - a) / N;
  double s = 0;
  int i;
  for (i = 0; i < N; i++) {
    double up = cos(a + dx * i);
    double down = cos(a + dx * (i + 1));
    double h = dx;
    s += (up + down) * h / 2;
  }
  return s;
}
int main() {
  printf("%.3f\n", integerate(0, 1));  // sin x [0,1]
  printf("%.3f\n", cos(0) - cos(1));
  return 0;
}
