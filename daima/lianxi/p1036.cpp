#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[5000009];
long long ans=0;
int prime(int n)           //普通判断质数
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0 )return 0;
    }
    return 1;
}
void SUM(int *data,int n,int k,int sum,int start)//data是需要的数组
{                                                //n是数组的长度
    if(k==0)     //递归停止的条件                 //k是指要求任意k个数的和
    {                                            //sum是k个数的和//start是起始位置
        if(prime(sum)==1)                        //判断此时的sum是否为质数
        {
            ans++;//若是则质数个数ans++
        }
        return;
    }
    for(int i=start;i<n;++i)//递归
    {
        SUM(data,n,k-1,sum+data[i],i+1);//还是data数组，n长度，因为已经过了一遍即k-1，sum也要加上此时过到的值，i+1是指起始位置加1开始新的遍历
    }
}
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    SUM(x,n,k,0,0);
    printf("%lld",ans);
    return 0;
}