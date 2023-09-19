#include<stdio.h>
int main()
{
    int n,z=0;
    int x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==x)z++;
    }
    printf("%d",z);
    return 0;
}