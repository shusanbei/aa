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

// LL n,m,a[100009],ans[100009];
// inline void solve(){
//     cin>>n>>m;
//     set<LL>se;
//     for(LL i=1;i<=n;i++){
//         se.insert(i);
//         ans[i]=-1;
//     }
//     for(LL i=1;i<=m;i++){
//         cin>>a[i];
//     }
//     LL te=n;
//     for(LL i=1;i<=m;i++){
//         if(!se.count(a[i])){
//             se.insert(a[i]);
//             se.erase(te);
//             ans[te]=i;
//             te--;
//         }
//         if(te==0){
//             break;
//         }
//     }
//     // cout<<te<<"te";
//     for(LL i=1;i<=n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
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

// #define fi first
// #define se second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,a[110];
// inline void solve(){
//     cin>>n;
//     int ma=-1e9,mi=1e9;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         ma=max(ma,a[i]);
//         mi=min(mi,a[i]);
//     }
//     if(n==1){
//         cout<<0<<endl;
//         return;
//     }
//     if(mi==1 && ma>1){
//         cout<<-1<<endl;
//         return;
//     }
//     vector<pair<int ,int>>vp;
//     while(1){
//         pair<int ,int> mnv={2e9,2e9},mxv={-2e9,-2e9};
//         for(int i=1;i<=n;i++) {
//             mnv=min(mnv,{a[i],i}),mxv=max(mxv,{a[i],i});
//         }
//         if(mxv.fi==mnv.fi) break;
//         vp.pb({mxv.se,mnv.se});
//         a[mxv.se]=(a[mxv.se]+a[mnv.se]-1)/a[mnv.se];
//     }
//     cout<<vp.size()<<endl;
//     for(auto x:vp){
//         cout<<x.first<<" "<<x.second<<endl;
//     }
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

// int n;
// int a[100009];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     vector<int>ve;
//     int mi=a[1],x=1;
//     for(int i=1;i<=n;i++){
//         ve.push_back(a[i]);
//         while(find(ve.begin(),ve.end(),mi)!=ve.end() && mi<ve.size()){
//             ve.erase(find(ve.begin(),ve.end(),mi));
//             mi=a[++x];
//         }
//         cout<<ve.size()<<" ";
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

// int n,a[10009];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         if(a[i]==1) a[i]++;
//     }
//     int te=0;
//     for(int i=1;i<n;i++){
//         while(a[i+1]%a[i]==0 && te<=2*n){
//             a[i+1]++;
//             te++;
//         }
//         if(te>=2*n) break;
//     }
//     for(int i=1;i<=n;i++){
//         cout<<a[i]<<" ";
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

int n;
inline void solve(){
    cin>>n;
    string s,ans[5];
    int x=1;
    for(int i=1;i<=(n-1)*2;i++){
        cin>>s;
        if(s.length()==n-1){
            ans[x++]=s;
        }
    }
    reverse(ans[1].begin(),ans[1].end());
    // cout<<ans[1]<<"1::2"<<ans[2]<<endl;
    if(ans[1]==ans[2]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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