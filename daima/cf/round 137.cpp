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

// int n,a[250];
// inline void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int te=10-n;
//     cout<<(te*(te-1))/2*6<<endl;
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
//     if(n%2==0){
//         for(int i=1;i<=n/2;i++){
//             cout<<i<<" "<<n-i+1<<" ";
//         }
//     }else{
//         for(int i=0;i<=n/2;i++){
//             if(i==n/2) cout<<i+1<<" ";
//             else cout<<i+1<<" "<<n-i<<" ";
//         }
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

// int n,a[200009],b[200009];
// inline void solve(){
//     cin>>n;
//     string s;
//     cin>>s;
//     s=' '+s;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     int ans=0;
//     int j=1;
//     for(int i=1;i<=n+1;i++){
//         if(s[i]=='1'){
//             j++;
//         }
//         else{
//             if(j!=1){
//                 int te=1e9,teid,sum=0;
//                 for(int k=i-j+1;k<i;k++){
//                     if(te>a[k]){
//                         te=a[k];
//                         teid=k;
//                     }
//                     // cout<<a[k]<<"   ";
//                     sum+=a[k];
//                 }
//                 // cout<<"a[i-j]:"<<a[i-j]<<"??";
//                 // cout<<"te:::::"<<te;
//                 if(a[i-j]>te){
//                     ans+=sum+a[i-j]-te;
//                     swap(s[i-1],s[teid]);
//                 }else{
//                     ans+=sum;
//                 }
//                 j=1;
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




//ronud 135
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

LL n,q,a[100009];
inline void solve(){
    string s;
    cin>>s;
    // deque<char>S,A,B;
    // for(int i=0;i<(int)s.size();i++){
    //     S.push_back(s[i]);
    // }
    // for(int i=0;!S.empty();i++){
    //     if(i%2==0){
    //         if(S.back()>S.front()){
    //             A.push_front(S.front());
    //             S.pop_front();
    //         }else{
    //             A.push_front(S.back());
    //             S.pop_back();
    //         }
    //     }
    //     else{
    //         if(S.back()>S.front()){
    //             B.push_front(S.front());
    //             S.pop_front();
    //         }else{
    //             B.push_front(S.back());
    //             S.pop_back();
    //         }
    //     }
    // }
    // cout<<"A::";
    // for(int i=0;i<(int)A.size();i++){
    //     cout<<A[i];
    // }
    // cout<<endl<<"B::";
    // for(int i=0;i<(int)B.size();i++){
    //     cout<<B[i];
    // }
    // cout<<endl;
    // for(int i=0;i<(int)A.size() && i< (int)B.size();i++){
    //     if(A[i]<B[i]){
    //         cout<<"Alice"<<endl;
    //         return;
    //     }
    // }
    // cout<<"Draw"<<endl;

    int i=0,j=s.size()-1;
    while (i<j && s[i]==s[j]){
        i++;
        j--;
    }
    int flag=0;
    for(i;i<j+1;i+=2){
        if(s[i]!=s[i+1]){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"Alice"<<endl;
    else cout<<"Draw"<<endl;
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