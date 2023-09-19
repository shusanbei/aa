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
//     cout<<n-1<<endl;
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

// int n,k,a[100009];
// inline void solve(){
//     cin>>n>>k;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int te=0;
//     for(int i=1,j=1;i<=n;i++){
//         if(a[i]==j) te++,j++;
//     }
//     int ans=ceil((double)(n-te)/k);
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
#define LL long long
#define endl '\n'

// #define x first
// #define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

int n,k,a[200009];
inline void solve(){
    cin>>n;
    map<int ,int>ma;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ma[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(ma[a[i]]>=2){
            cout<<"NO"<<endl;
            return;
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