#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
  char s[100];
  int n, m;
  scanf("%d%d%s", &n, &m, s);
  puts(s + m - 1);
  return 0;
}

/**************************************************************
    Problem: 2483
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/