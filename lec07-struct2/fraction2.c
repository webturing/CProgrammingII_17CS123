/*分数改进版本吧数位扩充为longlong，可以计算范围更大，更加实用*/

#include <stdio.h>
//绝对值
#define ABS(x) ((x) > 0 ? (x) : -(x))
//符号
#define SIGN(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
typedef long long LL;
//最大公约数
LL gcd(LL a, LL b) { return b ? gcd(b, a % b) : a; }

typedef struct {
  LL up;
  LL down;
} FRACTION;
void rationalize(FRACTION* f) {
  if (SIGN(f->up) * SIGN(f->down) == 0)
    f->up = 0, f->down = 1;
  else if (SIGN(f->up) * SIGN(f->down) == 1)
    f->up = ABS(f->up), f->down = ABS(f->down);
  else
    f->up = -ABS(f->up), f->down = ABS(f->down);
  LL g = gcd(f->up, f->down);
  f->up /= g, f->down /= g;
}
void input(FRACTION* f) {
  scanf("%I64d%I64d", &f->up, &f->down);
  rationalize(f);
}
void print(FRACTION* f) { printf("%I64d/%I64d\n", f->up, f->down); }
void add(FRACTION* a, FRACTION* b, FRACTION* c) {
  LL up = a->up * b->down + a->down * b->up;
  LL down = a->down * b->down;
  c->up = up, c->down = down;
  rationalize(c);
}
void sub(FRACTION* a, FRACTION* b, FRACTION* c) {
  LL up = a->up * b->down - a->down * b->up;
  LL down = a->down * b->down;
  c->up = up, c->down = down;
  rationalize(c);
}
void mul(FRACTION* a, FRACTION* b, FRACTION* c) {
  LL up = a->up * b->up;
  LL down = a->down * b->down;
  c->up = up, c->down = down;
  rationalize(c);
}
void div(FRACTION* a, FRACTION* b, FRACTION* c) {
  LL up = a->up * b->down;
  LL down = a->down * b->up;
  c->up = up, c->down = down;
  rationalize(c);
}
int main() {
  FRACTION sum = {0, 1};
  int i = 1;
  for (i = 1; i <= 40; i++) {
    FRACTION f = {1, i};
    add(&sum, &f, &sum);
  }
  print(&sum);
}