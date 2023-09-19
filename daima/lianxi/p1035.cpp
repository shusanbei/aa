#include<stdio.h>
int main()
{
    int k;
    double s=1;
    scanf("%d",&k);
    int i=1;
    while(s<=k)
    {
        i++;
        s=s+(1.0/i);
    }
    printf("%d",i);
    return 0;
}