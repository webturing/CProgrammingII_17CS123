# A: 循环最多2^20 百万 1s
# B：素数筛
1.	筛出[1,1e6]所有的质数 nlglgN
2.	该区间的数prime(n) O(1)
3.	统计 p= [3,n-2,2]  prime(p)&&prime(p+2)
# C: 筛法 优化的质数函数（O(sqrt)）*O(n/4)
1.	P=n/2  p—
2.	p-=2  
# D: 
# E: unsigned 快速幂 模运算
1.	 (a*b)%m=((a%m)*(b%m))%m
int mpow(int a,int p,int m){ //O(logp)
	a=a%m;
if(a==1||p==0)return 1;
if(p%2==0)return mpow((a*a)%m,p/2);
return (mpow(a*a,p/2)%m*a%m)%m
}
# F：int gcd(a,b){ return b==0?a:gcd(b,a%b);}

# G:
X= lg(N^N)=N*lgN
Y=fmod(X,1.0)
Z=(int)(pow(10,Y))
# H
1.	if(n>=25)n=24
2.	A[25] A[0]=1
3.	A[i]=(A[i-1]*i)%1000000
4.	Sum(A[1~n])
