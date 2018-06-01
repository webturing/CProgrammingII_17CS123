#include <stdio.h>
#include <string.h>
typedef struct node {
  char str[100];
  int freq;
  struct node* next;
} NODE;
NODE* head;

int main() {
  char word[100];
  while (~scanf("%s", word)) {
    int find = 0;
    NODE* p = head;
    while (p != NULL) {
      if (strcmp(p->str, word) == 0) {
        ++p->freq;
        find = 1;
        break;
      }
      p = p->next;
    }
    if (find == 0) {
      NODE* p = (NODE*)malloc(sizeof(NODE));
      strcpy(p->str, word);
      p->freq = 1;
      p->next = head;
      head = p;
    }
  }
  NODE* p = head;
  while (p) {
    printf("%s:%d\n", p->str, p->freq);
    p = p->next;
  }
}
