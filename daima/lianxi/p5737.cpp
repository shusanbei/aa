#include<stdio.h>
int main()
{
    int x,y,j=0,ans[2000];
    scanf("%d %d",&x,&y);
    for(int i=x;i<=y;i++)
    {
        if(( (i%4==0) && (i%100!=0) )|| i%400==0 )
        {               
            ans[j]=i;  //普通闰年能够被4整除并且不能被100整除，世纪闰年能够被400整除
            j++;
        }
    }
    printf("%d\n",j);
    for(int i=0;i<j;i++)
    {
        if(i==j-1)
        {
            printf("%d",ans[i]);
        }
        else printf("%d ",ans[i]);
    }
    return 0;
}