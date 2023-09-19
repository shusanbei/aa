#include<bits/stdc++.h>
using namespace std;
long long ar[1009][1009];
int m,n,len=1;
void fei(int x)
{
    for(int i=1;i<=len;i++)
    {
        ar[x][i]=ar[x-1][i]+ar[x-2][i];
    }
    for(int i=1;i<=len;i++)
    {
        if(ar[x][i]>9)
        {
            ar[x][i+1]+=ar[x][i]/10;
            ar[x][i]=ar[x][i]%10;
        }
    }
    if(ar[x][len+1]!=0) len++;
}
int main()
{
    cin>>m>>n;
    ar[0][1]=0;
    ar[1][1]=1;
    ar[2][1]=2;
    for(int i=3;i<=n-m;i++)
    {
        fei(i);
    }
    for(int i=len;i;i--)
        printf("%lld",ar[n-m][i]);
    return 0;
}