#include<stdio.h>
#include<ctype.h>
#include<string.h>
void print(int*a,int n)
{
    int i;
    for(i=0; i<26; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{

    int freq[26];
    memset(freq,0,sizeof(freq));

    freopen("1145.in","r",stdin);
    int c;

    while((c=getchar())!=EOF){
        if(c=='#')break;
        if(isalpha(c))
            freq[tolower(c)-'a']++;
    }
    int i;
    for(i='a'; i<='z'; i++)
        printf("%c %d\n",i,freq[i-'a']);
    return 0;
}

