#include<stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int b[1001];
    memset(b,0,sizeof(b));
    int n,t,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        b[t]++;
    }
    int tot=0;
    for(i=0; i<=1000; i++)
        if(b[i]!=0)
        {
            ++tot;
        }
    printf("%d\n",tot);
    int first=1;

    for(i=0; i<=1000; i++)
        if(b[i]!=0)
        {
            if(first==1)
            {
                printf("%d",i);
                first=0;
            }else
                printf(" %d",i);

        }

}
