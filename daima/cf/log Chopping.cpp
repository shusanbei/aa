#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m,k,ans=0;
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>k;
            if(k>2) ans++;
        }
        if(ans%2==0){
            cout<<"maomao90"<<endl;
        }
        if(ans%2==1){
            cout<<"errorgorn"<<endl;
        }
    }
    return 0;
}