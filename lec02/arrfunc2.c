#include<stdio.h>
void g(int x)///Öµ´«µÝ
{
      printf("In func g &x=%x\n",&x);
    x++;
}


int main()
{
    int x=3;
    g(x);
   /// x++;
   printf("In func main &x=%x\n",&x);
    printf("%d\n",x);
    return 0;
}
