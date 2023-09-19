#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s;
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    printf("%.2lf",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}