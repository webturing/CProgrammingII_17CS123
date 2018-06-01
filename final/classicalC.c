
#include <stdio.h>
struct A {
  int x;
  int y;
};
int main() {
  struct A a;
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
}
