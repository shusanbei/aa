// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,m,x[10],y[10];
// inline void solve(){
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         cin>>x[i]>>y[i];
//     }
//     if(n!=m){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
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


// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// LL n,a[200009],b[200009];
// inline void solve(){
//     cin>>n;
//     LL sum=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         sum+=a[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }
//     sort(b,b+n);

//     for(int i=0;i<n-1;i++){
//         sum+=b[i];
//     }
//     cout<<sum<<endl;
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
#define PII pair<int, int>
#define pdd pair<double,double>
#define int long long
#define LL long long
#define rep(i,a,b) for (int i = a; i <= b; i ++)
#define per(i,b,a) for (int i = b; i >= a; i --)
#define endl '\n'

// #define x first
// #define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front


LL n,a[200009];
bool check(int k) {
    if(k==0) return 1;
    if(a[k-1]!=1) return 0;
    for(int i=k;i<2*k-1;i++){
        if(a[i]>i-k+2){
            return 0;
        }
    }
    return 1;
}
inline void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            flag=0;
        }
    }
    if(flag==1 && a[0]!=1){
        cout<<0<<endl;
        return;
    }
    sort(a,a+n);
    int l=0,r=(n+1)/2;
    while(l<=r){
        int k=(l+r)/2;
        if(check(k)) l=k+1;
        else r=k-1;
    }
    cout<<l-1<<"\n";
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