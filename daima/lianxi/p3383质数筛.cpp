#include<bits/stdc++.h>
using namespace std;

int primes[N], cnt;
bool st[N];
int sum[N];
//1111
bool isprime(int num) {
    if(num<=3){
        return num>1;
    }
    if(num%6!=1&&num%6!=5){
        return false;
    }
    int sq=(int)sqrt(num);
    for(int i=5;i<=sq;i+=6){
        if(num%i==0||num%(i+2)==0){
            return false;
        }
    }
    return true;
}

// 线性筛质数
// void get_primes(int n){
// 	for(int i=2;i<=n;i++){
// 		if(!st[i]) primes[cnt++] = i;
// 		for(int j=0;i*primes[j]<=n;j++){
// 			st[i*primes[j]]=true;  //不是质数
// 			if(i%primes[j]==0) break;
// 		}
// 	}
// }


// int prime(int n)           //普通判断质数
// {
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0 )return 0;
//     }
//     return 1;
// }

// bool v[1000009]={0};       
// int cnt=0,ans[1000009],q;
// void prime(int n)             //埃氏筛法
// {
//     for(int i=2;i<=n;i++)
//     {
//         if(v[i])
//         {
//             continue;   //v[i]为1的话继续i++下一个
//         }
//         ans[cnt]=i;     //没有继续即为遇到了质数，记录下来
//         cnt++;          //并ans的下标+1；cnt最后即为质素的个数
//         for(int j=i;j<=n/i;j++)
//         {
//             v[i*j]=1;   //把质数的i的j倍全记录为1，下次就会跳过记录的数
//         }
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     prime(n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&q);           //输入要输出的质数的位置
//         printf("%d\n",ans[q-1]);  //输出该位置的质数q-1是因为q是第几个位置（从1开始）
//         printf("\n");             //而 ans 是从0开始记录的
//     }
//     return 0;
// }



int v[100001000];//v[i]是i的最小质因子
int pr[1000010]; //用来存质数
int cnt=0;
void prime(int n)     //欧拉线性质数筛
{
    for(int i=2;i<=n;i++)
    {
        if(v[i]==0) //初始化时所有的v都是0
        {
            v[i]=i;        //记录i为v[i]的质因子
            pr[++cnt]=i;   //记录质数并cut个数+1
        }
        for(int j=1;j<=cnt;j++)
        {
            if(pr[j]>n/i || pr[j]>v[i])//pr大于最小质因子或者大于n/i退出循环
            {
                break;
            }
            v[i*pr[j]]=pr[j];//记录 pr[j] 的 i 倍数为他的最小质因子
        }
    }
}
int main()
{
    int n,q,k;
    scanf("%d %d",&n,&q);
    prime(n);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&k);
        printf("%d\n",pr[k]);
    }
    return 0;
}