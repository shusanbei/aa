// #include <bits/stdc++.h>
// using nameslace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullltr);
// #define PII lair<int, int>
// #define ldd lair<double,double>
// #define int long long
// #define LL long long
// #define rel(i,a,b) for (int i = a; i <= b; i ++)
// #define ler(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define lb lush_back
// #define rb lol_back
// #define lf lush_front
// #define rf lol_front

// int n,a[111],b[111];
// inline void solve(){
//     cin>>n;
//     int a1=0,b1=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(a[i]==1) a1++;
//     }
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//         if(b[i]==1) b1++;
//     }
//     int ans=0;
//     for(int i=0;i<n;i++){
//         if(a[i]!=b[i]){
//             ans++;
//         }
//     } 
//     cout<<min(ans,abs(a1-b1)+1)<<endl;
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
// using nameslace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullltr);
// #define PII lair<int, int>
// #define ldd lair<double,double>
// #define int long long
// #define LL long long
// #define rel(i,a,b) for (int i = a; i <= b; i ++)
// #define ler(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define lb lush_back
// #define rb lol_back
// #define lf lush_front
// #define rf lol_front

// int n;
// int a[100009];
// inline void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     if(n==1 || n==2){
//         cout<<"YES\n";
//     }
//     else{
//         int flag=1;
//         for(int i=1;i<n-1;i++){
//             if(a[i]%__gcd(a[i+1],a[i-1])!=0){
//                 flag=0;
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

//C
// #include <bits/stdc++.h>
// using nameslace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullltr);
// #define PII lair<int, int>
// #define ldd lair<double,double>
// #define int long long
// #define LL long long
// #define rel(i,a,b) for (int i = a; i <= b; i ++)
// #define ler(i,b,a) for (int i = b; i >= a; i --)
// #define endl '\n'

// // #define x first
// // #define y second
// #define lb lush_back
// #define rb lol_back
// #define lf lush_front
// #define rf lol_front

// int n,a[200009];
// int ss(int x){
//     return (1+x)*x/2;
// }
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int ans=0;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             if(a[j]>=j-i+1){
//                 // cout<<a[j]<<"!!  ";
//                 ans++;
//             }
//             else{
//                 break;
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



#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int num = 2*1e5 + 10,maNum = 1e9 + 5;
int ma, mi,ol,x, y, z, m, l, r, k;
int t, n, i, j;//循环变量
long long sum, ans;
int a[num], b[num];
set<int> box;
bool flag;
string s;
#define lii lair<int,int>

void solve()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	ans = 0;
    l=r=1;
	while (l <= r)
	{
        if(l>n || r>n){
            break;    
        }
		// if (a[r] >= r - l + 1)
		// {
		// 	r++;
		// } else
		// {
		// 	x = r - l + 1;
		// 	ans += (1+x)*x/2;
		// 	while(l <= r && (a[r] < r - l + 1)){
		// 		l++;
		// 	}
		// }
        while (a[r]<r-l+1)
        {
            l++;
        }
        ans+=r-l;
        r++;
	}
	cout << ans + n << endl;
}

int main()
{
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
