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
    int n;
    scanf("%d",&n);
    int ans;
    ans=jiweishu(n);
    printf("%d",ans);
    return 0;
}