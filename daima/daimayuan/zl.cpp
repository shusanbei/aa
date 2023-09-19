#include<bits/stdc++.h>
using namespace std;
int n,m,a[110],b[110],x,y,ans[100009],tem[100009][110];
void dfs(int x,int y)
{
    if(tem[x][y]){return;}
    tem[x][y]=1;
    if(y==n)
    {
        ans[x]=1;
        return;
    }
    else 
    {
        dfs(x+a[y],y+1);
        dfs(x+b[y],y+1);
    }
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    dfs(0,0);
    for(int i=0;i<=m;i++)
    {
        printf("%d",ans[i]);
    }
    return 0;
}