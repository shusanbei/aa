#include<bits/stdc++.h>
using namespace std;
int n,k,a[110],ans=0,tem;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    tem=a[k-1];
    for(int i=0;i<n;i++){
        if(a[i]>=tem&&a[i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}