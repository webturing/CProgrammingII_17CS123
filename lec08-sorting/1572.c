#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int length;
    int diameter;
    int number;
}PIPE;
void input(PIPE*p){
    scanf("%d%d%d",&p->length,&p->diameter,&p->number);
}
void print(PIPE*p){
    printf("%d %d %d\n",p->length,p->diameter,p->number);
}
int cmp(const void*a,const void*b){
    PIPE* pa=(PIPE*)a;
    PIPE* pb=(PIPE*)b;
    if(pa->length != pb->length)
        return pa->length - pb->length;//length increasing
    if(pa->diameter != pb->diameter)
        return pb->diameter - pa->diameter;//diameter decreasing
    return pa->number - pb->number;
}
PIPE p[1000];
int main(){
    freopen("A.in","r",stdin);
    int n,m,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);///[0,m-1]
        for(i=0;i<m;i++)input(p+i);
        //for(i=0;i<m;i++)print(p+i);
        qsort(p,m,sizeof(PIPE),cmp);
        printf("%d\n",p[m-1].number);
    }
    return 0;

}
