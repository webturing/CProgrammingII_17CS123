#include <stdio.h>
int strcmp(char* p, char* q) {
  while (*p && *q && *p == *q) {
    ++p, ++q;
  }
  return *p - *q;
}
int main() {
  char a[100], b[100];
  scanf("%s%s", a, b);
  printf("%d\n", strcmp(a, b));
  return 0;
}

/**************************************************************
    Problem: 2492
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:940 kb
****************************************************************/