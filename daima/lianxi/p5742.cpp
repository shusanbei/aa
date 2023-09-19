#include<stdio.h>
struct STU
{
    int xuehao;
    int ye;
    int shu;
};

int main()
{
    int n,sum[1100],zhong[1100];
    scanf("%d",&n);
    struct STU arr[1100];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&arr[i].xuehao,&arr[i].ye,&arr[i].shu);
        sum[i]=arr[i].ye+arr[i].shu;
        zhong[i]=arr[i].ye*0.7+arr[i].shu*0.3;
    }
    for(int i=0;i<n;i++)
    {
        if(sum[i]>140&&zhong[i]>=80)
        {
            printf("Excellent\n");
        }
        else
        {
            printf("Not excellent\n");
        }
    }
    return 0;
}