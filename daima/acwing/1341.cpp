#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[7] = {0};//记录星期出现次数
    int week = 1;
    for (int y = 1900; y < 1900 + n ; y++)
    {
        for (int m = 1; m <= 12; m++)
        {
            int d;
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)//根据年与月算该月有多少天
            {
                d = 31;
            }
            else if (m == 2)
            {
                if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
                    d = 29;
                else d = 28;
            }
            else
                d = 30;
            for (int i = 1; i <= d; i++)
            {
                week++;
                if (i == 13)//如果是 13 号，对应的星期出现次数加 1 
                    a[week % 7] ++;

            }
        }
    }
    for (int i = 0; i < 7; i++) cout << a[i] << " ";
    cin >> n;
}