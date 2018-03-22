///(*p).x  <=> p->x
/// using typedef
typedef struct {
  int x;
  int y;
} POINT;

void input(POINT* p) { scanf("%d%d", &p->x, &p->y); }
void print(POINT* p) { printf("%d %d\n", p->x, p->y); }
double distance(POINT* p, POINT* q) {
  double dx = p->x - q->x;
  double dy = p->y - q->y;
  return hypot(dx, dy);
}
double area(POINT* p, POINT* q, POINT* r) {
  double a = distance(p, q);
  double b = distance(p, r);
  double c = distance(q, r);
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
  POINT p, q, r;

  input(&p);
  input(&q);
  input(&r);
  printf("%f\n", distance(&p, &q));
  printf("%f\n", area(&p, &q, &r));
}
