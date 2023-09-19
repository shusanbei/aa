#include<stdio.h>
int main()
{
    int n;
    int s=1;
    scanf("%d",&n);
    for (int i=n;i>=1;i--)
    {
        for (int j = i; j>=1; j--)        //i变j变，，
        {
           if(s<10){printf("0%d",s);}
           else printf("%d",s);
           s++;
        }
        printf("\n");
    }
    return 0;
}