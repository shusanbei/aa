#include<bits/stdc++.h>
using namespace std;
int n,k,ans[100];

void dfs(int step,int k)
{
    if(step>k)//step>n即是数组长度达到了n
    {
        for(int i=1;i<step;i++)
        {
            printf("%3d",ans[i]);
        }
        printf("\n");
        return;
    }
    for(int i=ans[step-1]+1;i<=n;i++)//循环填数,从ans[step-1]+1开始
    {                                //因为ans[step]有一个数，+1是因为ans内的数各不相同
        ans[step]=i;//把这个数放到ans内               若不+1则ans内的数会出现相同的情况
        dfs(step+1,k);  //直接递归继续调用step+1
    }
}

int main()
{
    scanf("%d %d",&n,&k);
    dfs(1,k);
    return 0;
}