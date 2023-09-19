#include<bits/stdc++.h>
using namespace std;
string s;
char a,b;
int ans=0,n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.length()>10){
            a=s[0];
            b=s[s.length()-1];
            ans=s.length()-2;
            cout<<a<<ans<<b<<endl;
        }
        else cout<<s<<endl;
    }
    return 0;
}