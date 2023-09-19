#include<bits/stdc++.h>
using namespace std;
int n,a[100010],ans;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        ans+=abs(a[i]-a[n/2]);
    }
    printf("%d",ans);
    return 0;
}