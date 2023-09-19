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

// // #define x first
// // #define y second
// // #define pb push_back
// // #define qb pop_back
// // #define pf push_front
// // #define qf pop_front

// int n,a[100009];
// vector<pair<int ,int>> s;
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int tem=0,i=1;
//     while(a[i]==1 && i<=n){
//         tem++;
//         i++;
//     }
//     i=n;
//     while(a[i]==1 && i>=1){
//         tem++;
//         i--;
//     }
//     if(tem/2==n) cout<<0<<endl;
//     else cout<<n-tem+1<<endl;
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
// #define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
// #define PII pair<int, int>
// #define pdd pair<double,double>
// #define int long long
// #define LL long long
// #define rep(i,a,b) for (int i = a; i <= b; i ++)
// #define per(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// // #define pb push_back
// // #define qb pop_back
// // #define pf push_front
// // #define qf pop_front

// int n,a[100009];
// inline void solve(){
//     cin>>n;
//     int ma=-1,sum=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         sum+=a[i];
//         ma=max(ma,a[i]);
//     }
//     if(sum==0) cout<<0<<endl;
//     else if(ma*2<=sum){
//         cout<<1<<endl;
//     }
//     else{
//         sum-=ma;
//         cout<<ma-sum<<endl;
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




