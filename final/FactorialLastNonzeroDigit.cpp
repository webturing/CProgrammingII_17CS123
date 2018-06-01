#include <bits/stdc++.h>
using namespace std;
int D[10][4] = {{0, 0, 0, 0},
                {1, 1, 1, 1},
                {2, 4, 8, 6},
                {3, 9, 7, 1},
                {4, 6, 4, 6},
                {5, 5, 5, 5},
                {6, 6, 6, 6},
                {7, 9, 3, 1},
                {8, 4, 2, 6},
                {9, 1, 9, 1}};
bool isPrime(int n) {
  if (n == 2) return true;
  if (n < 2 || n % 2 == 0) return false;
  int c;
  for (c = 3; c * c <= n; c += 2)
    if (n % c == 0) return false;
  return true;
}
int main() {
  map<int, int> f;
  int n = 1000000;
  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      int t = 0;
      int p = i;
      while (p <= n) {
        t += n / p;
        p *= i;
      }
      f[i % 10] += t;
    }
  }

  f[2] -= f[5];
  f[5] = 0;

  int s = 1;
  for (auto j : f) {
    if (j.second > 4) j.second %= 4;
    int k = D[j.first][j.second - 1];
    s = (s * k) % 10;
  }
  cout << s << endl;
}