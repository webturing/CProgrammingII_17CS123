#include <stdio.h>
// malloc
int a[100000000];
int main() {
  int *p = (int *)malloc(sizeof(int) * 100000000);  ///����ռ�
  if (p == NULL) {
    puts("Allocated failed");
  } else {
    int i;
    for (i = 0; i < 10; i++) p[i] = i;

    free(p);
  }
}
