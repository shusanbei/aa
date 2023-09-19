// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<LL, LL>
// #define pdd pair<double,double>
// #define LL long long
// #define LL long long
// #define rep(i,a,b) for (LL i = a; i <= b; i ++)
// #define per(i,b,a) for (LL i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// LL a[10];
// inline void solve(){
//     for(LL i=0;i<3;i++){
//         cin>>a[i];
//     }    
//     sort(a,a+3);
//     cout<<a[1]<<endl;
// }

// signed main(){
//     IOS;
//     LL tt;
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

// LL n,a[200009];
// inline void solve(){
//     cin>>n;
//     LL mi=1e9,miid;
//     for(LL i=0;i<n;i++){
//         cin>>a[i];
//         if(mi>a[i]) {
//             mi=a[i];
//             miid=i;   
//         }
//     }
//     // cout<<"miid:"<<miid<<endl;
//     if(n==1){
//         cout<<"YES\n";
//         return;
//     }
//     for(LL i=0;i<miid;i++){
//         if(a[i]<a[i+1]){
//             cout<<"NO\n";
//             return;
//         }
//     }
//     for(LL i=miid;i<n-1;i++){
//         if(a[i]>a[i+1]){
//             cout<<"NO\n";
//             return;
//         }
//     }
//     cout<<"YES\n";
// }

// signed main(){
//     IOS;
//     LL tt;
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

// LL n,a[200009],b[200009];
// map<LL ,LL>ma;
// inline void solve(){
//     LL n;
//     cin>>n;
//     ma.clear();
//     for(LL i=1;i<=n;i++){
//         cin>>a[i];
//         b[i]=a[i];
//     }
//     LL res3=0;
//     LL cnt=0;
//     for(LL i=n;i>=1;i--){
//         if(a[i]==0)cnt++;
//         else {
//             res3+=cnt;
//         }
//     }
//     for(LL i=n;i>=1;i--){
//         if(a[i]==1){
//             a[i]=0;break;
//         }
//     }
//     LL res1=0;
//     cnt=0;
//     for(LL i=n;i>=1;i--){
//         if(a[i]==0)cnt++;
//         else {
//             res1+=cnt;
//         }
//     }
//     LL res2=0;
//     for(LL i=1;i<=n;i++){
//         if(b[i]==0){
//             b[i]=1;break;
//         }
//     }
//     cnt=0;
//     for(LL i=n;i>=1;i--){
//         if(b[i]==0)cnt++;
//         else {
//             res2+=cnt;
//         }
//     }
//     cout<<max({res1,res2,res3})<<'\n';
// }

// signed main(){
//     IOS;
//     LL tt;
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

LL n,c,d;
LL a[200009];
inline void solve(){
    cin>>n>>c>>d;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,[](int a,int b){
        return a>b;
    });
    
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