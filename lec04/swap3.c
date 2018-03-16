#include <stdio.h>
int main() {
  int a = 3, b = 4;
  printf("&a=%x &b=%x\n", &a, &b);
  int *p = &a, *q = &b;

  int d;
  d = *p;
  *p = *q;
  *q = d;
  printf("%d %d\n", *p, *q);  // OK
}
