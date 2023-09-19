// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         for(int i=0;i<n;i++){
//             if(s[i]=='U') s[i]='D';
//             else if(s[i]=='D') s[i]='U';
//         }
//         for(int i=0;i<n;i++){
//             cout<<s[i];
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int c[500009]={0};
    for(int i=0;i<500009;i++){
        c[i]=c[i-1]^i;
    }
    int tt;
    cin>>tt;
    while(tt--){
        int a,b;
        cin>>a>>b;
        if(c[a-1]==b) cout<<a;
        else if((c[a-1]^a)==b) cout<<a+2;
        else cout<<a+1;
        cout<<endl;
    }
    return 0;
}