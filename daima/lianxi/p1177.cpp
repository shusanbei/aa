// #include<bits/stdc++.h>
// using namespace std;  //sort排序
// int main()
// {
//     int n;
//     int arr[110000];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++)
//     {
//         if(i!=n-1)printf("%d ",arr[i]);
//         else printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// void paixu(int *arr, int size)  //冒泡排序；
// {  
//     int i, j, tmp;  
//     for (i = 0; i < size - 1; i++) {  
//         for (j = 0; j < size - i - 1; j++) {  
//             if (arr[j] > arr[j+1]) {  
//                 tmp = arr[j];  
//                 arr[j] = arr[j+1];  
//                 arr[j+1] = tmp;  
//             }  
//         }  
//     }  
// }  
// int main()
// {
//     int n;
//     int arr[110000];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     paixu(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         if(i!=n-1)printf("%d ",arr[i]);
//         else printf("%d\n",arr[i]);
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void quicksort(int *arr, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while(i < j && arr[j] >= k)     // 从右向左找第一个小于k的数
            {
                j--;
            }
            if(i < j)
            {
                arr[i++] = arr[j];
            }
            while(i < j && arr[i] < k)      // 从左向右找第一个大于等于k的数
            {
                i++;
            }
            if(i < j)
            {
                arr[j--] = arr[i];
            }
        }
        arr[i] = k;
        // 递归调用
        quicksort(arr, low, i - 1);     // 排序k左边
        quicksort(arr, i + 1, high);    // 排序k右边
    }
}
int main()
{
    int n,arr[500000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}