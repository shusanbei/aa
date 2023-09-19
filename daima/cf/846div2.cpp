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
//     int a;
//     cin>>n;
//     vector<int> te1,te2;
//     for(int i=1;i<=n;i++){
//         cin>>a;
//         if(a%2) te2.push_back(i);
//         else te1.push_back(i);
//     } 
//     if(te2.size()>=3){
//         cout<<"YES\n";
//         cout<<te2[0]<<" "<<te2[1]<<" "<<te2[2]<<endl;
//     } 
//     else if(te2.size()>=1&&te1.size()>=2){
//         cout<<"YES\n";
//         cout<<te2[0]<<" "<<te1[1]<<" "<<te1[0]<<endl;
//     } 
//     else cout<<"NO\n";
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

LL n,a[200009],sum[200009],l,r;
inline void solve(){
    int n;
	cin >> n;
	LL te=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
		te+=a[i];
	}
	LL ans=0;
	for(int i=1;i<n;i++){
		ans=max(ans,__gcd(sum[i],te-sum[i]));
	}
	cout<<ans<<endl;
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