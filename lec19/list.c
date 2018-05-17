#include<stdio.h>

typedef struct node{
    int data;
    struct node* next;
}NODE;
NODE* head;
int main()
{
    printf("%d\n",sizeof(NODE));
    NODE* p=(NODE*)malloc(sizeof(NODE));
    assert(p!=NULL);


    return 0;
}
