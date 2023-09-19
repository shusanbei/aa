#include<bits/stdc++.h>
using namespace std;
int n,t[10];
double mmax=-1e9,ans,tem;
void dfs(int k,int a,int b,int c)
{
    if(k>n){return;}//边界
    if(a+b>c&&a+c>b&&b+c>a)
    {
        double p=(a+b+c)/2.0;
        ans=sqrt(p*(p-a)*(p-b)*(p-c));
        mmax=max(mmax,ans);
        tem=1;
    }
    dfs(k+1,a+t[k],b,c);
    dfs(k+1,a,b+t[k],c);
    dfs(k+1,a,b,c+t[k]);
    dfs(k+1,a,b,c);
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    dfs(0,0,0,0);
    if(tem){printf("%.1lf\n",mmax);}
    else {printf("-1\n");}
    return 0;
}