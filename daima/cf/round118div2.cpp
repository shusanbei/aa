// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a[5][5],tem=0;
//         for(int i=0;i<2;i++){
//             for(int j=0;j<2;j++){
//                 cin>>a[i][j];
//                 if(a[i][j]==1){
//                     tem++;
//                 }
//             }
//         }
//         if(tem==0){
//             cout<<0<<endl;
//         }
//         else{
//             if(tem==4) cout<<2<<endl;
//             else{
//                 cout<<1<<endl;
//             }
//         }
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
        cout<<2<<endl;
        for(int i=1;i<=n;i+=2){
            for(int j=i;j<=n;j*=2){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}