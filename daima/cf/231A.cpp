#include<bits/stdc++.h>
using namespace std;
int n,a[1009],b[1009],c[1009],ans=0;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]+b[i]+c[i]>=2) ans++;
    }
    cout<<ans;
    return 0;
}