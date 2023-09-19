#include<stdio.h>
int main()
{
    int n,ans=2,sum=0;
    scanf("%d",&n);
    int tem=ans;
    for(int i=0;i<n;i++)
    {
        sum+=ans;
        ans=ans*10+tem;
    }
    printf("%d",sum);
    return 0;
}