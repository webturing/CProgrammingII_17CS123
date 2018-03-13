#include <stdio.h>
#include <stdlib.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))
int cmp(const void *a, const void *b) {
  int *pa = (int *)a;
  int *pb = (int *)b;
  return ABS(*pb) - ABS(*pa);
}
int a[100];
int main() {
  int n, i;
  while (~scanf("%d", &n) && n) {
    for (i = 0; i < n; i++) scanf("%d", a + i);
    qsort(a, n, 4, cmp);
    printf("%d", a[0]);
    for (i = 1; i < n; i++) printf(" %d", a[i]);
    printf("\n");
  }
  return 0;
}
