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

// int te[]={1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800,900,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000,20000,30000,40000,50000,60000,70000,80000,90000,100000,200000,300000,400000,500000,600000,700000,800000,900000};
// int n,a[1000009];
// inline void solve(){
//     cin>>n;
//     cout<<a[n]<<endl;
// }

// signed main(){
//     IOS;
//     int tt;
//     cin >> tt;
    
//     set<int>se;
//     for(int i=0;i<54;i++){
//         se.insert(te[i]);
//     }
//     for(int i=1;i<=999999;i++){
//         if(se.count(i)){
//             a[i]=a[i-1]+1;
//         }
//         else a[i]=a[i-1];
//     }

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

int n;
inline void solve(){
    string s;
    cin>>n>>s;
    map<string, int>ma;
    string str,te="";
    for(int i=0;i<n-1;i++){
        str+=s[i];
        str+=s[i+1];
        if(ma[str]!=0){
            cout<<"YES"<<endl;
            return;
        }
        ma[te]++;
        te=str;
        str.clear();
    }
    cout<<"NO"<<endl;
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