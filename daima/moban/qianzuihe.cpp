#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100009],l,r,sum[1000009],ans;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    while(m--){
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
    return 0;
}