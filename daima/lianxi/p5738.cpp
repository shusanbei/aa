#include<stdio.h>
int main() 
{
    int i, j, m, n, max=0, min=10, b[100][20],sum=0;
    double c = 0, mmax = 0;

    scanf("%d %d", &n, &m);                        //n组数，每组数m个
    for (i = 0; i < n; i++) 
    {                                              //存入数据
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++) 
    {                                               
        sum = 0;                                                              //初始化
        max = 0;
        min = 10;
        for (j = 0; j < m; j++) 
        {                                        //求出每行的和，最大值，最小值
            sum += b[i][j];                       
            if (b[i][j] > max )max = b[i][j];
            if (b[i][j] < min) min = b[i][j];
        }

        c = (sum*1.0 - max - min) / (m - 2.0);               //计算每行的平均值
        if (mmax < c)mmax = c;                                    //是否是最大平均值
    }

    printf("%.2f", mmax);
    return 0;
}