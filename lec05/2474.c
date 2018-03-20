#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
  char* a = "I love China!";
  // a[0]='x';//illegal
  int n;
  scanf("%d", &n);
  // printf("%c\n",a[n]);///nth char
  printf("%s\n", a + n);  /// a subtring from nth

  return 0;
}

/**************************************************************
    Problem: 2474
    User: 9976124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/