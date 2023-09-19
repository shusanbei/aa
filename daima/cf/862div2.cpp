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

// LL n,a[1100];
// inline void solve(){
//     cin>>n;
//     LL ans=0;
//     for(LL i=0;i<n;i++){
//         cin>>a[i];
//         ans^=a[i];
//     }
//     if(n%2==0 && ans!=0) cout<<-1<<endl;
//     else cout<<ans<<endl;
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

// LL n,a[1100];
// inline void solve(){
//     cin>>n;
//     string s;
//     cin>>s;
//     LL te=-1;
//     char mi=s[0];
//     for(LL i=1;i<n;i++){
//         if(s[i] <= mi){
//             te=i;
//             mi=s[i];
//         }
//     }
//     if(te!=-1){
//         cout<<s[te]+s.substr(0,te)+s.substr(te+1)<<endl;
//     }
//     else{
//         cout<<s<<endl;
//     }
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

LL n,m;
LL a[100009],b[100009],c[100009],k[100009];
inline void solve(){
    cin>>n>>m;
    for(LL i=1;i<=n;i++){
        cin>>k[i];
    }
    for(LL i=1;i<=m;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    sort(k+1,k+n+1);
    for(LL i=1;i<=m;i++){
        LL l=1,r=n;
        while (l<r){
            LL mid=(l+r+1)/2;
            if(k[mid]>=b[i]) r=mid-1;
            else l=mid;
        }
        if((b[i]-k[l])*(b[i]-k[l])-4*a[i]*c[i]<0){
            cout<<"YES"<<endl<<k[l]<<endl;
        }
        else if(l!=n && (b[i]-k[l+1])*(b[i]-k[l+1])-4*a[i]*c[i]<0){
            cout<<"YES"<<endl<<k[l+1]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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