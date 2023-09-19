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
//#define x first
//#define y second

int n,m;
inline void solve(){
    cin>>n>>m;
    int mi=min(m,n),ma=max(m,n);
    if(n==1&&m==1) cout<<"0\n";
    else cout<<mi*2+ma-2<<endl;
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