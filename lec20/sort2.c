typedef struct {
  char *str;
  int freq;

} Node;

int cmp(const void *a, const void *b) {
  Node *na = (Node *)(a);
  Node *nb = (Node *)(b);
  return strcmp(na->str, nb->str);
}
int main() {
  Node a = {"zero", 1};
  Node b = {"is", 1};
  int dif = cmp(&a, &b);
  printf("%d\n", dif);
}
