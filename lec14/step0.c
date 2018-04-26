#include <stdio.h>
#define N 100
long long h(int x) { return 1LL * x * x * x * x * x; }
int main() {
  int a, b, c, d, e, f;
  for (a = 1; a <= N; a++)
    for (b = 1; b <= N; b++)
      for (c = 1; c <= N; c++)
        for (d = 1; d <= N; d++)
          for (e = 1; e <= N; e++)
            for (f = 1; f <= N; f++) {
              if (h(a) + h(b) + h(c) + h(d) + h(e) == h(f))
                printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
            }
}
