#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1009],f[1009],ans=-1;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        f[i] = a[i];
        for(int j=0;j<=i;j++){
            if(a[i]>a[j] && f[j]+a[i]>f[i]){
                f[i] = f[j]+a[i];
            }
        }
        ans=max(ans,f[i]);
    }
    cout<<ans;
    return 0;
}