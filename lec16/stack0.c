int data[1000];
int top = -1;

void showAll() {
  int i;
  for (i = 0; i <= top; i++) printf("%d ", data[i]);
  printf("\n");
}
int main() {

  int x = 3;
  data[++top] = x;  // push
  for (x = 4; x <= 10; x++) {
    data[++top] = x;
    showAll();
  }
  top--;  // pop
  showAll();
  data[++top] = 11;
  data[top];  // top
}
