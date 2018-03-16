#include <stdio.h>
#include <string.h>
int main() {

  char s[100] = "So we think we can do what we do.";
  char k1[100] = "we";
  char k2[100] = "you";
  char t[100];  //最终t里面存储"So you think you can."

  int n1 = strlen(k1), n2 = strlen(k2);
  char *p = s;
  while (p = strstr(p, k1)) {
    strncpy(t, s, p - s);
    t[p - s] = 0;
    strcat(t, k2);
    strcat(t, p + n1);
    strcpy(s, t);
  }
  puts(t);

  return 0;
}