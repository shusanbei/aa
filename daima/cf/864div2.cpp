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

// int n,m;
// int x1,y1,x2,y2;
// inline void solve(){
//     cin>>n>>m;
//     cin>>x1>>y1>>x2>>y2;
//     int ans1=4,ans2=4;
//     if(x1 == 1)ans1--;
//     if(x1 == n)ans1--;
//     if(y1 == 1)ans1--;
//     if(y1 == m)ans1--;

//     if(x2 == 1)ans2--;
//     if(x2 == n)ans2--;
//     if(y2 == 1)ans2--;
//     if(y2 == m)ans2--;
//     cout<<min(ans1,ans2)<<endl;
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

int n,k;
int a[1009][1009];
inline void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != a[n-i-1][n-j-1]) ans++;
        }
    }
    // cout<<"ans"<<ans<<endl;
    ans/=2;
    if(ans <= k && ((k-ans)%2==0 || n%2==1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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