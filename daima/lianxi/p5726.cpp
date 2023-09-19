#include<stdio.h>
int main()
{
    int n,min=1e9,max=-1;
    scanf("%d",&n);
    int arr[1100];
    float ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    ans=(sum-min-max)/(n-2);
    printf("%.2lf",ans);
    return 0;
}