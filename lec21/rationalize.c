#include<stdio.h>
int main()
{
    int n=1007;

    while(n%2==0)n/=2;
    while(n%5==0)n/=5;

    int a=9;
    int m=1;//Ñ­»·½Ú
    while(a%n!=0)
    {
        a=(a*10+9)%n;
        m++;

    }
    printf("%d\n",m);
}
