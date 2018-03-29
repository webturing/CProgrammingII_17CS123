#include <stdio.h>
#define SIGN(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
#define ABS(x) ((x) >= 0 ? (x) : -(x))
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
typedef struct {
  int up;
  int down;
} FRACTION;
void simplify(FRACTION *f) {
  if (f->up == 0) {
    f->up = 0;
    f->down = 1;
  } else if (SIGN(f->up) * SIGN(f->down) > 0) {
    f->up = ABS(f->up);
    f->down = ABS(f->down);
  } else {
    f->up = -ABS(f->up);
    f->down = ABS(f->down);
  }
  int g = gcd(ABS(f->up), f->down);
  f->up /= g;
  f->down /= g;
}
void input(FRACTION *f) {
  scanf("%d%d", &f->up, &f->down);
  simplify(f);
}
void print(FRACTION *f) {
  if (f->down == 1)
    printf("%d\n", f->up);
  else
    printf("%d/%d\n", f->up, f->down);
}
void testSimplify() {
  FRACTION a = {4, -6}, b = {-8, -6}, c = {99, 66}, d = {0, -5};
  simplify(&a), simplify(&b), simplify(&c), simplify(&d);
  print(&a), print(&b), print(&c), print(&d);
}
void add() {}  // TODO
void testAdd() {
  FRACTION a = {4, -6}, b = {-8, -6}, c;
  add(&a, &b, &c);
  print(&c);
}
int main() {
  // testSimplify();
  return 0;
}