// // #include <bits/stdc++.h>
// // using namespace std;

// // #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// // #define LL long long
// // #define endl '\n'

// // // #define x first
// // // #define y second
// // #define pb push_back
// // #define qb pop_back
// // #define pf push_front
// // #define qf pop_front

// // LL a,b,n,m;
// // inline void solve(){
// //     cin>>a>>b>>n>>m;
// //     if((m+1)*b<=m*a){
// //         cout<<n*b<<endl;
// //     }
// //     else{
// //         LL t=n/(m+1);
// //         LL ans=t*a*m;
// //         n-=t*(m+1);
// //         ans+=min(a,b)*n;
// //         cout<<ans<<'\n';
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
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n,m;
// inline void solve(){
//     cin>>n>>m;
//     string s1,s2;
//     cin>>s1>>s2;
//     int ans=0;
//     for(int i=0;i<n-1;i++){
//         if(s1[i]==s1[i+1]){
//             ans++;
//         }
//     }
//     for(int i=0;i<m-1;i++){
//         if(s2[i]==s2[i+1]){
//             ans++;
//         }
//     }
//     if(ans>=2 || (ans==1 && s1[n-1]==s2[m-1])){
//         cout<<"NO"<<endl;
//     }
//     else{
//         cout<<"YES"<<endl;
//     }
// }

// signed main(){
//     IOS;
//     int tt=1;
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
// inline void solve(){
//     cin>>n>>k;
//     int l[100],r[100],ans=0;
//     for(int i=0;i<n;i++){
//         cin>>l[i]>>r[i];
//         if(k>=l[i] && k<=r[i]){
//             ans++;
//         }
//     }
//     if(!ans){
//         cout<<"NO"<<endl;
//         return;
//     }

//     vector<pair<int ,int>>vp;
//     for(int i=0;i<n;i++){
//         if(k>=l[i] && k<=r[i]){
//             vp.push_back({l[i],r[i]});
//         }
//     }
//     int a=vp[0].first,b=vp[0].second;

//     for(auto x:vp){
//         // cout<<"auto"<<endl;
//         if(a>=x.first && b<=x.second && k>=x.first && k<=x.second){
//             a=x.first;
//             b=x.second;
//         }
//     }
//     int tem=0;
//     for(int i=a;i<=b;i++){
//         if(i!=k){
//             tem=0;
//             for(int j=0;j<(int)vp.size();j++){
//                 if(i>=vp[j].first && i<=vp[j].second){
//                     tem++;
//                 }
//             }
//         }
//         if(tem==ans){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     cout<<"YES"<<endl;
// }


// signed main(){
//     IOS;
//     int tt=1;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }

