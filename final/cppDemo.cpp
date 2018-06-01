#include <stdio.h>

int main() {
  freopen("input.txt", "r", stdin);
  int N;
  scanf("%d", &N);
  while (N--) {
    int n, m;
    scanf("%d%d", &n, &m);
    int s = 0;
    for (int i = 1; i <= n; i++) {
      s += i % m;
    }
    printf("%d\n", s);
  }
  return 0;
}
