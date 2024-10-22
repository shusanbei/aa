#include <iostream>
#include <algorithm>

using namespace std;

#define ma 10009
int l[ma][ma];//存储两个城市之间的距离(邻接矩阵)
int n;//城市数量
int mi = ma;//最短路径
int sum[ma];//标记每条路线的路程总长度
int start_city;//标记从第start_city个城市出发
int flag[ma]; //第i个城市已经去过：flag[i]=1;反之则为flag[i]=0;
int cnt = 1; //已经去过的城市数目。
int path[ma][ma];//存储经过城市的路线
int route = 0;//存储第几条路线

int tspDFS(int index)
{
    if(cnt != n){
        for(int i=1;i <= n;i++)
        {
            if(flag[i] == 0)
            {
                flag[i] = 1;
                path[route][cnt] = index;
                cnt++;
                tspDFS(i);
                //回溯
                cnt--;
                flag[i] = 0;
            }
        }
    }
    else{
        //路线中加上最后一个城市和第一个城市（需要返回到最初的城市）
        path[route][cnt] = index;
        path[route][cnt + 1] = start_city;
        //计算每条路线的路程总长度,并输出路线
        printf("路线%d为：\n",route+1);
        sum[route] = 0;
        for(int i=1;i<=n;i++)
        {
            sum[route] += l[ path[route][i] ][ path[route][i+1] ];
            cout << path[route][i] << " --> ";
            //当route+1后，path[route][i]的前面需要保持，后面变化。
            path[route+1][i] = path[route][i];
        }
        if(mi > sum[route])
        {
            mi = sum[route];
        }
        cout << path[route][n+1] << endl;
        cout << "该路线总长度为： " << sum[route] << endl;
        route++;
    }
    return 0;
}

int main(){
    cout << "请输入城市数量：";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            printf("请输入%d号城市到%d号城市之间的距离:",i,j);
            cin >> l[i][j];
            l[j][i] = l[i][j];
        }
    }
    cout << "请输入您出发的城市是第几个城市：";
    cin >> start_city;
    flag[start_city] = 1;
    cout << endl << "可能的路线为：" << endl;

    tspDFS(start_city);
    
    cout << endl << "最短路程长度为: ";
    cout << mi << endl;
    return 0;
}
// 4
// 30
// 6
// 4
// 5
// 10
// 20
// 1