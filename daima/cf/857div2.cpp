// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,a[100009];
// inline void solve(){
//     cin>>n;
//     int ans=0;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     for(int i=1;i<=n;i++){
//         if(a[i]>0) ans++;
//     }
//     int te=ans;
//     for(int i=1;i<=n;i++){
//         if(i<ans) cout<<i<<" ";
//         else cout<<(te--)<<" ";
//     }
//     cout<<endl;
//     ans=min(ans,n-ans);
//     for(int i=1;i<=ans;i++){
//         cout<<1<<" "<<0<<" ";
//     }
//     for(int i=1;i<=n-2*ans;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
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




// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,a[100009];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int ans=0,te=0,sum1=0,sum2=0;
//     for(int i=1;i<=n;i++){
//         ans=max(ans,te);
//         if(a[i]==1) sum1++;
//         else {
//             if(sum1==0) continue;
//             if(sum1%2) {
//                 sum2+=sum1/2;sum1=1;
//             }
//             else {
//                 sum2+=(sum1-2)/2;sum1=2;
//             }
//         }
//         ans=max(ans,sum1+sum2);
//     }
//     cout<<ans<<endl;
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



#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
#define LL long long
#define endl '\n'

// #define x first
// #define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

int n,a[250][250],m;
const LL mod = 100000000000000013;
inline void solve(){
    cin>>n>>m;
    cout<<n*m<<endl;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

signed main(){
    IOS;
    int tt=1;
    for(int i=1;i<=200;i++) a[1][i]=rand()%mod;
    for(int j=1;j<=200;j++) a[j][1]=rand()%mod;
    LL res=(1ll<<62)-5;
    for(int i=1;i<=200;i++){
        for(int j=1;j<=200;j++){
            a[i][j]=(res^a[i-1][j]^a[i][j-1]^a[i-1][j-1]);
        }
    }
    cin >> tt;
    while(tt --){
        solve();
    }
    return 0;
}