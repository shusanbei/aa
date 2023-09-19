#include<stdio.h>
int mulPowerOfTwo(int n, int m) 
{  // 计算 n*(2^m)
  return n << m;
}
int divPowerOfTwo(int n, int m) 
{  // 计算 n/(2^m)
  return n >> m;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",mulPowerOfTwo(a,b),divPowerOfTwo(a,b));
    return 0;
}