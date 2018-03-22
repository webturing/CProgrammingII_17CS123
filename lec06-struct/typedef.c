#include <stdio.h>
typedef int AGE;
typedef long long LL;
typedef int* INTPTR;
struct Person {};
typedef struct Person PERSON;
void f(PERSON p) {}
int main() {
  int x;
  x = 180;
  AGE y;
  y = 180;
  LL a, b;
  int* p, q;    /// p is pointer but q is int
  INTPTR r, s;  /// r and s are all pointer
  PERSON p1, p2, p3;
  return 0;
}
