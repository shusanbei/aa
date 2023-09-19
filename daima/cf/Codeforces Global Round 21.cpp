#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,z,a[2222],ans=0;
//         cin>>n>>z;
//         for(int i=0;i<n;i++) {
//             cin>>a[i];
//             ans=max(ans,z|a[i]);
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,a[100009],tem=0;
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//         }
//         for(int i=1;i<=n;i++){
//             if(a[i]!=0 && a[i-1]==0){
//                 tem++;
//             }
//         }
//         if(tem>2)tem=2;
//         cout<<tem<<endl;
//     }
//     return 0;
// }


//https://zhuanlan.zhihu.com/p/533850149
#define LL long long
int main(){
    int t;
    cin>>t;
    while(t--){
        LL n,m,k;
        cin>>n>>m;
        vector<pair<LL, LL> > a, b;
        for(int i = 1; i <= n; i++){
            LL x;
            cin >> x;
            LL cnt = 1;
            while(x % m == 0) cnt *= m, x /= m;
            if (a.empty() || a.back().first != x) a.push_back({x, cnt});
            else a.back().second += cnt;
        } 
        cin >> k;
        for(int i = 1; i <= k; i++){
            LL x;
            cin >> x;
            LL cnt = 1;
            while(x % m == 0) cnt *= m, x /= m;
            if (b.empty() || b.back().first != x) b.push_back({x, cnt});
            else b.back().second += cnt;
        }
        cout << (a == b ? "Yes" : "No") << '\n';
    }
    return 0;
}