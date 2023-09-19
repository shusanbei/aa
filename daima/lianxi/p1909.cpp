#include<stdio.h>
int main()
{
    int a,a1,a2,a3,i1,i2,j1,j2,n1,n2;
    int sum=0,sum2=0,sum3=0;
    scanf("%d",&a);
    a1=a;
    a2=a;
    a3=a;
    scanf("%d %d",&i1,&i2);
    scanf("%d %d",&j1,&j2);
    scanf("%d %d",&n1,&n2);
    while(a1>0)
    {
        a1=a1-i1;
        sum+=i2;
    }
    while(a2>0)
    {
        a2-=j1;
        sum2+=j2;
    }
    while(a3>0)
    {
        a3-=n1;
        sum3+=n2;
    }
    if(sum>sum2)
    {
        sum=sum2;
    }
    if(sum>sum3)
    {
        sum=sum3;
    }
    printf("%d",sum);
    return 0;
}
