#include<stdio.h>
///FIFO: First In First Out
int data[200000];
int head=0;
int tail=0;
///Queue data[head...tail-1]
///(1)Initialize head=tail=0;
///(2) isEmpty head==tail
///(3) QueryHead data[head]
///(4) QueryTail data[tail-1]
///(5) x Enqueue:  data[tail++]=x
///(6) Dequeue   x=data[head++]
void showAll()
{
    int i;
    for(i=head; i<=tail-1; i++)
        printf("%d ",data[i]);
    printf("\n");
}
int Q[100000];
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&Q[i]);
    for(i=0; i<n; i++)
    {
        data[tail++]=Q[i];
    }

    while(head<tail)
    {
        /// Dequeue x
        printf("%d",data[head++]);
        if(head==tail)
            break;
        /// Dequeue x
        int x=data[head++];
        /// Enqueue x;
        data[tail++]=x;

    }
}
