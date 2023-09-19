#include<stdio.h>
int main()
{
    long long m,n;
    int ans0=0,ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0,ans7=0,ans8=0,ans9=0;
    scanf("%lld %lld",&m,&n);
    for(long long i=m;i<=n;i++)
    {
        int j=i;
        while(j>0)
        {
            if(j%10==0)ans0++;
            if(j%10==1)ans1++;
            if(j%10==2)ans2++;
            if(j%10==3)ans3++;
            if(j%10==4)ans4++;
            if(j%10==5)ans5++;
            if(j%10==6)ans6++;
            if(j%10==7)ans7++;
            if(j%10==8)ans8++;
            if(j%10==9)ans9++;
            j=j/10;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d",ans0,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9);
    return 0;
}