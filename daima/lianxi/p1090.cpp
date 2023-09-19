#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10009]={0},ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        a[i+1]=a[i+1]+a[i];
        ans += a[i+1];
        int j=i+2,temp=a[i+1];
        while(true)
        {
            if(a[j]>a[i+1]||j>n-1)
            {
                break;
            }
            j++;
        }
        for(int k=i+1;k<j-1;k++)
        {
            a[k]=a[k+1];
        }
        a[j-1]=temp;
    }
    printf("%d",ans);
    return 0;
}