#include <iostream>
#include <algorithm>

using namespace std;

int cnt = 0;
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

    move(n,'A','B','C');

    cout << "一共移动了" << cnt << "次" <<endl;
    return 0;
}