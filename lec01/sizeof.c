#include<stdio.h>
int main()
{
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(char*));

    puts("--------------------");
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(long long*));
    printf("%d\n",sizeof(float*));
    printf("%d\n",sizeof(double*));
    return 0;
}
