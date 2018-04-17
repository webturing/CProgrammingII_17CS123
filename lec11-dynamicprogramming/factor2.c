#include <stdio.h>
#include <time.h>
int F[13];  //打表 静态规划 自下而上计算
void fill() {
  F[0] = F[1] = 1;
  int i;
  for (i = 2; i <= 12; i++) F[i] = F[i - 1] * i;
}

int main() {
  fill();
  printf("%d\n", F[7]);  /// O(1)
  printf("%d\n", F[7]);  /// O(1)
  return 0;
}
