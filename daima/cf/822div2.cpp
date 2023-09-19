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

// int n,a[333];
// inline void solve(){
//     cin>>n;
//     int ans=1e9;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     sort(a+1,a+n+1);
//     for(int i=3;i<=n;i++){
//         ans=min(a[i-1]-a[i-2]+a[i]-a[i-1],ans);
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

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n;
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i<=2 || j==1 || j==i) cout<<1<<" ";
//             else cout<<0<<" ";
//         }
//         cout<<endl;
//     }
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


//c
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

// inline void solve(){
//     int n,ans=0;
//     cin>>n;
//     string s;
//     cin>>s;
//     for (int i = 1;i <= n;i++) {
//         for (int j = i;j <= n;j += i) {
//             if (s[j - 1] == '1') break;
//             if (s[j - 1] == '0') {
//                 s[j - 1] = '2';
//                 ans += i;
//             }
//         }
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

inline void solve(){
    int n,k,a[200009]={0};
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=k-1,r=k+1,dp=a[k];
    while(1){
        if(r<0 || l>n) {
            cout<<"YES\n";
            return;
        }
        if(dp<0) {
            cout<<"NO\n";
            return;
        }
        if(a[l]<a[r]){
            dp+=a[r];
            r++;
        }else{
            dp+=a[l];
            l--;
        }
    }

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