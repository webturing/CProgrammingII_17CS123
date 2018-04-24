#include <stdio.h>
#define N 10

int F[N + 1] = {1, 1};
void fill() {
  int i;
  for (i = 2; i <= N; i++) F[i] = F[i - 1] * i;
}
int main() {
  fill();
  int target = 127;
  int a, b, c, d, e, f, g, h, i;
  for (a = 0; a <= 1; a++)
    for (b = 0; b <= 1; b++)
      for (c = 0; c <= 1; c++)
        for (d = 0; d <= 1; d++)
          for (e = 0; e <= 1; e++)
            for (f = 0; f <= 1; f++)
              for (g = 0; g <= 1; g++)
                for (h = 0; h <= 1; h++)
                  for (i = 0; i <= 1; i++) {
                    if (a * F[1] + b * F[2] + c * F[3] + d * F[4] + e * F[5] +
                            f * F[6] + g * F[7] + h * F[8] + i * F[9] ==
                        target) {
                      printf("%d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f,
                             g, h, i);
                      return 0;
                    }
                  }

  return 0;
}
