#include<bits/stdc++.h>
using namespace std;
long long s[109];
int n,m;
long long ans;
void dfs(long long a,int k,int cnt)
{
    if(a>m) return ;
    if(cnt!=1)   ans+=m/a;
    else        ans-=m/a;
    for(int i=k+1;i<n;i++)
    {
        dfs(a*s[i],i,cnt+1);
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&s[i]);
    }
    for(int i=0;i<n;i++)
        dfs(s[i],i,1);
    printf("%lld",abs(ans));
    return 0;
}