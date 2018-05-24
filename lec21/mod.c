#include<stdio.h>
int mod(int a,int b){
    int x=a%b;
    if(x>=0)
        return x;
    else
        return x+b;

}
int main()
{
    int n=-17;
    printf("%d\n",n%3);
    printf("%d\n",mod(n,3));
}
