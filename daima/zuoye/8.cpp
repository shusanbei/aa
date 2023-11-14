#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std::chrono;
using namespace std;

const int N = 20;

// 第r行，第i列能不能放棋子：用数组dg udg cor 分别表示：点对应的两个斜线以及列上是否有皇后。
// dg[i + r] 表示 r行i列处，所在的对角线上有没有棋子，
// udg[n - i + r]表示 r行i列处，所在的反对角线上有没有棋子，cor[i]表示第i列上有没有棋子。
// 如果 r行i列的对角线，反对角线上都没有棋子，即!cor[i] && !dg[i + r] && !udg[n - i + r]为真，
// 则代表 r行i列处可以放棋子。
char q[N][N];                      //存储棋盘
bool dg[N * 2], udg[N * 2], cor[N];//点对应的两个斜线以及列上是否有皇后

int n,sum=0;

void solve(int r){
    //放满了棋盘，输出棋盘
    if(r == n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cout << q[i][j];
            cout << endl;
        }
        cout << endl;
        sum++;
        return;
    }
    
    //第 r 行，第 i 列 是否放皇后
    for(int i = 0; i < n; i++){
        if(!cor[i] && !dg[i + r] && !udg[n - i + r]){
            q[r][i] = 'Q';
            cor[i] = dg[i + r] = udg[n - i + r] = 1;//对应的 列， 斜线 状态改变
            solve(r + 1);                           //处理下一行
            cor[i] = dg[i + r] = udg[n - i + r] = 0;//回溯
            q[r][i] = '.';
        }
    }
}

int main(){
    cout << "输入棋盘规模(n*n)的n(1~12):" << endl;
    cin >> n;

    //初始化
    for (int i = 0; i < n; i ++ )
        for (int j = 0; j < n; j ++ )
            q[i][j] = '.';
    
    auto start_time = steady_clock::now();  // 记录开始时间

    solve(0);

    auto end_time = steady_clock::now();  // 记录结束时间
    auto duration = duration_cast<milliseconds>(end_time - start_time);  // 计算时间差

    cout << "一共有" << sum << "种" << n << "*" << n << "规模的" << "皇后问题的摆放方法" << endl;
    cout << "得到结果所需时间为:" << duration.count() << "ms." << endl;
    return 0;
}