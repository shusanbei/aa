#include <iostream>
#include <algorithm>
#include <chrono>
#include <random>
using namespace std::chrono;
using namespace std;

int n = 100;  // 商品个数
int m = 2000;  // 总容量
int w[1009], v[1009], dp[1009][2009], flag[1009],sum=0;

void generateTestData() {
    auto seed = duration_cast<milliseconds>(high_resolution_clock::now().time_since_epoch()).count();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<int> weightDist(1, 100);
    std::uniform_int_distribution<int> valueDist(1, 100);

    cout << "随机生成的商品数据:" << endl;
    for (int i = 1; i <= n; i++) {
        w[i] = weightDist(gen);
        v[i] = valueDist(gen);
        cout << "商品" << i << ": 重量=" << w[i] << " 价值=" << v[i] << endl;
    }
}

void solve() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j < w[i]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }

    for (int i = n; i >= 1; i--) {
        if (dp[i][m] == dp[i - 1][m]) {
            flag[i] = 0;
        } else {
            flag[i] = 1;
        }
    }
}

int main() {
    cout << "输入商品个数n与总容量m:" << endl;
    cin >> n >> m;

    cout << "输入n个商品各自的质量以及价值:" << endl;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    // generateTestData();  // 使用随机数据生成

    auto start_time = high_resolution_clock::now();  // 记录开始时间

    solve();

    auto end_time = high_resolution_clock::now();  // 记录结束时间
    auto duration = duration_cast<milliseconds>(end_time - start_time);  // 计算时间差

    cout << "最大价值:" << dp[n][m] << endl;

    cout << n << "个商品的取舍方案:";
    for (int i = 1; i <= n; i++) {
        cout << flag[i] << " ";
        if(flag[i]) sum+=w[i];
    }
    cout << endl;

    cout << "选取的物品的总重量为：" << sum << " " << m << endl;
    cout << "运行时间为：" << duration.count() << "ms." << endl;
    return 0;
}
