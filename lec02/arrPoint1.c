int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,0};
   printf("&a[0]=%d a=%d\n",&a[0],a);
   printf("&a[1]=%d a+1=%d\n",&a[1],a+1);
   int *p;
   p=a;
   printf("%d\n",*p);
   printf("%d\n",*(p+1));

   int i;
   for(i=0;i<10;i++)printf("%d ",a[i]);
   printf("\n");

    ///指针访问（遍历数组元素）
    for(p=a;p<a+10;p++)
        printf("%d ",p[0]);
    printf("\n");

    return 0;
}
