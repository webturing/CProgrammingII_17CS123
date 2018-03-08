void print(int *a,int n)
{
   int *p;
   for(p=a;p<a+n;p++)
    printf("%d ",*p);
   printf("\n");

}
void input(int *a,int n)
{
    int *p;
    for(p=a;p<a+n;p++)
        scanf("%d",p);


}
int main()
{
    int a[10];
    input(a,10);
    print(a,10);

    return 0;
}
