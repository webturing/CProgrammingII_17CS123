#include <stdio.h>
#include <assert.h>
int main() {
  int n = 20000000000;
  int *p = (int *)malloc(sizeof(int) * n);
  assert(p != NULL);
  int i;
  for (i = 0; i < 1000; i++) p[i] = i;
}
