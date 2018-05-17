#include<stdio.h>
#include<assert.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    assert(a!=0);
    double delta=b*b-4*a*c;
    assert(delta>=0);
    double x1=(-b+sqrt(delta))/(2*a);
    double x2=(-b-sqrt(delta))/(2*a);
    printf("%.2f %.2f\n",x1,x2);


}
