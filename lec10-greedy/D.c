#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int start, end;
} Item;
void input(Item* item) { scanf("%d%d", &item->start, &item->end); }
void print(Item* item) { printf("[%d %d]\n", item->start, item->end); }

Item items[10000];
int used[10000];
int cmp(const void* a, const void* b) {
  Item* ita = (Item*)a;
  Item* itb = (Item*)b;
  return ita->end - itb->end;
}
int main() {
  int n;
  while (~scanf("%d", &n)) {
    int i;
    for (i = 0; i < n; i++) input(items + i), used[i] = 0;
    qsort(items, n, sizeof(Item), cmp);
    int tot = 0, cnt = 0;
    while (cnt < n) {
      ++tot;
      int start = 0;
      for (i = 0; i < n; i++) {
        if (items[i].start >= start && used[i] == 0) {
          ++cnt;
          start = items[i].end;
          used[i] = 1;
        }
      }
    }
    printf("%d\n", tot);
  }
  return 0;
}
