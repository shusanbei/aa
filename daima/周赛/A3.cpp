#include<stdio.h>
int main()
{
    int n;
    int m;
    int arr[100];
    scanf("%d %d", &n,&m);
    int i = 0;
    int j = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d ", &arr[i]);
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}