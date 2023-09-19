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

// int n,a[100009],te[100009];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     cout<<1<<" "<<n<<endl;
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

// int n;
// inline void solve(){
//     cin>>n;
//     string s[2];
//     cin>>s[0]>>s[1];
//     int te;
//     for(int i=0;i<n;i++){
// 		if(s[0][i]=='W' || s[1][i]=='W'){
// 			if(s[1][i]=='B') te=1;
//             else te=0;
// 			while(i<n){
// 				if(s[te][i]=='W'){
// 					cout<<"NO"<<endl;
// 					return;
// 				}
// 				if(s[1-te][i]=='B') te=1-te;
// 				i++;
// 			}
// 		}
// 	}
// 	cout<<"YES" <<endl;
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


