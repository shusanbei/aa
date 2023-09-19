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

// int n,a,b;
// inline void solve(){
//     cin>>n>>a>>b;
//     if(n==a && n==b){
//         cout<<"YES\n";
//         return;
//     }
//     if(n==a+1 || n==b+1){
//         cout<<"NO\n";
//         return;
//     }
//     if(n<a+b+2){
//         cout<<"NO\n";
//         return;
//     }
//     cout<<"YES\n";
// }

// signed main(){
//     IOS;
//     LL tt;
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

// int n,a[110];
// inline void solve(){
//     cin>>n;
//     map<int,int>ma;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         ma[a[i]]++;
//     }
//     if(ma.size()>2){
//         cout<<n<<endl;
//         return;
//     }
//     else{
//         cout<<n/2+1<<endl;
//         return;
//     }
// }

// signed main(){
//     IOS;
//     LL tt;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }





#include <bits/stdc++.h>
#include <set>
#include <vector>
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

int n,a[110];
inline void solve(){
    cin>>n;
    string s[110];
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        s[i]=' '+s[i];
    }
    set<int>se[110];
    for(int i=1;i<=n;i++){
        se[i].insert(i);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s[i][j]=='1'){
                // cout<<"i "<<i<<" j "<<j<<endl;
                for(auto x:se[i]){
                    se[j].insert(x);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<se[i].size()<<" ";
        for(auto x:se[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

signed main(){
    IOS;
    LL tt;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}