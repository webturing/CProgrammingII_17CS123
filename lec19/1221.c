#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef struct node{
    char str[100];
    int freq;
    struct node* next;
}NODE;
NODE* head;

int main(){
    //freopen("1221.in","r",stdin);
    //freopen("1221.out","w",stdout);
    char s[1000][100];
    int j=0;
    char t[100];
    while(scanf("%s",t)==1)    { strcpy(s[j],t);    j++; }
    qsort(s,j,sizeof(s[0]),strcmp);
    int i;
  //  for(i=0;i<j;i++)
   //     printf("%s ",s[i]);
    for(i=j-1;i>=0;i--){
        /// s[i];
        ///check s[i] in list or not?
        int find=0;
        NODE* p=head;
        while(p!=NULL){
            if(strcmp(p->str,s[i])==0){  /// existed  s[i] freq++
                find=1;
                p->freq++;
                break;
            }
            p=p->next;
        }
        if(find==0){///no exsited create node  {s[i],1,NULL} as list head;
            NODE* q=(NODE*)malloc(sizeof(NODE));
            assert(q!=NULL);
            strcpy(q->str,s[i]);
            q->freq=1;
            q->next=NULL;
            q->next=head;
            head=q;
        }
    }
    printf("%d\n",j);
    NODE* p=head;
    while(p!=NULL){
        printf("%s:%d\n",p->str,p->freq);
        p=p->next;

    }
    return 0;
}
