#include<bits/stdc++.h>
using namespace std;
long long n,c,ar[200009],b[200009],ans=0;
map<long long,long long>t;
int main(){
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        t[ar[i]]++;
        b[i]=ar[i]-c;
    }
    for(int i=0;i<n;i++) ans+=t[b[i]];//搜索相应的进行统计
    cout<<ans;
    return 0;
}