#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000]={0};
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=i/2;j++)
        {
            a[i] += a[j]; //递推方程，，i的就是从0~i/2的和
        }
    }
    printf("%d",a[n]);
    return 0;
}