#include<stdio.h>
int main()
{
    int n,m;
    int arr[110000];
    int a,b;
    long long ans=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);    
    }
    for(int i=1;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        ans=arr[b]-arr[a-1];
        printf("%lld\n",ans);
    }
    return 0;
}