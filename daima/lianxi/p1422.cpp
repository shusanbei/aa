#include<stdio.h>
int main()
{
    int a;
    double T;
    scanf("%d",&a);
    if (a<=150)
    {
        T=a*0.4463;
        printf("%.1lf",T);
    }
    if (a>=150&&a<=400)
    {
        T=(150*0.4463)+((a-150)*0.4663);
        printf("%.1lf",T);
    }
    if (a>400)
    {
        T=(150*0.4463)+(250*0.4663)+((a-400)*0.5663);
        printf("%.1lf",T);
    }
    return 0;
}