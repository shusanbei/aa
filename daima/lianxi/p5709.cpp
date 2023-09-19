#include <stdio.h>
int main()
{
    int m,t,s,g;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0)
    {
        printf("0");
        return 0;
    }
        if(s%t==0)
        {
            if(s==0)
            printf("%d",m);
            g=m-(s/t);
            if(g<0)
            printf("0");
            else
            printf("%d",g);
        }
        else 
        {
            if(s==0)
            printf("%d",m);
            g=m-(s/t)-1;
            if(g<0)
            printf("0");
            else
            printf("%d",g);
        }
    return 0;
} 