# 数论基础Introduction of Integer Theory

##整数
- a+b a-b a*b 

- a/b= q   r

  17 /3 =5 .... 2

- n%2==0  

- n&1

- 长度```  int len=(int)(log10(n)+1)```
## 整除

整除 p|n  3|15

公约数 p|n && p|m  p是m,n公因子 Greatest Common Divisor  gcd(a,b)

公倍数 Least Common Multiplier  lcm(a,b)

gcd(a,b)*lcm(a,b)==a  * b

## 质数

对于一切 n>p>=2   p|n都不成立  称 n是质数

- O(n)
- O(sqrt(n)）
- O(sqrt(n)/2)
- 筛法

## 同余

(a+b)%r=(a%r+b%r)%r

(a*b)%r=(a%r *b%r)%r

(n+1)^k % n = 1

## 循环节

如果一个n不含有2,5因子，则必然存在长度不超过n+1的9 ak 满足ak%n==0

