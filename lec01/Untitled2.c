#include<stdio.h>
int main()
{
    int x=3;

    printf("x=%d\n",x);
    printf("&x=%x\n",&x);

    int *p;///����һ��ָ�����ͱ�����ָ�루������
    p=&x;

    printf("p=%x\n",p);
    printf("*p=%d\n",*p);


    x++;//y=3
    ++x;//z=4
    p++;
    ++p;
    *p++;///�������� (*p)++   *(p++)
    ++*p;
    return 0;
}
