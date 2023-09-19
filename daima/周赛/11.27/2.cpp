#include<bits/stdc++.h>
using namespace std;
int ten(int x)
{
    int ans=1;
    for(int i=0;i<x;i++)
    {
        ans=ans*10;
    }
    return ans;
}
int main()
{
    int n,d[99999],s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    int news[99999],tem=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            news[tem]+=d[s]*ten(j-i);
            s++;
        }
        tem++;
    }
    sort(news,news+n);
    for(int i=0;i<tem;i++)
    {
        if(news[i]+1!=news[i+1])
            printf("%d\n",news[i]);
    }
    return 0;
}