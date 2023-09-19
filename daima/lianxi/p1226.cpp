#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,p,ans=1;
    scanf("%lld %lld %lld",&a,&b,&p);
    long long a1=a,b1=b;
    while (b>0)
    {
        if(b%2==0)//如果指数为偶数
        { 
            b=b/2;//把指数缩小为一半
            a=a*a%p;//底数变大成原来的平方
        }
        else //如果指数为奇数
        {
            b=b-1;//把指数减去1，使其变成一个偶数
            ans=ans*a%p;//此时记得要把指数为奇数时分离出来的底数的一次方收集好
            b=b/2;//此时指数为偶数，可以继续执行操作
            a=a*a%p;
        }
    }
    printf("%lld^%lld mod %lld=%lld",a1,b1,p,ans%p);
    return 0;
}


#include<stdio.h>
#include<string.h>
int a[100000+5];
int main ()
{
	int n;
	while(~scanf("%d",&n))
	{
		long long int sum=0,i,j,t;
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			scanf("%lld",&t);
			sum=sum+a[t];        //计算小于t的数的个数
			for(j=1;j<=t;j++)    //小于t的前面的数加1
			{
				a[j]=a[j]+1;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}