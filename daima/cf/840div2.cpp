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

// int n;
// inline void solve(){
//     cin >> n;
//     int a;
//     cin>>a;
//     int s=a,b=a;
//     int x;
//     for(int i=2;i<=n;i++) {
//         cin >> x;
//         s|=x;
//         b&=x;
//     }
//     cout<<s-b<<endl;
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

// int n,k;
// int h[100009],d[100009];
// inline void solve(){
//     cin>>n>>k;
//     vector<pair<int ,int>> hd(n);
//     for(int i=0;i<n;i++){
//         cin>>hd[i].first;
//     }
//     for(int i=0;i<n;i++){
//         cin>>hd[i].second;
//     }
//     sort(hd.begin(),hd.end(),[](pair<int ,int> a,pair<int ,int> b){
//         return a.second<b.second;
//     });
//     int sum=k;
//     bool flag=1;
//     for(int i=0;i<n;i++){
//         if(hd[i].first>sum){
//             k-=hd[i].second;
//             if(k<=0){
//                 flag=0;
//                 break;
//             }
//             sum+=k;
//             i--;
//         }
//     }
//     if(flag) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
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

// int n,m;
// int a[1000];
// inline void solve(){
//     cin>>n>>m;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>a[n+i];
//     }
//     sort(a,a-1+n+m);
//     LL sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[m+i];
//     }
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

int a[200009];
inline void solve(){
    int n,k;
    cin>>n>>k;
    if(n==k){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    int l=1,r=n,te=1;
    while(te<=n){
        a[te++]=r;
        r--;
        if(te>n)break;
        a[te++]=l;
        l++;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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