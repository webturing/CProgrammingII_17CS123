#include<stdio.h>
#include<stdlib.h>
int inc(const void*a,const void*b){
    return *(int*)a-*(int*)b;
}
int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a[1000];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),inc);
    //for(i=0;i<n;i++)printf("%d ",a[i]);
    int b[n];
    int j=0;
    b[j++]=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]!=b[j-1])
        {
            b[j++]=a[i];
        }
    }
    printf("%d\n",j);
    printf("%d",b[0]);
    for(i=1;i<j;i++)
        printf(" %d",b[i]);
    printf("\n");

}
