int main() {
  int a = 3, b = 4;
  printf("&a=%x &b=%x\n", &a, &b);
  int* p = &a, *q = &b;
  int* t;
  t = p;                      // t=f00
  p = q;                      // p=efc
  q = t;                      // q=f00
  printf("%d %d\n", *p, *q);  // OK
}
