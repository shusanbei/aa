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
// inline void solve(){
//     cin>>n>>m;
//     string a,b;
//     cin>>a>>b;
//     int te1=0,te0=0,t1=0,t0=0;
//     for(int i=0;i<n;i++){
//         if(a[i]=='1') te1++;
//         else te0++;
//     }
//     for(int i=0;i<m;i++){
//         if(b[i]=='1') t1++;
//         else t0++;
//     }
//     if(n<m || te1<t1 || te0<t0) {
//         cout<<"NO"<<endl;
//         return;
//     }
    
//     int flag=1;
//     for(int i=m,j=n;i&&j;i--,j--){
//         if(a[j] == b[i]) continue;
//         else{
//             flag=0;
//             if(i!=0) {
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }
//     }
//     if(flag) {
//         cout<<"YES"<<endl;
//         return;
//     }
//     for(int i=1;i<=n-m+1;i++){
//         if(a[i]==b[0]) {
//             cout<<"YES"<<endl;
//             return;
//         }
//     }
//     cout<<"NO"<<endl;
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

// int n,x;
// int a[200009];
// inline void solve(){
//     cin>>n>>x;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int l=a[1]-x,r=a[1]+x,ans=0;
//     int tel=l,ter=r;
//     for(int i=2;i<=n;i++){
//         tel=a[i]-x,ter=a[i]+x;
//         if(tel>r || ter<l){
//             ans++;
//             l=tel;
//             r=ter;
//         }
//         else{
//             l=max(l,tel);
//             r=min(r,ter);
//         }        
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
int a[100009];
inline void solve(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+m);
    vector<int>b;
    if(a[1]-a[m]-1+n) b.push_back(a[1]+n-a[m]-1);
    for(int i=1;i<m;i++){
        if(a[i+1]-a[i]-1) b.push_back(a[i+1]-a[i]-1);
    }
    sort(b.begin(),b.end(),greater<int>());
    int te=0,ans=m;
    for(int i=0;i<b.size();i++){
        if(te*2>=b[i]){
            for(int j=i;j<b.size();j++){
                ans+=b[i];
            }
            break;
        }
        if(b[i]-2*te>=2){
            ans+=2*te+1;
            te+=2;
        }
        else{
            ans+=2*te;
            te++;
        }
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