#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
  char s[3][100];
  scanf("%s%s%s", s[0], s[1], s[2]);
  qsort(s, 3, 100, strcmp);
  printf("%s\n%s\n%s\n", s[0], s[1], s[2]);
  return 0;
}

/**************************************************************
    Problem: 2478
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/