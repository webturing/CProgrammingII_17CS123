#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
  char s[10][100];
  int i;
  for (i = 0; i < 10; i++) gets(s[i]);
  qsort(s, 10, 100, strcmp);
  for (i = 0; i < 10; i++) puts(s[i]);
  return 0;
}

/**************************************************************
    Problem: 2487
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/