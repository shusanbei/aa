#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n*5;
    b=11+n*3;
    if(a<b){printf("Local");}
    if(a>b){printf("Luogu");}
    return 0;
}