// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,a[1000],k;
//         cin>>n>>k;
//         for(int i=1;i<=2*n;i++){
//             cin>>a[i];
//         }
//         sort(a,a+2*n+1);
//         int tem=0;
//         for(int i=1;i<=n;i++){
//             if(a[i+n]-a[i]<k){
//                 //cout<<a[i+n]<<"  "<<a[i];
//                 tem=1;
//                 break;
//             }
//         }
//         if(tem) cout<<"NO\n";
//         else cout<<"YES\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[200009],tem0=0,tem=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) tem0++;
            ans+=a[i];
        }
        if(a[n-1]==0) tem0--;
        ans-=a[n-1];
        for(int i=0;i<n-1;i++){
            if(a[i]!=0){
                for(int j=i+1;j<n-1;j++){
                    if(a[j]==0) tem++;
                }
                break;
            }
        }
        cout<<ans<<"  "<<tem<<endl;
        if(tem0==n) cout<<0<<endl;
        else cout<<(ans+tem)<<endl;
    }
    return 0;
}