#include <stdio.h>
#include <math.h>
void root2(double a, double b, double c, double *r1, double *r2) {
  double dt = sqrt(b * b - 4 * a * c);
  *r1 = (-b + dt) / (2 * a);
  *r2 = (-b - dt) / (2 * a);
}

int main() {
  double a, b, c;
  double r1, r2;
  scanf("%lf%lf%lf", &a, &b, &c);
  root2(a, b, c, &r1, &r2);
  printf("r1=%7.2f\n", r1);
  printf("r2=%7.2f\n", r2);
  return 0;
}

/**************************************************************
    Problem: 2238
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:960 kb
****************************************************************/