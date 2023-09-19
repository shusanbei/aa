// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n,a[55]={0};
//     scanf("%lld",&n);
//     a[0]=a[1]=1,a[2]=2,a[3]=3,a[4]=5;
//     for(int i=5;i<=n;i++)
//     {
//         a[i]=a[i-1]+a[i-3]+a[i-5];//隔二一加，等同于没有连续走三次俩阶的情况
//     }
//     printf("%lld",a[n]);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[55][55];
    scanf("%lld",&n);
    a[0][0]=1,a[0][1]=0,a[0][2]=0,a[1][0]=1,a[1][1]=1,a[1][2]=0;
    for(int i=2;i<=n;i++)
    {
        a[i][0]=a[i-1][0]+a[i-1][1]+a[i-1][2];
        a[i][1]=a[i-2][0];
        a[i][2]=a[i-2][1];
    }//a[i][1]表示走了一次2阶
    printf("%lld",a[n][0]);
    return 0;
}