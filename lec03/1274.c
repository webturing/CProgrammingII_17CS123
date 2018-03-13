#include <stdio.h>
#include <stdlib.h>
int inc(const void *a, const void *b) {
  int *pa = (int *)a;
  int *pb = (int *)b;
  return *pa - *pb;
}
int main() {
  int a[3];
  scanf("%d%d%d", a, a + 1, a + 2);
  qsort(a, 3, 4, inc);
  printf("%d %d %d\n", a[0], a[1], a[2]);
  return 0;
}
