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
//     int ans;
//     if (n == 1){
// 		ans = 0;
// 	} else if (n == 2){
// 		ans = 1;	
// 	} else if (n == 3){
// 		ans = 2;
// 	} else if (n % 2 == 0){
// 		ans = 2;
// 	} else{
// 		ans = 3;
// 	}
// 	cout << ans << endl;
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

//B
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

// string s;
// int n,q;
// inline void solve(){
//     cin>>n>>q;
//     cin>>s;
//     s=' '+s;
//     int l,r;
//     while(q--){
//         cin>>l>>r;
//         int flag=0;
//         char a=s[l],c=s[r];
//         for(int i=1;i<l;i++){
//             if(s[i]==a) {
//                 flag=1;
//                 break;
//             }
//         }
//         for(int i=r+1;i<=n;i++){
//             if(s[i]==c){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag) cout<<"YES\n";
//         else cout<<"NO\n";
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



//c
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
//         map<char, int> a, b;
// 		int n , k;
// 		cin >> n >> k;
// 		string s, c;
// 		cin >> s >> c;
// 		for (int i = 0; i < n; i++)
// 		{
// 			a[s[i]]++;
// 			b[c[i]]++;
// 		}
// 		for (char i = 'a'; i <= 'z'; i++)
// 		{
// 			a[i] -= b[i];
// 		}
// 		bool flag = true;
// 		for (char i = 'z'; i >= 'a'; i--)
// 		{
// 			if (a[i] == 0) continue;
// 			if (a[i] > 0)
// 			{
// 				flag = false;
// 				break;
// 			}
// 			if (a[i] < 0 && a[i] % k != 0)
// 			{
// 				flag = false;
// 				break;
// 			}
// 			if (a[i] < 0 && i != 'a')
// 			{
// 				for (int j = i - 1; j >= 'a' && a[i] < 0; j--)
// 				{
// 					while (a[j] >= k && a[i] != 0)
// 					{
// 						a[j] -= k;
// 						a[i] += k;
// 					}
// 				}
// 				if (a[i] < 0)
// 				{
// 					flag = false;
// 					break;
// 				}
// 			} else
// 			{
// 				flag = false;
// 				break;
// 			}
// 		}
// 		if (flag)
// 		{
// 			cout<<"YES\n";
// 		} else
// 		{
// 			cout<<"NO\n";
// 		}
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

int d,k;
inline void solve(){
    cin>>d>>k;
    int x=0,y=0;
    while((x+k)*(x+k)*2<=d*d){
        x+=k;
    }
    y=x+k;
    if((x*x+y*y)<=d*d){
        cout<<"Ashish\n";
    }else{
        cout<<"Utkarsh\n";
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