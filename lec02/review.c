int main()
{
    int a;
    int *p=&a;
    *p=3;
    printf("%d\n",a);
    int b=7;
    p=&b;


    return 0;
}
