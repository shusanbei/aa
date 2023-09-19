#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int fish[100];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &fish[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        int a = 0;
        for (j = 0; j <= i; j++)
        {
            if (fish[j] < fish[i])
                a++;
        }
        printf("%d ", a);
    }

    return 0;
}