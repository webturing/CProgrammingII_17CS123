int data[1000];
int top = -1;
/**
top=-1 clear Stack
top==-1 isEmptyStack
data[top] stack top/peek
data[++top]=x  push x into stack
x=data[top--] pop stack
*/

int main() {
  int n = 10230;
  int r = 8;
  top = -1;
  while (n > 0) {
    int d = n % r;
    data[++top] = d;
    n /= r;
  }
  while (top > -1) {
    printf("%d", data[top--]);
  }
  return 0;
}
