#include<stdio.h>
int main()
{
    int a,ans=0,p;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            ans++;
            if(ans<10)
            {
                printf("0%d",ans);
            }
            else
            {
                printf("%d",ans);
            }
        }
        printf("\n");
    }
    printf("\n");
    ans=0;
    for(int i=0;i<a;i++)
    {
        p=(a-i)*2-2;
        for(int k=p;k>0;k--)
        {
            printf(" ");
        }
        for(int j=0;j<i+1;j++)
        {
            ans++;
            if(ans<10)
            {
                printf("0%d",ans);
            }
            else
            {
                printf("%d",ans);
            }
        }
        printf("\n");
    }
    return 0;
}