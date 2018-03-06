#include<stdio.h>
int main()
{
    int x=4;
   // x++;
    const int y=5;
//    y++;
    printf("&x=%d\n",&x);
    printf("&y=%d\n",&y);
    int *p=&x;
    ++*p;
    printf("x=%d\n",x);
    --p;
    ++*p;
    printf("const y=%d\n",y);

    return 0;
}
