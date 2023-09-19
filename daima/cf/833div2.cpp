// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<LL, LL>
// #define pdd pair<double,double>
// #define LL long long
// #define LL long long
// #define rep(i,a,b) for (LL i = a; i <= b; i ++)
// #define per(i,b,a) for (LL i = b; i > a; i --)
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
//     cout<<(n+1)/2<<endl;
// }

// signed main(){
//     IOS;
//     LL tt;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<LL, LL>
// #define pdd pair<double,double>
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// LL n;
// string s;
// inline void solve(){
//     cin>>n;
//     cin>>s;
//     LL ans=0,x;
//     for(LL i=0;i<n;i++){
//         LL b[10]={0},te=0,ma=-1;
//         for(LL j=i;j<i+100 && j<n;j++){
//             x=s[j]-'0';
//             b[x]++;
//             ma=max(b[x],ma);
//             if(b[x]==1) te++;
//             if(ma<=te){
//                 ans++;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }

// signed main(){
//     IOS;
//     LL tt;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<LL, LL>
// #define pdd pair<double,double>
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// LL n;
// LL a[200009],qsum[200009];
// inline void solve(){
//     cin>>n;
//     LL ans=0;
//     vector<LL>ve(n);
//     for(LL i=1;i<=n;i++){
//         cin>>a[i];
//         qsum[i]=qsum[i-1]+a[i];
//         if(qsum[i]==0) ans++;
//         if(a[i]==0){
//             ve.push_back(i);
//         }
//     }
//     for(LL i=0;i<=(LL)ve.size();i++){
//         for(LL j=ve[i];j<=ve[i+1];j++){
            
//         }
//     }
//     cout<<ans<<endl;
// }

// signed main(){
//     IOS;
//     LL tt;
//     cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define PII pair<LL, LL>
// #define pdd pair<double,double>
// #define LL long long
// #define LL long long
// #define rep(i,a,b) for (LL i = a; i <= b; i ++)
// #define per(i,b,a) for (LL i = b; i > a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front
// map<LL ,LL>ma;
// LL n;
// inline void solve(){
//     cin>>n;
//     LL a,b;
//     for(LL i=1;i<=n;i++){
//         cin>>a>>b;
//         LL te=180*b; 
// 		LL k=a;
// 		LL d=__gcd(te,k);
// 		while(d!=1){
// 			te/=d;
// 			k/=d;
// 			d=__gcd(te,k);
// 		}
// 		cout<<te-1<<"\n";
//     }
// }

// signed main(){
//     IOS;
//     LL tt = 1;
//     // cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }


