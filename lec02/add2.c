#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int mul(int x,int y)
{
    return x*y;
}
void add2(int x,int y,int *z)
{
    *z=x+y;
}
void foo(int x,int y,int*sum,int*mul)
{
*sum=x+y;
*mul=x*y;

}
int main()
{
    int a=3,b=4;
    int c,d;
    foo(a,b,&c,&d);
    printf("c=%d d=%d\n",c,d);
    return 0;
}
