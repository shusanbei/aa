#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

int cnt = 0;
//move()的参数分别为圆盘的个数n，圆盘初始所在柱子a，
//辅助移动柱子b（即将前n-1个盘子从a柱移动到b柱），目标柱子c
void move(int n,char a,char b,char c){
    cnt ++;
    if(n == 1) {
        cout << a << "->" << c << endl;
    }
    else{
        move(n-1,a,c,b);
        cout << a << "->" << c << endl;
        move(n-1,b,a,c);
    }
}

int main(){
    int n;
    cout << "请输入圆盘的个数：" << endl;
    cin >> n;

    // 使用高精度时钟
    auto start_time = high_resolution_clock::now(); // 记录开始时间

    //这里使用的是三个桩子分别为A,B,C
    //圆盘的个数n，圆盘初始所在柱子A，辅助移动柱子C，目标柱子B
    cout << "移动过程：" << endl;

    move(n,'A','C','B');

    auto end_time = high_resolution_clock::now(); // 记录结束时间
    auto duration = duration_cast<milliseconds>(end_time - start_time); // 计算时间差
    cout << "运行时间为：" << duration.count() << "ms." << endl;

    cout << "一共移动了" << cnt << "次" <<endl;
    return 0;
}