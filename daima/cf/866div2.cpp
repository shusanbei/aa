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

// LL n,k;
// LL a[1009][1009];
// inline void solve(){
//     string s;
//     cin>>s;
//     LL ans=0;
//     LL te=0;
//     for(LL i=0;i<s.size()-1;i++){
//         if(s[i]=='_' && s[i+1]=='_') ans++;
//     }
//     if(s[0]=='_') ans++;
//     if(s[s.size()-1] == '_') ans++;
//     if(s=="^") {
//         cout<<1<<endl;
//         return;
//     }
//     cout<<ans<<endl;
// }

// signed main(){
//     IOS;
//     LL tt=1;
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

// LL n,k;
// inline void solve(){
//     string s;
//     cin>>s;
//     n=s.size();
//     s=s+s+s;
//     LL l=0;
//     for(LL i = 0;i < s.size(); i++){
//         if(s[i]=='0')continue;
//         LL j=i;
//         while(s[j]=='1'&&j<s.size()){
//             j++;
//         }
//         l=max(l,min(j-i,n));
//         i=j-1;
//     }
//     LL ans=0;
//     if(l==n) ans=n*n;
//     else {
//         if(l%2==1) ans=(l/2+1)*(l/2+1);
//         else ans =l/2*(l/2+1);
//     }
//     cout<<ans<<endl;

// }

// signed main(){
//     IOS;
//     LL tt=1;
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
    map<int ,int>ma;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ma[a[i]]++;
    }
    int te=0,cnt=0;
    for(int i=0;i<n;i++){
        cnt+=ma[i];
        if(!ma[i]) {
            te=i;
            break;
        }
    }
    if(ma[te + 1]){
        for(int i = 1;i <= n; i++){
            if(a[i] == te + 1){
                ma[te] = 1;
                int j = i;
                while(ma[te + 1]){
                    ma[a[j]]--;
                    j++;
                }
                break;
            }
        }
    }
    else 
    {
        int flag = 0;
        for(int i = 1;i <= n; i++)
        {
            if(ma[a[i]] >= 2 || a[i] > te) flag = 1;
        }
        if(flag) ma[te] = 1;
    }
    for(int i = 0;i <= te; i++)
    {
        if(!ma[i]) 
        {
            cout << "No" << endl;
            return ;
        }
    }
    cout << "Yes" << '\n';
}

signed main(){
    IOS;
    LL tt=1;
    cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}





    // map<int,int> ma;
    // cin >> n;
    // for(int i = 1;i <= n; i++) 
    // {
    //     cin >> a[i];
    //     ma[a[i]]++;
    // }
    // int te;
    // for(int i = 0;i <= n; i++)
    // {
    //     if(!ma[i])  
    //     {
    //         te = i;
    //         break;
    //     }
    // }
    // int cnt = 0;
    // if(ma[te + 1])
    // {
    //     for(int i = 1;i <= n; i++)
    //     {
    //         if(a[i] == te + 1)
    //         {
    //             ma[te] = 1;
    //             int j = i;
    //             while(ma[te + 1])
    //             {
    //                 ma[a[j]]--;
    //                 j++;
    //             }
    //             break;
    //         }
    //     }
    // }
    // else 
    // {
    //     int flag = 0;
    //     for(int i = 1;i <= n; i++)
    //     {
    //         if(ma[a[i]] >= 2 || a[i] > te) flag = 1;
    //     }
    //     if(flag) ma[te] = 1;
    // }
    // for(int i = 0;i <= te; i++)
    // {
    //     if(!ma[i]) 
    //     {
    //         cout << "No" << '\n';
    //         return ;
    //     }
    // }
    // cout << "Yes" << '\n';
