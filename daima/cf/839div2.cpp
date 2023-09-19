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
//     cout<<s[0]-'0'+s[2]-'0'<<endl;
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

// LL n;
// inline void solve(){
//     LL a,b,c,d;
// 	cin>>a>>b>>c>>d;
// 	LL te=1;
// 	bool flag=0;
// 	while(te<=4){
// 		if(a<b && b<d && a<c && c<d) flag=1;
//         swap(a,b);
//         swap(b,d);
//         swap(c,d);
// 		te++;
// 	}
// 	if(flag) cout<<"YES"<<endl;
// 	else cout<<"NO"<<endl;
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

// LL k,n;
// inline void solve(){
//     cin>>k>>n;
//     LL te=1,a[1000]={0};
//     a[1]=1;
//     for(LL i=2;i<=k;i++){
//         if(a[i-1]+te+k-i>n){
//             for(LL j=i;j<=k;j++){
//                 a[j]=a[j-1]+1;
//             }
//             break;
//         }
//         else{
//             a[i]=a[i-1]+te;
//             te++;
//         }
//     }
//     for(LL i=1;i<=k;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
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

LL n,a[200009];
inline void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    LL ans=0,te=0;
    for(int i=2;i<=n;i++){
        if(a[i]<a[i-1]){
            te=(a[i]+a[i-1]+1)/2;
        }
        ans=max(ans,te);
    }
    for(int i=1;i<=n;i++){
        a[i]=abs(a[i]-ans);
    }
    for(int i=2;i<=n;i++){
        if(a[i]<a[i-1]){
            cout<<"-1"<<endl;
            return;
        }
    }

    cout<<ans<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"ans"<<endl;
}

signed main(){
    IOS;
    LL tt;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}