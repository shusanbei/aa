#include<stdio.h>
#include<string.h>
int main()
{
    int arr[55],a=0,b=0,c=0,k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        if(arr[i]==1)
        {
            a++;
        }
        if(arr[i]==5)
        {
            b++;
        }
        if(arr[i]==10)
        {
            c++;
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}