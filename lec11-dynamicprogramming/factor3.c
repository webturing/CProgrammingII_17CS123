#include<stdio.h>
#include<time.h>
int F[13]={0};
int fact(int n){
    if(F[n]!=0){
        return F[n];
    }
    if(n<=1)
        return F[n]=1;
    return F[n]=fact(n-1)*n;
}
void showMemory(){
    int i;
    for(i=0;i<13;i++)
        printf("%d ",F[i]);
    printf("\n");
}
int main()
{
    showMemory();
    fact(2);
    showMemory();
      fact(2);
    showMemory();
       fact(12);
    showMemory();
    return 0;
}
