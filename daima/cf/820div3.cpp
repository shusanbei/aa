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

// int a,b,c;
// inline void solve(){
//     cin>>a>>b>>c;
//     int tem=a-1,tem1=abs(b-c)+abs(c-1);
//     if(tem==tem1) {
//         cout<<3<<endl;
//     }
//     else if(tem<tem1) {
//         cout<<1<<endl;
//     }
//     else{
//         cout<<2<<endl;
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



// //b
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

// int n;
// inline void solve(){
//     cin>>n;
//     string s,ans;
//     cin>>s;
//     for(int i=s.size();i>=0;i--){
//         if(s[i]=='0'){
//             int tem=(s[i-2]-'0')*10+s[i-1]-'0';
//             char b=tem+'a'-1;
//             ans.pb(b);
//             i-=2;
//         }
//         else{
//             int tem=s[i]-'0';
//             char b=tem+'a'-1;
//             ans.pb(b);
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     ans.pop_back();
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


// //c
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

// string s;
// inline void solve(){
//     cin>>s;
//     int n=s.size();
//     int ans,tem=0,a[100009],x=0;
//     s=" "+s;
//     ans=abs(s[n]-s[1]);
//     if(s[1]<s[n]){
//         for(int i=1;i<=n;i++){
//             if(s[i]<=s[n]&&s[i]>=s[1]){
//                 tem++;
//                 a[++x]=i;
//             }
//         }
//         cout<<ans<<" "<<tem<<endl;
//         for(int i=1;i<=x;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
//     }
//     else{
//         for(int i=1;i<=n;i++){
//             if(s[i]>=s[n]&&s[i]<=s[1]){
//                 tem++;
//                 a[++x]=i;
//             }
//         }
//         cout<<ans<<" "<<tem<<endl;
//         for(int i=1;i<=x;i++){
//             cout<<a[i]<<" ";
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



//d
// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define int long long
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// // #define pb push_back
// // #define qb pop_back
// // #define pf push_front
// // #define qf pop_front

// int n,a[100009],b[100009];
// inline void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;u)
    
// }
// signed main(){
//     IOS;
//     int tt=1;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }

// //E
// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define int long long
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// // #define pb push_back
// // #define qb pop_back
// // #define pf push_front
// // #define qf pop_front


// signed main(){
//     IOS;
//     LL ans = 0;
//     LL flag = 2, res1 = -1, res2 = -1;
 
//     while (true)
//     {
//         printf("? %lld %lld\n", 1, flag);
//         fflush(stdout);
//         scanf("%lld",&res1);
//         if (res1 == -1) {
//             ans = flag - 1;
//             break;
//         }
//         if (!res1)exit(0);
//         printf("? %lld %lld\n", flag, 1);
//         fflush(stdout);
//         if (!res2)exit(0);
//         scanf("%lld",&res2);
//         if (res1 != res2) {
//             ans = res1 + res2;
//             break;
//         }
//         else flag++;
        
//     }
//     printf("! %lld", ans);
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

#define x first
#define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

int n,r,b;
inline void solve(){
    cin>>n>>r>>b;
    string s;
    int tem=r/(b+1),te=r%(b+1);
    for(int i=0;i<b;i++){
        for(int j=0;j<tem;j++) cout<<"R";
        if(i<te) cout<<"R";
        cout<<"B";
    }
    for(int i=0;i<tem;i++) cout<<"R";
    cout<<endl;
}

signed main(){
    IOS;
    int tt=1;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}