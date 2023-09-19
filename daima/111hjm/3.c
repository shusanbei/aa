#include<stdio.h>
#include<math.h>
int main()
{
    int x[5]={50,100,100,60,50},y[5]={73,70,75,72,70};
    int ex1=0,ex2=0,dx=0,dy=0;
    for(int i=0;i<5;i++)
    {
        ex1 += x[i];
        ex2 += y[i];
    }
    ex1/=5;
    ex2/=5;
    for(int i=0;i<5;i++)
    {
        dx += (x[i]-ex1)*(x[i]-ex1);
        dy += (y[i]-ex2)*(y[i]-ex2);
    }
    dx=sqrt(dx/5);
    dy=sqrt(dy/5);
    printf("%d %d",dx,dy);
    return 0;
}