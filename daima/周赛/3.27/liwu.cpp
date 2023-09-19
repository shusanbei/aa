#include<bits/stdc++.h>
using namespace std;
int n,k[100009],ans=-1;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k[i];
        ans=max(ans,k[i]);
    }
    cout<<ans;
    return 0;
}