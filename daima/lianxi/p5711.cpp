#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a % 4 == 0 && a % 100 != 0)||a % 400 == 0){printf("1");}//闰年判断（除4对于0，除100不等于0）
    else {printf("0");}
    return 0;
}