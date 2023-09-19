// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         string s;
//         cin>>s;
//         if(s=="YES") cout<<"YES\n";
//         else if(s=="yES") cout<<"YES\n";
//         else if(s=="YeS") cout<<"YES\n";
//         else if(s=="YEs") cout<<"YES\n";
//         else if(s=="yes") cout<<"YES\n";
//         else if(s=="Yes") cout<<"YES\n";
//         else if(s=="yeS") cout<<"YES\n";
//         else if(s=="yEs") cout<<"YES\n";
//         else{
//             cout<<"NO\n";
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
//         long long n,a[30]={0},ans=0;
//         cin>>n;
//         string s;
//         cin>>s;
//         for(int i=0;i<s.size();i++){
//             int tem=s[i]-'A';
//             a[tem]++;
//         }
//         for(int i=0;i<26;i++){
//             if(a[i]){
//                 ans+=2;
//                 a[i]--;
//             }
//         }
//         for(int i=0;i<26;i++){
//             if(a[i]){
//                 ans+=a[i];
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

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
//         for(int i=0;i<n;i++){
//             int b,tem=0;
//             string s;
//             cin>>b>>s;
//             for(int j=0;j<s.size();j++){
//                 if(s[j]=='D') tem++;
//                 else tem--;
//             }
//             tem%=10;
//             a[i]+=tem;
//             if(a[i]<0) a[i]+=10; 
//             if(a[i]>9) a[i]-=10;
//             tem=0;
//         }
//         for(int i=0;i<n;i++) cout<<a[i]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <list> 
#include <map>
#include <queue>
#include <vector>
#include <set>
using namespace std;
set<string> s;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,ans[100009]={0};
        cin>>n;
        string ss[i];
        for(int i=0;i<n;i++){
            cin>>ss[i];
            s.insert(ss[i]);
        }
        for(int i=0;i<n;i++){
            if(s[i]==(s.find+s.find)) ans[i]=1;
        }
        for(int i=0;i<n;i++) {
            cout<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}