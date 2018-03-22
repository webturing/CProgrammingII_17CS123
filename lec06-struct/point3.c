#include <stdio.h>

struct Point {
  int x;
  int y;
};
void input(struct Point* p) { scanf("%d%d", &(*p).x, &(*p).y); }
void print(struct Point* p) { printf("%d %d\n", (*p).x, (*p).y); }

int main() {
  struct Point p = {0, 4}, q = {3, 4}, r = {0, 0};
  printf("sizeof(struct Point)=%d\n", sizeof(struct Point));
  printf("sizeof(struct Point*)=%d\n", sizeof(struct Point*));
  // printf("In function main: &p=%x\n",&p);
  input(&p);
  print(&p);
  return 0;
}
