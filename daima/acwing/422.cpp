#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,m,ar[10010],x,y,ans=0;
    cin>>l>>m;
    for(int i=0;i<=l;i++) ar[i]=1;
    while(m--){
        cin>>x>>y;
        for(int i=x;i<=y;i++) ar[i]=0;
    }
    for(int i=0;i<=l;i++)
     if(ar[i]==1) ans++;
    cout<<ans;
    return 0;
}