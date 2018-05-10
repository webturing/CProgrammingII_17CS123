#include <stdio.h>
int data[100000];
int head = 0;
int tail = 0;
/***
队列操作:用[head,tail]区间表示队列
初始化队列 head=tail=0
判断队列是否为空 head==tail
队伍最前的元素 data[head]
队列末尾元素 data[tail-1]//!!!
出队 ++head
元素x入队  data[tail++]=x;
*/
void showAll() {
  int i;
  for (i = head; i < tail; i++) printf("%d ", data[i]);
  printf("\n");
}
int main() {
  head = tail = 0;  //初始化队列 head=tail=0 用[head,tail)区间表示队列
  int i;
  for (i = 1; i <= 10; i++) {
    data[tail++] = i;
                showAll();
	}
	while(head<tail)
	{
		printf("%d out!\n",data[head++]);
		showAll();
	}
}