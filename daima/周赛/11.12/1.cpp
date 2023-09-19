#include<stdio.h>
int main()
{
    int a[1000],T,sum=0;
    char c;
    scanf("%d",&T);
    while(T--)
    {
        for(int i=0;i<999999;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
            c=getchar();
            if(c==' ') continue;
            else break;
        }
        printf("%d\n",sum);
        sum=0;
    }
}