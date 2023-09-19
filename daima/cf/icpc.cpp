// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define LL long long
// #define endl endl

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
//     if(n%3==2){
//         cout<<"NO"<<endl;
//         return;
//     }
//     for(int i=1;i<n;i+=3){
//         if(s[i]!=s[i+1]){
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



// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define LL long long
// #define endl endl

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,a,b;
// inline void solve(){
//     cin>>n>>a>>b;
//     if(a>b){
//         cout<<1<<endl;
//     }
//     else{cout<<(n+a-1)/a<<endl;
//         cout<<(int)ceill((double)n/(double)a)<<endl;
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
// #define LL long long
// #define endl endl

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n;
// inline void solve(){
//     cin>>n;
//     // pair<int,int>pa;
//     // int a=1,b=n-1,l1=0,l2=1e9;
//     // pa={a,b};
//     // l2=(a*b)/__gcd(a,b);

//     int ans=1;
//     for(int i=2;i*i<=n;i++){
//         // cout<<"???"<<i<<endl;
//         // a=n/i;
//         // b=n-a;
//         // l1=(a*b)/__gcd(a,b);
//         // if(l1<=l2){
//         //     l2=l1;
//         //     pa={a,b};
//         // }

//         if(n%i==0){
//             ans=max(ans,n/i);
//         }
//     }
//     // cout<<pa.first<<" "<<pa.second<<endl;
//     cout<<ans<<" "<<n-ans<<endl;
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
// #define endl endl

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,a,b;
// inline void solve(){
//     cin>>n>>a>>b;
//     if(n==1){
//         if(a==b) {
//             cout<<1<<endl<<a<<":"<<b<<endl;
//             return;
//         } 
//         else{
//             cout<<0<<endl<<a<<":"<<b<<endl;
//             return;
//         }
//     }
//     if(a+b<=n){
//         cout<<n-a-b<<endl;
//         for(int i=0;i<a;i++) {
//             cout<<1<<":"<<0<<endl;
//         }
//         for(int i=0;i<b;i++) {
//             cout<<0<<":"<<1<<endl;
//         }
//         for(int i=0;i<n-a-b;i++) {
//             cout<<0<<":"<<0<<endl;
//         }
//     } 
//     else{
//         cout<<0<<endl;
//         int tmpa = a, tmpb = b;
//         int te=0;
//         for(int i=0;i<min(tmpa,n-2);i++) {
//             cout<<1<<":"<<0<<endl;
//             te++;
//             a--;
//         }
//         n-=te;
//         for(int i=0;i<min(tmpb,n-2);i++) {
//             cout<<0<<":"<<1<<endl;
//             b--;
//         }
//         if(a==0){
//             cout<<0<<":"<<b-1<<endl;
//             cout<<0<<":"<<1<<endl;
//         } 
//         else if(b==0){
//             cout<<a-1<<":"<<0<<endl;   
//             cout<<1<<":"<<0<<endl;   
//         } 
//         else {
//             cout<<a<<":"<<0<<endl;   
//             cout<<0<<":"<<b<<endl;   
//         }
//     }
// }

// signed main(){
//     IOS;
//     int tt=1;
//     // cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
#define LL long long
#define endl endl

// #define x first
// #define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

int n;
int a[200009],b[200009];
int mi[200009],ma[200009];
inline void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    int te;
    for(int i=n,j=n;i>=1;i--){
        te=lower_bound(b+1,b+n+1,a[i])-b;
        mi[i]=b[te]-a[i];
        
        ma[i]=b[j]-a[i];
        if(i>0 && a[i]>b[i-1])
            j=i-1;
    }
    for(int i=1;i<=n;i++){
        cout<<mi[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<ma[i]<<" ";
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