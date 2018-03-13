int icmp(int *a, int *b) { return *a - *b; }
int fcmp(double *a, double *b) {
  double cmp = *a - *b;
  if (cmp < 0) return -1;
  if (cmp > 0) return 1;
  return 0;
}
int cmp(void *a, void *b) {
  int *ia = (int *)a;
  int *ib = (int *)b;
  return *ia - *ib;
}
int main() {
  int a[3] = {1, 2, 3};
  printf("%d\n", icmp(&a[0], &a[1]));
  printf("%d\n", icmp(a, a + 1));
  double b[] = {1, 2};
  printf("%d\n", fcmp(a, a + 1));
  return 0;
}
