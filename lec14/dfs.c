#include <stdio.h>
typedef long long LL;
#define N 100
LL H[N + 1];
void fill() {
  int i;
  for (i = 1; i <= N; i++) H[i] = 1LL * i * i * i * i * i;
}
int cmp(const void* a, const void* b) {
  LL* la = (LL*)a;
  LL* lb = (LL*)b;
  LL dif = *la - *lb;
  if (dif > 0) return 1;
  if (dif < 0) return -1;
  return 0;
}
int a[6];
void dfs(int k, int t) {
  if (k == 5) {
    int i;
    LL sum = 0;
    for (i = 0; i < 5; i++) sum += H[a[i]];
    LL* p = bsearch(&sum, H, N, sizeof(LL), cmp);
    if (p) {
      a[5] = p - H;
      int i;
      for (i = 0; i < 6; i++) printf("%d ", a[i]);
      printf("\n");
    }
    return;
  }
  int i;
  for (i = t; i <= N; i++) {
    a[k] = i;
    dfs(k + 1, i);
  }
}
int main() {
  fill();
  dfs(0, 1);
}
