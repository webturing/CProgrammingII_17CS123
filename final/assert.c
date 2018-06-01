#include <stdio.h>
#include <assert.h>
int main() {
  int x;
  scanf("%d", &x);
  assert(x >= 0);
  double y = sqrt(x);
  printf("%f\n", y);
  return 0;
}
