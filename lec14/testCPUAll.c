#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
typedef long long LL;
#define N 100
#define HH(x) (1LL * (x) * (x) * (x) * (x) * (x))
#define FOR(i, s, e) for ((i) = (s); (i) <= (e); ++(i))

LL hh(int x) { return 1LL * x * x * x * x * x; }
LL H[1 + N] = {0LL};

int inc(const void *a, const void *b) {
  LL cmp = *(LL *)a - *(LL *)b;
  if (cmp > 0) return 1;
  if (cmp < 0) return -1;
  return 0;
}

void fill() {
  int i;
  for (i = 1; i <= N; i++) H[i] = 1LL * i * i * i * i * i;
}

int a, b, c, d, e, f;
void step0() {/**brute but fail!*/
  FOR(a, 1, N) FOR(b, 1, N) FOR(c, 1, N) FOR(d, 1, N) FOR(e, 1, N)
      FOR(f, 1, N) if (HH(f) == HH(a) + HH(b) + HH(c) + HH(d) + HH(e))
      printf("%d^5+%d^5+%d^5+%d^5+%d^5=%d^5\n", a, b, c, d, e, f);
}

void step1() {/**ok  using a<=b<=c<=d<=e<f to improve Macro Version */
  FOR(a, 1, N - 1) FOR(b, a, N - 1) FOR(c, b, N - 1) FOR(d, c, N - 1)
      FOR(e, d, N - 1)
      FOR(f, e + 1, N) if (HH(f) == HH(a) + HH(b) + HH(c) + HH(d) + HH(e))
      printf("%d^5+%d^5+%d^5+%d^5+%d^5=%d^5\n", a, b, c, d, e, f);
}

void step2() {/**ok  using a<=b<=c<=d<=e<f to improve function version */
  FOR(a, 1, N - 1) FOR(b, a, N - 1) FOR(c, b, N - 1) FOR(d, c, N - 1)
      FOR(e, d, N - 1)
      FOR(f, e + 1, N) if (hh(f) == hh(a) + hh(b) + hh(c) + hh(d) + hh(e))
      printf("%d^5+%d^5+%d^5+%d^5+%d^5=%d^5\n", a, b, c, d, e, f);
}

void step3() {/**array version*/
  fill();
  FOR(a, 1, N - 1) FOR(b, a, N - 1) FOR(c, b, N - 1) FOR(d, c, N - 1)
      FOR(e, d, N - 1)
      FOR(f, e + 1, N) if (H[a] + H[b] + H[c] + H[d] + H[e] == H[f])
      printf("%d^5+%d^5+%d^5+%d^5+%d^5=%d^5\n", a, b, c, d, e, f);
}

void step4() {/**array_bsearch0 version*/
  fill();
  FOR(a, 1, N - 1) FOR(b, a, N - 1) FOR(c, b, N - 1) FOR(d, c, N - 1)
      FOR(e, d, N - 1) {
    LL key = H[a] + H[b] + H[c] + H[d] + H[e];
    LL *p = (LL *)bsearch(&key, H, N + 1, sizeof(H[0]), inc);
    if (p) printf("%d^5+%d^5+%d^5+%d^5+%d^5=%d^5\n", a, b, c, d, e, f = p - H);
  }
}

void step5() {/**array_bsearch1 version*/
  fill();
  FOR(a, 1, N - 1) FOR(b, a, N - 1) FOR(c, b, N - 1) FOR(d, c, N - 1)
      FOR(e, d, N - 1) {
    LL key = H[a] + H[b] + H[c] + H[d] + H[e];
    LL *p = (LL *)bsearch(&key, H + e + 1, N - e, sizeof(H[0]), inc);
    if (p) printf("%d^5+%d^5+%d^5+%d^5+%d^5=%d^5\n", a, b, c, d, e, f = p - H);
  }
}

void step6() {/**array_bsearch2 version*/
  fill();
  FOR(e, 1, N - 1) FOR(d, 1, e) FOR(c, 1, d) FOR(b, 1, c) FOR(a, 1, b) {
    LL key = H[a] + H[b] + H[c] + H[d] + H[e];
    LL *p = (LL *)bsearch(&key, H + e + 1, N - e, sizeof(H[0]), inc);
    if (p) printf("%d^5+%d^5+%d^5+%d^5+%d^5=%d^5\n", a, b, c, d, e, f = p - H);
  }
}
int main() {
  LL start, end;
  start = clock();
  step6();
  end = clock();
  printf("Step6 using ARRAY+BINARY_SEARCH2 elapsed %.3f second(s)\n",
         1.0 * (end - start) / CLOCKS_PER_SEC);
  start = clock();

  step5();
  end = clock();
  printf("Step5 using ARRAY+BINARY_SEARCH1 elapsed %.3f second(s)\n",
         1.0 * (end - start) / CLOCKS_PER_SEC);
  start = clock();

  step4();
  end = clock();
  printf("Step4 using ARRAY+BINARY_SEARCH0 elapsed %.3f second(s)\n",
         1.0 * (end - start) / CLOCKS_PER_SEC);
  start = clock();

  step3();
  end = clock();
  printf("Step3 using ARRAY elapsed %.3f second(s)\n",
         1.0 * (end - start) / CLOCKS_PER_SEC);
  start = clock();
  step2();
  end = clock();
  printf("Step2 using FUCTION elapsed %.3f second(s)\n",
         1.0 * (end - start) / CLOCKS_PER_SEC);
  start = clock();
  step1();
  end = clock();
  printf("Step1 using MACRO elapsed %.3f second(s)\n",
         1.0 * (end - start) / CLOCKS_PER_SEC);
  start = clock();
  step0();
  end = clock();
  printf("Step0 elapsed %.3f second(s)\n",
         1.0 * (end - start) / CLOCKS_PER_SEC);
  return 0;
}
