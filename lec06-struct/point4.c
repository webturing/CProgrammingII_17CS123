///(*p).x  <=> p->x
/// using typedef
typedef struct {
  int x;
  int y;
} POINT;

void input(POINT* p) {

  scanf("%d%d", &p->x, &p->y);  /// right neat
}
void print(POINT* p) { printf("%d %d\n", p->x, p->y); }

int main() {
  POINT p = {0, 4}, q = {3, 4}, r = {0, 0};
  printf("sizeof(struct Point)=%d\n", sizeof(POINT));
  printf("sizeof(struct Point*)=%d\n", sizeof(POINT*));
  input(&p);
  print(&p);
}
