#include<stdio.h>
#include<math.h>
#include<string.h>
int len(int n) ///�����ַ���
{
    char a[100]="";
    sprintf(a,"%d",n);
    return strlen(a);
}
int len1(int n) ///��ѧ����
{
    double x=log10(n);
    return (int)(x+1);
}
int main()
{
    printf("%d\n",len(12345));
    printf("%d\n",len1(12345));
}
