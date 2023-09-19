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

// int a[110],b[110],n,k;
// inline void solve(){
//     cin>>n>>k;
//     for(int i=0;i<n;i++) {
// 		cin>>a[i];
// 		b[i]=0;
// 	}
// 	for(int i=0;i<n;i++) {
// 		b[i%k]=max(b[i%k],a[i]);
// 	}
// 	int sum = 0;
// 	for(int i=0;i<k;i++) sum+=b[i];
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

// int n,x,y;
// inline void solve(){
//     cin>>n>>x>>y;
//     if((x!=0 && y!=0) || (x==0 && y==0)) cout<<"-1\n";
//     else {
//         int tem=max(x,y);
//         if(n==2 && tem==1) {
//             cout<<"1\n";
//             return;
//         }
//         if((n-1)%tem) cout<<"-1\n";
//         else{
//             int x=2;
//             for(int i=1;i<=n-1;i++){
//                 if(x>n) break;
//                 for(int j=1;j<=tem;j++){
//                     cout<<x<<" ";
//                 }
//                 x+=tem;
//             }
//             cout<<endl;
//         }
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
// vector<pair<int ,int>>s;
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     if(n==1) {
//         cout<<0<<endl;
//         return;
//     }
//     if((a[1]+a[n])%2==1){
//         a[n]=a[1];
//     }else{
//         a[1]=a[n];
//     }
//     s.push_back({1,n});
//     for(int i=2;i<n;i++){
//         if((a[1]+a[i])%2==0){
//             s.push_back({i,n});
//         }else{
//             s.push_back({1,i});
//         }
//     }
//     cout<<s.size()<<endl;
//     for(auto [x,y] : s){
//         cout<<x<<" "<<y<<endl;
//     }
//     s.clear();
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

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

int n,x,y;
string s,b;
inline void solve(){
    int a[3010]={0},tem=0;
    cin>>n>>x>>y;
    cin>>s>>b;
    for(int i=0;i<n;i++){
        if(s[i]!=b[i]){
            a[++tem]=i;
        }
    }
    if((tem)%2) {
        cout<<-1<<endl;
        return;
    }
    if(tem==2 && a[1]==a[2]-1) {
        cout<<min(2*y,x)<<endl;
        return;
    }    
    cout<<y*tem/2<<endl;
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