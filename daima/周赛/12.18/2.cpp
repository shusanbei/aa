#include<bits/stdc++.h>
using namespace std;
int x[10],y[10],ans[10];
int a[4] = {1,-1,0,0};
int b[4] = {0,0,1,-1};
bool shi()
{
    int tem=0;
    for (int i=1; i<=4; i++)
    {
        for (int j=i+1; j<=4; j++)
        {
            ans[++tem] = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
        }
    }
    if (ans[1]==ans[6]&&ans[2]==ans[5]&&ans[3]==ans[4])
    {
        return 1;
    }
    return 0;
}
int main()
{
    for(int i=0;i<4;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    if (shi())
    {
        printf("wen\n");
        return 0;
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            for (int j=0;j<4;j++)
            {
                x[i]+=a[j];
                y[i]+=b[j];
                if (shi())
                {
                    printf("hai xing\n");
                    return 0;
                }
                x[i]-=a[j];
                y[i]-=b[j];
            }
        }
    }
    printf("wo jue de bu xing\n");
    return 0;
}
