// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n;
// inline void solve(){
//     cin>>n;
//     cout<<(n+n/2*2+n/3*2)<<endl;
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
// #include <vector>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,k,r,c;
// char a[550][550];
// inline void solve(){
//     cin>>n>>k>>r>>c;
    
//     int tem=r+c;
//     vector<int>s;
//     for(int i=tem-k;i>=0;i-=k){
//         s.pb(i);
//     }
//     for(int i=tem;i<=2*n;i+=k){
//         s.pb(i);
//     }
//     a[r][c]='X';
//     std::vector<int>::iterator it;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             it = find(s.begin(), s.end(), (i+j));
//             if(it!=s.end()){
//                 a[i][j]='X';
//             }
//             else{
//                 a[i][j]='.';
//             }
//         }
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<a[i][j];
//         }
//         cout<<endl;
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
#define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
#define PII pair<int, int>
#define pdd pair<double,double>
#define int long long
#define LL long long
#define rep(i,a,b) for (int i = a; i <= b; i ++)
#define per(i,b,a) for (int i = b; i >= a; i --)
#define endl '\n'

#define x first
#define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

int n,a[200009],b[200009];
inline void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    if(a[1]>b[1]) {
        cout<<"NO\n";
        return;
    }
    if(a[1]<=b[1]) {
        if(a[2]<=b[1]){
            a[1]=a[2];
        }
        else{
            
        }
    }
    for(int i=1;i<=n;i++){
        if(i==n){
            if(a[i]>a[1]){
                cout<<"NO\n";
            }
        }
        else{
            if(a[i]<b[i]){
                if(a[i]>b[i+1]){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
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