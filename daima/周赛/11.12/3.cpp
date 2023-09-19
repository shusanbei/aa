#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,ans;
    long long r,l;
    scanf("%d",&n);
    while(n--)
    {
        ans=0;
        scanf("%lld %lld",&l,&r);
        for(i=sqrt(l);i*i<=r;i++)
        {
            if(i*i<=r&&i*i>=l)
            {
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}