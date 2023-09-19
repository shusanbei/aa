#include<stdio.h>
int main()
{
    int n,min,max;
    scanf("%d",&n);
    int a[100];
    max=0;
    min=100;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",max-min);
    return 0;
}