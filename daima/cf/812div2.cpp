// #include<bits/stdc++.h>
// using namespace std;
// int x,y,xmi,xma,ymi,yma;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n;
//         cin>>n;
//         xmi=xma=ymi=yma=0;
//         for(int i=0;i<n;i++){
//             cin>>x>>y;
//             xmi=min(xmi,x);
//             xma=max(xma,x);
//             ymi=min(ymi,y);
//             yma=max(yma,y);
//         }
//         cout<<(long long)((xma-xmi)*2+(yma-ymi)*2)<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,a[100009];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=false;
        for(int i=0;i<n-2;i++){
            if(a[i]>a[i+1]){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}