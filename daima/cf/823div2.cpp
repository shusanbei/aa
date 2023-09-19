// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// const double CLOCKS_PER_SECOND = ((clock_t)1000);
// const double CLOCKS_PER_MILLISECOND = ((clock_t)1);
// const int N = 2e5 + 10, mod = 1e9 + 7;

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,m;
// inline void solve(){
//     map<int ,int>mp;
//     cin>>n>>m;
//     int x,ans=0;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         mp[x]++;
//     }
//     for(auto mp:mp){
//         ans+=min(mp.y,m);
//     }
//     cout<<ans<<endl;
// }

// signed main(){
//     IOS;
//     int tt;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// const double CLOCKS_PER_SECOND = ((clock_t)1000);
// const double CLOCKS_PER_MILLISECOND = ((clock_t)1);
// const int N = 2e5 + 10, mod = 1e9 + 7;

// // #define x first
// // #define y second
// // #define pb push_back
// // #define qb pop_back
// // #define pf push_front
// // #define qf pop_front

// int n;
// double a[100009],b[100009];
// inline void solve(){
//     cin>>n;
//     double ma=-1,mi=1e9;
//     for(int i=0;i<n;i++) cin>>a[i];
//     for(int i=0;i<n;i++) cin>>b[i];
//     for(int i=0;i<n;i++){
//         ma=max(ma,a[i]+b[i]);
//         mi=min(mi,a[i]-b[i]);
//     }
//     printf("%.6lf\n",(ma+mi)*0.5);
// }

// signed main(){
//     IOS;
//     int tt;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



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
string s;
inline void solve(){
    cin>>s;
    string ans;
    char a='9';
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>a) {
            ans.push_back(min((char)(s[i]+1),'9'));
        }
        else{
            ans.push_back(s[i]);
            a=min(a,s[i]);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans<<endl;
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