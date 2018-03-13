#include <stdio.h>
#include <stdlib.h>
int inc(const void *a, const void *b) {
  int *pa = (int *)a;
  int *pb = (int *)b;
  return *pa - *pb;
}
int dec(const void *a, const void *b) {
  int *pa = (int *)a;
  int *pb = (int *)b;
  return *pb - *pa;
}
int mars(const void *va, const void *vb) {
  int *a = (int *)va;
  int *b = (int *)vb;
  int cmp = hash(*a) - hash(*b);
  if (cmp) return cmp;
  return inc(a, b);
}
int hash(int n) { return n < 10 ? n : hash(n / 10) + n % 10; }
void print(int *a, int n) {
  int i;
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
}
int main() {
  int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 111, 12, 21, 200001};
  int n = sizeof(a) / sizeof(a[0]);
  print(a, n);
  // qsort(a,n,sizeof(a[0]),inc);
  // qsort(a,n,sizeof(a[0]),dec);
  qsort(a, n, sizeof(a[0]), mars);
  print(a, n);
  return 0;
}
