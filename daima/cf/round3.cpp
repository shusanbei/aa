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

// int n,a[100];
// inline void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     if(a[0]==1) cout<<"YES"<<endl;
//     else{
//         cout<<"NO"<<endl;
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
//     string s;
//     cin>>s;
//     int x=0,y=0,ma=-1;
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     for(int i=0;i<n;i++){
//         if(s[i]=='0') x++;
//         else y++;
//     }
//     int a=1;
//     for(int i=1;i<n;i++){
//         if(s[i]==s[i-1]){
//             a++;
//         }
//         else{
//             ma=max(a*a,ma);
//             a=1;
//         }
//     }
//     ma=max(a*a,ma);
//     // cout<<ma<<" ";
//     ma=max(x*y,ma);
//     cout<<ma<<endl;
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

// #define x first
// #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// int n;
// inline void solve() {
//     string a,b;
//     cin>>n>>a>>b;
//     bool flag1=0,flag2=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==b[i]) flag1=1;
//         if(a[i]!=b[i]) flag2=1;
//     }
//     if(flag1&&flag2){
//         cout<<"NO"<<endl;
//         return;
//     }
//     cout<<"YES"<<endl;
//     vector<PII>v;
//     if(flag1==1){
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             if(a[i]=='0'){
//                 v.push_back({i+1,i+1});
//                 cnt++;
//             }
//         }
//         if(cnt%2==0)
//         {
//             v.push_back({1,1});
//             v.push_back({2,n});
//         }
//         else{
//             v.push_back({1,n});
//         }
//     }
//     else{
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             if(a[i]=='0'){
//                 v.push_back({i+1,i+1});
//                 cnt++;
//             }
//         }
//         if(cnt%2!=0)
//         {
//             v.push_back({1,1});
//             v.push_back({2,n});
//         }
//         else{
//             v.push_back({1,n});
//         }
//     }
//     cout<<v.size()<<"\n";
//     for(auto it:v){
//         cout<<it.x<<' '<<it.y<<endl;
//     }
// }

// signed main() {
//     IOS;
//     int tt;
//     cin >> tt;
//     while(tt --) {
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

// int n,m,a[200009],ma=-1;
// inline void solve(){
//     ma=-1;
//     for(int i=0;i<3;i++) {
//         cin>>a[i];
//         ma=max(ma,a[i]);
//     }
//     for(int i=0;i<3;i++){
//         if(a[i]<ma) cout<<ma-a[i]+1<<" ";
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






#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int num = 1e5 + 10,maNum = 1e9 + 5;
int ma, mi,ol,x, y, z, m, p, q, k;
int t, n, i, j;//循环变量
int sum, ans;
int a[2010][2010];
vector<pair<int, int>> box;
//bool flag;
string s;
#define pii pair<int,int>
int sx, sy, ex, ey;
bool st[2010][2010];

int xx[4] = {0, 1, 0, -1};
int yy[4] = {1, 0, -1, 0};

void dfs(int x, int y, int step,int tx, int ty)
{
    // cout<<"???"<<x<<" "<<y<<endl;
	if (x == tx && y == ty) 
	{
        // cout<<"dhsajdhkajshdja"<<endl;
		ans = min(ans, step);
		return;
	}
	st[x][y] = true;
	for (int i = 0; i < 4; i++)
	{

		if (!(st[x + xx[i]][y + yy[i]] || x + xx[i] == 0 || x + xx[i] == n + 1 || y + yy[i] == 0 || y + yy[i] == m + 1 || a[x + xx[i]][y + yy[i]] == -1))
		{
			dfs(x + xx[i], y + yy[i], step + 1, tx, ty);
		}
	}
	st[x][y] = false;
	return;
}


int main()
{
	ans = maNum;
	cin >> n >> m >> k;
	cin >> sx >> sy >> ex >> ey;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > k)
            {
                box.push_back({i, j});
            }
        }
    }
    sum = maNum;
	for (auto it : box)
    {
        p = 0;
        ans = maNum;
        x = it.first, y = it.second;
        dfs(sx, sy, 0, x, y);

        // cout<<ans<<"???"<<endl;
        
        p += ans;
        ans = maNum;
        
        dfs(x, y, 0, ex, ey);

        // cout<<ans<<"???"<<endl;
        
        p += ans;
        sum = min(sum, p);
    }
	cout << sum << endl;
	return 0;
}
