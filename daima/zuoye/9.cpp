#include <iostream>
#include <algorithm>
using namespace std;

// 有n个节点 m邻接矩阵 cnt最大团里的节点个数 best最大团里的节点个数当前最优值
// x[i]=1代表第i个节点被加入已选择点集  bestx最大团里的节点选择情况
int n,m[100][100],cnt=0,best=0,x[100],bestx[100];
void solve(int i){
    int j;
    //退出条件：遍历抵达叶子节点
    if(i>n){
        best=cnt;
        for(j=1;j<=n;j++){
            bestx[j]=x[j];
        }
         return;
    }
    else{
        //ok标志位，ok=1代表遍历左子树(i加入已选择的点集)
        int ok=1;
        for(j=1;j<=n;j++){
            //(x[j]==1)说明j在当前被选择的点集中;m[i][j]==0说明i，j两者不相连，则不能把i加入点集
            if((x[j]==1)&&(m[i][j]==0)){
                ok=0;
                break;
            }
        }
        //第i个点可以被加进去,接下来遍历左子树
        if(ok==1){
            x[i]=1;
            cnt++;
            solve(i+1);
            cnt--;//回溯
            x[i]=0;
        }
        //第i个点不能被加进去,接下来遍历右子树
        else{
            x[i]=0;
            if(cnt+n-i>best){
                solve(i+1);
            }
        }
    }
}
int main(){
    int i,j;
    cout << "输入顶点数n:";
    cin >> n;
    cout << "输入图的邻接矩阵m[i][j]:" << endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin >> m[i][j];
        }
    }
    solve(1);
    cout << "最大团的顶点数为:" << best << endl;
    cout << "一个最大团中的顶点编号:";
    for(i=1;i<=n;i++){
        if(bestx[i]==1){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}