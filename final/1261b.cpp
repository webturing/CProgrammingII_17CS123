#include <stdio.h>
#include <string.h>
#define MAXN 10000000 + 1
char prime[MAXN];
void fill() {
  memset(prime, 1, sizeof(prime));
  prime[0] = prime[1] = 0;  // 0,1不是质数
  for (int i = 2; i * i <= MAXN; i++) {
    if (prime[i])
      for (int j = i * i; j < MAXN; j += i) prime[j] = 0;
  }
}
int main() {
  fill();
  int N = 10000000;
  scanf("%d", &N);
  int s = 0;
  if (N >= 3) s++;
  for (int p = 3; p + 2 <= N; p += 2) {
    if (prime[p] && prime[p + 2]) ++s;
  }
  printf("%d\n", s);

  return 0;
}
