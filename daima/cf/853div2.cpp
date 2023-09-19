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

// int n,a[110];
// inline void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int f=0;
//     for(int i=1;i<=n;i++){
//         for(int j=i+1;j<=n;j++){
//             if(__gcd(a[i],a[j])<=2){
//                 f=1;
//             }
//         }
//     }
//     if(f) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }

// signed main(){
//     IOS;
//     int tt=1;
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
//     string s;
//     cin>>s;
//     for(int i=0;i<n;i++){
//         if(s[i] == s[n-i-1]) continue;
//         int te=i;
//         while(te+1<n/2 && s[te+1] != s[n-te-1-1]){
//             te++;
//         }
//         for(int j=i;j<=te;j++){
//             if(s[j]=='0') s[j]='1';
//             else s[j]='0';
//         }
//         break;
//     }
//     for(int i=0;i<n;i++){
//         if(s[i] != s[n-i-1]){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     cout<<"YES"<<endl;
// }

// signed main(){
//     IOS;
//     int tt=1;
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

// int n,m;
// int a[200009],b[200009];
const int N = 4e5+10 ;
bool vis[N];
int p[N]; 
inline void solve(){
    int n,m;
    cin>>n>>m;
    //记录上一次出现位置
    vector<int> st_pos(n+m+1);
    //记录累计次数
    vector<LL> sum(n+m+1);
    int pos,num;
    LL cnt=0;
    LL ans=0;
    for(LL i=1;i<=n;i++){
        cin>>num;
        vis[num]=1;
        p[i]=num;
        //st[num].push_back(0);
        st_pos[num]=0;
    }
    for(LL i=1;i<=m;i++){
        cin>>pos>>num;
        sum[p[pos]]+=(i-1)-st_pos[p[pos]]+1;
        st_pos[num]=i;
        //ed[p[pos]].push_back(i-1);
        //st[num].push_back(i);
        cnt-=sum[p[pos]];
        if(!vis[num]){
            vis[num]=1; 
        }else{
            cnt+=sum[num];
        }
        cnt+=n;
        //可能的最大次数
        ans+=2*n*i-cnt;
        p[pos]=num;
    }
    cout<<ans<<endl;
    memset(vis,0,sizeof(vis));
}

signed main(){
    IOS;
    int tt=1;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}