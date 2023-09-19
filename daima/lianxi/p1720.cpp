#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double a=1,b=1,x,y,ans=0;
    x=(1+sqrt(5))/2;
    y=(1-sqrt(5))/2;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a *= x;
        b *= y;
    }
    ans=(a-b)/sqrt(5);
    printf("%.2lf",ans);
    return 0;
}