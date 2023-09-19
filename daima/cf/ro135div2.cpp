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

// int n;
// int a[200009],b[200009];
// inline void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         a[i]=(a[i] - 1) % 9 + 1;
//     }
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//         b[i]=(b[i] - 1) % 9 + 1;
//     }
//     sort(a,a+n);
//     sort(b,b+n);

//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<b[i]<<" ";
//     }
//     cout<<endl;
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

#define x first
#define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

int n,k;
inline void solve(){
    cin>>n>>k;
    if(n%k==0){
        cout<<"YES\n";
        for(int i=0;i<k-1;i++){
            cout<<n/k<<" ";
        }
        cout<<n/k+(n%k)<<endl;
    }
    else{
        if(n/k%2){
            if((n/k+(n%k))^(n/k)){
                cout<<"NO\n";
                return;
            }
            cout<<"YES\n";
            for(int i=0;i<k-1;i++){
                cout<<n/k<<" ";
            }
            cout<<n/k+(n%k)<<endl;
            }
        else{
            cout<<"NO\n";
        }
    }
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