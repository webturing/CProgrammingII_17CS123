#include<stdio.h>
#include<assert.h>
int add(int a,int b){
    return a+b;
}

int main()
{
  assert(3==add(1,2));
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n",add(a,b));
    return 0;
}


