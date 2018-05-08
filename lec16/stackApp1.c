int data[1000];
int top = -1;
/**
top=-1 clear Stack
top==-1 isEmptyStack
data[top] stack top/peek
data[++top]=x  push x into stack
top-- pop stack
*/

int main() {
  int i;
  for (i = 1; i <= 5; i++) data[++top] = i;
  while (top != -1) {
    printf("%d ", data[top]);
    --top;
  }
}
