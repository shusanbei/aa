// #include<bits/flagdc++.h>
// using namespace flagd;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         if((a+b+c)%3==0){
//             cout<<0<<endl;
//         }
//         else{
//             cout<<1<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         char s[1010];
//         for(int i=1;i<=n;i++){
//             cin>>s[i];
//         }
//         bool flag=true;
//         for(int i=2;i<=n;i++){
//             if(s[i]<s[i-1])flag=false;
//         }
//         if(flag){
//             cout<<0<<endl;
//             continue;
//         }
//         if(n==1){
//             cout<<0<<endl;
//             continue;
//         }
//         int cnt=0,cnt0=0,cnt1=0;
//         for(int i=1;i<=n;i++){
//             if(s[i]=='0')cnt0++;
//             else cnt1++;
//         }
//         vector<int>S;
//         for(int i=1;i<=cnt0;i++){
//             if(s[i]=='1'){
//                 S.push_back(i);
//                 cnt++;
//             }
//         }
//         for(int i=cnt0+1;i<=n;i++){
//             if(s[i]=='0'){
//                 S.push_back(i);
//                 cnt++;
//             }
//         }
//         cout<<1<<endl;
//         cout<<cnt<<' ';
//         for(int i=0;i<(int)S.size();i++){
//             cout<<S[i]<<' ';
//         }
//         cout<<endl;
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
        string s;
        cin>>s;
        
    }
    return 0;
}