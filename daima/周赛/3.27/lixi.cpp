#include<bits/stdc++.h>
using namespace std;
int k,n;
long long ans,tem;
int main(){
    cin>>k>>n;
    ans=k;
    for(int i=0;i<n;i++){
        if(ans<=50) tem=ans/10;
        else tem=5;
        ans+=tem;
        ans+=5;
    }
    cout<<ans;
    return 0;
}