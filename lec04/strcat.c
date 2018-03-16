#include <stdio.h>
//#include <string.h>
void strcat(char* to, const char* from) {
  while (*to) ++to;
  while (*to++ = *from++)
    ;
}
int main() {

  char s[100] = "hello";
  char t[100] = " world";

  puts(s);
  strcat(s, t);  // s+=t;
  return 0;
  puts(s);
}