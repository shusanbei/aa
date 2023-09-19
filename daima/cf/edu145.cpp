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

// LL n;
// inline void solve(){
//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
// 	if(s[0]==s[3])cout<<-1<<endl;
// 	else if(s[0]==s[2]||s[1]==s[3])cout<<6<<endl;
// 	else cout<<4<<endl;
// }

// signed main(){
//     IOS;
//     LL tt=1;
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

// LL n;
// inline void solve(){
//     cin>>n;
//     LL l=0,r=sqrt(n)+1;
//     while(l<r){
//         LL mid=l+r>>1;
//         LL te=mid+1;
//         if(te*te<n) l=mid+1;
//         else r=mid;
//     }
//     if(n==1) cout<<"0"<<endl;
//     else cout<<l<<endl;
// }

// signed main(){
//     IOS;
//     LL tt=1;
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

// int n,k,a[50];
// inline void solve(){
//     cin>>n>>k;
//     int t=0;
//     for(int i=0;i<n;i++){
//         a[i]=-1000;
//     }
//     while((t+1)*(t+2)/2 <= k){
//         t++;
//     }
//     for(int i=0;i<t;i++){
//         a[i]=1;
//     }
//     k-=t*(t+1)/2;
//     if(k){
//         a[t]=k-t-1;
//         a[k-1]=500;
//     }

//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
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