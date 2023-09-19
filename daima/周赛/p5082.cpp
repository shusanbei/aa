#include<stdio.h>
int main()
{
    long long n,m,s;
    long long a1=0,a2=0;
    scanf("%lld",&n); 
    for(int i=1;i<=n;i++)
        scanf("%lld",&m),a1+=m;
    for(int i=1;i<=n;i++)
        scanf("%lld",&s),a2+=s; 
    printf("%.6f",(a1*3.0-a2*2.0)/(a1-a2)*1.0);
    return 0;
}