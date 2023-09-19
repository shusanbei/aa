#include<stdio.h>
int main()
{
    unsigned long long n,g;
    scanf("%lld",&n);
    if(n>=3)
    {
    g=n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
    printf("%lld",g);
    }
    return 0;
}