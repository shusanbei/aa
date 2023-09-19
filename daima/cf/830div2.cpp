// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,a[100];
// inline void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int te=0;
//     for(int i=0;i<n;i++){
//         te=__gcd(te,a[i]);
//     }
//     if(te==1){
//         cout<<0<<endl;
//     }
//     else{
//         if(__gcd(te,n)==1) cout<<1<<endl;
//         else if(__gcd(te,n-1)==1) cout<<2<<endl;
//         else cout<<3<<endl;
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


// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n;
// inline void solve(){
//     cin>>n;
//     string s;
//     cin>>s;
//     if(n==1){
//         cout<<0<<endl;
//     }
//     else{
//         LL te=0;
//         int flag=0;
//         for(int i=0;i<n-1;i++){
//             if(flag && s[i]!=s[i+1]){
//                 te++;
//             }
//             if(s[i]=='1' && s[i+1]=='0' && !flag){
//                 te++;
//                 flag=1;
//             }
//         }
//         cout<<te<<endl;
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



//C
// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n;
// inline void solve(){
//     cin>>n>>q;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int l,r;
//     while(q--){
//         cin>>l>>r;
//         for(int i=0;i<n;i++){

//         }
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



//D1
#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
#define PII pair<int, int>
#define pdd pair<double,double>
// #define int long long
#define LL long long
#define rep(i,a,b) for (int i = a; i <= b; i ++)
#define per(i,b,a) for (int i = b; i >= a; i --)
#define endl '\n'

// #define x first
// #define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

LL n;
char a;
map<LL ,LL>mp;
set<LL> s;
inline void solve(){
    cin>>a>>n;
    s.insert(0);
    if(a=='+'){
        s.insert(n);
    }
    if(a=='-'){
        s.erase(n);
    }
    if(a=='?'){
		while(s.count(mp[n]+n)) mp[n]+=n;
		cout<<mp[n]+n<<endl;
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