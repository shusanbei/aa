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


// inline void solve(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     string ans;
//     for(int i=1;i<n-1;i++){
//         ans.push_back(s[i - 1]);
//         if(s[i]=='a'){
//             cout<<ans<<" a "<<s.substr(i + 1 , n - i - 1)<<endl;
//             return;
//         }
//     }
//     cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;
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

// int n,k,c;
// inline void solve(){
//     cin>>n;
//     map<int ,int>ma;
//     vector<vector<int>> ve(n+1);
//     for(int i=1;i<=n;i++){
//         cin>>k;
//         for(int j=1;j<=k;j++){
//             cin>>c;
//             ma[c]++;
//             ve[i].pb(c);
//         }
//     }
//     for(int i=1;i<=n;i++){
//         int j=0;
//         for(j=0;j<ve[i].size();j++){
//             if(ma[ve[i][j]]<=1){
//                 break;
//             }
//         }
//         if(j==ve[i].size()){
// 			cout<<"YES"<<endl;
// 			return;
// 		}
//     }
//     cout<<"NO"<<endl;
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

int n,x;
inline void solve(){
    cin>>n>>x;
    
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