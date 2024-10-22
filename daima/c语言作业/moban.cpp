// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         scanf("%d",&n);
//         for(int j=0;j<n;j++)
//         {
//             if(j!=n-1)printf("-");
//             else printf(">\n");
//         }
//         int s=n-1;
//         for(int k=n-2;k>0;k--,s--)
//         {
//          for(int j=1;j<=n;j++)
//          {
//              if(j!=s) printf(".");
//              else printf("/");
//              if(j==n) printf("\n");
//          }
//         }
//         for(int j=0;j<n;j++)
//         {
//             if(j!=0)printf("-");
//             else printf("<");
//             if(j==n-1)printf("\n");
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{

    long long n,x=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i*j/gcd(i,j)==n)x++;
            else continue;
        }
    }
    printf("%lld",x);
    return 0;
}