#include<stdio.h>
int main()
{
    int len,i;
    scanf("%d",&len);
    for(i=0;;i++)
    {
        if(len==1)
        {
            printf("%d",i+1);
            return 0;
        }
        else len=len/2;
    }
    return 0;
}