#include <stdio.h>
int B[] = {100, 50, 20, 10, 5, 2, 1};
int f(int m) {
  int tot = 0, i;
  while (m) {
    for (i = 0; i < 7; i++) {
      tot += m / B[i];
      m %= B[i];
    }
  }
  return tot;
}
int main() {
  int m, i;
  int t;
  while (~scanf("%d", &m)) {
    if (m == 0) break;
    int tot = 0;
    while (m--) {
      scanf("%d", &t);
      tot += f(t);
    }
    printf("%d\n", tot);
  }
  return 0;
}
