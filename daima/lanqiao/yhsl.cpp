#include<bits/stdc++.h>
using namespace std;
long long t,n,ar[200009],a=0,b=0;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            if(i%2==1) a=max(a^ar[i],a);
            else b=max(b^ar[i],b);
        }
        if(a>b) cout<<"1";
        if(a<b) cout<<"-1";
        if(a==b) cout<<"0";
    }
    return 0;
}