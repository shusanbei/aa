#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <random>

using namespace std::chrono;
using namespace std;

//集装箱个数n 轮船载重量c 集装箱重量w[i] 集装箱价值v[i] 船上的集装箱总重量sum 船上的集装箱个数m 船上的集装箱重量box[i]
int n=100,c=1500;
int w[1000009],v[1000009],sum,m;
//轮船载重量ve[i].first 集装箱价值ve[i].second 船上的集装箱重量box[i].first 船上的集装箱价值box[i].second
vector<pair<int ,int>> ve,box;

//随机数生成数据
void generateTestData() {
    auto seed = duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<int> weight_distribution(10, 100); // 集装箱重量范围
    std::uniform_int_distribution<int> value_distribution(10, 100); // 集装箱价值范围

    for (int i = 1; i <= n; i++) {
        w[i] = weight_distribution(gen);
        v[i] = value_distribution(gen);
        ve.push_back({w[i],v[i]});
    }

    cout << "随机生成的集装箱重量为: ";
    for (int i = 1; i <= n; i++) {
        cout << w[i] << " ";
    }
    cout << endl;
    cout << "随机生成的集装箱价值为: ";
    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

//贪心解决该问题
void solve(){
    for(int i=0;i<n;i++){
        if(ve[i].first <= c){
            box.push_back(ve[i]);
            sum += ve[i].first;
            c -= ve[i].first;
        }
    }
}

int main(){
    // cout << "输入集装箱个数n与轮船载重量C:";
    // cin >> n >> c;

    // cout << "输入n个集装箱的重量w[i]与价值v[i]:";
    
    // // 输入重量w[i]与价值v[i]，并放入ve中
    // for(int i=1;i<=n;i++){
    //     cin >> w[i] >> v[i];
    //     ve.push_back({w[i],v[i]});
    // }

    //随机生成数据
    generateTestData();

    auto start_time = steady_clock::now();  // 记录开始时间

    //使用c++自带的排序函数
    //添加匿名函数对于ve进行单位价值的降序排序
    sort(ve.begin(),ve.end(),[](pair<int ,int> a,pair<int ,int> b){
        return (double)a.second/a.first > (double)b.second/b.first;
    });

    auto end_time = steady_clock::now();  // 记录结束时间
    auto duration = duration_cast<nanoseconds>(end_time - start_time);  // 计算时间差

    cout << "按单位重量的价值排序后的集装箱重量为:";
    for(int i=0;i<n;i++){
        cout << ve[i].first << " " << ve[i].second << "。";
    }
    cout << endl;
    cout << "排序所需时间为:" << duration.count() << "ns." << endl << endl;

    start_time = steady_clock::now();  // 记录开始时间

    solve();

    end_time = steady_clock::now();  // 记录结束时间
    duration = duration_cast<nanoseconds>(end_time - start_time);  // 计算时间差

    //输出结果
    m = box.size();
    cout << "装入到船集装箱的总重量为:" << sum << "  最多可以装" << m << "个集装箱" << endl;
    cout << "装入到船的集装箱的重量分别为:";
    for(int i=0;i<m;i++){
        cout << box[i].first << " ";
    }
    cout << endl;
    cout << "装入到船的集装箱的价值分别为:";
    for(int i=0;i<m;i++){
        cout << box[i].second << " ";
    }
    cout << endl;
    
    cout << "贪心得到结果所需时间为:" << duration.count() << "ns." << endl;
    return 0;
}

// 7 150
// 35 10 30 40 6 30 50 50 40 35 10 40 25 30
