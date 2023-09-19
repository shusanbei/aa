#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//输入n个数
    int mix=1e9;
    for(int i=0;i<n;i++)//循环到i=n即把n个数都输入到for循环中
    {
        int x;
        scanf("%d",&x);//输入每个数进入循环
        if(x<mix) 
        {
            mix=x;
        }
    }
    printf("%d",mix);
    return 0;
}
