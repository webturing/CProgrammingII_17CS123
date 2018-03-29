#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
  int x, y;
} POINT;

void input(POINT* p) { scanf("%d%d", &p->x, &p->y); }
void output(POINT* p) { printf("(%d,%d)\n", p->x, p->y); }
double distance(POINT* from, POINT* to) {
  return hypot(from->x - to->x, from->y - to->y);
}
POINT me = {5, 5};
int cmp(const void* a, const void* b) {
  POINT* pa = (POINT*)a;
  POINT* pb = (POINT*)b;
  double da = distance(&me, pa);
  double db = distance(&me, pb);
  double ds = da - db;
  if (ds > 0) return 1;
  if (ds < 0) return -1;
  return 0;
}

int main() {
  POINT p[10];
  int i;
  for (i = 0; i < 10; i++) {
    p[i].x = rand() % 10;
    p[i].y = rand() % 10;
  }
  for (i = 0; i < 10; i++) output(p + i);
  qsort(p, 10, sizeof(p[0]), cmp);
  puts("==================");
  for (i = 0; i < 10; i++) output(p + i);
  return 0;
}
