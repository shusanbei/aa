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

// int n;
// inline void solve(){
//     cin>>n;
//     string s;
//     cin>>s;
//     int te=0;
//     for(int i=n-1;i>=0;i--){
//         if(s[i]=='A') te++;
//         else te--;
//         if(te<0){
//             cout<<"NO\n";
//             return;
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

// int n;
// inline void solve(){
//     cin>>n;
//     if(n%2==0){
//         for(int i=n/2;i>=1;i--){
//             cout<<i<<" "<<n/2+i<<" ";
//         }
//     }   
//     else{
//         for(int i=n/2;i>=1;i--){
//             cout<<i<<" "<<n/2+i<<" ";
//         }
//         cout<<n<<" ";
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

// int n;
// int a[200009],b[200009],c[200009];
// inline void solve(){
//     cin>>n;
//     int te1=0,te2=0;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         if(a[i]==1){
//             te1++;
//         }else{
//             te2++;
//         }
//     }
//     if(n%2){
//         cout<<-1<<endl;
//         return;
//     }else{
//         LL tem=0;
//         for(int i=1;i<=n;i+=2){
//             if(a[i]==a[i+1]){
//                 tem++;
//                 b[tem]=i,c[tem]=i+1;
//             }
//             else{
//                 tem++;
//                 b[tem]=i,c[tem]=i;
//                 tem++;
//                 b[tem]=i+1,c[tem]=i+1;
//             }
//         }
//         cout<<tem<<endl;
//         for(int i=1;i<=tem;i++){
//             cout<<b[i]<<" "<<c[i]<<endl;
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

int n,x;
int a;
inline void solve(){
    cin>>n>>x;
    map<int ,int >mp;
    for(int i=1;i<=n;i++){
        cin>>a;
        mp[a]++;
    }
    for(int i=1;i<x;i++){
        if(mp[i]%(i+1)!=0){
            cout<<"NO"<<endl;
            return;
        }else{
            mp[i+1]+=mp[i]/(i+1);
        }
    }
    cout<<"YES"<<endl;
}

signed main(){
    IOS;
    int tt=1;
    // cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}