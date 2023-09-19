#include<stdio.h>
int main()
{
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    int m[100000000];
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            for(int k=0;k<s1;k++)
            {
                for(int l=0;l<(s1*s2*s3);l++)
                {
                    m[l]=i+j+k;
                }
            }
        }
    }
    int ans[100000];
    for(int c=0;c<(s1*s2*s3);c++)
    {
        for(int v=0;v<80;v++)
        {
            if(m[c]==v) ans[v]++;
        }
    }
    int min=1e9;
    for(int c=0;c<(s1*s2*s3);c++)
    {
        if(min>ans[c]) min=c;
    }
    printf("%d",min);
    return 0;
}