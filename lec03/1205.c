#include <stdio.h>
#include <stdlib.h>
int inc(const void *a, const void *b) {
  char *pa = (char *)a;
  char *pb = (char *)b;
  return *pa - *pb;
}
int main() {
  char s[4];
  int n;
  for (scanf("%d", &n); n--;) {
    scanf("%s", s);
    qsort(s, 3, 1, inc);
    printf("%c %c %c\n", s[0], s[1], s[2]);
  }
  return 0;
}
