#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int dec(const void* a, const void* b) { return *(int*)b - *(int*)a; }
int inc(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int main() {
  int a[100];
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", a + i);
  qsort(a, n, 4, dec);
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
  return 0;
}

/**************************************************************
    Problem: 2469
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/
