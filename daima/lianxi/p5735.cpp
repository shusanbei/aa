#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    scanf("%lf %lf",&x3,&y3);
    double dis,a,b,c;
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//sqrt,平方根函数，，头文件是<math.h>;
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    dis=a+b+c;
    printf("%.2lf",dis);
    return 0;
}