#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
#define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
#define PII pair<int, int>
#define pdd pair<double,double>
#define int long long
#define LL long long
#define rep(i,a,b) for (int i = a; i <= b; i ++)
#define per(i,b,a) for (int i = b; i >= a; i --)
#define endl '\n'

const double CLOCKS_PER_SECOND = ((clock_t)1000);
const double CLOCKS_PER_MILLISECOND = ((clock_t)1);
const int N = 2e5 + 10, mod = 1e9 + 7;

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

int n;
void solve()
{
    cin >> n;
    vector<int> nums(n), ans(n + 1);
    deque<int> Q;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        Q.push_back(nums[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        if (Q.back() == i)
        {
            Q.pop_back();
            continue;
        }
        while (Q.front() != i)
        {
            ans[i]++;
            Q.push_back(Q.front());
            Q.pop_front();
        }
        ans[i]++;
        Q.pop_front();
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
}


signed main(){
    IOS;
    int tt;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}