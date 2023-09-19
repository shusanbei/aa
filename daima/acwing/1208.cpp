#include<bits/stdc++.h>
using namespace std;
int main(){
    string a1,a2;
    int ans=0;
    cin>>a1>>a2;
    for(int i=0;i<(int)a1.length()-1;i++){
        if(a1[i]!=a2[i]){
            ans++;
            if(a1[i]=='*') a1[i]='o';
            else a1[i]='*';
            if(a1[i+1]=='*') a1[i+1]='o';
            else a1[i+1]='*';
        }
    }
    cout<<ans;
    return 0;
}