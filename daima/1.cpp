#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100009];

void up(int x,int y,int k){
    for(int i=x;i<=y;i++){
        a[i]+=k;
    }
}

int lowbit(int k){
    return k & -k;
}

void add(int x,int k){
    while(x<=n){
        a[x]+=k;
        x+=lowbit(x);
    }
}

long long out(int x){
    long long ans=0;
    while(x!=0){
        ans+=a[x];
        x-=lowbit(x);
    }
    return ans;
}
int main(){
    cin>>n>>m;
    int aa;
    for(int i=1;i<=n;i++){
        cin>>aa;
        add(i,aa);
    }
    while(m--){
        int op,x,y,k;
        cin>>op;
        if(op==1){
            cin>>x>>k;
            add(x,k);
        }
        else{
            cin>>x>>y;
            cout<<out(y)-out(x-1)<<endl;
        }
    }
}