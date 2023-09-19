#include<stdio.h>
int main()
{
    int zt[10000000];
    int l,m;
    scanf("%d%d",&l,&m);
    for(int i=1;i<=m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)zt[i]=1;
    }
    int ans=0;
    for(int i=0;i<=l;i++)
    {
        if(!zt[i])ans++;
    }
    printf("%d",ans);
    return 0;
}
