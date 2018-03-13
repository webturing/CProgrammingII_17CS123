void print(float* a, int n) {
  int i;
  for (i = 0; i < n; i++) printf("%f ", a[i]);
  printf("\n");
}
int inc(const void* a, const void* b) {
  float* pa = (float*)a;
  float* pb = (float*)b;
  float cmp = *pa - *pb;
  if (cmp < 0) return -1;
  if (cmp > 0) return 1;
  return 0;
}
int main() {
  float a[] = {0.1, 1.2, 0.9, 4.5, 4.4};
  qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), inc);
  print(a, sizeof(a) / sizeof(a[0]));
}
