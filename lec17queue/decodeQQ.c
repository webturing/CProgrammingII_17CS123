#include <stdio.h>
int data[100000];
int head = 0;
int tail = 0;
/***
队列操作:用[head,tail)区间表示队列
初始化队列 head=0；tail=0
判断队列是否为空 head==tail
队伍最前的元素 data[head]
队列末尾元素 data[tail-1]//!!!
出队 x=data[++head]
元素x入队  data[tail++]=x;
*/
void showAll() {
  int i;
  for (i = head; i <= tail - 1; i++) printf("%d ", data[i]);
  printf("\n");
}
int main() {
  int Q[] = {6, 3, 1, 7, 5, 8, 9, 2, 4, };
  int n = sizeof(Q) / sizeof(Q[0]);
  int i;
  for (i = 0; i < n; i++) data[tail++] = Q[i];
  showAll();
  while (head < tail) {
    printf("%d ", data[head++]);
    if (head == tail) {
      break;
    }
    data[tail++] = data[head++];
  }
}
