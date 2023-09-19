#include<stdio.h>
int main()
{
    int w,x,h;
    int x1,y1,z1,x2,y2,z2;
    int q,s,ans=0;
    scanf("%d %d %d",&w,&x,&h);
    scanf("%d",&q);
    int a[25][25][25]={0};
    for(int i=0;i<q;i++)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
        for(int j=x1;j<=x2;j++)
        {
            for(int k=y1;k<=y2;k++)
            {
                for(int l=z1;l<=z2;l++)
                {
                    a[j][k][l]=1;
                }
            }
        }
    }
    for(int j=1;j<=w;j++)
    {
        for(int k=1;k<=x;k++)
        {
            for(int l=1;l<=h;l++)
            {
                if(a[j][k][l]==1)
                {
                    s++;
                }
            }
        }
    }
    ans=w*x*h;
    ans=ans-s;
    printf("%d",ans);
    return 0;
}