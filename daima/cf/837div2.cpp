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

// LL n,a[100009];
// inline void solve(){
//     cin>>n;
//     LL mi=1e9,ma=0;
//     map<LL ,LL>mp;
//     for(LL i=1;i<=n;i++){
//         cin>>a[i];
//         mi=min(mi,a[i]);
//         ma=max(ma,a[i]);
//         mp[a[i]]++;
//     }
//     LL te=ma-mi,ans=0;
//     for (LL i=1;i<=n;i++){
//         if(te) ans+=mp[a[i]+te];
//         if(te) ans+=mp[a[i]-te];
//         if(te==0) ans+=mp[a[i]]-1;
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
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int a[100009],b[100009];
// int n,m; 
// inline void solve(){
//     cin>>n>>m;
// 	for(int i=1;i<=n;i++){
//         a[i]=n+1;
//     }
// 	int x,y; 
// 	for(int i=1;i<=m;i++){
//         cin>>x>>y;
// 		if(x<y) a[x]=min(a[x],y);
// 		else a[y]=min(a[y],x);
// 	}
// 	for(int i=1;i<=n;i++){
//         b[i]=a[i];
//     }
// 	for(int i=n-1;i>=1;i--){
// 		b[i]=min(b[i],b[i+1]);
// 	}
// 	LL ans=0;
// 	for(int i=1;i<=n;i++){
// 		ans+=b[i]-i;
// 	}
// 	cout<<ans<<endl;
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


