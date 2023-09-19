#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int num = 1e5 + 10,maNum = 1e9 + 5;
int m, n, i, j, k;//循环变量
long long sum, ans;
int a[num], t[num], z[num], y[num];
set<int> box;
bool flag;
#define pii pair<int,int>


int main()
{
	cin >> m >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i] >> z[i] >> y[i];
	}
	ans = 0;
	int time = 0;
	while (m > 0)
	{
		time++;//第 t 秒
		for (int i = 1; i <= n; i++)
		{
			k = time % (t[i] * z[i] + y[i]);
			if (k == 0) continue;
			if (k <= (t[i] * z[i]) && k % t[i] == 0)
			{
				m -= 1;
			}
		}
	}
	cout << time << endl;
	return 0;
}
