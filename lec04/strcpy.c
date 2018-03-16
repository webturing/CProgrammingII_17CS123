#include <stdio.h>
//#include <string.h>
void strcpy(char* to, char* from) {
  while (*to++ = *from++)
    ;
}
int main() {

  char s[100] = "hello";
  char t[100] = "abc";

  puts(t);
  strcpy(t, s);
  puts(t);
  return 0;
}