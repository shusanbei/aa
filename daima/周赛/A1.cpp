#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    //多组输入
    while (~scanf(" %d%d", &m, &n))
    {
        //判断大小
        if (m > n)
        {
            printf("%d>%d\n", m, n);
        }
        else if (m == n)
        {
            printf("%d=%d\n", m, n);
        }
        else
        {
            printf("%d<%d\n", m, n);
        }
    }
 
    return 0;
}
