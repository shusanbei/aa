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
//     string s;
//     cin>>s;
//     int l=0,r=0;
//     for(int i=0;i<n;i++){
//         if(s[i]=='L') l++;
//         else r++;
//     }
//     if(l==0 || r==0){
//         cout<<-1<<endl;
//         return;
//     }
//     for(int i=0;i<n-1;i++){
//         if(s[i]=='L' && s[i+1]=='R'){
//             cout<<i+1<<endl;
//             return;
//         }
//     }
//     cout<<0<<endl;
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
//     if(n==3){
//         cout<<"NO"<<endl;
//         return;
//     }
//     cout<<"YES"<<endl;
//     if(n%2==0){
//         for(int i=1;i<=n/2;i++){
//             cout<<1<<" ";
//             cout<<-1<<" ";
//         }
//         cout<<endl;
//     }
//     else{
//         for(int i=1;i<=n/2;i++){
//             cout<<(n/2-1)<<" ";
//             cout<<(0-n/2)<<" ";
//         }
//         cout<<(n/2-1)<<endl;
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

int n,m;
int a[200009];
LL pre[200009];
inline void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
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