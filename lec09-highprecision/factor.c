#include<stdio.h>
#define N 1135+50
void printBigInt(int B[N]){
    int i=N-1;
    while(B[i]==0&&i>0)i--;
    for(;i>=0;i--)
        printf("%d",B[i]);
    printf("\n");
}
void mul(int a[N],int x){
    int i;
    for(i=0;i<N;i++)
        a[i]*=x;
    int sc=0;
    for(i=0;i<N;i++){
        int t=a[i]+sc;
        sc=t/10;
        a[i]=t%10;
    }
}

int main(){
    int a[N]={1};//
    int i;
    for(i=2;i<=500;i++){
        mul(a,i);
    }
    printBigInt(a);
}
