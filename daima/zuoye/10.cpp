#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std::chrono;
using namespace std;

int c1, c2, n;    // 第一艘船的容量c1,第一艘船的容量c2,货物个数n
int bv = 0;       // 最大价值bv
int bc = 0;       // 最大货物个数bc
int flag[10000];  // 记录物品的最优装载情况，0表示未装载，1表示装载在第一艘船，2表示装载在第二艘船
int w[10000];     // 货物重量w
int v[10000];     // 货物价值v
int nflag[10000]; // 记录物品的当前装载情况


void solve(int x, int c1, int c2, int cv, int cn, int nflag[]) {
    //1.最大价值下的货物个数最多
    if (x == n || (c1 <= 0 && c2 <= 0)) {
        if (cv > bv) {
            bv = cv;
            bc = cn;
            for(int i=0;i<n;i++){
              flag[i] = nflag[i];
            }
        } 
        else if (cv == bv && cn > bc) {
            bc = cn;
            for(int i=0;i<n;i++){
              flag[i] = nflag[i];
            }
        }
        return;
    }

    // //2.最大价值
    // if (x == n || (c1 <= 0 && c2 <= 0)) {
    //     if (cv > bv) {
    //         bv = cv;
    //         bc = cn;
    //         for(int i=0;i<n;i++){
    //           flag[i] = nflag[i];
    //         }
    //     }
    // }

    // //3.货物个数最多下的最大价值
    // if (x == n || (c1 <= 0 && c2 <= 0)) {
    //     if (cn > bn) {
    //         bv = cv;
    //         bc = cn;
    //         for(int i=0;i<n;i++){
    //           flag[i] = nflag[i];
    //         }
    //     } 
    //     else if (cn == bn && cv > bv) {
    //         bv = cv;
    //         for(int i=0;i<n;i++){
    //           flag[i] = nflag[i];
    //         }
    //     }
    //     return;
    // }

    // //4.货物个数最多
    // if (x == n || (c1 <= 0 && c2 <= 0)) {
    //     if (cn > bn) {
    //         bv = cv;
    //         bc = cn;
    //         for(int i=0;i<n;i++){
    //           flag[i] = nflag[i];
    //         }
    //     } 
    //     return;
    // }

    // 不装载当前物品
    nflag[x] = 0;
    solve(x + 1, c1, c2, cv, cn, nflag);

    // 尝试装载当前物品到第一艘船
    if (c1 - w[x] >= 0) {
        nflag[x] = 1;
        solve(x + 1, c1 - w[x], c2, cv + v[x], cn + 1, nflag);
    }

    // 尝试装载当前物品到第二艘船
    if (c2 - w[x] >= 0) {
        nflag[x] = 2;
        solve(x + 1, c1, c2 - w[x], cv + v[x], cn + 1, nflag);
    }
}

int main() {
    cout << "请输入第一艘船的容量c1：";
    cin >> c1;
    cout << "请输入第二艘船的容量c2：";
    cin >> c2;
    cout << "请输入货物个数n：";
    cin >> n;

    cout << "请分别输入每个货物的重量和价值：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    auto start_time = steady_clock::now();  // 记录开始时间

    solve(0, c1, c2, 0, 0, nflag);

    auto end_time = steady_clock::now();  // 记录结束时间
    auto duration = duration_cast<nanoseconds>(end_time - start_time);  // 计算时间差
    cout << "--得到最大价值且货物个数最大时：--" << endl;
    // cout << "--得到最大价值时：--" << endl;
    // cout << "--得到货物个数最大且最大价值时：--" << endl;
    // cout << "--得到货物个数最大时：--" << endl;
    cout << "最大价值为：" << bv << endl;
    cout << "装载货物的最大个数为：" << bc << endl;
    cout << "货物的装载情况如下：" << endl;
    for (int i = 0; i < n; ++i) {
        if (flag[i] == 0) {
            cout << "货物" << i + 1 << "：未装载" << endl;
        } else if (flag[i] == 1) {
            cout << "货物" << i + 1 << "：装载在第一艘船" << endl;
        } else {
            cout << "货物" << i + 1 << "：装载在第二艘船" << endl;
        }
    }

    cout << "得到结果所需时间为:" << duration.count() << "ns." << endl;
    return 0;
}

// 4 
// 4 
// 8
// 2 1
// 2 2
// 2 3
// 2 4
// 2 5
// 2 6
// 2 7
// 2 8