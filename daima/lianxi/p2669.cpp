#include<stdio.h>
int main()
{
    int k,ans=0,sum=0;
    scanf("%d",&k);
    for(int i=0;;i++)
    {
        for(int j=0;;j++)
        {
            sum+=j;
            if(sum>k)
            {
                for(int k=0;k<j;k++)
                {
                    ans=ans+k*k;
                    break;
                }                
            }
        }
    }
    printf("%d",ans);
}