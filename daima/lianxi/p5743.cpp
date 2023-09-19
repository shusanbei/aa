#include<stdio.h>
int main()
{
    int n,m=1;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        m=(m+1)*2;
    }
    printf("%d",m);
    return 0;
}