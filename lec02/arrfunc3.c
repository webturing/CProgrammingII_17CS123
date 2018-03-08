#include<stdio.h>
void g(int *x)
{
++*x;
}


int main()
{
    int x=3;
   g(&x);
   printf("%d\n",x);
    return 0;
}
