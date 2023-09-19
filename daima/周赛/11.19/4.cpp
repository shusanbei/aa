#include<stdio.h>
void paixu(int *arr, int size)  
{  
    int i, j, tmp;  
    for (i = 0; i < size - 1; i++) 
    {  
        for (j = 0; j < size - i - 1; j++) 
        {  
            if (arr[j] > arr[j+1]) 
            {  
                tmp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = tmp;  
            }  
        }  
    }  
} 
int main()
{
    int n,arr[55],k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    arr[n]=k;
    paixu(arr,n+1);
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}