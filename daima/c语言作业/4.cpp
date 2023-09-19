#include<stdio.h>
int main()
{
    double sum1,sum2,sum3,ans;
    for(int i=1;i<=100;i++)
    {
        sum1+=i;
    }
    for(int i=1;i<=50;i++)
    {
        sum2+=i*i;
    }
    for(int i=1;i<=10;i++)
    {
        sum3+=1.0/i;
    }
    ans=sum1+sum2+sum3;
    printf("%lf",ans);    
    return 0;
}