#define NULL 0
typedef struct node{
  int data;
  struct node *next;
}NODE;
NODE *head;

int main(){
    NODE* p=(NODE*)malloc(sizeof(NODE));
    p->data=0;
    p->next=NULL;
    head=p;

    NODE* q=(NODE*)malloc(sizeof(NODE));
    q->data=1;
    q->next=NULL;

    NODE* r=(NODE*)malloc(sizeof(NODE));
    r->data=2;
    r->next=NULL;

    p->next=q;
    q->next=r;

    NODE* cur=p;

    while(cur!=NULL)
    {
        printf("%d->",cur->data);
        cur=cur->next;
    }




}
