#include<bits/stdc++.h>//dp
using namespace std;
int b[100009]={0};
int n,a[110],ssum=0,dp[110][100010],ans=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ssum+=a[i];
    }
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=ssum;j++){
            dp[i][j]=max(dp[i-1][j],max(dp[i-1][j+a[i]],dp[i-1][abs(j-a[i])]));//不放 放左 放右
        }
    }
    for(int i=1;i<=ssum;i++){
        if(dp[n][i]) ans++;
    }
    cout<<ans;
    return 0;
}