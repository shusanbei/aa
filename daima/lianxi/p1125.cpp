#include<stdio.h>
#include<string.h>
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
    int maxn=0,minn=1e9,x=0,ans[110]={0};
    char arr[110];
    scanf("%s",arr);
    for(int i=0;i<int (strlen(arr));i++)
    {
        for(int j=0;j<int (strlen(arr));j++)
        {
            if(arr[i]==arr[j])
            {
                ans[x]++;
            }
        }
        x++;
    }
    for(int i=0;i<x;i++)
    {
        if(maxn<ans[i])
        {
            maxn=ans[i];
        }
        if(minn>ans[i])
        {
            minn=ans[i];
        }
    }
    if(isPrime(maxn-minn)==1&&(maxn-minn)!=0&&(maxn-minn)!=1)
    {
        printf("Lucky Word\n");
        printf("%d",maxn-minn);
    }
    else
    {
        printf("No Answer\n");
        printf("0");
    }
    return 0;
}