#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    long long l,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld%lld",&l,&r);
        long long a,b;
        a=sqrt(l);
        b=sqrt(r);
        if(a*a<l) a+=1;
        printf("%lld\n",b-a+1);
    }
    return 0;
}