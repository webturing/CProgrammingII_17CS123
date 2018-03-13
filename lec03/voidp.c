#include <stdio.h>
int main() {
  int x = 3;
  long long y = 0xfffffffffffffff;
  printf("%d %lld\n", x, y);
  void *p;
  p = &x;

  int *q;
  q = (int *)p;
  p = &y;
  long long *r;
  r = (long long *)p;
}
