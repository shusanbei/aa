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

// int w,d,h,a,b,f,g;
// inline void solve(){
//     cin>>w>>d>>h>>a>>b>>f>>g;
//     cout<<min(min(a+f+h+abs(b-g),w-a+w-f+h+abs(b-g)),min(b+g+h+abs(a-f),d-b+d-g+h+abs(a-f)))<<endl;
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
        a[i]++;
    }
    sort(a+1,a+n+1);
    a[n+1]=1e9+10;
    int ans=0;
    for(int i=0;i<=n;i++){
        if(a[i]<=i && i+1<a[i+1]){
            ans++;
        }
        // cout<<ans<<endl;
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