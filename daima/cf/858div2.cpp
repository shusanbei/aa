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
//     int x1,y1,x2,y2;
//     cin>>x1>>y1>>x2>>y2;
//     if(y1>y2 || (x2>x1 && y2>=y1 && x2-x1>y2-y1)){
//         cout<<-1<<endl;
//         return;
//     }
//     int ans=y2-y1;
//     x1+=ans,y1+=ans;
//     ans+=(x1-x2);
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

// int n,a[200009];
// inline void solve(){
//     cin>>n;
//     int t1=0,t0=0;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         if(a[i]==0) t0++;
//         if(a[i]==1) t1++;
//     }
//     if(t0 <= (n+1)/2) cout<<0<<endl;
//     else if(t0 == n || (t0+t1)!=n){
//         cout<<1<<endl;
//     }
//     else cout<<2<<endl;
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

int n,a[300009];
inline void solve(){
    cin>>n;
    int cnt0=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) cnt0++;
    }
    if(cnt0==n){
        cout<<"NO"<<endl;
    }
    else{
        
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