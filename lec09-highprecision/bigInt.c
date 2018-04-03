#include<stdio.h>
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

int main(){
    printBigInt(a);
    printBigInt(b);
   // add(a,b,c);
    printBigInt(c);

}

