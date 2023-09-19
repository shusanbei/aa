#include<bits/stdc++.h>
using namespace std;
double n,m,k,a[1010],mmax=-1e9,mmin=1e9,ans1,ans2;
int main()
{
    scanf("%lf%lf%lf",&n,&m,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        mmax=max(mmax,a[i]);
        mmin=min(mmin,a[i]);
    }
    if(n==0) {mmax=0;mmin=0;}
    ans1=k*36/((mmax+m)*10);
    ans1=ceil(ans1);
    ans2=k*36/((mmin+m)*10);
    ans2=ceil(ans2);
    printf("%.0lf %.0lf",ans1,ans2);
    return 0;
}