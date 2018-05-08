char data[1000];
int top = -1;
/**
top=-1 clear Stack
top==-1 isEmptyStack
data[top] stack top/peek
data[++top]=x  push x into stack
x=data[top--] pop stack
*/
int check(char* exp) {
  top = -1;
  int i, n = strlen(exp);
  for (i = 0; i < n; i++) {
    char c = exp[i];
    if ('(' == c || '[' == c || '{' == c) {
      data[++top] = c;
    } else if (')' == c) {
      if (top > -1 && data[top] == '(') {
        --top;
      } else
        return 0;
    } else if (']' == c) {
      if (top > -1 && data[top] == '[') {
        --top;
      } else
        return 0;
    } else if ('}' == c) {
      if (top > -1 && data[top] == '{') {
        --top;
      } else
        return 0;
    }
  }
  return top == -1;
}
int main() {
  char exp[1000];
  while (~scanf("%s", exp)) puts(check(exp) ? "YES" : "NO");
  return 0;
}
