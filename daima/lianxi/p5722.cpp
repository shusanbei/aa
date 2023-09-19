#include<stdio.h>
int main()
{
    int n;
    long ans=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        ans+=i;
    }
    printf("%ld",ans);
}