// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nuintptr);
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
//     // cin>>n;
//     string a,b;
//     cin>>a>>b;
//     if(a==b){
//         cout<<"="<<endl;
//     }
//     else{
//         string a1,b1;
//         int ax=0,bx=0;
//         for(int i=0;i<a.size();i++){
//             if(a[i]=='X') {
//                 ax++;
//             }
//             else a1+=a[i];
//         }
//         for(int i=0;i<b.size();i++){
//             if(b[i]=='X') {
//                 bx++;
//             }
//             else b1+=b[i];
//         }
//         if(a1==b1){
//             // cout<<"a1==b1"<<endl;
//             if(a1=="S"){
//                 if(ax>bx){
//                     cout<<"<"<<endl;
//                 }
//                 else if(ax<bx){
//                     cout<<">"<<endl;
//                 }
//                 else{
//                     cout<<"="<<endl;
//                 }
//             }
//             if(a1=="L"){
//                 if(ax>bx){
//                     cout<<">"<<endl;
//                 }
//                 else if(ax<bx){
//                     cout<<"<"<<endl;
//                 }
//                 else{
//                     cout<<"="<<endl;
//                 }
//             }
//         }
//         else if(a1<b1){
//             cout<<">"<<endl;
//         }
//         else{
//             cout<<"<"<<endl;
//         }
        
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



//B
// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nuintptr);
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
//     if(n==2){
//         cout<<"2 1"<<endl;
//     }
//     else if(n==3){
//         cout<<-1<<endl;
//     }else{
//         for(int i=n/2+1;i<=n;i++){
//             cout<<i<<" ";
//         }
//         for(int i=n/2;i>=1;i--){
//             cout<<i<<" ";
//         }
//         cout<<endl;
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
// int a[2100];
// int qz[2100];

// int ss(int v)
// {
// 	int re=0;
// 	int s=0;
// 	int len=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		s+=a[i],len++;
// 		if(s==v)
// 		{
// 			re=max(re,len);
// 			s=0;
// 			len=0;
// 		}
// 		else if(s>v) return 0;
// 	}
// 	return re;
// }

// inline void solve(){
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         sum+=a[i];
//     }
//     int ans=1e9;
//     for(int i=1;i<=n;i++){
//         if(sum%i==0){
//             int te = ss(i);
//             if(te) ans = min(te, ans);
//             te = ss(sum / i);
//             if(te) ans = min(ans, te);
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

// int n;
// int a[300000],flag,ans;
// void dfs(int l,int r){
//     if(l>=r) return;

//     int mid=(l+r) >> 1;
//     int len=(r-l+1) >>1;
//     dfs(l,mid), dfs(mid+1,r);
// 	if(a[l] > a[l+len])
// 	{
// 		swap(a[l+len],a[l]);
// 		ans ++;
// 	}
// 	if(a[l]+len != a[l+len])
// 	{
// 		flag = 1;
// 	}
// }
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     ans=0,flag=0;
//     dfs(1,n);
//     if(flag) {
//         cout<<-1<<endl;
//     }
//     else{
//         cout<<ans<<endl;
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

// int n;
// int a[200009],f[200009];
// inline void solve(){
//     cin>>n;
//     for(int i = 1 ; i <= n ; i ++ ) {
//         cin >> a[i], f[i] = 0;
//     }
//     f[0] = 1;
//     for(int i = 1; i <= n ; i ++ ) {
//         if(i + a[i] <= n) f[i + a[i]] |= f[i - 1];
//         if(i >= a[i] + 1) f[i] |= f[i - a[i] - 1];
//     }
//     if(f[n]) cout<<"YES\n";
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


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,st,ed,res=0;
    cin>>st>>ed;
    cin>>n;
    pair<int,int>p[100009];
    for(int i=0;i<n;i++){
        cin>>a>>b;
        p[i]={a,b};
    }
    sort(p,p+n);
    bool flag=false;
    for (int i = 0; i < n; i ++ ){
        int j = i, r = -2e9;
        while (j < n && p[j].first <= st){
            r = max(r, p[j].second);
            j ++ ;
        }

        if (r < st){
            res = -1;
            break;
        }

        res ++ ;
        if (r >= ed){
            flag = true;
            break;
        }

        st = r;
        i = j - 1; 
    }

    if (!flag) res = -1;
    printf("%d\n", res);
    return 0;
}