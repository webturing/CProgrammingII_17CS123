#include<stdio.h>
#include<ctype.h>
#include<string.h>
void print(int*a,int n){
    int i;
    for(i=0;i<26;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    //printf("%d\n",5>4>3);
    //printf("%d\n",0<1<2);
    int freq[26];
    memset(freq,0,sizeof(freq));
    //print(freq,26);
    freopen("1145.in","r",stdin);
    char a[1000];
    while(gets(a)){
        int len=strlen(a);
        int i;
        for(i=0;i<len;i++)
        {
            if(a[i]=='#')
                break;
            if('a'<=a[i]&&a[i]<='z')
                freq[a[i]-'a']++;///hash
            else if('A'<=a[i]&&a[i]<='Z')
                freq[a[i]-'A']++;
        }
        if(a[i]=='#')
            break;
    }
    //print(freq,26);//debug
    int i;
    for(i='a';i<='z';i++)
        printf("%c %d\n",i,freq[i-'a']);
    return 0;
}

