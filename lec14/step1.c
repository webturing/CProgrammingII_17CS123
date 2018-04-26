#include <stdio.h>
#define N 100
long long h(int x) { return 1LL * x * x * x * x * x; }
/// assume 1<=a<=b<=c<=d<=e<f<=N  Time 51.340
int main() {
  long long start = clock();
  int a, b, c, d, e, f;
  for (a = 1; a <= N; a++)
    for (b = a; b <= N; b++)
      for (c = b; c <= N; c++)
        for (d = c; d <= N; d++)
          for (e = d; e <= N; e++)
            for (f = e + 1; f <= N; f++) {
              if (h(a) + h(b) + h(c) + h(d) + h(e) == h(f))
                printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
            }
  long long end = clock();
  printf("%.3f\n", (end - start) / 1000.0);
}
