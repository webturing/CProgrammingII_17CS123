#include <stdio.h>
int inc(int *a, int *b) { return *a - *b; }
int dec(int *a, int *b) { return *b - *a; }
int mars(int *a, int *b) {
  int cmp = hash(*a) - hash(*b);
  if (cmp) return cmp;
  return inc(a, b);
}
int hash(int n) { return n < 10 ? n : hash(n / 10) + n % 10; }
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
  int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 111, 12, 21, 200001};
  float b[] = {1, 2};  // disadvantage
  int n = sizeof(a) / sizeof(a[0]);
  print(a, n);
  // sort(a,n,inc);
  // sort(a,n,dec);
  sort(a, n, mars);
  print(a, n);
  return 0;
}
