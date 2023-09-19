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

int a,b;
inline void solve(){
    cin>>a>>b;
    if(abs(abs(a)-abs(b))<=1){
        cout<<abs(a)+abs(b)<<endl;
    }
    else{
        a=abs(a),b=abs(b);
        if(a>b){
            cout<<a+b+max(0,a-b-1)<<endl;
        }
        else{
            cout<<a+b+max(0,b-a-1)<<endl;
        }
    }
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