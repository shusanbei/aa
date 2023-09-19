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

// int n,a[100];
// inline void solve(){
//     cin>>n;
//     map<int ,int>ma;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     sort(a+1,a+n+1);
//     if(a[1]==a[n]){
//         cout<<"NO"<<endl;
//         return;
//     }
//     cout<<"YES"<<endl;
//     for (int i=1;i<=n/2;i++) {
//         cout<<a[n-i+1]<<" "<<a[i]<<" ";
//     }
//     if(n%2){
//         cout<<a[n/2+1];
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

int n,a[100][100];
inline void solve(){
    cin>>n;
    int L=1,R=n*n,flag=0;
	for(int i=1;i<=n;i++){
		if(i&1){
			for(int j=1;j<=n;j++){
				if(flag) a[i][j]=L++;
				else a[i][j]=R--;
				flag^=1;
			}
		}
		else{
			for(int j=n;j>=1;j--){
				if(flag) a[i][j]=L++;
				else a[i][j]=R--;
				flag^=1;
		    }
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
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