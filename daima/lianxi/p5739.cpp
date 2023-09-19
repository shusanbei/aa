#include<stdio.h>   //循环思想；
int main()
{
    int n,i;
    long long ans=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("%lld",ans);
    return 0;
}



#include<stdio.h>
int jiecheng(int x)     //递归思想；
{
    if(x<=1)
    return 1;
    else
    return x*jiecheng(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long ans;
    ans=jiecheng(n);
    printf("%lld",ans);
}