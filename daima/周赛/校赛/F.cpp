#include<bits/stdc++.h>
using namespace std;
long long n,k,ans[1000009];
int a[1000010],x=0;
int main()
{
    scanf("%lld %lld",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=i+k;j++)
        {
            ans[x]+=a[j];
        }
        x++;
    }
    int max=-1e6,tem;
    for(int i=0;i<x;i++)
    {
        if(max<ans[i])
        {
            max=ans[i];
            tem=i;
        }
    }
    for(int i=tem;i<=k;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}