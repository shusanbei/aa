#include<bits/stdc++.h>
using namespace std;
int n,a[20009];
long long ans[20009]={0},x=0,y=0,sum;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sort(a,a+n);
        ans[y] = ans[y-1]+a[x++];
        y++;
        a[x-1]=0;
    }
    for(int i=0;i<y;i++)
    {
        sum+=ans[i];
    }
    printf("%lld",sum-ans[0]);
    return 0;
}