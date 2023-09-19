#include<stdio.h>
int jiweishu(int A)
{
    for(int i=1;;i++)
    {
        if(A/10==0)
        {
            return i;
            break;
        }
        A=A/10;
    }
}
int main()
{
    char arr;
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&arr);
        if(arr=='a')
        {
            scanf("%d %d",&a,&b);
            printf("%d+%d=%d\n",a,b,a+b);
            printf("%d\n",jiweishu(a)+jiweishu(b)+jiweishu(a+b)+2);
        }
        if(arr=='b')
        {
            scanf("%d %d",&a,&b);
            printf("%d-%d=%d\n",a,b,a-b);
            printf("%d\n",jiweishu(a)+jiweishu(b)+jiweishu(a-b)+2);
        }
        if(arr=='c')
        {
            scanf("%d %d",&a,&b);
            printf("%d*%d=%d\n",a,b,a*b);
            printf("%d\n0",jiweishu(a)+jiweishu(b)+jiweishu(a*b)+2);
        }

    }
    return 0;
}