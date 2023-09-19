#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    int ans=0;
    for(int i=1;i<100;i++)
    {
        for(int j=1;j<100;j++)
        {
            if(i+j==w&&i%2==0&&j%2==0)
            {
                ans=1;
            }
        }
    }
    if(ans==1)
    {
        printf("YES");
    }
    else{printf("NO");}
    return 0;
}