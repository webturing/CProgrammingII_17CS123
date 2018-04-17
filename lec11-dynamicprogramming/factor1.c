#include <stdio.h>
#include <time.h>
int fact(int n) { return n <= 1 ? 1 : fact(n - 1) * n; }
int main() {
  printf("%d\n", fact(7));
  printf("%d\n", fact(7));
  return 0;
}
