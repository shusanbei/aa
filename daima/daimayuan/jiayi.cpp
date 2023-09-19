#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int>PII; 
const int MOD = 1e9 + 7;
const int N = 200010;
ll f[N+50][10];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= 9; i++)f[0][i] = 1;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= 9; j++)f[i][j - 1] = f[i-1][j];
		f[i][9] = (f[i-1][1] + f[i-1][0]) % MOD;
	}
	while (n--)
	{
		char str[20];
		int m, res = 0;
		scanf("%s %d", &str, &m);
		int len = strlen(str);
		for (int i = 0; i < len; i++)
		{
			res += f[m][str[i] - '0'];
			res %= MOD;
		}
		cout << res << "\n";
	}
	return 0;
}