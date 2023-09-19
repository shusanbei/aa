#include<bits/stdc++.h>
using namespace std;
int n;
int ans=1e9;
int a[15],b[15];
void dfs(int k,int x,int y)
{
    if(k!=0){ans=min(ans,abs(x-y));}
    for(int i=k+1;i<=n;i++)
    {
        dfs(i,x*a[i],y+b[i]);
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    dfs(0,1,0); //x是甜度y是苦度
    printf("%d",ans);
    return 0;   
}