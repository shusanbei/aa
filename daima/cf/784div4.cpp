#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
// int a[N],b[N]={0};
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[N],b[N]={0};
        int n,mmax=-1;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
            mmax=max(mmax,a[i]);
        }
        if(n<3){
            cout<<-1<<endl;
        }
        else{
            bool flag=true;
            for(int i=1;i<=mmax;i++){
                if(b[i]>=3){
                    cout<<i<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<-1<<endl;
            }
        }
        
    }
    return 0;
}