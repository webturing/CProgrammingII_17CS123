#include <stdio.h>
#define N 1000 + 10
int primer[N];
void fill() {
  int i, j;
  for (i = 0; i < N; i++) primer[i] = 1;
  primer[0] = primer[1] = 0;
  for (i = 2; i * i <= N; i++) {
    if (primer[i])
      for (j = i * i; j < N; j += i) {
        primer[j] = 0;
      }
  }
}
int main() {
  fill();
  int i;
  for (i = 0; i < 100; i++)
    if (primer[i]) printf("%d ", i);
  return 0;
}
