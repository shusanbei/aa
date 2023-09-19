#include<bits/stdc++.h>
using namespace std;
int n,m;
char ar[22][22];
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};

int dfs(int x,int y){
    int re=1;
    ar[x][y]='#';
    for(int i=0;i<4;i++){
        int a=x+dx[i],b=y+dy[i];
        if(a>=0&&a<n&&b>=0&&b<m&&ar[a][b]=='.')
            re += dfs(a,b);
    }
    return re;
}  
int main()
{
    while(cin>>m>>n,n||m){
        for(int i=0;i<n;i++) cin>>ar[i];
        int x,y;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(ar[i][j]=='@'){
                    x=i;
                    y=j;
                }
            }
        cout<<dfs(x,y)<<endl;
    }
    return 0;
}