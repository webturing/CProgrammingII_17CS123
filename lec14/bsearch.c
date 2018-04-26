#include<stdio.h>
#include<stdlib.h> ///rand() qsort() bsearch()
int cmp(const void*a,const void*b)
{
    int*ia=(int*)a;
    int*ib=(int*)b;
    return  *ia-*ib;
}

int main()
{
    int a[]= {1,2,4,6,7,7,7,7,7,7,7,8,9,100,132};
    int n=sizeof(a)/sizeof(a[0]);
    int key=7;
    //qsort(a,n,sizeof(a[0]),cmp);
    int *p=bsearch(&key,a,n,sizeof(a[0]),cmp);
    if(p==NULL)
    {
        puts("NOT FOUND!");
    }
    else
    {
        printf("%d at pos %d\n",key,p-a);
    }




}
