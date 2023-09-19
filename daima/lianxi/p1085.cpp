#include<stdio.h>
int main()
{
    int a,b,c,max,day=0,i;
    for(i=1;i<8;i++)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
        if (c>max&&c>8) max=c,day=i;
    }
    printf("%d",day);
    return 0;
}