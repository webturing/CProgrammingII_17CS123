#include <stdio.h>
unsigned mpow(int a, int p, int m) {
  a %= m;
  if (a == 1 || p == 0) return 1;
  if (a == 0 || p == 1) return a;
  if (p % 2 == 0)
    return mpow((a * a) % m, p / 2, m);
  else
    return (mpow((a * a) % m, p / 2, m) * a) % m;
}
int main() {
  unsigned int a, p, m;
  while (~scanf("%d%d%d", &a, &p, &m)) {
    if (a == 0 && p == 0 && m == 0) break;
    printf("%u\n", mpow(a, p, m));
  }
  return 0;
}
