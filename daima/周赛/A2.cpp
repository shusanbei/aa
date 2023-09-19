#include <stdio.h>
int main()
{
    int p,m,e,max;
    
    scanf("%d %d %d", &p, &m, &e);
    if(max < p)
    {
        max = p;
    }
    if(max < m)
    {
        max = m;
    }
    if(max < e)
    {
        max = e;
    }
    printf("%d\n", max);
    
    return 0;
}
