#include <bits/stdc++.h>
#include <iostream>
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

int n;


inline void solve(){
    cin>>n;
    string s;
    cin>>s;
    s=' '+s;
    vector<int> a;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(s[i]=='L'){
            if(n-i>i-1){
                a.pb(n-i-(i-1));
            }
            ans+=i-1;
        }
        else{
            if(n-i<i-1){
                a.pb(i-1-(n-i));
            }
            ans+=n-i;
        }
    }
    sort(a.begin(),a.end(),[](int x,int y){
        return x>y;
    });
    for(int i=1;i<=n;i++){
        if(i<=a.size()){
            ans+=a[i-1];
        }
        cout<<ans<<" ";
    }
    cout<<endl;
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