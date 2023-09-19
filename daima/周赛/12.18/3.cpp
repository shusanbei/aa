#include<bits/stdc++.h>
using namespace std;
long long n,m,l,r,tem=0;
bool ans[1000000009]={0};
int main()
{
    scanf("%lld%lld",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%lld%lld",&l,&r);
        for(int j=l;j<=r;j++)
        {
            ans[j]=1;
        }
    }
    for(int i=0;i<1e9;i++)
    {
        if(ans[i]==1)
        {
            tem++;
        }
    }
    printf("%lld",tem);
    return 0;
}