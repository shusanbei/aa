// #include<stdio.h>
// unsigned long long jc(int x)
// {
//     long long re=1;
//     for(int i=0;i<x;i++)
//     {
//         re*=2;
//     }
//     return re;
// }
// int main()
// {
//     int n,m;
//     unsigned long long ans=0,i=0;
//     scanf("%d %d",&n,&m);
//     if(m==64&&n==65)
//     {
//         for(i=18446744073709551616;i<36893488147419103232;i++)
//         {
//             if(i%7==1)
//             {
//                 ans++;
//             }
//         }
//     }
//     if(m==63&&n==64)
//     {
//         for(i=9223372036854775808;i<18446744073709551616;i++)
//         {
//             if(i%7==1)
//             {
//                 ans++;
//             }
//         }
//     }
//     for(i=jc(n);i<jc(m);i++)
//     {
//         if(i%7==1)
//         {
//             ans++;
//         }
//     }
//     printf("%lld",ans);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    unsigned long long ans=0;
    cin>>n>>m;
    unsigned long long nc=pow(2,n),mc=pow(2,m);
    nc--;mc--; 
    if(nc%7==0) ans+=1;
    if(mc%7==0) ans-=1;
    ans+=mc/7-nc/7;
    cout<<ans<<endl;
}
