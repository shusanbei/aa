#include<stdio.h>
int main()
{
    int n;
    long long s=0;
    scanf("%d",&n);
    int jc=1;
    for(int i=1;i<=n;i++)
    {
        jc=jc*i;
        s+=jc;
    }
    printf("%lld",s);
    return 0;
}