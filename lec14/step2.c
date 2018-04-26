#include<stdio.h>
#define N 100
///assume 1<=a<=b<=c<=d<=e<f<=N  Time 5.413s
///using Array H[N+1]
long long H[N+1];
void fill(){
    int i;
    for(i=1;i<=N;i++)H[i]= 1LL*i*i*i*i*i;
}
int main()
{
    long long start=clock();
    fill();
    int a,b,c,d,e,f;
    for(a=1;a<=N;a++)
    for(b=a;b<=N;b++)
    for(c=b;c<=N;c++)
    for(d=c;d<=N;d++)
    for(e=d;e<=N;e++)
    for(f=e+1;f<=N;f++){
        if(H[a]+H[b]+H[c]+H[d]+H[e]==H[f])
            printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
    }
    long long end=clock();
    printf("%.3f\n",(end-start)/1000.0);
    return 0;
}
