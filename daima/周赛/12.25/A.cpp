#include<bits/stdc++.h>
using namespace std;
long long q,l,r,sum=0;
int main()
{
    scanf("%lld",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%lld%lld",&l,&r);
        for(int j=l;j<=r;j++)
        {
            sum += (3*j*j+1)%(1000000007); 
        }
        printf("%lld",sum%(1000000007));
    }
    return 0;
}