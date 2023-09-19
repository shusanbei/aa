#include<stdio.h>
int isPrime(int k)
{
    int j;
    for ( j=2; j*j<=k; j++ )    //从2开始判断k是否能被整除，若能则不是素（质）数
    {                            //判断到根号k即可；
        if(k%j==0)    // 如果不为素(质）数返回0 
        {
            return 0;
        }
    }
    return 1;    // 反之则返回1 
}
int main()
{
    int l,ans[100000],x=0,y=0,sum=0;
    scanf("%d",&l);
    for(int i=2;i<=l;i++)
    {
        if(isPrime(i)==1)
        {
            ans[x]=i;
            x++;
        }
    }
    for(int i=0;i<x;i++)
    {
        sum+=ans[y];
        if(sum<=l)
        {
            printf("%d\n",ans[i]);
            y++;
        }
    }
    printf("%d\n",y);
    return 0;
}