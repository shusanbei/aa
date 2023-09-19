#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

int findBF(string a, string b){
    int cnt = 0;
    int i = 0, j = 0;
    while (i < (int)a.length() && j < (int)b.length()){
        cnt++;
        if (a[i] == b[j]){
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j = 0;
        }
    }

    if (j == (int)b.length()){
        cout << "BF算法匹配次数为：" << cnt << endl;
        cout << "BF算法匹配到的位置为：";
        return i - b.length();
    }
    return -1;
}

void getNext(string b,int next[]){
    next[0] = -1;
    int j = 0,k = -1;
    while (j < (int)b.length() - 1){
        if (k == -1 || b[j] == b[k]){
            j++;
            k++;
            if (b[j] !=b [k]) next[j]=k;
            else next[j] = next[k];
        }
        else{
            k = next[k];
        }
    }
}

int findKMP(string a,string b){
    int i = 0,j = 0,next[100],cnt = 0;
    getNext(b,next);
    while (i < (int)a.length() && j < (int)b.length()){
        cnt++;
        if (j == -1 || a[i] == b[j]){
            i++;
            j++;
        }
        else{
            j = next[j];
        }
    }
    if (j == (int)b.length()){
        cout << "KMP算法匹配次数为：" << cnt << endl;
        cout << "KMP算法匹配到的位置为：";
        return i-j;
    }
    return -1;
}

int main(){
    string a, b;
    cout << "请输入俩个字符串：" << endl;
    cin >> a >> b;
    
    cout << endl;

    // 使用高精度时钟
    auto start_time = high_resolution_clock::now(); // 记录开始时间
    int index = 0;
    index = findBF(a, b); // 调用朴素的暴力匹配算法
    

    if(index != -1){
        cout << index << endl ;
        auto end_time = high_resolution_clock::now(); // 记录结束时间
        auto duration = duration_cast<milliseconds>(end_time - start_time); // 计算时间差
        cout << "BF运行时间为：" << duration.count() << "ms." << endl;
    }
    else{
        cout << "BF未查找到！" << endl;
    }

    start_time = high_resolution_clock::now(); // 重新记录开始时间
    index = findKMP(a, b); // 调用KMP算法

    if(index != -1){
        cout << index << endl ;
        auto end_time = high_resolution_clock::now(); // 重新记录结束时间
        auto duration = duration_cast<milliseconds>(end_time - start_time); // 计算时间差
        cout << "KMP运行时间为：" << duration.count() << "ms." << endl;
    }
    else{
        cout << "KMP未查找到！" << endl;
    }
    return 0;
}