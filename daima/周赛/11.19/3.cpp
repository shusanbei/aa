#include<stdio.h>
void paixu(int *arr, int size)  
{  
    int i, j, tmp;  
    for (i = 0; i < size - 1; i++) {  
        for (j = 0; j < size - i - 1; j++) {  
            if (arr[j] > arr[j+1]) {  
                tmp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = tmp;  
            }  
        }  
    }  
}  
int main()
{
    int n;
    int arr[55];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    paixu(arr,n);
    for(int i=n-1;i>n-5-1;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}