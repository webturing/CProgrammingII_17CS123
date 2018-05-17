#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[10][100]={"one","two","three","four","five","six","seven","eight","nine","ten"};
    qsort(s,10,sizeof(s[0]),strcmp);///Ä¬ÈÏ×ÖµäÔöĞò
    int i;
    for(i=0;i<10;i++)
        printf("%s ",s[i]);
    return 0;
}
