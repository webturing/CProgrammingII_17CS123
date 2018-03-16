#include <stdio.h>
#include <string.h>

int sys(const char* s) {
  if (*s == 0 || *(s + 1) == 0) return 1;
  const char* p, *q;
  p = q = s;
  while (*(q + 1)) ++q;
  while (p < q) {
    if (*p - *q) return 0;
    ++p, --q;
  }
  return 1;
}

int main() {
  printf("%d\n", 1 == sys(""));
  printf("%d\n", 1 == sys("a"));
  printf("%d\n", 0 == sys("ab"));
  printf("%d\n", 1 == sys("aa"));
  printf("%d\n", 1 == sys("abcba"));
  return 0;
}