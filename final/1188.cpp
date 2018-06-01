#include <stdio.h>
#include <assert.h>
int isprime_poor(int n) {  // O(n)
  if (n == 0) return 0;  // fix bugs
  if (n == 1) return 0;  // fix bugs
  for (int c = 2; c <= n - 1; c++)
    if (n % c == 0) return 0;
  return 1;
}
int isprime(int n) {  // O(sqrt(n)/2)
  if (n == 2) return 1;
  if (n < 2 || n % 2 == 0) return 0;
  for (int c = 3; c * c <= n; c += 2)
    if (n % c == 0) return 0;
  return 1;
}
int main() {
  assert(isprime(0) == 0);  // bugs
  assert(isprime(1) == 0);
  assert(isprime(2) == 1);
  assert(isprime(3) == 1);
  assert(isprime(100000007) == 1);
  int n;
  while (~scanf("%d", &n)) {
    int p = n / 2;
    if (p % 2 == 0) --p;
    while (p >= 3) {  // O((n-3)/4)
      int q = n - p;
      if (isprime(p) && isprime(q)) {
        printf("%d %d\n", p, q);
        break;
      }
      p -= 2;
    }
  }

  return 0;
}
