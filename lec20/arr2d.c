#include <stdio.h>
int main() {
  int a[3][4] = {0};
  a[0][7] = 9;
  a[0 + 7 / 4][7 % 4] = 9;
  int b[][3] = {1, 2, 3, 4, 4};
  int c[][4] = {1, 2, 3, 4};
}
