#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
  int x, y;
} POINT;
void input(POINT* p) { scanf("%d%d", &p->x, &p->y); }
void output(POINT* p) { printf("(%d,%d)", p->x, p->y); }
double distance(POINT* from, POINT* to) {
  // int dx = from->x - to->x;
  // int dy = from->y - to->y;
  // return sqrt(dx*dx+dy*dy);
  return hypot(from->x - to->x, from->y - to->y);
}
double area(POINT* a, POINT* b, POINT* c) {
  // TODO
  return 0;
}
int main() {
  POINT p, q;
  input(&p);
  input(&q);
  // output(&p);
  // output(&q);
  printf("%.2f\n", distance(&p, &q));
}
