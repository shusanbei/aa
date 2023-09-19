// #include<bits/stdc++.h>
// using namespace std;
// int a1,a2,b1,b2;
// long long a[30][30];
// bool b[30][30];
// int main()
// {
//     scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
//     a1=a1+2;
//     a2=a2+2;
//     b1=b1+2;
//     b2=b2+2;
//     b[b1][b2]=1;
//     b[b1-1][b2-2]=1;
//     b[b1-2][b1-1]=1;
//     b[b1+1][b2-2]=1;
//     b[b1+2][b2-1]=1;
//     b[b1-1][b2+2]=1;
//     b[b1-2][b2+1]=1;
//     b[b1+1][b2+2]=1;
//     b[b1+2][b2+1]=1;
    
//     a[2][2]=1;
//     for(int i=2;i<=a1;i++)
//     {
//         for(int j=2;j<=a2;j++)
//         {
//             a[i][j] += a[i-1][j]+a[i][j-1];
//             if(b[i][j]) a[i][j]=0;
//         }
//     }
//     printf("%lld\n2",a[a1][a2]);
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int m ,n ,x ,y;
long long a[25][25];
bool f[25][25];
int main()
{
    cin >> n >> m >> x >> y;
    m += 2;
    n += 2;
    x += 2;
    y += 2;
    f[x][y] = 1;
    f[x+2][y+1] = 1;
    f[x-2][y+1] = 1;
    f[x+2][y-1] = 1;
    f[x-2][y-1] = 1;
    f[x+1][y+2] = 1;
    f[x-1][y+2] = 1;
    f[x+1][y-2] = 1;
    f[x-1][y-2] = 1;
    a[2][2] = 1;
    for(int i = 2 ;i <= n ;i++)
        for(int j = 2 ;j <= m ;j++)
        {
            a[i][j] += a[i-1][j] + a[i][j-1];
            if(f[i][j]) a[i][j] = 0;
        }
    cout << a[n][m] << endl;
    return 0;
}