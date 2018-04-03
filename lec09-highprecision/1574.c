#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define N 100+50
void str2bi(char*s,int a[N]);
void printBigInt(int B[N]);
void add(int a[N],int b[N],int c[N]);
int main(){
    char s[N],t[N];
    int a[N],b[N],c[N];
    while(2==scanf("%s%s",s,t)){
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        str2bi(s,a);
        str2bi(t,b);
        add(a,b,c);
        printBigInt(c);
    }
    return 0;
}
void str2bi(char*s,int a[N]){
    memset(a,0,sizeof(N));
    int n=strlen(s);
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=s[n-1-i]-'0';
    }

}
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

