#include <stdio.h>
int isprime(int n) {  // O(sqrt(n)/2)
  if (n == 2) return 1;
  if (n < 2 || n % 2 == 0) return 0;
  for (int c = 3; c * c <= n; c += 2)
    if (n % c == 0) return 0;
  return 1;
}
int main() {
  int N = 10000000;
  // scanf("%d",&N);
  int s = 0;
  if (N >= 3) s++;
  for (int p = 3; p + 2 <= N; p += 2) {
    if (isprime(p) && isprime(p + 2)) ++s;
  }
  printf("%d\n", s);

  return 0;
}
