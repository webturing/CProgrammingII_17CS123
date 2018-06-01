#include <stdio.h>
#include <assert.h>
int add(int a, int b) { return a + b; }

int main() {
  assert(add(0, 0) == 0);
  assert(add(1, 1) == 2);
  printf("%d\n", add(2, 2));
  return 0;
}
