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

// LL n,k;
// inline void solve(){
//     int a,b;
//     cin>>a>>b;
//     int ma=max(a,b),mi=min(a,b);

//     if(a==1 || b==1){
//         cout<<1<<endl;
//         cout<<a<<" "<<b<<endl;
//         return;
//     }
//     cout<<2<<endl;
//     cout<<1<<" "<<b-1<<endl;
//     cout<<a<<" "<<b<<endl;
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

LL n,k;
inline void solve(){
    cin>>n;
    int te=1,re=2*n;
    int ans[100009][2];
    ans[1][0]=re;
    ans[n][1]=re-1;
    re-=2;
    for(int i=2;i<=n;i++){
        if(i%2){
            ans[i-1][1] =  re--;
            ans[i][0] = re--;
        }
        else {
            ans[i][0] = te++;
            ans[i-1][1] = te++;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=1;j<=n;j++){
            cout<<ans[j][i]<<" ";
        }
        cout<<endl;
    }
}

signed main(){
    IOS;
    LL tt=1;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}