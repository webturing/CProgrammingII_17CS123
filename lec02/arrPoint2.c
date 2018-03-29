int main() {
  int a[10];

  /**
      int i;
      for(i=0;i<10;i++)
          scanf("%d",a+i);
     */

  int *p;
  for (p = a; p < a + 10; p++) scanf("%d", p);

  ///指针访问（遍历数组元素）
  for (p = a; p < a + 10; p++) printf("%d ", *p);
  printf("\n");
  ///逆序访问
  for (p = a + 9; p >= a; p--) printf("%d ", *p);
  printf("\n");

  return 0;
}
