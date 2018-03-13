#include <stdio.h>
int inc(int *a, int *b) { return *a - *b; }
int dec(int *a, int *b) { return *b - *a; }
void sort(int *a, int n, int (*cmp)(int *, int *)) {
  int i, j, k, t;
  for (i = 0; i < n; i++) {
    k = i;
    for (j = i + 1; j < n; j++)
      if (cmp(a + j, a + k) < 0)  // if(a[j]<a[k])
        k = j;
    if (k != i) t = a[k], a[k] = a[i], a[i] = t;
  }
}

void print(int *a, int n) {
  int i;
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
}
int main() {
  int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
  int n = sizeof(a) / sizeof(a[0]);
  print(a, n);
  // sort(a,n,inc);
  sort(a, n, dec);
  print(a, n);
  return 0;
}
