#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int inc(const void *a, const void *b) {
  int *pa = (int *)a;
  int *pb = (int *)b;
  return *pa - *pb;
}
void sort(int *a, int n) {
  int i, j, k, t;
  for (i = 0; i < n; i++) {
    k = i;
    for (j = i + 1; j < n; j++)
      if (a[j] < a[k]) k = j;
    if (k != i) t = a[k], a[k] = a[i], a[i] = t;
  }
}
#define N 10000000
int main() {
  int *p = (int *)malloc(sizeof(int) * N);
  if (p == NULL) {
    puts("Allocate failed!");
  } else {
    int i;
    for (i = 0; i < N; i++) p[i] = rand();
    long long start = clock();
    // sort(p,N);
    qsort(p, N, 4, inc);
    long long end = clock();
    printf("%.3f second(s).", (end - start) / 1000.0);
    free(p);
  }
  return 0;
}
