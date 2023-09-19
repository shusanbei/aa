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

// int n,a[100];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     string s;
//     cin>>s;
//     s=" "+s;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(a[i]==a[j]){
//                 if(s[i]!=s[j]){
//                     cout<<"NO\n";
//                     return;
//                 }
//             }
//         }
//     }
//     cout<<"YES\n";
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

// LL n,q,a[100009];
// inline void solve(){
//     cin>>n>>q;
//     LL te=0,ji=0,ou=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         te+=a[i];
//         if(a[i]%2) ji++;
//         else ou++;
//     }
//     int a,b;
//     while (q--){
//         cin>>a>>b;
//         if(a==0){
//             te+=ou*b;
//             if(b%2){
//                 ji+=ou;
//                 ou=0;
//             }
//         }
//         else{
//             te+=ji*b;
//             if(b%2){
//                 ou+=ji;
//                 ji=0;
//             }
//         }
//         cout<<te<<endl;
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

// LL n,a[100009];
// char c;
// inline void solve(){
//     cin>>n>>c;
//     string s;
//     cin>>s;
//     s=s+s;
//     int l=0,ans=0;
//     for(int i=(2*n)-1;i>=0;i--){
//         if(s[i]=='g') l=i;
//         if(s[i]==c) ans=max(ans,l-i);
//     }
//     cout<<ans<<endl;
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

// LL n,q,a[200009],te[200009];
// int shusanbei(int x){
//     int re=0;
//     while(x%2==0){
//         re++;
//         x/=2;
//     }
//     return re;
// }
// inline void solve(){
//     cin>>n;
//     int tem=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         tem+=shusanbei(a[i]);
//     }
//     if(tem>=n){
//         cout<<0<<endl;
//         return;
//     }
//     else{
//         vector<int>v;
//         for(int i=1;i<=n;i++){
//             v.push_back(te[i]);
//         }
//         sort(v.begin(),v.end(),greater<int>());
//         for(int i=0;i<v.size();i++){
//             tem+=v[i];
//             if(tem>=n){
//                 cout<<i+1<<endl;
//                 return;
//             }
//         }
//         cout<<-1<<endl;
//     }
// }

// signed main(){
//     IOS;
//     int tt;
//     cin>>tt;
//     for(int i=1;i<=200000;i++){
//         te[i]=shusanbei(i);
//     }
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

LL n,q,a[200009],te[200009];
inline void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int te=a*b,gc=__gcd(a,b);
    if(gc>a){
        for(int i=b+1;i<=d;i++){
            
        }
    }else{

    }
    cout<<"-1 -1"<<endl;
}

signed main(){
    IOS;
    int tt;
    cin>>tt;
    while(tt --){
        solve();
    }

    return 0;
}
