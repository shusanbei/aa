// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,a[110];
//         cin>>n;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         bool flag=false;
//         for(int i=1;i<n;i++){
//             if(a[i]%a[0]){
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag) cout<<"NO\n";
//         else cout<<"YES\n"; 
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r,a[100009];
        cin>>n>>l>>r;
        bool flag=false;
        for(int i=1;i<=n;i++){
            int tem=r/i*i;
            if(tem<l){ 
                flag=true;
                break;
            }
            a[i]=tem;
            //cout<<tem<<" ";
            //cout<<gcd(tem,i)<<endl;
        }
        if(flag){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
                //cout<<gcd(a[i],i)<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}