//A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         int a,b,c,d,sum=0;
//         cin>>a>>b>>c>>d;
//         if(b>a) sum++;
//         if(c>a) sum++;
//         if(d>a) sum++;
//         cout<<sum<<endl;
//     }
//     return 0;
// }

//B
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         int n;
//         map<int,int>a;
//         cin>>n;
//         for(int i=0;i<n;i++){
//             int tem;
//             cin>>tem;
//             a[tem]++;
//         }
//         int ans=0;
//         for(auto x:a) ans+=x.second-1;
//         if(ans%2) cout<<n-ans-1<<endl;
//         else cout<<n-ans<<endl;
//     }
    
//     return 0;
// }

// C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        char a[10][10];
        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++){
                if(a[i][j]=='#'&&a[i-1][j-1]=='#'&&a[i-1][j+1]=='#'&&a[i+1][j-1]=='#'&&a[i+1][j+1]=='#'){
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}