#include <stdio.h>
#define N 100
/// assume 1<=a<=b<=c<=d<=e<f<=N  Time 4.089
/// using Array H[N+1]
/// using Binary Search  replace a Loop O(n^6)=>O(n^5*logn)
long long H[N + 1];
void fill() {
  int i;
  for (i = 1; i <= N; i++) H[i] = 1LL * i * i * i * i * i;
}
int cmp(const void *a, const void *b) {
  long long *p = (long long *)a;
  long long *q = (long long *)b;
  long long dif = *p - *q;
  if (dif > 0) return 1;
  if (dif < 0) return -1;
  return 0;
}
int main() {
  long long start = clock();
  fill();
  int a, b, c, d, e, f;
  for (a = 1; a < N; a++)
    for (b = a; b < N; b++)
      for (c = b; c < N; c++)
        for (d = c; d < N; d++)
          for (e = d; e < N; e++) {
            long long key = H[a] + H[b] + H[c] + H[d] + H[e];
            long long *p = bsearch(&key, H + (e + 1), N - e, sizeof(H[0]), cmp);
            if (p != NULL)
              printf("%d %d %d %d %d %d\n", a, b, c, d, e, f = p - H);
          }
  long long end = clock();
  printf("%.3f\n", (end - start) / 1000.0);
  return 0;
}
