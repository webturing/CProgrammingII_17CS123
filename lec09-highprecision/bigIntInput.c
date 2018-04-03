#include<string.h>
#include<stdio.h>
#define N 100
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
int main()
{
    char s[100];
    scanf("%s",s);
    int a[N]={0};
    str2bi(s,a);
    printBigInt(a);
}
