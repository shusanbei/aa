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
//     int n;
//     char k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     int te=0;
//     while(s[te] >= k) te++;
//     for(int i=0;i<te;i++){
//         cout<<s[i];
//     }
//     cout<<k;
//     for(int i=te;i<n;i++){
//         cout<<s[i];
//     }
//     cout<<endl;
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

// int n;
// inline void solve(){
//     cin>>n;
//     int x1,y1,x2,y2;
//     cin>>x1>>y1>>x2>>y2;
//     x1--,y1--,x2--,y2--;
//     int x,y;
//     x=min(min(x1,y1),min(abs(n-x1-1),abs(n-y1-1)));
//     y=min(min(x2,y2),min(abs(n-x2-1),abs(n-y2-1)));
//     cout<<abs(x-y)<<endl;
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

int n,a[200009],ans[200009];
inline void solve(){
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    ans[1]=a[1];
    for(int i=2;i<n;i++){
        if(a[i]>a[i-1]){
            ans[i+1]=a[i];
        }
        else ans[i]=a[i];
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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