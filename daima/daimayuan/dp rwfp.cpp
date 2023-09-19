#include<bits/stdc++.h>
using namespace std;
int n;
long long s[1009],e[1009],w[1009],f[1009];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i]>>e[i]>>w[i];
    }
    for(int i=1;i<=1000;i++){
        f[i+1]=max(f[i],f[i+1]);
        for(int j=1;j<=n;j++){
            if(i==s[j]){
                f[e[j]]=max(f[i]+w[j],f[e[j]]);
            }
        }
    }
    cout<<f[1000];
    return 0;
}
/*
  dp重要思想 f[i+1]=f[i]表示当前i时未选 而f[i+1]=max(f[i],f[i+1])是因为
  f[i+1]这个i+1可能为e[j]即已经被赋过值
  f[i]还可能被安排到此时即i==某个e 此时f[e[j]]=max(f[i]+w[j],f[e[j]])
*/