#include<bits/stdc++.h>
using namespace std;
int n,ans[100],tem[100];//tem判断是否用过这个数
void dfs(int step)
{
    if(step==n)//step==n即是数组长度达到了n
    {
        for(int i=1;i<=step;i++)
        {
            printf("%5d",ans[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++)//循环填数
    {
        if(!tem[i])//该数没用过
        {
            tem[i]=1;     //标记为1
            ans[step+1]=i;//把这个数放到ans内
            dfs(step+1);  //递归继续调用
            tem[i]=0;     //回溯前一个状态
        }
    }
}
int main()
{
    scanf("%d",&n);
    dfs(0);
    return 0;
}