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

// LL n,a[110];
// inline void solve(){
//     cin>>n;
//     LL flag=0;
//     for(LL i=1;i<=n;i++){
//         cin>>a[i];
//         if(a[i]<=i){
//             flag=1;
//         }
//     }
//     if(flag)cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
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

// LL n;
// inline void solve(){
//     cin>>n;
//     if(n%2==0){
//         cout<<-1<<endl;
//         return;
//     }
//     else{
//         vector<LL> ans;
//         LL te=n;
//         while(te!=1){
//             if(((te+1)/2)%2) {
//                 ans.push_back(1);
//                 te=(te+1)/2;
//             }
//             else {
//                 te=(te-1)/2;
//                 ans.push_back(2);
//             }
//         }
//         if(ans.size()>40) cout<<-1<<endl;
//         else{
//             cout<<ans.size()<<endl;
//             for(LL i=ans.size()-1;i>=0;i--){
//                 cout<<ans[i]<<" ";
//             }
//             cout<<endl;
//         }
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

// LL n,c,d;
// LL a[100009];
// inline void solve(){
//     cin>>n>>c>>d;
//     for(LL i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     sort(a+1,a+1+n);
//     LL ans=c*n+d,te=0,sum=0,re;
//     for(LL i=1;i<=n;i++){
//         if(a[i]==te)
//             sum+=c;
//         else{
//             sum+=(a[i]-te-1)*d;
//             re=sum+(n-i)*c;
//             ans=min(ans,re);
//         }
//         te=a[i];
//     }
//     cout<<ans<<endl;
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

int q,a,b,n;
inline void solve(){
    cin>>q;
    int op,qh,xh;
    while (q--){
        cin>>op;
        if(op==1){
            cin>>a>>b>>n;
            xh=(a-b)*(n-1);
        }
        else{
            
        }
    }
    
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