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

// int n,a[1000];
// inline void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int te=0,ans=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==1) te++;
//     }
//     ans=(te/2)+(n-te+(te%2));
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

int a1,a2,a3,a4;
inline void solve(){
    cin>>a1>>a2>>a3>>a4;
    if(a1==0){
        cout<<1<<endl;
    }
    else{
        int te=min(a2,a3);
        int ans=a1+te*2;
        a2-=te,a3-=te;
        if(a3) swap(a2,a3);
        cout<<ans+min(a1+1,a2+a4)<<endl;
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