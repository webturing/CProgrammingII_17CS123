#lec06 复杂数据结构:结构体
## 结构体概述
- 建模需要
- 结构体嵌套

## 结构体声明
```
struct Student{
    char name[20];
    int age;
    int score;
};
```
##结构体对象创建和分量访问  //取分量运算符.优先级最高
```
  struct Student st;//结构体对象创建
  strcpy(st.name, "zhangsan");
  st.age = 18;
  st.score = 80;
  printf("%s %d %d\n", st.name, st.age, st.score);
```
##结构体指针 //取所指向的对象分量运算符- >优先级最高
```
/////(*p).x  <=> p->x
```
## typedef使用
##结构体函数
```
typedef struct {  
  int x;
  int y;
} POINT;

void input(POINT* p) { scanf("%d%d", &p->x, &p->y); }
void print(POINT* p) { printf("%d %d\n", p->x, p->y); }
double distance(POINT* p, POINT* q) {
  double dx = p->x - q->x;
  double dy = p->y - q->y;
  return hypot(dx, dy);
}
double area(POINT* p, POINT* q, POINT* r) {
  double a = distance(p, q);
  double b = distance(p, r);
  double c = distance(q, r);
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
  POINT p, q, r;
  input(&p);
  input(&q);
  input(&r);
  printf("%f\n", distance(&p, &q));
  printf("%f\n", area(&p, &q, &r));
}
```