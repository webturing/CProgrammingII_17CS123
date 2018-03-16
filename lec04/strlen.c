#include <stdio.h>
int strlen(const char *s) {
  const char *p = s;
  while (*p) p++;
  return p - s;
}
int main() {
  printf("%d\n", 0 == strlen(""));
  printf("%d\n", 1 == strlen("a"));
  printf("%d\n", 5 == strlen("abcba"));

  return 0;
}
