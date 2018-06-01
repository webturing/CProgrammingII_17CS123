#include <stdio.h>
char F[61] = "011235831459437077415617853819099875279651673033695493257291";
int main() {
  long long k;
  scanf("%lld", &k);
  putchar(F[k % 60]);
  return 0;
}
