# 数论算法

@author [ZHAO Jing]( zj@webturing.com)



## 基本概念

- **整除性**:  

  - 若整数$d$ 是整数$n$的因子，即$\exists t \in \mathbb{Z}$ 满足$ dt=n$记作为$d \mid n$。
  - 反之$d \nmid n$ 
- **素数**: 

  - 若$\forall x :2\le x \le n-1$  都有$ x\nmid n $则$n$是素数
  - 反之称n是**合数**
  - 特别的规定 1不是素数
- **除法定理**

  - 对于任何整数$a$ 存在唯一的证书$q$和$r$ 满足 $0\le r \lt n$ 且$a=qm+r$
  - 称 $q =\lfloor a/n \rfloor$ 为**商**  $r=a \mod n$ 为**余数**
  - 如果 $n \mid (a-b)$  称$a$ $b$ 对于$n$同余 记为 $ a \equiv  b  \mod n$
- 公约数和最大公约数GCD

  - 若$d \mid a $ 且$d\mid b$ , 则$d$为$a$ 和$b$公约数
  - 所有$d$中最大的称为**最大公约数GCD** 记为$gcd(a,b)$
  - 特别的如果 $gcd(a,b)=1$称 a,b**互质**
- 公倍数和最小公倍数LCM

  - 若$a \mid d $ 且$b\mid d$ , 则$d$为$a$ 和$b$公倍数
  - 所有$d$中最小的称为**最小公倍数LCM**记为$lcm(a,b)$
- 唯一因子分解定理
  - 合数$a​$仅有一种方式写成如下的乘积形式$ a= p_1^{e_1}p_2^{e_2}p_3^{e_3}...p_r^{e_r}​$其中 $p_i​$是质数 且$p_1<p_2<...<p_r​$



## 最大公约数
- **GCD递归定理** $gcd(a,b)=gcd(b,a \mod b)$

- **欧几里得算法I**

  ```
  EUCULID(a,b)
  if b==0
  	return a
  else return EUCLID(b,a%b)
  ```

-  **欧几里得算法II**


