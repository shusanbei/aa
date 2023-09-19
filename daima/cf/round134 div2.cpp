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

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// inline void solve(){
//     string s,b;
//     cin>>s>>b;
//     s+=b;
//     int a[30]={0},ans=-1;
//     for(int i=0;i<4;i++){
//         int tem=s[i]-'a';
//         a[tem]++;
//     }
//     for(int i=0;i<26;i++){
//         if(a[i]) ans++;
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

// // #define x first
// // #define y second
// // #define pb push_back
// // #define qb pop_back
// // #define pf push_front
// // #define qf pop_front


// int n,m,sx,sy,d;
// inline void solve(){
//     cin >> n >> m >> sx >> sy >> d;
//     if (n - sx + m - sy <= d)
//         cout << -1 << '\n';
//     else if (sx - 1 <= d && n - sx <= d)
//         cout << -1 << '\n';
//     else if (sy - 1 <= d && m - sy <= d)
//         cout << -1 << '\n';
//     else if (sx - 1 <= d && sy - 1 <= d)
//         cout << -1 << '\n';
//     else if (n - sx <= d && m - sy <= d)
//         cout << -1 << '\n';
//     else cout << n + m - 2 << '\n';
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

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front


int n;
int a[200009],b[200009],dmi[200009],dma[200009];
inline void solve(){
    cin>>n;
    int ma=-1,mi=1e9;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];  
        ma=max(ma,b[i]);
        mi=min(mi,b[i]);
    }
    for(int i=0;i<n;i++){
        dmi[i]=mi-a[i];
        dma[i]=ma-a[i];
    }
    for(int i=0;i<n;i++){
        cout<<dmi[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<dma[i]<<" ";
    }
    cout<<endl;
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