#include<stdio.h>
int isPrime(int k)
{
    int j;
    for ( j=2; j<k; j++ )    //从2开始判断k是否能被整除，若能则不是素（质）数
    {
        if(k%j==0)    // 如果不为素(质）数返回0 
        {
            return 0;
        }
    }
    if(k==1)          //1不是素（质）数，返回值也是0
    {
        return 0;
    }
    return 1;    // 反之则返回1 
}
int main()
{
    int n,j;
    int a[110],b[110];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(isPrime(a[i])==1)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
    {
        if(i==j-1)printf("%d",b[i]);
        else printf("%d ",b[i]);
    }
    return 0;
}