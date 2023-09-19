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
//     int te;
//     if(s[0]==1) te=1;
//     else te=0;
//     for(int i=1;i<n;i++){
//         if(s[i]=='0'){
//             cout<<'+';
//         }
//         else{
//             if(te%2) cout<<'+';
//             else cout<<'-';
//             te++;   
//         }
//     }
//     cout<<endl;
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

// int n,m,k,a[100009];
// inline void solve(){
//     cin>>n>>m>>k;
//     for(int i=1;i<=m;i++){
//         cin>>a[i];
//     }
//     if(k>m) {
//         cout<<"NO"<<endl;
//         return;
//     }
//     sort(a+1,a+1+m,[](int a,int b){
//         return a>b;
//     });
//     int x=n/k,y=n%k;
//     for (int i=1;i<=m;i++){
//         if(a[i]<=x)break;
//         else if(y!=0 && a[i]<=x+1) y--;
//         else if(a[i]>x){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     cout<<"YES"<<endl;
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

int n,m,k,a[100009];
inline void solve(){
    cin>>n;
    string s;
    cin>>s;
    int te1=0,te0=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='0'){
            te0++;
            te1=0;
        }
        else{
            te0=0;
            te1++;
        }
        cout<<i+2-max(te0,te1)<<" ";
    }
    cout<<endl;
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