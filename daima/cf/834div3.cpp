
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
// string str="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
// inline void solve(){
//     string s;
//     cin>>s;
//     LL n=s.size(),te=-1;
//     if (s[0]=='Y') te=0;
//     else if (s[0]=='e') te=1;
//     else if (s[0]=='s') te=2;
//     else{
//         cout<<"NO"<<endl;
//         return;
//     }
//     bool flag=1;
//     for (LL i=0;i<n;i++){
//         if(s[i]!=str[te%3]){
//             flag=false;
//             break;
//         }
//         else te++;
//     }
//     if (flag) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
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

// LL sum[2010];
// inline void solve(){
//     LL m,s,a[100]={0},maxx=-1;
//     map<LL,LL>ma;
//     cin>>m>>s;
//     for(LL i=1;i<=m;i++){
//         cin>>a[i];
//         maxx=max(maxx,a[i]);
//         ma[a[i]]++;
//     }
//     for(LL i=1;i<=1000;i++){
//         if(!ma[i]){
//             s-=i;
//             ma[i]++;
//             maxx=max(maxx,a[i]);
//         }
//         if(s==0){
//             break;
//         }
//         if(s<0){
//             cout<<"NO\n";
//             return;
//         }
//     }
//     for(LL i=1;i<=maxx;i++){
//         if(!ma[i]){
//             cout<<"NO\n";
//             return;
//         }
//     }
//     cout<<"YES\n";
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

// LL sum[2010];
// inline void solve(){
//     LL l,r,x,a,b;
//     cin>>l>>r>>x>>a>>b;
//     if(a==b){
//         cout<<0<<endl;
//         return;
//     }
//     if(abs(a-b)>x && b>l && b<=r){
//         cout<<1<<endl;
//         return;
//     }
//     if((a-l>x && b-l>x)||(r-a>x && r-b>x)){
//         cout<<2<<endl;
//         return;
//     }
//     if((r-a>x && b-l>x)||(a-l>x && r-b>x)){
//         cout<<3<<endl;
//         return;
//     }
//     cout<<-1<<endl;
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

// LL sum[2010];
// inline void solve(){
//     LL n,m,ans=1;
//     cin>>n>>m;
//     LL re1=0,re2=0;
//     LL te=n;
//     while(te%2==0){
//         te/=2;
//         re1++;
//     }
//     te=n;
//     while(te%5==0){
//         te/=5;
//         re2++;
//     }
//     // cout<<"re1:"<<re1<<" re2:"<<re2<<endl;
//     ans=1;
//     while(2*ans<=m && re1<re2) ans*=2,re1++; 
//     while(5*ans<=m && re1>re2) ans*=5,re2++; 

//     while(10*ans<=m) ans*=10;
//     cout<<m/ans*ans*n<<endl;
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

LL n,h;
LL a[200009];
LL a1[10]={2,2,3},a2[10]={2,3,2},a3[10]={3,2,2};
inline void solve(){
    cin>>n>>h;
    for(LL i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);

    LL te=h,k=0,ans1=0;
    for(LL i=1;i<=n;i++){
        if(te>a[i]) {
            te+=(LL)(a[i]/2);
            ans1++;
        }
        if(te<=a[i]){
            te*=a1[k];
            k++;
            i--;
            if(te==0){
                break;
            }
        }
    }

    te=h,k=0;
    LL ans2=0;
    for(LL i=1;i<=n;i++){
        if(te>a[i]) {
            te+=(LL)(a[i]/2);
            ans2++;
        }
        if(te<=a[i]){
            te*=a2[k];
            k++;
            i--;
            if(te==0){
                break;
            }
        }
    }
    
    te=h,k=0;
    LL ans3=0;
    for(LL i=1;i<=n;i++){
        if(te>a[i]) {
            te+=(LL)(a[i]/2);
            ans3++;
        }
        if(te<=a[i]){
            te*=a3[k];
            k++;
            i--;
            if(te==0){
                break;
            }
        }
    }
    cout<<max(max(ans1,ans2),ans3)<<endl;
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