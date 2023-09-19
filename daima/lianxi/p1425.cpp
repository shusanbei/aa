#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,t;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    t=((c*60)+d)-((a*60)+b);
    e=t/60;
    f=t%60;
    printf("%d %d",e,f);
    return 0;
}