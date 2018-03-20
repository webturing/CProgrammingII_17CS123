#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int dec(const void* a, const void* b) { return *(int*)b - *(int*)a; }
int main() {
  int a[3];
  scanf("%d%d%d", a, a + 1, a + 2);
  qsort(a, 3, 4, dec);
  printf("%d %d %d\n", a[0], a[1], a[2]);
  return 0;
}
/**************************************************************
    Problem: 2466
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/