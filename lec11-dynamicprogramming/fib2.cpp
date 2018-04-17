#include <stdio.h>
#include <time.h>
int F[50] = {0};
int fib(int n) {
  if (F[n] != 0) return F[n];
  if (n < 2) return F[n] = n;
  return F[n] = fib(n - 1) + fib(n - 2);
}
int main() {
  for (int i = 0; i < 50; i++) {
    long long start = clock();
    fib(i);
    long long end = clock();
    printf("T(%d)=%.8f\n", i, (end - start) / 1000.0);
  }
  return 0;
}
