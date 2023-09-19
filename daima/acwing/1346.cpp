#include<bits/stdc++.h>
using namespace std;
int n;

char get(int x)//得到当前位数的字符表示
{
    if (x <= 9) return x + '0';
    else return x - 10 + 'A';
}

string base(int x,int n)
{
    string now;
    while (x) 
    {
        now += get(x % n);
        x /= n;
    } // 短除法
    reverse(now.begin() , now.end());
    return now;
}

bool check(string x)//判断回文数
{
    string y = x;
    reverse(x.begin(),x.end());
    if (y == x)
        return true;
    return false;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= 300; i++)
    {
        string ans = base(i * i , n);
        if (check(ans))
            cout << base(i , n) << ' ' << ans << endl;
    }
    return 0;
}