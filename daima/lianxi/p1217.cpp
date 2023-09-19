#include<stdio.h>
int isPrime(int k)
{
    int j;
    for ( j=2; j<k; j++ )    //从2开始判断k是否能被整除，若能则不是素（质）数
    {
        if(k%j==0)    // 如果不为素(质）数返回0 
        {
            return 0;
        }
    }
    if(k==1)          //1不是素（质）数，返回值也是0
    {
        return 0;
    }
    return 1;    // 反之则返回1 
}
bool isHWS(int num) 
{
    int temp=num,ans=0;
    while (temp!=0) 
    {
        ans=ans*10+temp%10;
        temp/=10;
    }
    if (ans==num)
        return 1;
    else
        return 0;
}
int main()
{
    long a,b,x=0;
    long hwzs[100000000];
    scanf("%ld %ld",&a,&b);
    for(long i=a;i<b;i++)
    {
        if(isPrime(i)==1 && isHWS(i)==1)
        {
            hwzs[x]=i;
            x++;
        }
    }
    for(long i=0;i<x;i++)
    {
        printf("%ld\n",hwzs[i]);
    }
    return 0;
}

// #include<stdio.h>
 
// void checkprime(int p);
// int prime[10000000];      //只需开到一千万（开到一亿的话，会超内存）
// int is_huiwen(int p);
 
// int main() {
// 	int a, b, left, right, i;     //left为区间左端点，right为右端点
// 	scanf("%d %d", &a, &b);     
// 	if (a % 2 == 0)      //把左端点初始化为奇数
// 		left = a + 1;      
// 	else
// 		left = a;
// 	if (b > 10000000)      //右端点最大只需一千万
// 		b = 10000000;
// 	right = b;
// 	checkprime(right);         //筛法求1~n之间的素数
// 	for (i = left; i <= right; i += 2) {        //由于只对奇数操作，故每次加2
// 		if (prime[i] && is_huiwen(i))               //如果一个数既是素数也是回文数
// 			printf("%d\n", i);           //输出这个数
// 	}
// 	return 0;
// }
 
// int is_huiwen(int p) 
// {
// 	int ans, temp;
// 	temp = p;             //拷贝p，对temp操作
// 	ans = 0;
// 	while (temp) 
//     {               //得到p的每一位
// 		ans = ans * 10 + temp % 10;        //把p的低位作为ans的高位
// 		temp /= 10; 
// 	}
// 	if(ans == p)                 //最终得到的ans和p位相反（例如p = 1234， 则ans = 4321），如果p和ans相等，那么p就是回文数
// 		return 1;
// 	return 0;
// }
 
// void checkprime(int p) 
// {
// 	int i;
// 	for (i = 2; i <= p; i++)
// 		prime[i] = 1;
// 	for (i = 2; i * i <= p; i++)
//     {
// 		if (prime[i]) 
// 			for (int j = i; j * i <= p; j++)
// 			{
//             	prime[j * i] = 0;
//             }
//     }
// }
 
