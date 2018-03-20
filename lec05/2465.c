#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a, b, *p, *q;
  p = &a, q = &b;
  scanf("%d%d", p, q);
  if (*p < *q) {
    int t = *p;
    *p = *q;
    *q = t;
  }
  printf("%d %d\n", a, b);
  return 0;
}

/**************************************************************
    Problem: 2465
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/