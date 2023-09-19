#include<stdio.h>
int main()
{
    int n,k,x=0,y=0;
    scanf("%d %d",&n,&k);
    double ans1=0,ans2=0,sum1=0,sum2=0;
   for(int i=1;i<=n;i++)
    {
        if(i%k==0)
        {
            sum1+=i;
            x++;
        }
        else
        {
            sum2+=i;
            y++;
        }
    }
    ans1=sum1/x;
    ans2=sum2/y;
    printf("%.1lf %.1lf",ans1,ans2);
    return 0;
}