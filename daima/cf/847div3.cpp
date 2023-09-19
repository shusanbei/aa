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
//     string s;
//     cin>>s;
//     string a="314159265358979323846264338327";
//     for(int i=0;i<=s.size();i++){
//         if(s[i]!=a[i]){
//             cout<<i<<endl;
//             return;
//         }
//     }
//     cout<<30<<endl;
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


// inline void solve(){
//     int n,s,r;
//     cin>>n>>s>>r;
//     int ma=s-r;
//     n--;
//     r-=n;
//     for(int i=0;i<n;i++){
//         if(r+1>=ma){
//             cout<<ma<<" ";
//             r=r-ma+1;
//         }
//         else if(r==0){
//             cout<<1<<" ";
//         }
//         else{
//             cout<<1+r<<" ";
//             r=0;
//         }
//     }
//     cout<<ma<<endl;
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

// int n,a[110][110];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     map<int ,int>ma;
//     for(int i=1;i<=n;i++){
//         ma[a[i][1]]++;
//     }
//     int ans;
//     for(int i=1;i<=n;i++){
//         // cout<<i<<" ::: "<<ma[i]<<"bug"<<endl;
//         if(ma[i]==n-1){
//             ans=i;
//             break;
//         }
//     }
//     for(int i=1;i<=n;i++){
//         if(a[i][1]!=ans){
//             cout<<ans<<" ";
//             for(int j=1;j<n;j++){
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//             break;
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

int n,a[200009];
inline void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    map<int ,int>mp;
    for(int i=1;i<=n;i++){
        mp[a[i]]++;
    }
    int ans=0;
    for(auto [x,y]:mp){
        if(mp[x-1]<y){
            ans+=y-mp[x-1];
        }
        else if(mp[x-1]==0){
            ans+=y;
        }
    }
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