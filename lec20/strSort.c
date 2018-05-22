#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char s[10][100] = {"zero", "one", "two",   "three", "four",
                     "five", "six", "seven", "eight", "nine"};
  qsort(s, 10, sizeof(s[0]), strcmp);
  int i;
  for (i = 0; i < 10; i++) puts(s[i]);

  return 0;
}
