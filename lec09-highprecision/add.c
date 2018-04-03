#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
int a[N]={3,2,1};///a=123
int b[N]={8,9,9};///b=998
int c[N]={0};

void printBigInt(int B[N]){
    int i=N-1;
    while(B[i]==0&&i>0)i--;

    for(;i>=0;i--)
        printf("%d",B[i]);
    printf("\n");
}
void add(int a[N],int b[N],int c[N])
{
    memset(c,0,sizeof(c));
    int sc=0;
    int i;
    for(i=0;i<N;i++)
    {
        int t=a[i]+b[i]+sc;
        sc=t/10;
        c[i]=t%10;
    }

}
int main(){
    printBigInt(a);
    printBigInt(b);
    add(a,b,c);
    printBigInt(c);

}

