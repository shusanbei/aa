#include<iostream>
#include<algorithm>
#include<queue>
#include <chrono>

using namespace std::chrono;
using namespace std;

#define ma 1009

int graph[ma][ma];//邻接矩阵
int bestRoad[ma];//最优路径
int bestlong=1e9;//最优路径长度
int n,m;
int u,v,w;//u---v u,v为地点 w为二者之间的距离

//排列树节点
struct Node{
    int nowlong;//走过的长度
    int index;//正在寻找第几个景点
    int road[ma];//路径
    Node(){}
    Node(int _nowlong,int _index){
        nowlong=_nowlong;
        index=_index;//排列树层数
    }
};

//定义优先队列优先级:nowlong越小越优先
bool operator < (const Node&a,const Node&b){
    return a.nowlong>b.nowlong;
}

//优先队列 tspBFS:默认从城市1出发
void tspBFS(){
    //当前所在排列树的层数
    int nowStep;
    Node liveNode;//当前扩展节点
    Node newNode;//生成新节点
    //创建优先队列
    priority_queue<Node> nodeQueue;
    //创建根节点
    newNode=Node(0,2);
    for(int i=1;i<=n;i++){//初始化根节点的解向量
        newNode.road[i]=i;
    }
    //根节点加入队列
    nodeQueue.push(newNode);

    while(!nodeQueue.empty()){
        liveNode=nodeQueue.top();//最队头作为扩展节点
        nodeQueue.pop();
        nowStep=liveNode.index;//当前处理城市序号:开始时nowStep=2 因为第1层默认选城市1，直接跳过起点
        if(nowStep==n){//到达了排列树倒数第二层时
            //判断是不是解，是不是更优解
            //判断当前节点到对应的叶子节点之间是否有路径 判断叶子节点到根节点是否有路径(因为要旅游一圈回到起点)
            if(graph[liveNode.road[n-1]][liveNode.road[n]]!=1e9&&graph[liveNode.road[n]][1]!=1e9){
                //判断是否是更优解
                if(liveNode.nowlong+graph[liveNode.road[n-1]][liveNode.road[n]]+graph[liveNode.road[n]][1]<bestlong){
                    //迭代最优解长度
                    bestlong=liveNode.nowlong+graph[liveNode.road[n-1]][liveNode.road[n]]+graph[liveNode.road[n]][1];
                    //记录最优解的解向量
                    for(int i=1;i<=n;i++){
                        bestRoad[i]=liveNode.road[i];
                    }
                }
                continue;//结束队当前扩展节点的操作，是倒数第二层节点不用将叶子节点在入队列了，没必要
            } 
        }
        
        //判断是否满足扩展界限条件
        //不扩展
        if(liveNode.nowlong>=bestlong){//此方案，从起点到当前扩展节点的距离已经没有最优解优了
            continue;
        }
        //扩展
        //生成扩展节点的所有分支
        for(int j=nowStep;j<=n;j++){
            //如果扩展节点与分支节点之间有路径
            if(graph[liveNode.road[nowStep-1]][liveNode.road[nowStep]]!=1e9){
                int templong=liveNode.nowlong+graph[liveNode.road[nowStep-1]][liveNode.road[j]];
                if(templong<bestlong){//界限条件
                    newNode=Node(templong,nowStep+1);
                    for(int i=1;i<=n;i++){//复制以前的解向量
                        newNode.road[i]=liveNode.road[i];
                    }
                    swap(newNode.road[nowStep],newNode.road[j]);//交换road[nowStep]与road[j]
                    //新节点入队列
                    nodeQueue.push(newNode);
                }
            }
        }
    }
}

//主函数
int main(){
    cout<<"请输入城市的个数(即无向图节点个数)\n";
    cin>>n;
    cout<<"请输入城市之间的边数\n";
    cin>>m;
    cout<<"请依次输入u v w,u:顶点 v:顶点 w:u--v距离\n";
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        graph[u][v]=graph[v][u]=w;
    }
    
    auto start_time = steady_clock::now();  // 记录开始时间

    tspBFS();

    auto end_time = steady_clock::now();  // 记录结束时间
    auto duration = duration_cast<nanoseconds>(end_time - start_time);  // 计算时间差

    //输出最优解
    cout<<"一条最优的路径:";
    for(int i=1;i<=n;i++){
        cout<<bestRoad[i]<<"--->";
    }
    cout<<1<<endl;
    cout<<"最优路径长度:"<<bestlong<<endl;

    cout << "得到结果所需时间为:" << duration.count() << "ns." << endl;
    return 0;
}