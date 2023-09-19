#include<bits/stdc++.h>
using namespace std;
struct sj
{
    double a,b,c,ans;
};
int cmp(sj p,sj q)
{
    return p.ans>q.ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    struct sj s[5005];
    for(int i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&s[i].a,&s[i].b,&s[i].c);
    }
    for(int i=1;i<=n;i++)
    {
        s[i].ans=s[i].a+s[i].b/60+s[i].c/3600;
    }
    sort(s+1,s+n+1,cmp);
    for(int i=n;i>=1;i--)
    {
        printf("%.0lf %.0lf %.0lf\n",s[i].a,s[i].b,s[i].c);
    }
    return 0;
}