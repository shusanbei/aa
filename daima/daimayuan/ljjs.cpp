#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n,a[110][110],b[110][110];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                b[i][j]=(b[i-1][j]+b[i][j-1])%mod;
                b[1][1]=1;
            }
        }
    }
    cout<<b[n][n];
    return 0;
}