#include<stdio.h>
int main()
{
    double x,y=2,z=0;
    int i=1;
    scanf("%lf",&x);
    for(i=1;i<99999999;i++)
    {
        z=y+z;
        if(z>x)
        {
            printf("%d\n",i);
            break;
        }
            y=y*0.98;
    }
    return 0;
}