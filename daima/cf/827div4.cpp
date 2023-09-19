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
//     int a[5];
//     for(int i=1;i<=3;i++){
//         cin>>a[i];
//     }
//     sort(a+1,a+4);
//     if((a[1]+a[2])==a[3]){
//         cout<<"YES\n";
//     }
//     else{
//         cout<<"NO\n";
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
//     int a[110],b[110];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     for(int i=1;i<n;i++){
//         if(a[i]==a[i-1]){
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

// C
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
// char a[10][10];
// inline void solve(){
//     for(int i=1;i<=8;++i){
// 		for(int j=1;j<=8;++j){
// 			cin>>a[i][j];
// 		}
// 	}
// 	bool ret=0;
// 	for(int i=1;i<=8;++i){
// 		int cnt=0;
// 		for(int j=1;j<=8;++j){
// 			if(a[i][j]=='R'){
// 				cnt++;
// 			}
// 		}
// 		if(cnt==8){
// 			ret=1;
// 			break;
// 		}
// 	}
// 	if(ret==1){
// 		cout<<"R"<<endl;
// 	}
// 	else{
// 		cout<<"B"<<endl;
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



//D
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

// inline int gcd(int a, int b) {
//     return (b == 0) ? a : gcd(b, a % b);
// }
// int n;
// int a[200009];
// inline void solve(){
//     cin>>n;
//     int p[1010]={0};
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         p[a[i]]=max(p[a[i]],i);
//     }
//     int ans=-1;
//     for(int i=1;i<=1000;i++){
//         for(int j=1;j<=1000;j++){
//             if(gcd(i,j)==1 && p[i] && p[j]){
//                 ans=max(ans,p[i]+p[j]);
//             }
//         }
//     }
//     cout<<ans<<endl;
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



//E
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

// int n,q,a[200009],k,b[200009];
// int sum[200009],ans[200009];
// inline void solve(){
//     // cin>>n>>q;
//     for(int i=1;i<=n;i++){
//         sum[i]=0;
//         ans[i]=0;
//     }
//     // for(int i=1;i<=n;i++){
//     //     cin>>a[i];
//     //     sum[i]=a[i]+sum[i-1];
//     // }
//     // for(int i=1;i<=q;i++){     //k
//     //     cin>>k;
//     //     for(int j=1;j<=n;j++){ //a
//     //         if(k==0){
//     //             ans[i]=0;
//     //         }
//     //         else if(k<a[j]){
//     //             ans[i]=sum[j];
//     //         }
//     //         else break;
//     //     }
//     // }
//     // for(int i=1;i<=q;i++){
//     //     cout<<ans[i]<<" ";
//     // }
//     // cout<<endl;



//     cin>>n>>q;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         sum[i]=sum[i-1]+a[i];
//         b[i]=max(b[i-1],a[i]);
//     }
//     int k;
//     for(int i=1;i<=q;i++){
//         cin>>k;
//         int tem=0;
//         tem=upper_bound(b,b+1+n,k)-b;
//         if(tem>1) cout<<sum[tem-1]<<" ";
//         else cout<<0<<" ";
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



//F
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

int n,a[200009],st[200009];
void solve(){
    cin >> n;
    for(int i = 1 ; i <= n ; i ++ ) cin >> a[i], st[i] = 0;
    sort(a + 1, a + n + 1);
    int cur = a[n];
    vector<int> ans;
    ans.push_back(n);
    st[n] = 1;
    while(true) {
        int pos = 0, maxv = -1;
        for(int i = n ; i >= 1; i -- ) {
            if(st[i]) continue;
            if(((a[i] | cur) - cur) > maxv) {
                maxv = ((a[i] | cur) - cur);
                pos = i;
            }
        }
        if(maxv == 0 || maxv == -1) break;
        ans.push_back(pos);
        st[pos] = 1;
        cur |= a[pos];
    }
    for(auto it : ans) cout << a[it] << " ";
    for(int i = 1; i <= n ; i ++ ) {
        if(!st[i]) cout << a[i] << " ";
    }
    cout << endl;
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