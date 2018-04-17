#include <stdio.h>
#include <time.h>
int fib(int n) {
  if (n < 2) return n;
  return fib(n - 1) + fib(n - 2);
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
