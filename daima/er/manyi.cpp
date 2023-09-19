#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N = 11,mod = 1e9 + 7 ;

int n ;
int cnt[N] ;  // 记录每个数出现过几次
ll ans ;

void dfs(int u,ll b,int s){  // 第一个数代表搜到哪一个位置，第二个数代表当前方案个数，第三个参数代表当前选的所有数的和
    if(u == 10 ){   // 当搜到10，即搜完
        if(s % 3 == 0 && b) ans = (ans + b) % mod;  // 如果所选和能够%3，代表组成数可以整除3，所以加上答案

        return ; 
    }

    for(int i = 0 ; i < 3 ; i++){  // 枚举每个数可以选（0，1，2） + 3 * k个
    	// (cnt[u] / 3 + (i <= cnt[u] % 3)) 这个就是对于选u来说，i + 3 * k 有多少个，那么直接方案数乘这个即可
        dfs(u+1,(b * (cnt[u] / 3 + (i <= cnt[u] % 3)) % mod ) % mod,s + u * i) ;
    }
}

int main(){
    for(int i = 1;  i <= 9 ; i++) cin >> cnt[i] ;

    dfs(1,1,0) ;  // 开始dfs，第一个数代表搜到哪一个位置，第二个数代表当前方案个数，第三个参数代表当前选的所有数的和


    cout << ans;
    return 0;
}