#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std::chrono;
using namespace std;

//商品个数n 总容量m 商品质量w 商品价值v 是否取该物品flag
int n,m,w[1009],v[1009],dp[1009][2009],flag[1009];

void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j<w[i]){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
            }
        }
    }

    for(int i=n;i>=1;i--){
        if(dp[i][m] == dp[i-1][m]){
            flag[i] = 0;
        }
        else{
            flag[i] = 1;
        }
    }
}

int main(){
    cout << "输入商品个数n与总容量m:";
    
    cin >> n >> m;

    cout << "输入n个商品各自的质量以及价值:";
    for(int i=1;i<=n;i++){
        cin >> w[i] >> v[i];
    }
    
    auto start_time = high_resolution_clock::now();  // 记录开始时间

    solve();

    auto end_time = high_resolution_clock::now();  // 记录结束时间
    auto duration = duration_cast<milliseconds>(end_time - start_time);  // 计算时间差

    cout << "最大价值:" << dp[n][m] << endl;

    cout << "n个商品的取舍方案:";
    for(int i=1;i<=n;i++){
        cout << flag[i] << " ";
    }
    cout << endl;

    cout << "运行时间为：" << duration.count() << "ms." << endl;
    return 0;
}

// 4 10
// 3 7 4 5 6 2 7 1

// 8 200
// 79 83
// 59 14
// 86 54
// 11 79
// 28 72
// 63 52
// 15 48
// 68 62