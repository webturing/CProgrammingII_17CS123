#include <stdio.h>
#include <time.h>
typedef long long LL;
LL Q[30][30] = {0};
LL cnr(int n, int r) {
  if (Q[n][r] != 0) return Q[n][r];
  if (r == 0 || r == n) return Q[n][r] = 1;
  return Q[n][r] = cnr(n - 1, r - 1) + cnr(n - 1, r);
}
int main() {
  int m, n;
  while (2 == scanf("%d%d", &m, &n)) printf("%lld\n", cnr(m, n));

r