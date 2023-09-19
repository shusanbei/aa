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

// LL n,a[109],b[109];
// inline void solve(){
//     cin>>n;
//     LL ma=-1,ma1=-1;
//     for(LL i=0;i<n;i++){
//         cin>>a[i];
//         ma=max(a[i],ma);
//     }
//     for(LL i=0;i<n;i++){
//         cin>>b[i];
//         ma1=max(ma1,a[i]);
//     }
//     if(a[n-1]>b[n-1]) swap(a[n-1],b[n-1]);
//     bool flag=1;
//     for(LL i=0;i<n-1;i++){
//         if(a[i]>b[i]) swap(a[i],b[i]);
//         if(a[i]>a[n-1] || b[i]>b[n-1]){
//             flag=0;
//             break;
//         }
//     }
//     cout<<(flag?"Yes":"No")<<endl;
// }

// signed main(){
//     IOS;
//     LL tt=1;
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

// LL n,m;
// inline void solve(){
//     cin>>n;
//     vector<LL>v[n+1],ans;
//     map<LL, LL> ma;
//     for(LL i=1;i<=n;i++){
//         LL t,a;
//         cin>>t;
//         while(t--){
//             cin>>a;
//             ma[a]++ ;
//             v[i].push_back(a);
//         }
//     }
//     for(LL i=1;i<=n;i++) {
//         for(LL j:v[i]) ma[j]--;
//         for(LL j:v[i]){
//             if(!ma[j]){
//                 ans.push_back(j);
//                 break;
//             }
//         }
//     }
//     if(ans.size()==n) {
//         for(LL i:ans) cout<<i<<" ";
//         cout<<endl;
//     } 
//     else {
//         cout<<-1<<endl;
//     }
// }

// signed main(){
//     IOS;
//     LL tt=1;
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

LL n,a[200009],b[200009];
inline void solve(){
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    LL xgcd=0,xlcm=1;
    LL ans=1;
    for(LL i=0;i<n;i++){
        xgcd=__gcd(xgcd,a[i]*b[i]);
        xlcm=xlcm*b[i]/__gcd(xlcm,b[i]);
        if(xgcd % xlcm != 0){
            ans++;
            xgcd=0,xlcm=1;
        }
        xgcd=__gcd(xgcd,a[i]*b[i]);
        xlcm=xlcm*b[i]/__gcd(xlcm,b[i]);
    }
    cout<<ans<<endl;
}

signed main(){
    IOS;
    LL tt=1;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}