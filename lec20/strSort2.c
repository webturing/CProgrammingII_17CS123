#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mycmp1(const void*a,const void*b){//×ÖµäÔöÐò
    char **sa=(char**)a;
    char **sb=(char**)b;
    return strcmp(*sa,*sb);
}
int mycmp2(const void*a,const void*b){//×Öµä½µÐò
    char **sa=(char**)a;
    char **sb=(char**)b;
    return -strcmp(*sa,*sb);
}
int mycmp3(const void*a,const void*b){//³¤¶ÈÔöÐò
    char **sa=(char**)a;
    char **sb=(char**)b;
    return strlen(*sa)-strlen(*sb);
}
int mycmp4(const void*a,const void*b){
    char **sa=(char**)a;
    char **sb=(char**)b;
    int difLen= strlen(*sa)-strlen(*sb);
    if(difLen)return difLen;
    return mycmp1(a,b);//

}
int main()
{
    char *s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    qsort(s,10,sizeof(s[0]),mycmp4);
    int i;
    for(i=0;i<10;i++)
        puts(s[i]);

    return 0;
}
