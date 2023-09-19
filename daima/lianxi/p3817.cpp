#include<bits/stdc++.h>
using namespace std;
int n,x;
long long a[100009],ans;
int main()
{
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]+a[i+1]>x)
        {
            ans+=a[i]+a[i+1]-x;
            a[i+1]=x-a[i];  //为了避免负数的情况直接这样
        }                   //如果是a[i+1]=a[i]+a[i+1]-x会出现负数的情况
    }
    printf("%lld",ans);
    return 0;
}