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

// int js(int x){
//     int mi=1e9;
//     int ma=0;
//     while(x>0){
//         int te=x%10;
//         x/=10;
//         mi=min(mi,te);
//         ma=max(ma,te);
//     }
//     return ma-mi;
// }

// inline void solve(){
//     int l,r;
//     cin>>l>>r;
//     int ans=l;
//     int ma=0;
//     for(int i=l;i<=r;i++){
//         if(js(i)>ma){
//             ma=js(i);
//             ans=i;
//             if(ma==9)break;
//         }
//     }
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
inline void solve(){
    cin>>n>>m;

    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    if(n==1){
        cout<<0<<endl;
        return;
    }

    int ans = 0;
    for (int j=0;j<m;j++){
        sort(a[j].begin(),a[j].end());
        int s[n],k[n];
        s[0]=0,k[0] = 0;
        for(int i=1;i<n;i++){
            s[i]=a[j][i]-a[j][i-1];
            s[i]+=s[i-1];
            k[i]=k[i-1]+s[i];
            ans+=i*s[i]-k[i-1];
        }
    }
    cout<<ans<<"\n";
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