#include<bits/stdc++.h>
using namespace std;
long long ar[1010][1010];
long long n,ans=1;
int main(){
    cin>>n;
    for(int i=1;i<1000;i++){
        ar[i][1]=1;
        ar[i][i]=1;
        for(int j=2;j<=i;j++){
            ar[i][j]=ar[i-1][j]+ar[i-1][j-1];
        }
    }
    for(int i=1;i<1000;i++){
        for(int j=1;j<=i;j++){
            if(ar[i][j]==n){
                cout<<ans<<"\n";
                return 0;
            }
            else ans++;
        }
    }
    cout<<(1+n)*n/2+2<<"\n";
    return 0;
}