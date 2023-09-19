// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string s;
//         int ans=1e9;
//         cin>>s;
//         if(s.size()==2){
//             cout<<s[1]<<endl;
//         }
//         else{
//             for(int i=0;i<s.size();i++){
//                 int tem=s[i]-'0';
//                 ans=min(tem,ans);
//             }
//             cout<<ans<<endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<x+y+z<<" "<<y+z<<" "<<z<<endl;
    }
    return 0;
}

