// #include<stdio.h>  //普通求阶乘和
// int main()
// {
//     int n,a,i,sum=1,c=0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         a=i;
//         sum=sum*a;
//         c=c+sum;
//     }
//     printf("%d",c);
// }




#include<bits/stdc++.h>
using namespace std;
int a[2000];
int b[2000];
int c[2000];
void pplus(int *a,int *c)
{
	int jw=0;
	for(int i=1;i<=1000;i++)  //计算每次阶乘都从个位开始 
	{
		c[i]+=a[i]+jw;
		jw=c[i]/10;
		c[i]%=10;
	}
}
void cheng(int *a,int c)
{
	int jw=0;
	for(int i=1;i<=1000;i++)
	{
		a[i]=a[i]*c+jw;   //从个位到高位依次计算 
		jw=a[i]/10;
		a[i]%=10;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	a[1]=1;
	for(int i=1;i<=n;i++)
	{
		cheng(a,i);   //计算1+2+....+n   a代表数组，i是要阶乘的数 
		pplus(a,c);   //计算和           a,c都是数组 
	}
	bool flag=0;
	for(int i=1000;i>=1;i--)
	{
		if(c[i]!=0) flag=1;   //因为没有删去前导0，找到第一个不为0的数开始输出
		if(flag) printf("%d",c[i]);
	}
}
