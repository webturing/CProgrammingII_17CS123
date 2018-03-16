int main() {
  int a = 3, b = 4;
  printf("&a=%x &b=%x\n", &a, &b);
  int* p = &a, *q = &b;
  int* t;
  int d;
  t = &d;
  *t = *p;
  *p = *q;
  *q = *t;
  printf("%d %d\n", *p, *q);  // OK
}
