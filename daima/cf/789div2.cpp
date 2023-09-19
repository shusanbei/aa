#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--){
        int n,tem=0,mmax=-1,a[110],b[110]={0};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) tem++;
            b[a[i]]++;
            mmax=max(mmax,a[i]);
        }
        if(tem>0){
            cout<<n-tem<<endl;
        }
        else{
            bool flag=true;
            for(int i=1;i<=mmax;i++){
                if(b[i]>1) {
                    flag=false;
                    cout<<n<<endl;
                    break;
                }
            }
            if(flag){
                cout<<n+1<<endl;
            }
        }
    }
    return 0;
}