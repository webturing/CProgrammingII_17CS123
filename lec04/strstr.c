#include <stdio.h>
#include <string.h>
int main() {

  char s[100] = "So we think we can.";
  char k1[100] = "we";

  char *p = strstr(s, k1);
  if (p != NULL)
    printf("%d\n", p - s);
  else
    puts("NOT FOUND!");

  p += strlen(k1);
  p = strstr(p, k1);
  if (p != NULL)
    printf("%d\n", p - s);
  else
    puts("NOT FOUND!");

  return 0;
}