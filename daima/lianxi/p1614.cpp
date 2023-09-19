#include<stdio.h>
int min(int x,int y)
{
    if(x<y) x=x;
    if(x>y) x=y;
    return x;
}
int main(void){
    int n, m;
    int a[3010];
    scanf("%d%d", &n, &m);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int ans = 1e9;

    for(int i = 1; i <= n - m + 1; i++)//1到n-m+1就是m个连续的值
    {
        int temp = 0;
        for(int j = i; j < i + m; j++)//m个值相加
        {
            temp += a[j];
        }
        ans = min(ans, temp);
    }

    printf("%d\n", ans);
    return 0;
}
