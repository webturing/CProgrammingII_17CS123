#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int start, end;
} Item;
void input(Item* item) { scanf("%d%d", &item->start, &item->end); }
void print(Item* item) { printf("[%d %d]\n", item->start, item->end); }
Item items[10000];
int cmp(const void* a, const void* b) {
  Item* ita = (Item*)a;
  Item* itb = (Item*)b;
  return ita->end - itb->end;
}
int main() {
  int n, i;
  while (~scanf("%d", &n)) {
    for (i = 0; i < n; i++) input(items + i);  ///&items[i]
    qsort(items, n, sizeof(Item), cmp);
    int tot = 0, start = 0;
    for (i = 0; i < n; i++) {
      if (items[i].start >= start) {
        ++tot;
        start = items[i].end;
      }
    }
    printf("%d\n", tot);
  }
  return 0;
}
