#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std::chrono;
using namespace std;

//集装箱个数n 轮船载重量c 集装箱重量v 
int n,c,w[1000009],v[1000009],sum,m,box[1000009];

void solve(){
    for(int i=1;i<=n;i++){
        if(w[i] <= c){
            box[++m] = w[i];
            sum += w[i];
            c -= w[i];
        }
    }
}

int main(){
    cout << "输入集装箱个数n与轮船载重量C:";
    cin >> n >> c;

    cout << "输入n个集装箱的重量w[i]:";

    for(int i=1;i<=n;i++){
        cin >> w[i];
    }
    auto start_time = high_resolution_clock::now();  // 记录开始时间

    sort(w+1,w+n+1);

    auto end_time = high_resolution_clock::now();  // 记录结束时间
    auto duration = duration_cast<milliseconds>(end_time - start_time);  // 计算时间差

    cout << "排序后的集装箱重量为:";
    for(int i=1;i<=n;i++){
        cout << w[i] << " ";
    }
    cout << endl;
    cout << "排序所需时间为:" << duration.count() << "ms." << endl << endl;

    start_time = high_resolution_clock::now();  // 记录开始时间

    solve();

    end_time = high_resolution_clock::now();  // 记录结束时间
    duration = duration_cast<milliseconds>(end_time - start_time);  // 计算时间差

    cout << "装入集装箱的总重量为:" << sum << "  最多可以装" << m << "个集装箱" << endl;
    cout << "装入到船的集装箱的重量分别为:";
    for(int i=1;i<=m;i++){
        cout << box[i] << " ";
    }
    cout << endl;
    
    cout << "贪心得到结果所需时间为:" << duration.count() << "ms." << endl;
    return 0;
}

// 4 10
// 2 2 2 3
