#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std::chrono;
using namespace std;

int ans[500][500];  // 用于存储LCS长度的动态规划表
int cnt[500][500];  // 用于存储状态转移方向的表

void LCSlength(string a, string b) {
    for (int i = 1; i <= (int)a.length(); i++) {
        ans[i][0] = 0;  // 初始化第一列，表示与空字符串的LCS长度为0
    }
    for (int i = 1; i <= (int)b.length(); i++) {
        ans[0][i] = 0;  // 初始化第一行，表示与空字符串的LCS长度为0
    }
    for (int i = 1; i <= (int)a.length(); i++) {
        for (int j = 1; j <= (int)b.length(); j++) {
            if (a[i-1] == b[j-1]) {
                ans[i][j] = ans[i - 1][j - 1] + 1;  // 当字符相等时，LCS长度加1
                cnt[i][j] = 1;  // 1表示斜上方的箭头，表示从斜上方延伸
            } else if (ans[i - 1][j] >= ans[i][j - 1]) {
                ans[i][j] = ans[i - 1][j];  // 当字符不相等时，选择较大的LCS长度
                cnt[i][j] = 2;  // 2表示上方的箭头，表示从上方延伸
            } else {
                ans[i][j] = ans[i][j - 1];
                cnt[i][j] = 3;  // 3表示左边的箭头，表示从左边延伸
            }
        }
    }
}

void LCS(int i, int j, string a) {
    if (i == 0 || j == 0) {
        return;  // 递归结束条件，回溯到了边界
    }
    if (cnt[i][j] == 1) {  // 根据状态转移方向
        LCS(i - 1, j - 1, a);
        cout << a[i - 1];  // 输出LCS中的字符
    } else if (cnt[i][j] == 2) {
        LCS(i - 1, j, a);
    } else {
        LCS(i, j - 1, a);
    }
}

int main() {
    string a, b;
    cout << "输入字符串a,b:" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    a = " " + a;  // 在字符串前添加空格，以便在代码中从1开始索引
    b = " " + b;

    auto start_time = high_resolution_clock::now();  // 记录开始时间
    LCSlength(a, b);  // 计算LCS长度和填充状态转移表

    cout << "a与b的最大公共子序列的长度为:" << ans[a.length() - 1][b.length() - 1] << endl;

    auto end_time = high_resolution_clock::now();  // 记录结束时间
    auto duration = duration_cast<milliseconds>(end_time - start_time);  // 计算时间差
    cout << "LCSlength()运行时间为：" << duration.count() << "ms." << endl;

    start_time = high_resolution_clock::now();  // 记录开始时间

    cout << "a与b的最大公共子序列为:";
    LCS(a.length(), b.length(), a);  // 提取LCS序列并输出
    cout << endl;

    end_time = high_resolution_clock::now();  // 记录结束时间
    duration = duration_cast<milliseconds>(end_time - start_time);  // 计算时间差
    cout << "LCS()运行时间为：" << duration.count() << "ms." << endl;

    return 0;
}