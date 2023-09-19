#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==1){printf("Today, I ate 1 apple.");}
    if(x==0){printf("Today, I ate 0 apple.");}
    if(x>1){printf("Today, I ate %d apples.",x);}
    return 0;
}