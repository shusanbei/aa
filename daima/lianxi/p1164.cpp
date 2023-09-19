#include<bits/stdc++.h>         //动态规划
using namespace std;
int m,n,a,ans[10009];
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(int j=m;j>a;j--)
        {
            ans[j]+=ans[j-a];//当前钱数的方案数 就等于 当前钱数的方案数 与 当前钱数减去此次菜价所剩钱数 的方案数 的和
        }
        ans[a]++;//因为每种菜只有一个，所以要从最多的钱数向当前菜品+1的价钱进行操作
    }
    printf("%d",ans[m]);
    return 0;
}


// #include<bits/stdc++.h>         //背包
// using namespace std;
// int m,n,a[10009],ans[10009][10009];
// int main()
// {
//     scanf("%d %d",&n,&m);
//     for(int i=1;i<=n;i++)
//         scanf("%d",&a[i]);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)           //（1）if(j==第i道菜的价格)f[i][j]=f[i-1][j]+1;
//         {                               //（2）if(j>第i道菜的价格) f[i][j]=f[i-1][j]+f[i-1][j-第i道菜的价格];
//             if(j<a[i])                  //（3）if(j<第i道菜的价格) f[i][j]=f[i-1][j];
//             {
//                 ans[i][j]=ans[i-1][j];
//             }
//             if(j==a[i])
//             {
//                 ans[i][j]=ans[i-1][j]+1;
//             }
//             if(j>a[i])
//             {
//                 ans[i][j]=ans[i-1][j]+ans[i-1][j-a[i]];
//             }
//         }
//     }
//     printf("%d",ans[n][m]);
//     return 0;
// }