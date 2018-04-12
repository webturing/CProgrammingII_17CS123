#include <stdio.h>
int B[] = {100, 50, 20, 10, 5, 2, 1};
int main() {
  int m, i, j;
  scanf("%d", &m);
  while (m) {
    for (i = 0; i < 7; i++) {
      for (j = 0; j < m / B[i]; j++) printf("%d\n", B[i]);
      m %= B[i];
    }
  }
  return 0;
}
