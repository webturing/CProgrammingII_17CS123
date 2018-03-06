#include<stdio.h>
int main()
{
    int x=3;

    printf("x=%d\n",x);
    printf("&x=%x\n",&x);

    int *p;///定义一个指向整型变量的指针（变量）
    p=&x;

    printf("p=%x\n",p);
    printf("*p=%d\n",*p);


    x++;//y=3
    ++x;//z=4
    p++;
    ++p;
    *p++;///容易歧义 (*p)++   *(p++)
    ++*p;
    return 0;
}
