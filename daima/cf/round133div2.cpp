// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int tt;
// //     cin>>tt;
// //     while(tt--){
// //         int n;
// //         cin>>n;
// //         int ans=n%3;
// //         if(n<3){
// //             if(ans==1) cout<<2<<endl;
// //             else cout<<1<<endl;
// //         }
// //         else{
// //             int tem=n/3;
// //             if(ans==0) cout<<tem<<endl;
// //             else cout<<tem+1<<endl;
// //         }
// //     }
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// // #define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
// // #define PII pair<int, int>
// // #define pdd pair<double,double>
// // #define int long long
// // #define LL long long
// // #define rep(i,a,b) for (int i = a; i <= b; i ++)
// // #define per(i,b,a) for (int i = b; i >= a; i --)
// // #define endl '\n'

// // // #define x first
// // // #define y second
// // // #define pb push_back
// // // #define qb pop_back
// // // #define pf push_front
// // // #define qf pop_front


// // int n;
// // int a[110];
// // inline void solve(){
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //         a[i]=i;
// //     }
// //     int tem=n,cnt=1;
// //     cout<<n<<endl;
// //     while (tem>0)
// //     {
// //         for(int i=1;i<=n;i++){
// //             cout<<a[i]<<" ";
// //         }
// //         cout<<endl;
// //         swap(a[cnt],a[cnt+1]);
// //         cnt++;
// //         tem--;
// //     }
    
// // }
// // signed main(){
// //     IOS;
// //     int tt;
// //     cin >> tt;
// //     while(tt --){
// //         solve();
// //     }

// //     return 0;
// // }


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


// int n,m;
// inline void solve(){
//     cin>>n>>m;
//     if(n==1) cout<<m-1<<endl;
//     else if(m==1) cout<<n-1<<endl;
//     else cout<<n*(m-1)<<endl;
// }
// signed main(){
//     IOS;
//     solve();

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n;
//         cin>>n;
//         int ans=n%3;
//         if(n<3){
//             if(ans==1) cout<<2<<endl;
//             else cout<<1<<endl;
//         }
//         else{
//             int tem=n/3;
//             if(ans==0) cout<<tem<<endl;
//             else cout<<tem+1<<endl;
//         }
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


// int n;
// int a[110];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         a[i]=i;
//     }
//     int tem=n,cnt=1;
//     cout<<n<<endl;
//     while (tem>0)
//     {
//         for(int i=1;i<=n;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
//         swap(a[cnt],a[cnt+1]);
//         cnt++;
//         tem--;
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
// //#define int long long
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


// int n,m;
// int a[100009];
// inline void solve(){
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     sort(a+1,a+n+1);
//     int ans=0,j=1;
//     for(int i=n;i>=j;i--){
//         if(m<a[i]) ans++;
//         else{
//             int tem=m/a[i];
//             if(i-j+1>=tem+1 && (a[i]*(tem+1))>m){
// 				j+=tem;
// 				ans++;
// 			}
//         }
//     }
//     cout<<ans<<endl;
// }
// signed main(){
//     IOS;
//     solve();

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
#define cerr(x) std::cerr << (#x) << " is " << (x) << '\n'
#define PII pair<int, int>
#define pdd pair<double,double>
//#define int long long
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


inline void solve(){
    int n=10;
    set<int>st;
    for(int i=2;i<=n;i++)
        for(int j=1;j<i;j++)
        {
            st.insert(i*i-j*j);
        }
    int cnt=0;
    for(auto t:st)
    {
        ++cnt;
        cout<<cnt<<" "<<t<<" "<<t-cnt%3<<endl;
    }
}
signed main(){
    IOS;
    solve();

    return 0;
}