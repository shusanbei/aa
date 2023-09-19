#include<stdio.h>
int main()
{
    int n,x,ans=0,a,b;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        a=i;
        while(a!=0)
        {
            b=a%10;
            a=a/10;
            if(b==x)
            {
                ans++;
            }
        }
    }
    printf("%d",ans);
    return 0;
}