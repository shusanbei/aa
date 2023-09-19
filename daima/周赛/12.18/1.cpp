#include<bits/stdc++.h>
using namespace std;
long T,L,R,ans1,ans2;
int main()
{
    scanf("%ld",&T);
    for(int n=1;n<=T;n++)
    {
        scanf("%ld%ld",&L,&R);
        ans1=R+L;
        ans2=R-L+1;
        if(ans2%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
