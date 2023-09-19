#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            arr[i][0]=1;
            arr[i][j]=1;
            if(i>1&&j>0&&i!=j)
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];//i是行，j是列
            }                                       //1
            printf("%d ",arr[i][j]);                //11     2就是第三行第二列
        }                                           //121
        printf("\n");
    }
    return 0;
}