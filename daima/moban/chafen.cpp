#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000009],b[1000009];
int l,r,c;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i]-a[i-1];  //构建差分数组
    }
    while(m--){
        cin>>l>>r>>c;
        b[l]+=c;  //a[l~r]都加上c就相当于b[l]+c,b[r+1]-c
        b[r+1]-=c;
    }
    for(int i=1;i<=n;i++){
        a[i]=b[i]+a[i-1]; //前缀和
        cout<<a[i]<<" ";
    }
    return 0;
}