// #include<stdio.h>
// int main()
// {
//     int arr[100][100],n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=n-1;i>=0;i--)
//     {
//         for(int j=n-1;j>=0;j--)
//         {
//             printf("%4d ",arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
const int len=100;
int main()
{
    int i,j,a,hash[len][len];
    int k=0,v=0,t;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            k++;
            hash[i][j]=k; 
        }
    }  //记录矩阵每个位置的每个数 
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
        t=hash[i][j];
        hash[i][j]=hash[j][i];
        hash[j][i]=t;//先将数组的i和j的位置交换，让行变成列 ,逆时针转180度 
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a/2;j++)
        {
            t=hash[i][j];
            hash[i][j]=hash[i][a-j-1];
            hash[i][a-j-1]=t;   
        }//在将数组从新排序
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%5d",hash[i][j]);//输出重新排序后的矩阵 
            v++;
            if(v%a==0) printf("\n");
        }
    }
    return 0;
}