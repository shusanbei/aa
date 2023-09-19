#include<bits/stdc++.h>
#define int long long
using namespace std;
const int num = 1e5 + 10,maNum = 1e9 + 5;
int ma, mi,ol,x, y, z, m, p, q, k, mid;
int t, n, i, j;//循环变量
long long sum, ans;
int a[num];
set<int> box;
bool flag;
string s;
#define pii pair<int,int>

int qs(int n)
{
	return 2 * n * n + 3 * n;
}

signed main()
{
	cin >> t;
	while(t--){
		cin >> k;
		x = 0, y = 4 * 1e9;
		while(x < y){
			mid = (x + y + 1) / 2;
			if (qs(mid) == k)
			{
				x = mid;
				break;
			}
			if (k > qs(mid)) x = mid;
			else y = mid -1;
		}
		k = k - qs(x);
		x++;
		if (k == 0)
		{
			cout << -1 << endl;
			continue;
		}
		if (k <= 2)
		{
			//cout << 0 << " ***" << x << " ** " << qs(x - 1)<< endl;
			cout << 0 << endl;
		} else
		{
			k -= 1;//相当于剪2
			p = 1;
			ans = 0;
//			for (int i = 1; i < k; i++)
//			{
//				ans += p;
//				if (abs(ans) == x)
//				{
//					p *= -1;
//				}
//			}
			k -= 1;
			if (k <= x)
			{
				ans = k;
			} else if (k > x && k <= 3 * x)
			{
				ans = 2 * x - k;
			} else
			{
				ans = k - 4 * x;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
