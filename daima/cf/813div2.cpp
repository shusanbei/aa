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

// int n,k,a[110];
// inline void solve(){
//     cin>>n>>k;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int ans=0;
//     for(int i=1;i<=k;i++){
//         if(a[i]>k) ans++;
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
// #define LL long long
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
//     if (n%2==0){
//         for(int i=1;i<=n;i+=2){
//             cout<<i+1<<" "<<i<<" ";
//         }
//     }
//     else{
//         cout<<1<<" ";
//         for(int i=2;i<=n;i+=2){
//             cout<<i+1<<" "<<i<<" ";
//         }
//     }
//     cout<<endl;
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
#define LL long long
#define endl '\n'

// #define x first
// #define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

int n;
int a[100009], m[100009];
bool s[100009];
inline void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        m[i]=0;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]]=i;
    }
    s[n]=1;
    for(int i=n-1;i>0;i--){
        if(a[i]<=a[i+1] && s[i+1]){
            s[i]=1;
        }
        else{
            s[i]=0;
        }
    }
    int re=0;
    set<int>se;
    int te=0;
    for(int i=1;i<=n;i++){
        if(se.count(a[i])) continue;
        if(te<i && s[i]) break;
        se.insert(a[i]);
        re++;
        te=max(te,m[a[i]]);
    }
    cout<<re<<endl;
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