#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a1[7];
    for(int i=0;i<7;i++)scanf("%d",&a1[i]);
    int x[8]={0};
    while(n--)
    {
        int m=0;
        for(int i=0;i<7;i++)
        {   
            int a2;
            scanf("%d",&a2);
            for(int i=0;i<7;i++)
            if(a2==a1[i])
            {
                m++;
                break;
            }
        }
        x[m]++;
    }
    for(int i=7;i>=1;i--)
    {
        if(i==7)printf("%d",x[i]);
        else printf(" %d",x[i]);
    }
    return 0;
}