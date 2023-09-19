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

// int n,a[10000];
// inline void solve(){
//     cin>>n;
//     int te=0;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         if(a[i]==2) te++;
//     }
//     if(te%2){
//         cout<<-1<<endl;
//         return;
//     }
//     int ans=0;
//     for(int i=1;i<=n;i++){
//         if(a[i]==2) ans++;
//         if(ans==(te/2)) {
//             cout<<i<<endl;
//             return;
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


// int weihe(int n){
//     int te=0;
//     while(n){
//         te+=n%10;
//         n/=10;
//     }
//     return te;
// }
// int n,a[10000];
// inline void solve(){
//     cin>>n;
//     if(n%2==0){
//         cout<<n/2<<" "<<n/2<<endl;
//         return;
//     }
//     int i=n/2,j=n/2+1,t=0;
//     while(1){
//         if(abs(weihe(i)-weihe(j))<=1){
//             cout<<i<<" "<<j<<endl;
//             return;
//         }
//         t++;
//         if(t>=1 && t<=9){
//             i++,j--;
//         }
//         if(t>=10 && t<=18){
//             i+=10,j-=10;
//         }
//         if(t>=2*9+1 && t<=3*9){
//             i+=100,j-=100;
//         }if(t>=3*9+1 && t<=4*9){
//             i+=1000,j-=1000;
//         }if(t>=4*9+1 && t<=5*9){
//             i+=10000,j-=10000;
//         }if(t>=5*9+1 && t<=6*9){
//             i+=100000,j-=100000;
//         }if(t>=6*9+1 && t<=7*9){
//             i+=1000000,j-=1000000;
//         }if(t>=7*9+1 && t<=8*9){
//             i+=10000000,j-=10000000;
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

// int n,a[10000];
// inline void solve(){
//     cin>>n;
//     if(n%2==0){
//         cout<<"NO"<<endl;
//         return;
//     }
//     else{
//         cout<<"YES"<<endl;
//         int m=n*2;
//         for(int i=1;i<=n;i+=2){
//             cout<<i<<" "<<m--<<endl;
//         }
//         for(int i=2;i<=n;i+=2){
//             cout<<i<<" "<<m--<<endl;
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

int n,a[10000];
inline void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
}

signed main(){
    IOS;
    int tt=1;
    // cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}