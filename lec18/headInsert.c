#define NULL 0
typedef struct node {
  int data;
  struct node* next;
} NODE;
NODE* head;
void disp() {
  NODE* p = head;
  while (p != NULL) {
    printf("%d->", p->data);
    p = p->next;
  }
  printf("\n");
}
int main() {
  disp();
  int i;
  for (i = 0; i < 10; i++) {
    NODE* p = (NODE*)malloc(sizeof(NODE));
    p->data = i;
    p->next = NULL;

    p->next = head;  // p��������
    head = p;        //����head���
    disp();
  }
  //ͳ�������е�ż������
  int tot = 0;
  NODE* p = head;  //ͳ��
  while (p != NULL) {
    if (p->data % 2 == 0) ++tot;
    p = p->next;
  }
  printf("%d\n", tot);

  p = head;  //�޸�
  while (p != NULL) {
    if (p->data % 3 == 1 && p->data % 5 == 2) ++p->data;
        p=p->next;
    }
    disp();
}
