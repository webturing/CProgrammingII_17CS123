#include<stdio.h>
int gcd_poor(int a,int b)
{
    int c;
    for(c=a+b; c>=1; c--)
    {
        if(a%c==0&&b%c==0)
            return c;
    }
    return 1;

}
int gcd_soso(int a,int b){
    int r=a%b;
    if(r==0)
        return b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return a;
}
int gcd(int a,int b){  return b?gcd(b,a%b):a; }
int main()
{
    int r=gcd_poor(12,8);
    printf("%d\n",r);
}
